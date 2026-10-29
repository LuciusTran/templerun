namespace Imangi.Utilities;

[Extension]
[Token(Token = "0x2000203")]
public static class MiniJsonTRExtensions
{

	[Address(RVA = "0x1233060", Offset = "0x1233060", Length = "0x84")]
	[Extension]
	[Token(Token = "0x6000EAB")]
	public static Dictionary<String, Object> dictionaryFromJson(string json) { }

	[Address(RVA = "0x1234588", Offset = "0x1234588", Length = "0x84")]
	[Extension]
	[Token(Token = "0x6000EAA")]
	public static List<Object> listFromJson(string json) { }

	[Address(RVA = "0x1234520", Offset = "0x1234520", Length = "0x8")]
	[Extension]
	[Token(Token = "0x6000EA8")]
	public static string toJson(List<Object> obj, bool format = false) { }

	[Address(RVA = "0x1232F84", Offset = "0x1232F84", Length = "0x8")]
	[Extension]
	[Token(Token = "0x6000EA9")]
	public static string toJson(Dictionary<String, Object> obj, bool format = false) { }

}

