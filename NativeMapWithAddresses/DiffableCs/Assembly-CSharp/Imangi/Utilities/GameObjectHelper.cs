namespace Imangi.Utilities;

[Token(Token = "0x20001FC")]
public class GameObjectHelper
{

	[Address(RVA = "0x12319C8", Offset = "0x12319C8", Length = "0x8")]
	[Token(Token = "0x6000E61")]
	public GameObjectHelper() { }

	[Address(RVA = "0x12318E4", Offset = "0x12318E4", Length = "0x74")]
	[Token(Token = "0x6000E5F")]
	private static void ActivateRecursively(Transform t) { }

	[Address(RVA = "0x1231508", Offset = "0x1231508", Length = "0x13C")]
	[Token(Token = "0x6000E5A")]
	public static void AddChild(GameObject inParent, GameObject inChild) { }

	[Address(RVA = "0x1231644", Offset = "0x1231644", Length = "0x1E0")]
	[Token(Token = "0x6000E5B")]
	public static GameObject AddChildGO(GameObject inParent, GameObject inChild) { }

	[Address(RVA = "0x12318B4", Offset = "0x12318B4", Length = "0x4")]
	[Token(Token = "0x6000E5D")]
	public static void CleanUpAnimation(GameObject inObject) { }

	[Address(RVA = "0x1231198", Offset = "0x1231198", Length = "0x2D8")]
	[Token(Token = "0x6000E56")]
	public static GameObject CreateObjectFromPrefab(string inPrefabName) { }

	[Address(RVA = "0x1404454", Offset = "0x1404454", Length = "0x1B0")]
	[Token(Token = "0x6000E57")]
	public static T CreateObjectFromPrefab(string inPrefabName) { }

	[Address(RVA = "0x1231958", Offset = "0x1231958", Length = "0x70")]
	[Token(Token = "0x6000E60")]
	private static void DeactivateRecursively(Transform t) { }

	[Address(RVA = "0x1231488", Offset = "0x1231488", Length = "0x80")]
	[Token(Token = "0x6000E59")]
	public static bool GetActive(GameObject go) { }

	[Address(RVA = "0x1231040", Offset = "0x1231040", Length = "0x158")]
	[Token(Token = "0x6000E55")]
	public static GameObject GetChildByName(string inName, GameObject inGameObject) { }

	[Address(RVA = "0x1231470", Offset = "0x1231470", Length = "0x18")]
	[Token(Token = "0x6000E58")]
	public static void SetActive(GameObject gameObj, bool on) { }

	[Address(RVA = "0x12318B8", Offset = "0x12318B8", Length = "0x2C")]
	[Token(Token = "0x6000E5E")]
	public static void SetActiveRecursively(GameObject go, bool state) { }

	[Address(RVA = "0x1231824", Offset = "0x1231824", Length = "0x90")]
	[Token(Token = "0x6000E5C")]
	public static void SetLayer(GameObject go, int layer) { }

}

