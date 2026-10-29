namespace Imangi.Utilities;

[Extension]
[Token(Token = "0x2000237")]
public static class StringBuilderExtensionMethods
{

	[Address(RVA = "0x123FC70", Offset = "0x123FC70", Length = "0xF8")]
	[Extension]
	[Token(Token = "0x6000FCA")]
	public static void AddStringBuilderKeyValue(StringBuilder inStringBuilder, string inKey, string inValue) { }

	[Address(RVA = "0x123FB98", Offset = "0x123FB98", Length = "0xD8")]
	[Extension]
	[Token(Token = "0x6000FC9")]
	public static void AppendIndent(StringBuilder inBuilder, int inIndent, bool inUseTabs = false, int inIndentSize = 2) { }

	[Address(RVA = "0x123FB1C", Offset = "0x123FB1C", Length = "0x7C")]
	[Extension]
	[Token(Token = "0x6000FC8")]
	public static void AppendNewLineAndIndent(StringBuilder inBuilder, int inIndent, bool inUseTabs = false, int inIndentSize = 2) { }

	[Address(RVA = "0x123FB08", Offset = "0x123FB08", Length = "0x14")]
	[Extension]
	[Token(Token = "0x6000FC7")]
	public static void Clear(StringBuilder inStringBuilderInstance) { }

}

