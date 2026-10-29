namespace Imangi.Utilities;

[Extension]
[Token(Token = "0x2000200")]
public static class IParsableJSONListElementMethods
{

	[Address(RVA = "0x1232F8C", Offset = "0x1232F8C", Length = "0xD4")]
	[Extension]
	[Token(Token = "0x6000E8D")]
	public static bool FromJSONString(IParsableJSONListElement inElement, string inJSONString) { }

	[Address(RVA = "0x1407314", Offset = "0x1407314", Length = "0x3A0")]
	[Token(Token = "0x6000E91")]
	public static List<T> ListFromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x14076B4", Offset = "0x14076B4", Length = "0x54")]
	[Token(Token = "0x6000E8F")]
	public static List<T> ListFromJSONString(string inJSONString) { }

	[Address(RVA = "0x1407708", Offset = "0x1407708", Length = "0x2C8")]
	[Token(Token = "0x6000E90")]
	public static Dictionary<String, Object> ListToDict(List<T> inList) { }

	[Address(RVA = "0x14079D0", Offset = "0x14079D0", Length = "0x78")]
	[Token(Token = "0x6000E8E")]
	public static string ListToJSONString(List<T> inList) { }

	[Address(RVA = "0x1232EB4", Offset = "0x1232EB4", Length = "0xD0")]
	[Extension]
	[Token(Token = "0x6000E8C")]
	public static string ToJSONString(IParsableJSONListElement inElement) { }

}

