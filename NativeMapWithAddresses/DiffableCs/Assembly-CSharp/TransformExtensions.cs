//Type is in global namespace

[Extension]
[Token(Token = "0x2000010")]
public static class TransformExtensions
{

	[Address(RVA = "0x11EC2B8", Offset = "0x11EC2B8", Length = "0xAC")]
	[Extension]
	[Token(Token = "0x6000035")]
	public static void AttachTo(Transform child, Transform parent) { }

	[Address(RVA = "0x11EC81C", Offset = "0x11EC81C", Length = "0x18")]
	[Extension]
	[Token(Token = "0x6000036")]
	public static void Detach(Transform child) { }

	[Address(RVA = "0x11ECB40", Offset = "0x11ECB40", Length = "0x148")]
	[Extension]
	[Token(Token = "0x6000039")]
	public static string GetHierarchyPath(Transform inObject, string delimiter = "/", int maxDepth = 100) { }

	[Address(RVA = "0x11EC834", Offset = "0x11EC834", Length = "0x2E8")]
	[Extension]
	[Token(Token = "0x6000037")]
	public static void SetLayer(Transform inTransform, int inLayer) { }

	[Address(RVA = "0x11ECB1C", Offset = "0x11ECB1C", Length = "0x24")]
	[Extension]
	[Token(Token = "0x6000038")]
	public static void SetLayer(Transform inTransform, string inLayer) { }

}

