using System;
using System.Collections.Generic;
using UnityEngine;

/// <summary>Bitmap glyph metrics and texture references recovered from an original UIFont.</summary>
public sealed class TempleRunUIFontData : ScriptableObject
{
    [Serializable] public struct Glyph
    {
        public int index, x, y, width, height, offsetX, offsetY, advance;
        public int[] kerning;
    }
    public string source;
    public Texture2D texture;
    public Rect uv;
    public int size, width, height, spacingX, spacingY;
    public Glyph[] glyphs;
    private Dictionary<int, Glyph> index;
    public bool TryGlyph(int character, out Glyph glyph)
    {
        if (index == null)
        {
            index = new Dictionary<int, Glyph>();
            foreach (var entry in glyphs) index[entry.index] = entry;
        }
        return index.TryGetValue(character, out glyph);
    }
}
