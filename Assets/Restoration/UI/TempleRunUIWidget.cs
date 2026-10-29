using System.Collections.Generic;
using UnityEngine;

/// <summary>Render original NGUI widget data without depending on unrecovered NGUI draw calls.</summary>
[RequireComponent(typeof(MeshFilter), typeof(MeshRenderer))]
public sealed class TempleRunUIWidget : MonoBehaviour
{
    public string sourcePath;
    public Shader compatibilityShader;
    public UIWidget sourceWidget;
    public UISprite sourceSprite;
    public UILabel sourceLabel;
    public TempleRunUIAtlasData atlas;
    public TempleRunUIFontData font;
    public Texture2D texture;
    public Rect textureUV = new Rect(0, 0, 1, 1);
    public string initialText;
    public int pivot, depth, effect;
    public Color sourceColor = Color.white, effectColor = Color.black;
    public bool sliced, fillCenter = true;
    public float wrapWidth;
    private Mesh mesh;
    private MeshRenderer output;
    private Material material;
    private MaterialPropertyBlock properties;
    private string lastText, lastSprite;
    private Texture2D lastTexture;
    private float lastFill = -1f;
    public UIFilledSprite sourceFilled;
    public int fillDirection;
    public bool invertFill;
    private Color lastColor;
    private Vector3 lastScale;
    private readonly List<Vector3> vertices = new List<Vector3>();
    private readonly List<Vector2> uvs = new List<Vector2>();
    private readonly List<Color> colors = new List<Color>();
    private readonly List<int> indices = new List<int>();
    private readonly List<TempleRunUIClip> clips = new List<TempleRunUIClip>();
    public string Text { get => sourceLabel ? sourceLabel.text : initialText; set { if (sourceLabel) sourceLabel.text = value; else initialText = value; } }
    public Renderer Output => output;
    public float TextWidth
    {
        get
        {
            if (!font || font.size <= 0) return 0f;
            int width = 0; foreach (string line in (Text ?? "").Split('\n')) width = Mathf.Max(width, Measure(line));
            return width / (float)font.size;
        }
    }

