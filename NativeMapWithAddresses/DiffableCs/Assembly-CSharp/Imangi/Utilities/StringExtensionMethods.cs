namespace Imangi.Utilities;

[Extension]
[Token(Token = "0x2000238")]
public static class StringExtensionMethods
{

	[Address(RVA = "0x123FD70", Offset = "0x123FD70", Length = "0x144")]
	[Extension]
	[Token(Token = "0x6000FD2")]
	public static bool Contains(string inStr, string inSubstring, StringComparison inComparer = 4) { }

	[Address(RVA = "0x123FED4", Offset = "0x123FED4", Length = "0x8")]
	[Extension]
	[Token(Token = "0x6000FD0")]
	public static bool ContainsCaseInsensitive(string inString, string inSubstring) { }

	[Address(RVA = "0x123FECC", Offset = "0x123FECC", Length = "0x8")]
	[Extension]
	[Token(Token = "0x6000FCF")]
	public static bool ContainsCaseSensitive(string inString, string inSubstring) { }

	[Address(RVA = "0x123FD68", Offset = "0x123FD68", Length = "0x8")]
	[Extension]
	[Token(Token = "0x6000FCB")]
	public static bool ContainsCurrentCulture(string inString, string inSubstring) { }

	[Address(RVA = "0x123FEB4", Offset = "0x123FEB4", Length = "0x8")]
	[Extension]
	[Token(Token = "0x6000FCC")]
	public static bool ContainsCurrentCultureIgnoreCase(string inString, string inSubstring) { }

	[Address(RVA = "0x123FEBC", Offset = "0x123FEBC", Length = "0x8")]
	[Extension]
	[Token(Token = "0x6000FCD")]
	public static bool ContainsInvariantCulture(string inString, string inSubstring) { }

	[Address(RVA = "0x123FEC4", Offset = "0x123FEC4", Length = "0x8")]
	[Extension]
	[Token(Token = "0x6000FCE")]
	public static bool ContainsInvariantCultureIgnoreCase(string inString, string inSubstring) { }

	[Address(RVA = "0x123FEDC", Offset = "0x123FEDC", Length = "0xC")]
	[Extension]
	[Token(Token = "0x6000FD1")]
	public static bool EqualsCaseInsensitive(string inString, string inOtherString) { }

	[Address(RVA = "0x123FEE8", Offset = "0x123FEE8", Length = "0x190")]
	[Extension]
	[Token(Token = "0x6000FD3")]
	public static String[] Split(string inString, int inDesiredStringLength) { }

}

