namespace Imangi.Utilities;

[Extension]
[Token(Token = "0x2000229")]
public static class ListExtensionMethods
{

	[Address(RVA = "0x141EF00", Offset = "0x141EF00", Length = "0x438")]
	[Extension]
	[Token(Token = "0x6000F62")]
	public static void AddRange(List<TList> inList, IEnumerable<TRange> inRange) { }

	[Address(RVA = "0x141F338", Offset = "0x141F338", Length = "0x1C8")]
	[Extension]
	[Token(Token = "0x6000F63")]
	public static bool ContainsAnObjectOfExactlyType(IList inList) { }

}

