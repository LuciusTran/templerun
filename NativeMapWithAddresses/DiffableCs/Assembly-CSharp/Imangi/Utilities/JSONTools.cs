namespace Imangi.Utilities;

[Token(Token = "0x20001FE")]
public class JSONTools
{

	[Address(RVA = "0x1232EAC", Offset = "0x1232EAC", Length = "0x8")]
	[Token(Token = "0x6000E89")]
	public JSONTools() { }

	[Address(RVA = "0x140AED8", Offset = "0x140AED8", Length = "0x1EC")]
	[Token(Token = "0x6000E87")]
	public static bool ObjectListToFromDictList(List<Object> inJSONList, ref List<T>& data) { }

	[Address(RVA = "0x12274B8", Offset = "0x12274B8", Length = "0xF4")]
	[Token(Token = "0x6000E6F")]
	public static bool ReadBool(object inObj, bool inDefaultValue = false) { }

	[Address(RVA = "0x122A7B0", Offset = "0x122A7B0", Length = "0x154")]
	[Token(Token = "0x6000E7F")]
	public static Dictionary<String, Object> ReadDictionary(IDictionary inBaseDictionary, string inKey) { }

	[Address(RVA = "0x122A08C", Offset = "0x122A08C", Length = "0x228")]
	[Token(Token = "0x6000E84")]
	public static Dictionary<Int32, Int32> ReadDictionaryIntInt(IDictionary inBaseDictionary, string inKey) { }

	[Address(RVA = "0x140B330", Offset = "0x140B330", Length = "0x2B8")]
	[Token(Token = "0x6000E86")]
	public static bool ReadDictionaryIntObject(IDictionary inBaseDictionary, string inKey, ref Dictionary<Int32, T>& refDict) { }

	[Address(RVA = "0x1229DB0", Offset = "0x1229DB0", Length = "0x210")]
	[Token(Token = "0x6000E85")]
	public static Dictionary<Int32, String> ReadDictionaryIntString(IDictionary inBaseDictionary, string inKey) { }

	[Address(RVA = "0x122A598", Offset = "0x122A598", Length = "0x218")]
	[Token(Token = "0x6000E81")]
	public static Dictionary<String, Boolean> ReadDictionaryStringBool(IDictionary inBaseDictionary, string inKey) { }

	[Address(RVA = "0x122A2B4", Offset = "0x122A2B4", Length = "0x218")]
	[Token(Token = "0x6000E80")]
	public static Dictionary<String, String> ReadDictionaryStringString(IDictionary inBaseDictionary, string inKey) { }

	[Address(RVA = "0x122C790", Offset = "0x122C790", Length = "0x408")]
	[Token(Token = "0x6000E82")]
	public static Dictionary<String, List`1<String>> ReadDictionaryStringStringList(IDictionary inBaseDictionary, string inKey) { }

	[Address(RVA = "0x1227B58", Offset = "0x1227B58", Length = "0x230")]
	[Token(Token = "0x6000E74")]
	public static double ReadDouble(object inObj) { }

	[Address(RVA = "0x140B950", Offset = "0x140B950", Length = "0x174")]
	[Token(Token = "0x6000E7C")]
	public static TEnum ReadEnum(object inObj, TEnum inDefaultValue) { }

	[Address(RVA = "0x140BCF8", Offset = "0x140BCF8", Length = "0x360")]
	[Token(Token = "0x6000E7E")]
	public static List<TEnum> ReadEnumList(object inObj) { }

	[Address(RVA = "0x1228790", Offset = "0x1228790", Length = "0x264")]
	[Token(Token = "0x6000E79")]
	public static List<Single> ReadFloatList(object inObj) { }

	[Address(RVA = "0x1228E84", Offset = "0x1228E84", Length = "0xEC")]
	[Token(Token = "0x6000E7D")]
	public static Enum ReadGenericEnum(Type inEnumType, object inObj) { }

	[Address(RVA = "0x1227650", Offset = "0x1227650", Length = "0x160")]
	[Token(Token = "0x6000E70")]
	public static int ReadInt(object inObj) { }

	[Address(RVA = "0x122AC70", Offset = "0x122AC70", Length = "0x190")]
	[Token(Token = "0x6000E71")]
	public static long ReadInt64(object inObj) { }

	[Address(RVA = "0x1232A08", Offset = "0x1232A08", Length = "0x264")]
	[Token(Token = "0x6000E78")]
	public static List<Int32> ReadIntList(object inObj) { }

	[Address(RVA = "0x1226954", Offset = "0x1226954", Length = "0x158")]
	[Token(Token = "0x6000E77")]
	public static List<Object> ReadJSONList(IDictionary inBaseDictionary, string inKey) { }

	[Address(RVA = "0x122721C", Offset = "0x122721C", Length = "0xD4")]
	[Token(Token = "0x6000E76")]
	public static string ReadString(object inObj, string inDefaultValue = null) { }

	[Address(RVA = "0x1226FAC", Offset = "0x1226FAC", Length = "0x270")]
	[Token(Token = "0x6000E7A")]
	public static List<String> ReadStringList(object inObj) { }

	[Address(RVA = "0x1226B34", Offset = "0x1226B34", Length = "0x3F0")]
	[Token(Token = "0x6000E7B")]
	public static List<List`1<String>> ReadStringListList(object inObj) { }

	[Address(RVA = "0x12278D4", Offset = "0x12278D4", Length = "0x160")]
	[Token(Token = "0x6000E72")]
	public static uint ReadUInt(object inObj) { }

	[Address(RVA = "0x122A988", Offset = "0x122A988", Length = "0x264")]
	[Token(Token = "0x6000E73")]
	public static ulong ReadUInt64(object inObj) { }

	[Address(RVA = "0x12325D4", Offset = "0x12325D4", Length = "0x434")]
	[Token(Token = "0x6000E75")]
	public static Vector3 ReadVector3(object inObj) { }

	[Address(RVA = "0x140C480", Offset = "0x140C480", Length = "0x1A4")]
	[Token(Token = "0x6000E88")]
	public static List<Object> ToDictListToObjectList(List<T> inList) { }

	[Address(RVA = "0x1232C6C", Offset = "0x1232C6C", Length = "0x240")]
	[Token(Token = "0x6000E83")]
	public static string WriteDictionaryIntInt(Dictionary<Int32, Int32> inDictionary) { }

}

