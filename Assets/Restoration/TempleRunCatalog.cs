using UnityEngine;

/// <summary>Explicit references to extracted character models used by the playable scene.</summary>
public sealed class TempleRunCatalog : ScriptableObject
{
    public GameObject[] characters;
    public string[] characterNames;
    public Texture2D[] characterTextures;
    public int[] originalCharacterIndices;
}
