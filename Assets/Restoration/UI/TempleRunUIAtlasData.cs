using System;
using UnityEngine;

/// <summary>Original atlas sprite rectangles, borders and trimming data.</summary>
public sealed class TempleRunUIAtlasData : ScriptableObject
{
    [Serializable] public struct Sprite
    {
        public string name;
        public Rect uv, inner;
        public float paddingLeft, paddingRight, paddingTop, paddingBottom;
        public Vector4 border;
    }
    public string source;
    public Texture2D texture;
    public Sprite[] sprites;
    public bool Find(string name, out Sprite sprite)
    {
        foreach (var entry in sprites) if (entry.name == name) { sprite = entry; return true; }
        sprite = default; return false;
    }
}
