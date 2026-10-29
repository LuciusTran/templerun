namespace Imangi.PluginCore;

[Token(Token = "0x2000257")]
public class ImangiPluginMessageHelper
{
	[Token(Token = "0x4001252")]
	public static readonly string LogChannel; //Field offset: 0x0
	[Token(Token = "0x4001253")]
	public static string ImangiEventTokenSeparator; //Field offset: 0x8

	[Address(RVA = "0x124AA04", Offset = "0x124AA04", Length = "0x8C")]
	[Token(Token = "0x600109A")]
	private static ImangiPluginMessageHelper() { }

	[Address(RVA = "0x124A9FC", Offset = "0x124A9FC", Length = "0x8")]
	[Token(Token = "0x6001099")]
	public ImangiPluginMessageHelper() { }

	[Address(RVA = "0x124A684", Offset = "0x124A684", Length = "0x1D8")]
	[Token(Token = "0x6001097")]
	public static string ArrayToString(String[] inArray) { }

	[Address(RVA = "0x124A28C", Offset = "0x124A28C", Length = "0x258")]
	[Token(Token = "0x6001093")]
	public static string DictionaryToString(Dictionary<String, String> inDictionary) { }

	[Address(RVA = "0x124A600", Offset = "0x124A600", Length = "0x84")]
	[Token(Token = "0x6001095")]
	public static string ListToString(List<String> inList) { }

	[Address(RVA = "0x1236408", Offset = "0x1236408", Length = "0xC0")]
	[Token(Token = "0x6001092")]
	public static String[] SplitEventMessage(string inMessage) { }

	[Address(RVA = "0x124A9A8", Offset = "0x124A9A8", Length = "0x54")]
	[Token(Token = "0x6001098")]
	public static String[] StringToArray(string inString) { }

	[Address(RVA = "0x124A4E4", Offset = "0x124A4E4", Length = "0x11C")]
	[Token(Token = "0x6001094")]
	public static Dictionary<String, String> StringToDictionary(string inString) { }

	[Address(RVA = "0x124A85C", Offset = "0x124A85C", Length = "0x14C")]
	[Token(Token = "0x6001096")]
	public static List<String> StringToList(string inString) { }

}

