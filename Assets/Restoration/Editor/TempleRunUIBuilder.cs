using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine;

/// <summary>Derive a working UI prefab from the APK scene without redesigning its layout.</summary>
public static class TempleRunUIBuilder
{
    private const string Folder = "Assets/Restoration/UI/Data";
    private static readonly Dictionary<UIAtlas, TempleRunUIAtlasData> Atlases = new Dictionary<UIAtlas, TempleRunUIAtlasData>();
    private static readonly Dictionary<UIFont, TempleRunUIFontData> Fonts = new Dictionary<UIFont, TempleRunUIFontData>();
    private static readonly Dictionary<string, string> English = new Dictionary<string, string>();
    [Serializable] private class WidgetEvidence { public string path, kind, text, font, atlas, texture; public int depth; }
    [Serializable] private class ButtonEvidence { public string path, component, target, method; public int trigger; }
    [Serializable] private class Manifest
    {
        public string source = "Assets/Scenes/GamePlay.unity", root = "GUI 2D";
        public string classification = "Original serialized hierarchy/assets/callbacks; authored Unity 6 mesh/input compatibility adapter.";
        public int transforms, colliders, widgets, fonts, atlases;
        public List<WidgetEvidence> recoveredWidgets = new List<WidgetEvidence>();
        public List<ButtonEvidence> callbacks = new List<ButtonEvidence>();
        public List<string> externalReferences = new List<string>();
    }
    private static SerializedProperty P(UnityEngine.Object obj, string name) => new SerializedObject(obj).FindProperty(name);
    private static T Ref<T>(UnityEngine.Object obj, string name) where T : UnityEngine.Object => P(obj, name)?.objectReferenceValue as T;
    private static string Text(UnityEngine.Object obj, string name) => P(obj, name)?.stringValue ?? "";
    private static int Number(UnityEngine.Object obj, string name) => P(obj, name)?.intValue ?? 0;
    private static string PathOf(Transform transform, Transform root)
    {
        string path = transform.name;
        while (transform.parent && transform != root) { transform = transform.parent; path = transform.name + "/" + path; }
        return path;
    }
    private static string Key(UnityEngine.Object obj)
    {
        if (AssetDatabase.TryGetGUIDAndLocalFileIdentifier(obj, out string guid, out long id)) return guid + "_" + id;
        string local = "Assets/Scenes/GamePlay.unity::" + PathOf(((Component)obj).transform, ((Component)obj).transform.root) + "::" + obj.GetType().Name;
        using (var hash = System.Security.Cryptography.SHA256.Create()) return BitConverter.ToString(hash.ComputeHash(System.Text.Encoding.UTF8.GetBytes(local))).Replace("-", "").ToLowerInvariant();
    }
    private static T Output<T>(string path) where T : ScriptableObject
    {
        var result = AssetDatabase.LoadAssetAtPath<T>(path);
        if (!result) { result = ScriptableObject.CreateInstance<T>(); AssetDatabase.CreateAsset(result, path); }
        return result;
    }
    private static Rect UV(Rect pixels, Texture2D texture) => new Rect(pixels.x / texture.width,
        1f - pixels.yMax / texture.height, pixels.width / texture.width, pixels.height / texture.height);
    private static TempleRunUIAtlasData Atlas(UIAtlas source)
    {
        if (!source) return null;
        var replacement = Ref<UIAtlas>(source, "mReplacement"); if (replacement) return Atlas(replacement);
        if (Atlases.TryGetValue(source, out var cached)) return cached;
        var result = Output<TempleRunUIAtlasData>(Folder + "/Atlas_" + Key(source) + ".asset");
        result.source = AssetDatabase.GetAssetPath(source);
        result.texture = Ref<Material>(source, "material")?.mainTexture as Texture2D;
        if (!result.texture) throw new InvalidOperationException("Missing atlas texture: " + result.source);
        var sprites = P(source, "sprites"); result.sprites = new TempleRunUIAtlasData.Sprite[sprites.arraySize];
        for (int i = 0; i < sprites.arraySize; i++)
        {
            var value = sprites.GetArrayElementAtIndex(i);
            Rect outer = value.FindPropertyRelative("outer").rectValue, inner = value.FindPropertyRelative("inner").rectValue;
            if (Number(source, "mCoordinates") != 0)
            {
                outer = new Rect(outer.x * result.texture.width, (1f - outer.yMax) * result.texture.height, outer.width * result.texture.width, outer.height * result.texture.height);
                inner = new Rect(inner.x * result.texture.width, (1f - inner.yMax) * result.texture.height, inner.width * result.texture.width, inner.height * result.texture.height);
            }
            result.sprites[i] = new TempleRunUIAtlasData.Sprite {
                name = value.FindPropertyRelative("name").stringValue, uv = UV(outer, result.texture), inner = UV(inner, result.texture),
                border = new Vector4(inner.xMin - outer.xMin, outer.yMax - inner.yMax, outer.xMax - inner.xMax, inner.yMin - outer.yMin),
                paddingLeft = value.FindPropertyRelative("paddingLeft").floatValue, paddingRight = value.FindPropertyRelative("paddingRight").floatValue,
                paddingTop = value.FindPropertyRelative("paddingTop").floatValue, paddingBottom = value.FindPropertyRelative("paddingBottom").floatValue
            };
        }
        EditorUtility.SetDirty(result); Atlases.Add(source, result); return result;
    }
    private static TempleRunUIFontData Font(UIFont source)
    {
        if (!source) return null;
        var replacement = Ref<UIFont>(source, "mReplacement"); if (replacement) return Font(replacement);
        if (Fonts.TryGetValue(source, out var cached)) return cached;
        var result = Output<TempleRunUIFontData>(Folder + "/Font_" + Key(source) + ".asset");
        result.source = AssetDatabase.GetAssetPath(source); result.uv = P(source, "mUVRect").rectValue;
        var atlas = Atlas(Ref<UIAtlas>(source, "mAtlas"));
        result.texture = atlas ? atlas.texture : Ref<Material>(source, "mMat")?.mainTexture as Texture2D;
        var bm = P(source, "mFont");
        result.size = bm.FindPropertyRelative("mSize").intValue;
        result.width = bm.FindPropertyRelative("mWidth").intValue; result.height = bm.FindPropertyRelative("mHeight").intValue;
        result.spacingX = Number(source, "mSpacingX"); result.spacingY = Number(source, "mSpacingY");
        if (atlas && atlas.Find(bm.FindPropertyRelative("mSpriteName").stringValue, out var sprite)) result.uv = sprite.uv;
        var glyphs = bm.FindPropertyRelative("mSaved"); result.glyphs = new TempleRunUIFontData.Glyph[glyphs.arraySize];
        for (int i = 0; i < glyphs.arraySize; i++)
        {
            var g = glyphs.GetArrayElementAtIndex(i); var kerning = g.FindPropertyRelative("kerning");
            var glyph = new TempleRunUIFontData.Glyph {
                index = g.FindPropertyRelative("index").intValue, x = g.FindPropertyRelative("x").intValue, y = g.FindPropertyRelative("y").intValue,
                width = g.FindPropertyRelative("width").intValue, height = g.FindPropertyRelative("height").intValue,
                offsetX = g.FindPropertyRelative("offsetX").intValue, offsetY = g.FindPropertyRelative("offsetY").intValue,
                advance = g.FindPropertyRelative("advance").intValue, kerning = new int[kerning?.arraySize ?? 0]
            };
            for (int k = 0; k < glyph.kerning.Length; k++) glyph.kerning[k] = kerning.GetArrayElementAtIndex(k).intValue;
            result.glyphs[i] = glyph;
        }
        if (!result.texture || result.size <= 0) throw new InvalidOperationException("Invalid original bitmap font: " + result.source);
        EditorUtility.SetDirty(result); Fonts.Add(source, result); return result;
    }
    private static void LoadEnglish()
    {
        English.Clear();
        // Read raw YAML scalar values through a generated JSON export; no runtime localization service is required.
        var table = JsonUtility.FromJson<TempleRunUIStrings>(File.ReadAllText("Evidence/ui-english-strings.json"));
        foreach (var entry in table.entries) English[entry.key] = entry.value;
    }
    private static string Localize(UILabel label)
    {
        string result = Text(label, "mText");
        foreach (var behaviour in label.GetComponents<MonoBehaviour>())
        {
            if (!behaviour || !behaviour.GetType().Name.StartsWith("TR1Localize", StringComparison.Ordinal)) continue;
            string key = Text(behaviour, "EntryText");
            if (!English.TryGetValue(key, out string localized)) localized = Text(behaviour, "OrignalString");
            if (localized.Length == 0) continue;
            if ((P(behaviour, "ConvertToUpperCase")?.boolValue ?? false)) localized = localized.ToUpperInvariant();
            result = localized;
            if ((P(behaviour, "AutoSizeLabel")?.boolValue ?? false) && Number(behaviour, "OrignalSize") > 0)
            {
                // The native English localization path first resets both axes to OrignalSize.
                // Only longer translations apply the additional language-specific shrink step.
                float size = Number(behaviour, "OrignalSize"); Vector3 scale = label.transform.localScale;
                scale.x = scale.y = size;
                int extra = localized.Length - Text(behaviour, "OrignalString").Length;
                if (extra > 0)
                {
                    float shrink = (P(behaviour, "TextMultiplier")?.floatValue ?? 0f) * extra;
                    scale.x -= shrink; if (!(P(behaviour, "AutoSizeOnlyXLabel")?.boolValue ?? false)) scale.y -= shrink;
                }
                label.transform.localScale = scale;
            }
        }
        return result;
    }
    private static void BakeWidgets(GameObject clone, Manifest manifest)
    {
            foreach (var source in clone.GetComponentsInChildren<UIWidget>(true))
            {
                var widget = source.gameObject.AddComponent<TempleRunUIWidget>();
                widget.compatibilityShader = Shader.Find("Temple Run/Recovered UI");
                widget.sourcePath = PathOf(source.transform, clone.transform); widget.sourceWidget = source;
                widget.pivot = Number(source, "mPivot"); widget.depth = Number(source, "mDepth"); widget.sourceColor = P(source, "mColor").colorValue;
                widget.sourceSprite = source as UISprite; widget.sourceLabel = source as UILabel;
                if (widget.sourceSprite) widget.atlas = Atlas(Ref<UIAtlas>(source, "mAtlas"));
                if (widget.sourceLabel)
                {
                    widget.font = Font(Ref<UIFont>(source, "mFont")); widget.initialText = Localize(widget.sourceLabel);
                    var labelData = new SerializedObject(source); labelData.FindProperty("mText").stringValue = widget.initialText; labelData.ApplyModifiedPropertiesWithoutUndo();
                    widget.effect = Number(source, "mEffectStyle"); widget.effectColor = P(source, "mEffectColor").colorValue;
                    widget.wrapWidth = Number(source, "mMaxLineWidth");
                }
                if (source is UITexture)
                {
                    widget.texture = Ref<Material>(source, "mMat")?.mainTexture as Texture2D;
                    widget.textureUV = P(source, "mRect")?.rectValue ?? new Rect(0, 0, 1, 1);
                }
                widget.sourceFilled = source as UIFilledSprite;
                if (widget.sourceFilled) { widget.fillDirection = Number(source, "mFillDirection"); widget.invertFill = P(source, "mInvert").boolValue; }
                widget.sliced = source is UISlicedSprite;
                if (widget.sliced) widget.fillCenter = P(source, "mFillCenter")?.boolValue ?? true;
                manifest.recoveredWidgets.Add(new WidgetEvidence { path = widget.sourcePath, kind = source.GetType().Name,
                    depth = widget.depth, text = widget.initialText, font = widget.font ? widget.font.source : "", atlas = widget.atlas ? widget.atlas.source : "", texture = AssetDatabase.GetAssetPath(widget.texture) });
            }
    }
    [MenuItem("Temple Run/Recover Original UI")]
    public static void Prepare()
    {
        Directory.CreateDirectory(Folder); AssetDatabase.Refresh(); Atlases.Clear(); Fonts.Clear(); LoadEnglish();
        var previous = UnityEngine.SceneManagement.SceneManager.GetActiveScene();
        var scene = EditorSceneManager.OpenScene("Assets/Scenes/GamePlay.unity", OpenSceneMode.Additive);
        GameObject clone = null;
        try
        {
            var root = scene.GetRootGameObjects().Single(g => g.name == "GUI 2D");
            clone = UnityEngine.Object.Instantiate(root); clone.name = "Temple Run Original UI";
            clone.SetActive(false); clone.transform.position = Vector3.zero;
            var manifest = new Manifest { transforms = clone.GetComponentsInChildren<Transform>(true).Length, colliders = clone.GetComponentsInChildren<Collider>(true).Length };
            foreach (var panel in clone.GetComponentsInChildren<UIPanel>(true))
            {
                var clip = panel.gameObject.AddComponent<TempleRunUIClip>();
                Vector4 range = P(panel, "mClipRange").vector4Value;
                clip.rectangle = new Rect(range.x - range.z * .5f, range.y - range.w * .5f, range.z, range.w);
                clip.clips = Number(panel, "mClipping") != 0;
                var scroll = panel.GetComponent<UIDraggablePanel>();
                if (scroll) { clip.scrolls = true; clip.content = panel.transform; clip.originalContentPosition = panel.transform.localPosition; }
            }
            BakeWidgets(clone, manifest);
            foreach (var source in clone.GetComponentsInChildren<MonoBehaviour>(true))
            {
                if (!source) continue;
                if (source is UIButtonMessage || source is UIButtonMessage2)
                {
                    var target = Ref<GameObject>(source, "target");
                    manifest.callbacks.Add(new ButtonEvidence { path = PathOf(source.transform, clone.transform), component = source.GetType().Name,
                        target = target ? PathOf(target.transform, clone.transform) : "self", method = Text(source, "functionName"), trigger = Number(source, "trigger") });
                }
                // Original gameplay/platform objects outside the UI are deliberately replaced by the local host binding.
                var so = new SerializedObject(source); var iterator = so.GetIterator();
                while (iterator.Next(true))
                {
                    if (iterator.propertyType != SerializedPropertyType.ObjectReference) continue;
                    var value = iterator.objectReferenceValue;
                    var go = value as GameObject ?? (value as Component)?.gameObject;
                    if (!go || EditorUtility.IsPersistent(value) || go.transform.IsChildOf(clone.transform)) continue;
                    manifest.externalReferences.Add(PathOf(source.transform, clone.transform) + ":" + iterator.propertyPath + " -> " + go.name);
                    iterator.objectReferenceValue = null;
                }
                so.ApplyModifiedPropertiesWithoutUndo();
            }
            var objectives = clone.GetComponentInChildren<ObjectivesGUI>(true);
            if (objectives && objectives.ItemPrefab)
            {
                var row = UnityEngine.Object.Instantiate(objectives.ItemPrefab); row.SetActive(false); row.name = "Original Objective Row";
                BakeWidgets(row, new Manifest());
                objectives.ItemPrefab = PrefabUtility.SaveAsPrefabAsset(row, "Assets/Resources/TempleRunOriginalObjective.prefab");
                UnityEngine.Object.DestroyImmediate(row);
            }
            clone.AddComponent<TempleRunUIPresenter>();
            manifest.widgets = manifest.recoveredWidgets.Count; manifest.fonts = Fonts.Count; manifest.atlases = Atlases.Count;
            PrefabUtility.SaveAsPrefabAsset(clone, "Assets/Resources/TempleRunOriginalUI.prefab");
            File.WriteAllText("Evidence/ui-recovery.json", JsonUtility.ToJson(manifest, true));
            AssetDatabase.SaveAssets(); Debug.Log("TEMPLE_UI_RECOVERED: " + manifest.widgets + " widgets, " + manifest.callbacks.Count + " callbacks, " + manifest.fonts + " bitmap fonts");
        }
        finally { if (clone) UnityEngine.Object.DestroyImmediate(clone); EditorSceneManager.CloseScene(scene, true); UnityEngine.SceneManagement.SceneManager.SetActiveScene(previous); }
    }
}
