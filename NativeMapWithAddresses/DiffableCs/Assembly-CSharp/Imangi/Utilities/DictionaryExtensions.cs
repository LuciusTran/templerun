namespace Imangi.Utilities;

[Extension]
[Token(Token = "0x20001EC")]
public static class DictionaryExtensions
{

	[Address(RVA = "0x13D7C68", Offset = "0x13D7C68", Length = "0x474")]
	[Extension]
	[Token(Token = "0x6000E12")]
	public static Dictionary<KOut, VOut> ConvertAll(Dictionary<K, V> inDict, Converter<K, KOut> inKeyConv, Converter<V, VOut> inValConv) { }

	[Address(RVA = "0x13D80DC", Offset = "0x13D80DC", Length = "0x41C")]
	[Extension]
	[Token(Token = "0x6000E13")]
	public static Dictionary<KOut, V> ConvertAllKeys(Dictionary<K, V> inDict, Converter<K, KOut> inKeyConv) { }

	[Address(RVA = "0x13D84F8", Offset = "0x13D84F8", Length = "0x414")]
	[Extension]
	[Token(Token = "0x6000E14")]
	public static Dictionary<K, VOut> ConvertAllValues(Dictionary<K, V> inDict, Converter<V, VOut> inValConv) { }

	[Address(RVA = "0x13D890C", Offset = "0x13D890C", Length = "0x444")]
	[Extension]
	[Token(Token = "0x6000E11")]
	public static Dictionary<K, V> DeepCopyCloneable(Dictionary<K, V> inDict) { }

}

