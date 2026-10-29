namespace Imangi.Utilities;

[Extension]
[Token(Token = "0x20001DE")]
public static class KeyValuePairExtensions
{

	[Address(RVA = "0x140F0E0", Offset = "0x140F0E0", Length = "0x148")]
	[Extension]
	[Token(Token = "0x6000D76")]
	public static void Deconstruct(KeyValuePair<T1, T2> inKvp, out T1 outKey, out T2 outValue) { }

}

