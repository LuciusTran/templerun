//Type is in global namespace

[Token(Token = "0x200004A")]
public static class NGUITools
{
	[Token(Token = "0x40001BA")]
	private static AudioListener mListener; //Field offset: 0x0

	[Address(RVA = "0x12042D4", Offset = "0x12042D4", Length = "0x74")]
	[Token(Token = "0x60001C7")]
	private static void Activate(Transform t) { }

	[Address(RVA = "0x14290D0", Offset = "0x14290D0", Length = "0x70")]
	[Token(Token = "0x60001BE")]
	public static T AddChild(GameObject parent) { }

	[Address(RVA = "0x1203964", Offset = "0x1203964", Length = "0x1D4")]
	[Token(Token = "0x60001BC")]
	public static GameObject AddChild(GameObject parent, GameObject prefab) { }

	[Address(RVA = "0x12037B0", Offset = "0x12037B0", Length = "0x1B4")]
	[Token(Token = "0x60001BB")]
	public static GameObject AddChild(GameObject parent) { }

	[Address(RVA = "0x1203B38", Offset = "0x1203B38", Length = "0x134")]
	[Token(Token = "0x60001C0")]
	public static UISprite AddSprite(GameObject go, UIAtlas atlas, string spriteName) { }

	[Address(RVA = "0x1429140", Offset = "0x1429140", Length = "0x15C")]
	[Token(Token = "0x60001BF")]
	public static T AddWidget(GameObject go) { }

	[Address(RVA = "0x12031C0", Offset = "0x12031C0", Length = "0x28C")]
	[Token(Token = "0x60001B7")]
	public static BoxCollider AddWidgetCollider(GameObject go) { }

	[Address(RVA = "0x12040A0", Offset = "0x12040A0", Length = "0x130")]
	[Token(Token = "0x60001C5")]
	public static void Broadcast(string funcName, object param) { }

	[Address(RVA = "0x1203F78", Offset = "0x1203F78", Length = "0x128")]
	[Token(Token = "0x60001C4")]
	public static void Broadcast(string funcName) { }

	[Address(RVA = "0x120344C", Offset = "0x120344C", Length = "0x9C")]
	[Token(Token = "0x60001BD")]
	public static int CalculateNextDepth(GameObject go) { }

	[Address(RVA = "0x1204348", Offset = "0x1204348", Length = "0x70")]
	[Token(Token = "0x60001C8")]
	private static void Deactivate(Transform t) { }

	[Address(RVA = "0x1203DE0", Offset = "0x1203DE0", Length = "0xCC")]
	[Token(Token = "0x60001C2")]
	public static void Destroy(object obj) { }

	[Address(RVA = "0x1203EAC", Offset = "0x1203EAC", Length = "0xCC")]
	[Token(Token = "0x60001C3")]
	public static void DestroyImmediate(object obj) { }

	[Address(RVA = "0x1202DB0", Offset = "0x1202DB0", Length = "0x88")]
	[Token(Token = "0x60001B2")]
	public static string EncodeColor(Color c) { }

	[Address(RVA = "0x142929C", Offset = "0x142929C", Length = "0xC4")]
	[Token(Token = "0x60001B5")]
	public static T[] FindActive() { }

	[Address(RVA = "0x1203104", Offset = "0x1203104", Length = "0xBC")]
	[Token(Token = "0x60001B6")]
	public static Camera FindCameraForLayer(int layer) { }

	[Address(RVA = "0x1429360", Offset = "0x1429360", Length = "0x158")]
	[Token(Token = "0x60001C1")]
	public static T FindInParents(GameObject go) { }

	[Address(RVA = "0x1202B9C", Offset = "0x1202B9C", Length = "0x13C")]
	[Token(Token = "0x60001B0")]
	public static string GetHierarchy(GameObject obj) { }

	[Address(RVA = "0x14294B8", Offset = "0x14294B8", Length = "0xE8")]
	[Token(Token = "0x60001BA")]
	public static string GetName() { }

	[Address(RVA = "0x12041D0", Offset = "0x12041D0", Length = "0x104")]
	[Token(Token = "0x60001C6")]
	public static bool IsChild(Transform parent, Transform child) { }

	[Address(RVA = "0x1202A70", Offset = "0x1202A70", Length = "0x114")]
	[Token(Token = "0x60001AE")]
	public static UnityWebRequest OpenURL(string url) { }

	[Address(RVA = "0x1202CD8", Offset = "0x1202CD8", Length = "0xD8")]
	[Token(Token = "0x60001B1")]
	public static Color ParseColor(string text, int offset) { }

	[Address(RVA = "0x1202E38", Offset = "0x1202E38", Length = "0x1D8")]
	[Token(Token = "0x60001B3")]
	public static int ParseSymbol(string text, int index, List<Color> colors) { }

	[Address(RVA = "0x12026C0", Offset = "0x12026C0", Length = "0xC")]
	[Token(Token = "0x60001AB")]
	public static AudioSource PlaySound(AudioClip clip) { }

	[Address(RVA = "0x12026CC", Offset = "0x12026CC", Length = "0x39C")]
	[Token(Token = "0x60001AD")]
	public static AudioSource PlaySound(AudioClip clip, float volume, float pitch) { }

	[Address(RVA = "0x1202A68", Offset = "0x1202A68", Length = "0x8")]
	[Token(Token = "0x60001AC")]
	public static AudioSource PlaySound(AudioClip clip, float volume) { }

	[Address(RVA = "0x1202B84", Offset = "0x1202B84", Length = "0x18")]
	[Token(Token = "0x60001AF")]
	public static int RandomRange(int min, int max) { }

	[Address(RVA = "0x12034E8", Offset = "0x12034E8", Length = "0x1D0")]
	[Obsolete("Use UIAtlas.replacement instead")]
	[Token(Token = "0x60001B8")]
	public static void ReplaceAtlas(UIAtlas before, UIAtlas after) { }

	[Address(RVA = "0x12036B8", Offset = "0x12036B8", Length = "0xF8")]
	[Obsolete("Use UIFont.replacement instead")]
	[Token(Token = "0x60001B9")]
	public static void ReplaceFont(UIFont before, UIFont after) { }

	[Address(RVA = "0x11FDCD8", Offset = "0x11FDCD8", Length = "0x2C")]
	[Token(Token = "0x60001C9")]
	public static void SetActive(GameObject go, bool state) { }

	[Address(RVA = "0x1203010", Offset = "0x1203010", Length = "0xF4")]
	[Token(Token = "0x60001B4")]
	public static string StripSymbols(string text) { }

}