    private void Awake()
    {
        mesh = new Mesh { name = "Recovered widget: " + sourcePath }; mesh.MarkDynamic();
        GetComponent<MeshFilter>().sharedMesh = mesh; output = GetComponent<MeshRenderer>();
        var shader = compatibilityShader;
        if (!shader) throw new System.InvalidOperationException("Missing recovered UI compatibility shader.");
        material = new Material(shader); output.sharedMaterial = material; output.sortingOrder = depth + (font ? 1000 : sourceWidget is UITexture ? 500 : 0) + (GetComponentInParent<AlertView>(true) ? 10000 : 0);
        properties = new MaterialPropertyBlock();
        for (Transform parent = transform; parent; parent = parent.parent)
        {
            var panel = parent.GetComponent<TempleRunUIClip>();
            if (panel && panel.clips) clips.Add(panel);
        }
        if (clips.Count > 4) throw new System.InvalidOperationException("Recovered widget exceeds the shader's four clip panels: " + sourcePath);
        Refresh(true);
    }
    private void LateUpdate() => Refresh(false);
    public bool VisibleAt(Vector3 world)
    {
        foreach (var panel in clips)
        {
            Vector3 local = panel.WorldToClip.MultiplyPoint3x4(world);
            if (!panel.rectangle.Contains(new Vector2(local.x, local.y))) return false;
        }
        return true;
    }
    private void Refresh(bool force)
    {
        if (!mesh) return;
        output.enabled = !sourceWidget || sourceWidget.enabled;
        Color color = sourceWidget ? sourceWidget.color : sourceColor;
        string text = Text ?? "", sprite = sourceSprite ? sourceSprite.spriteName : "";
        float fill = sourceFilled ? sourceFilled.fillAmount : 1f;
        if (force || fill != lastFill || texture != lastTexture || text != lastText || sprite != lastSprite || color != lastColor || transform.localScale != lastScale)
        {
            vertices.Clear(); uvs.Clear(); colors.Clear(); indices.Clear();
            Texture selected = texture;
            if (font) { selected = font.texture; BuildText(text, color); }
            else if (atlas && atlas.Find(sprite, out var entry)) { selected = atlas.texture; BuildSprite(entry, color); }
            else if (texture) Quad(PivotRect(1f, 1f), textureUV, color);
            material.mainTexture = selected; mesh.Clear();
            mesh.SetVertices(vertices); mesh.SetUVs(0, uvs); mesh.SetColors(colors); mesh.SetTriangles(indices, 0); mesh.RecalculateBounds();
            lastFill = fill; lastTexture = texture; lastText = text; lastSprite = sprite; lastColor = color; lastScale = transform.localScale;
        }
        properties.Clear(); properties.SetFloat("_ClipCount", clips.Count);
        for (int i = 0; i < clips.Count; i++)
        {
            var r = clips[i].rectangle;
            properties.SetVector("_ClipRect" + i, new Vector4(r.xMin, r.yMin, r.xMax, r.yMax));
            properties.SetMatrix("_WorldToClip" + i, clips[i].WorldToClip);
        }
        output.SetPropertyBlock(properties);
    }
    private Rect PivotRect(float width, float height)
    {
        float x = (pivot % 3) * .5f, y = 1f - (pivot / 3) * .5f;
        return new Rect(-x * width, -y * height, width, height);
    }
    private void Quad(Rect rectangle, Rect uv, Color color)
    {
        int index = vertices.Count;
        vertices.Add(new Vector3(rectangle.xMin, rectangle.yMin)); vertices.Add(new Vector3(rectangle.xMin, rectangle.yMax));
        vertices.Add(new Vector3(rectangle.xMax, rectangle.yMax)); vertices.Add(new Vector3(rectangle.xMax, rectangle.yMin));
        uvs.Add(new Vector2(uv.xMin, uv.yMin)); uvs.Add(new Vector2(uv.xMin, uv.yMax));
        uvs.Add(new Vector2(uv.xMax, uv.yMax)); uvs.Add(new Vector2(uv.xMax, uv.yMin));
        for (int i = 0; i < 4; i++) colors.Add(color);
        indices.Add(index); indices.Add(index + 1); indices.Add(index + 2); indices.Add(index); indices.Add(index + 2); indices.Add(index + 3);
    }
    private void BuildSprite(TempleRunUIAtlasData.Sprite entry, Color color)
    {
        Rect full = PivotRect(1f, 1f);
        if (!sliced)
        {
            float width = 1f + entry.paddingLeft + entry.paddingRight, height = 1f + entry.paddingTop + entry.paddingBottom;
            Rect rectangle = new Rect(full.x + entry.paddingLeft / width, full.y + entry.paddingBottom / height, 1f / width, 1f / height), uv = entry.uv;
            if (sourceFilled)
            {
                float amount = Mathf.Clamp01(sourceFilled.fillAmount);
                if (fillDirection == 0) { if (invertFill) { rectangle.xMin = rectangle.xMax - rectangle.width * amount; uv.xMin = uv.xMax - uv.width * amount; } else { rectangle.width *= amount; uv.width *= amount; } }
                else if (fillDirection == 1) { if (invertFill) { rectangle.yMin = rectangle.yMax - rectangle.height * amount; uv.yMin = uv.yMax - uv.height * amount; } else { rectangle.height *= amount; uv.height *= amount; } }
            }
            Quad(rectangle, uv, color);
            return;
        }
        float sx = Mathf.Max(.001f, Mathf.Abs(transform.localScale.x)), sy = Mathf.Max(.001f, Mathf.Abs(transform.localScale.y));
        float left = Mathf.Min(.5f, entry.border.x / sx), bottom = Mathf.Min(.5f, entry.border.y / sy);
        float right = Mathf.Min(.5f, entry.border.z / sx), top = Mathf.Min(.5f, entry.border.w / sy);
        float[] x = { full.xMin, full.xMin + left, full.xMax - right, full.xMax };
        float[] y = { full.yMin, full.yMin + bottom, full.yMax - top, full.yMax };
        float[] u = { entry.uv.xMin, entry.inner.xMin, entry.inner.xMax, entry.uv.xMax };
        float[] v = { entry.uv.yMin, entry.inner.yMin, entry.inner.yMax, entry.uv.yMax };
        for (int row = 0; row < 3; row++) for (int column = 0; column < 3; column++)
            if (fillCenter || row != 1 || column != 1)
                Quad(Rect.MinMaxRect(x[column], y[row], x[column + 1], y[row + 1]), Rect.MinMaxRect(u[column], v[row], u[column + 1], v[row + 1]), color);
    }
    private void BuildText(string text, Color color)
    {
        // Glyph rectangles/advance/kerning and line height come from UIFont/BMFont.
        // Rendering is an explicit compatibility adapter, not recovered NGUI code.
        text = System.Text.RegularExpressions.Regex.Replace(text, @"\[[0-9a-fA-F]{6,8}\]|\[-\]", "");
        var lines = new List<string>();
        int pixelWidth = wrapWidth > 0 ? Mathf.RoundToInt(wrapWidth / Mathf.Max(.001f, Mathf.Abs(transform.localScale.x)) * font.size) : int.MaxValue;
        foreach (string paragraph in text.Split('\n'))
        {
            string line = "";
            foreach (string word in paragraph.Split(' '))
            {
                string next = line.Length == 0 ? word : line + " " + word;
                if (line.Length > 0 && Measure(next) > pixelWidth) { lines.Add(line); line = word; } else line = next;
            }
            lines.Add(line);
        }
        float width = 0f;
        foreach (string line in lines) width = Mathf.Max(width, Measure(line) / font.size);
        Rect bounds = PivotRect(width, lines.Count * (font.size + font.spacingY) / (float)font.size);
        for (int row = 0; row < lines.Count; row++)
        {
            float lineWidth = Measure(lines[row]) / (float)font.size;
            float cursor = bounds.x + (width - lineWidth) * ((pivot % 3) * .5f);
            int previous = 0;
            foreach (char character in lines[row])
            {
                if (!font.TryGlyph(character, out var glyph)) continue;
                if (glyph.kerning != null) for (int i = 0; i + 1 < glyph.kerning.Length; i += 2)
                    if (glyph.kerning[i] == previous) cursor += glyph.kerning[i + 1] / (float)font.size;
                float x = cursor + glyph.offsetX / (float)font.size;
                float top = bounds.yMax - row * (font.size + font.spacingY) / (float)font.size - glyph.offsetY / (float)font.size;
                Rect rectangle = new Rect(x, top - glyph.height / (float)font.size, glyph.width / (float)font.size, glyph.height / (float)font.size);
                Rect uv = new Rect(font.uv.x + glyph.x / (float)font.width * font.uv.width,
                    font.uv.yMax - (glyph.y + glyph.height) / (float)font.height * font.uv.height,
                    glyph.width / (float)font.width * font.uv.width, glyph.height / (float)font.height * font.uv.height);
                if (glyph.width > 0 && glyph.height > 0)
                {
                    if (effect != 0)
                    {
                        Rect shadow = rectangle; shadow.x += 1f / font.size; shadow.y -= 1f / font.size; Quad(shadow, uv, effectColor);
                        if (effect == 2)
                        {
                            shadow = rectangle; shadow.x -= 1f / font.size; shadow.y -= 1f / font.size; Quad(shadow, uv, effectColor);
                            shadow = rectangle; shadow.x += 1f / font.size; shadow.y += 1f / font.size; Quad(shadow, uv, effectColor);
                            shadow = rectangle; shadow.x -= 1f / font.size; shadow.y += 1f / font.size; Quad(shadow, uv, effectColor);
                        }
                    }
                    Quad(rectangle, uv, color);
                }
                cursor += (glyph.advance + font.spacingX) / (float)font.size; previous = character;
            }
        }
    }
    private int Measure(string text)
    {
        int width = 0, previous = 0;
        foreach (char character in text) if (font.TryGlyph(character, out var glyph))
        {
            if (glyph.kerning != null) for (int i = 0; i + 1 < glyph.kerning.Length; i += 2) if (glyph.kerning[i] == previous) width += glyph.kerning[i + 1];
            width += glyph.advance + font.spacingX; previous = character;
        }
        return width;
    }
    private void OnDestroy() { if (mesh) Destroy(mesh); if (material) Destroy(material); }
}
