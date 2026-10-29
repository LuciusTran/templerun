namespace Imangi.Utilities;

[Token(Token = "0x20001EA")]
public class DictionaryHelper
{
	[Token(Token = "0x20001EB")]
	private sealed class DateTimeToSecondsSinceEpochFunction : MulticastDelegate
	{

		[Address(RVA = "0x122D1D0", Offset = "0x122D1D0", Length = "0x8C")]
		[Token(Token = "0x6000E0D")]
		public DateTimeToSecondsSinceEpochFunction(object object, IntPtr method) { }

		[Address(RVA = "0x122DBF4", Offset = "0x122DBF4", Length = "0x84")]
		[Token(Token = "0x6000E0F")]
		public override IAsyncResult BeginInvoke(DateTime inDateTime, AsyncCallback callback, object object) { }

		[Address(RVA = "0x122DC78", Offset = "0x122DC78", Length = "0x28")]
		[Token(Token = "0x6000E10")]
		public override double EndInvoke(IAsyncResult result) { }

		[Address(RVA = "0x122DBE0", Offset = "0x122DBE0", Length = "0x14")]
		[Token(Token = "0x6000E0E")]
		public override double Invoke(DateTime inDateTime) { }

	}

	[Token(Token = "0x400105F")]
	public const int DefaultInt = 0; //Field offset: 0x0
	[Token(Token = "0x4001060")]
	public const float DefaultFloat = 0; //Field offset: 0x0
	[Token(Token = "0x4001061")]
	public const double DefaultDouble = 0; //Field offset: 0x0
	[Token(Token = "0x4001062")]
	public static readonly DateTime EpochDateTime; //Field offset: 0x0

	[Address(RVA = "0x122DB64", Offset = "0x122DB64", Length = "0x7C")]
	[Token(Token = "0x6000E0C")]
	private static DictionaryHelper() { }

	[Address(RVA = "0x122DB5C", Offset = "0x122DB5C", Length = "0x8")]
	[Token(Token = "0x6000E0B")]
	public DictionaryHelper() { }

	[Address(RVA = "0x122D564", Offset = "0x122D564", Length = "0xE0")]
	[Token(Token = "0x6000E02")]
	public static void AddBool(ref Dictionary<String, Object>& refDict, string inKeyName, bool inValue, bool inDefaultValue = false, bool inAddIfDefault = false) { }

	[Address(RVA = "0x13DA29C", Offset = "0x13DA29C", Length = "0xAC")]
	[Token(Token = "0x6000DE6")]
	public static void AddCustomList(string inKeyName, List<T> inList, ref Dictionary<String, Object>& refDict) { }

	[Address(RVA = "0x122B74C", Offset = "0x122B74C", Length = "0xDC")]
	[Token(Token = "0x6000DE0")]
	public static bool AddDateTime(string inVariableName, DateTime inDate, ref Dictionary<String, Object>& inJSONDict, bool inIsLocal = false) { }

	[Address(RVA = "0x122B828", Offset = "0x122B828", Length = "0x1C8")]
	[Token(Token = "0x6000DE1")]
	public static bool AddDateTimeWithKind(string inVariableName, DateTime inDate, ref Dictionary<String, Object>& inJSONDict, DateTimeKind inDateKind = 0) { }

	[Address(RVA = "0x12292C4", Offset = "0x12292C4", Length = "0xA4")]
	[Token(Token = "0x6000DC6")]
	public static void AddDictionary(ref Dictionary<String, Object>& refDict, string inKeyName, Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x13DA3F8", Offset = "0x13DA3F8", Length = "0x4A8")]
	[Token(Token = "0x6000DCA")]
	public static void AddDictionaryIntObject(ref Dictionary<String, Object>& refDict, string inKeyName, Dictionary<Int32, T> inDict) { }

	[Address(RVA = "0x1229828", Offset = "0x1229828", Length = "0x264")]
	[Token(Token = "0x6000DC9")]
	public static void AddDictionaryIntString(ref Dictionary<String, Object>& refDict, string inKeyName, Dictionary<Int32, String> inDict) { }

	[Address(RVA = "0x12295AC", Offset = "0x12295AC", Length = "0x27C")]
	[Token(Token = "0x6000DC8")]
	public static void AddDictionaryStringBool(ref Dictionary<String, Object>& refDict, string inKeyName, Dictionary<String, Boolean> inDict) { }

	[Address(RVA = "0x1229368", Offset = "0x1229368", Length = "0x244")]
	[Token(Token = "0x6000DC7")]
	public static void AddDictionaryStringString(ref Dictionary<String, Object>& refDict, string inKeyName, Dictionary<String, String> inDict) { }

	[Address(RVA = "0x1216F14", Offset = "0x1216F14", Length = "0x1B4")]
	[Token(Token = "0x6000DE9")]
	public static void AddDictionaryStringStringList(ref Dictionary<String, Object>& refDict, string inKeyName, List<Dictionary`2<String, String>> inDictionaryStringStringList) { }

	[Address(RVA = "0x122D9B4", Offset = "0x122D9B4", Length = "0xDC")]
	[Token(Token = "0x6000E08")]
	public static void AddDouble(ref Dictionary<String, Object>& refDict, string inKeyName, double inValue, double inDefaultValue = 0, bool inAddIfDefault = false) { }

	[Address(RVA = "0x13DA8A0", Offset = "0x13DA8A0", Length = "0x178")]
	[Token(Token = "0x6000E09")]
	public static void AddEnum(ref Dictionary<String, Object>& refDict, string inKeyName, TEnum inValue, TEnum inDefaultValue, bool inAddIfDefault = false) { }

	[Address(RVA = "0x13DAC38", Offset = "0x13DAC38", Length = "0x758")]
	[Token(Token = "0x6000DF9")]
	public static bool AddEnumKeyDictionary(string inKeyName, Dictionary<TEnum, TValue> inValueDict, ref Dictionary<String, Object>& refDict) { }

	[Address(RVA = "0x13DB390", Offset = "0x13DB390", Length = "0x4D4")]
	[Token(Token = "0x6000DF5")]
	public static bool AddEnumKeyEnumDictionary(string inKeyName, Dictionary<TEnumKey, TEnumValue> inValueDict, ref Dictionary<String, Object>& refDict) { }

	[Address(RVA = "0x13DBFFC", Offset = "0x13DBFFC", Length = "0x6A0")]
	[Token(Token = "0x6000DF3")]
	public static bool AddEnumKeyIntDictionary(string inKeyName, Dictionary<TEnum, Int32> inValueDict, ref Dictionary<String, Object>& refDict) { }

	[Address(RVA = "0x13DC69C", Offset = "0x13DC69C", Length = "0x6B0")]
	[Token(Token = "0x6000DFA")]
	public static bool AddEnumKeyIntListDictionary(string inKeyName, Dictionary<TEnum, List`1<Int32>> inValueDict, ref Dictionary<String, Object>& refDict) { }

	[Address(RVA = "0x13DCD4C", Offset = "0x13DCD4C", Length = "0x47C")]
	[Token(Token = "0x6000DF7")]
	public static bool AddEnumKeyStringDictionary(string inKeyName, Dictionary<TEnumKey, String> inValueDict, ref Dictionary<String, Object>& refDict) { }

	[Address(RVA = "0x13DD868", Offset = "0x13DD868", Length = "0x1B4")]
	[Token(Token = "0x6000DFD")]
	public static bool AddEnumList(string inKeyName, List<TEnum> inEnumList, ref Dictionary<String, Object>& refDict) { }

	[Address(RVA = "0x122D8D8", Offset = "0x122D8D8", Length = "0xDC")]
	[Token(Token = "0x6000E07")]
	public static void AddFloat(ref Dictionary<String, Object>& refDict, string inKeyName, float inValue, float inDefaultValue = 0, bool inAddIfDefault = false) { }

	[Address(RVA = "0x122DA90", Offset = "0x122DA90", Length = "0xCC")]
	[Token(Token = "0x6000E0A")]
	public static void AddGenericEnum(ref Dictionary<String, Object>& refDict, string inKeyName, object inValue) { }

	[Address(RVA = "0x1214F24", Offset = "0x1214F24", Length = "0xDC")]
	[Token(Token = "0x6000E03")]
	public static void AddInt(ref Dictionary<String, Object>& refDict, string inKeyName, int inValue, int inDefaultValue = 0, bool inAddIfDefault = false) { }

	[Address(RVA = "0x122D644", Offset = "0x122D644", Length = "0xDC")]
	[Token(Token = "0x6000E04")]
	public static void AddInt64(ref Dictionary<String, Object>& refDict, string inKeyName, long inValue, long inDefaultValue = 0, bool inAddIfDefault = false) { }

	[Address(RVA = "0x122C2DC", Offset = "0x122C2DC", Length = "0x1D0")]
	[Token(Token = "0x6000DE7")]
	public static void AddIntList(ref Dictionary<String, Object>& refDict, string inKeyName, List<Int32> inIntList) { }

	[Address(RVA = "0x13DDBD0", Offset = "0x13DDBD0", Length = "0x284")]
	[Token(Token = "0x6000DF1")]
	public static void AddObject(string inKeyName, T inObject, ref Dictionary<String, Object>& refDict) { }

	[Address(RVA = "0x1228374", Offset = "0x1228374", Length = "0x298")]
	[Token(Token = "0x6000DBA")]
	public static void AddQuaternion(Dictionary<String, Object> inDict, string inQuatName, Quaternion inValue) { }

	[Address(RVA = "0x1215000", Offset = "0x1215000", Length = "0xD0")]
	[Token(Token = "0x6000E01")]
	public static void AddString(ref Dictionary<String, Object>& refDict, string inKeyName, string inValue, string inDefaultValue = null, bool inAddIfDefault = false) { }

	[Address(RVA = "0x13DE158", Offset = "0x13DE158", Length = "0x5B4")]
	[Token(Token = "0x6000DFF")]
	public static void AddStringKeyDictionary(string inKeyName, Dictionary<String, T> inValueDict, ref Dictionary<String, Object>& refDict) { }

	[Address(RVA = "0x122C4AC", Offset = "0x122C4AC", Length = "0x218")]
	[Token(Token = "0x6000DE8")]
	public static void AddStringList(ref Dictionary<String, Object>& refDict, string inKeyName, List<String> inStringList, bool inAddIfDefault = false) { }

	[Address(RVA = "0x122D720", Offset = "0x122D720", Length = "0xDC")]
	[Token(Token = "0x6000E05")]
	public static void AddUInt(ref Dictionary<String, Object>& refDict, string inKeyName, uint inValue, uint inDefaultValue = 0, bool inAddIfDefault = false) { }

	[Address(RVA = "0x122D7FC", Offset = "0x122D7FC", Length = "0xDC")]
	[Token(Token = "0x6000E06")]
	public static void AddULong(ref Dictionary<String, Object>& refDict, string inKeyName, ulong inValue, ulong inDefaultValue = 0, bool inAddIfDefault = false) { }

	[Address(RVA = "0x1227F5C", Offset = "0x1227F5C", Length = "0x1DC")]
	[Token(Token = "0x6000DB8")]
	public static void AddVector2(ref Dictionary<String, Object>& refDict, string inVector2Name, Vector2 inValue) { }

	[Address(RVA = "0x1228138", Offset = "0x1228138", Length = "0x23C")]
	[Token(Token = "0x6000DB9")]
	public static void AddVector3(Dictionary<String, Object> inDict, string inVector3Name, Vector3 inValue) { }

	[Address(RVA = "0x122B408", Offset = "0x122B408", Length = "0xE0")]
	[Token(Token = "0x6000DDB")]
	public static double DateTimeToMillisecondsSinceEpoch(DateTime inTimeToConvert) { }

	[Address(RVA = "0x122B314", Offset = "0x122B314", Length = "0xF4")]
	[Token(Token = "0x6000DD9")]
	public static double DateTimeToSecondsSinceEpoch(DateTime inDateTime) { }

	[Address(RVA = "0x1217780", Offset = "0x1217780", Length = "0xE4")]
	[Token(Token = "0x6000DDA")]
	public static double DateTimeToSecondsSinceEpochLocal(DateTime inDateTime) { }

	[Address(RVA = "0x122BD94", Offset = "0x122BD94", Length = "0x548")]
	[Token(Token = "0x6000DE5")]
	public static bool DictionaryEquals(Dictionary<String, Object> inA, Dictionary<String, Object> inB) { }

	[Address(RVA = "0x122B6AC", Offset = "0x122B6AC", Length = "0xA0")]
	[Token(Token = "0x6000DDF")]
	public static DateTime MillisecondsSinceEpochToDateTimeLocal(long inMillisecondsSinceEpoch) { }

	[Address(RVA = "0x122B61C", Offset = "0x122B61C", Length = "0x90")]
	[Token(Token = "0x6000DDE")]
	public static DateTime MillisecondsSinceEpochToDateTimeUtc(long inMillisecondsSinceEpoch) { }

	[Address(RVA = "0x1227430", Offset = "0x1227430", Length = "0x88")]
	[Token(Token = "0x6000DAE")]
	public static bool ReadBool(Dictionary<String, Object> inDict, string inBoolName, bool inDefaultValue = false) { }

	[Address(RVA = "0x12275AC", Offset = "0x12275AC", Length = "0xA4")]
	[Token(Token = "0x6000DAF")]
	public static bool ReadBool(Dictionary<String, Object> inDict, string inBoolName, out bool outSuccess, bool inDefaultValue = false) { }

	[Address(RVA = "0x1229A8C", Offset = "0x1229A8C", Length = "0x258")]
	[Token(Token = "0x6000DCB")]
	public static bool ReadBoolList(Dictionary<String, Object> inDict, string inVariableName, ref List<Boolean>& refValue) { }

	[Address(RVA = "0x122AEA0", Offset = "0x122AEA0", Length = "0x238")]
	[Token(Token = "0x6000DD5")]
	public static Color ReadColor(Dictionary<String, Object> inDict, string inVariableName, out bool outSuccess) { }

	[Address(RVA = "0x122B214", Offset = "0x122B214", Length = "0x100")]
	[Token(Token = "0x6000DD7")]
	public static Color ReadColorFromHexString(Dictionary<String, Object> inDict, string inVariableName, out bool outSuccess, Color inDefaultColor) { }

	[Address(RVA = "0x13DE70C", Offset = "0x13DE70C", Length = "0xE8")]
	[Token(Token = "0x6000DEF")]
	public static bool ReadCustomList(Dictionary<String, Object> inDict, string inKeyName, ref List<T>& refList) { }

	[Address(RVA = "0x13DE8E0", Offset = "0x13DE8E0", Length = "0x1E4")]
	[Token(Token = "0x6000DF0")]
	public static bool ReadCustomListList(Dictionary<String, Object> inDict, string inKeyName, ref List<List`1<T>>& refList) { }

	[Address(RVA = "0x122B9F0", Offset = "0x122B9F0", Length = "0xD0")]
	[Token(Token = "0x6000DE2")]
	public static bool ReadDateTime(Dictionary<String, Object> inDict, string inVariableName, ref DateTime refValue, bool inIsLocal = false) { }

	[Address(RVA = "0x122BC64", Offset = "0x122BC64", Length = "0x130")]
	[Token(Token = "0x6000DE4")]
	public static bool ReadDateTimeBinary(Dictionary<String, Object> inDict, string inVariableName, ref DateTime refValue) { }

	[Address(RVA = "0x122CD54", Offset = "0x122CD54", Length = "0x1D0")]
	[Token(Token = "0x6000DEC")]
	public static bool ReadDateTimeList(Dictionary<String, Object> inDict, string inKeyName, ref List<DateTime>& refList, bool inIsLocal = false) { }

	[Address(RVA = "0x122BAC0", Offset = "0x122BAC0", Length = "0x1A4")]
	[Token(Token = "0x6000DE3")]
	public static bool ReadDateTimeWithKind(Dictionary<String, Object> inDict, string inVariableName, ref DateTime refValue) { }

	[Address(RVA = "0x122D25C", Offset = "0x122D25C", Length = "0x308")]
	[Token(Token = "0x6000DEE")]
	public static bool ReadDateTimeWithKindList(Dictionary<String, Object> inDict, string inKeyName, List<DateTime> refList) { }

	[Address(RVA = "0x12160DC", Offset = "0x12160DC", Length = "0xCC")]
	[Token(Token = "0x6000DD1")]
	public static bool ReadDictionary(Dictionary<String, Object> inDict, string inVariableName, ref Dictionary<String, Object>& refValue) { }

	[Address(RVA = "0x1229FC0", Offset = "0x1229FC0", Length = "0xCC")]
	[Token(Token = "0x6000DCE")]
	public static bool ReadDictionaryIntInt(Dictionary<String, Object> inDict, string inVariableName, ref Dictionary<Int32, Int32>& refValue) { }

	[Address(RVA = "0x13DEAC4", Offset = "0x13DEAC4", Length = "0xD0")]
	[Token(Token = "0x6000DCD")]
	public static bool ReadDictionaryIntObject(Dictionary<String, Object> inDict, string inVariableName, ref Dictionary<Int32, T>& refValue) { }

	[Address(RVA = "0x1229CE4", Offset = "0x1229CE4", Length = "0xCC")]
	[Token(Token = "0x6000DCC")]
	public static bool ReadDictionaryIntString(Dictionary<String, Object> inDict, string inVariableName, ref Dictionary<Int32, String>& refValue) { }

	[Address(RVA = "0x122A4CC", Offset = "0x122A4CC", Length = "0xCC")]
	[Token(Token = "0x6000DD0")]
	public static bool ReadDictionaryStringBool(Dictionary<String, Object> inDict, string inVariableName, ref Dictionary<String, Boolean>& refValue) { }

	[Address(RVA = "0x1213F44", Offset = "0x1213F44", Length = "0xCC")]
	[Token(Token = "0x6000DCF")]
	public static bool ReadDictionaryStringString(Dictionary<String, Object> inDict, string inVariableName, ref Dictionary<String, String>& refValue) { }

	[Address(RVA = "0x122C6C4", Offset = "0x122C6C4", Length = "0xCC")]
	[Token(Token = "0x6000DEA")]
	public static bool ReadDictionaryStringStringList(Dictionary<String, Object> inDict, string inVariableName, ref Dictionary<String, List`1<String>>& refValue) { }

	[Address(RVA = "0x1227D88", Offset = "0x1227D88", Length = "0xA8")]
	[Token(Token = "0x6000DB5")]
	public static double ReadDouble(Dictionary<String, Object> inDict, string inDoubleName, out bool outSuccess, double inDefaultValue = 0) { }

	[Address(RVA = "0x1227AD4", Offset = "0x1227AD4", Length = "0x84")]
	[Token(Token = "0x6000DB4")]
	public static double ReadDouble(Dictionary<String, Object> inDict, string inDoubleName, double inDefaultValue = 0) { }

	[Address(RVA = "0x13DEEE0", Offset = "0x13DEEE0", Length = "0x140")]
	[Token(Token = "0x6000DC2")]
	public static TEnum ReadEnum(Dictionary<String, Object> inDict, string inVariableName, out bool inSuccess, TEnum inDefaultValue) { }

	[Address(RVA = "0x13DEB94", Offset = "0x13DEB94", Length = "0x12C")]
	[Token(Token = "0x6000DC1")]
	public static TEnum ReadEnum(Dictionary<String, Object> inDict, string inVariableName, TEnum inDefaultValue) { }

	[Address(RVA = "0x13DF254", Offset = "0x13DF254", Length = "0x780")]
	[Token(Token = "0x6000DFC")]
	public static bool ReadEnumKeyDictionary(Dictionary<String, Object> inDict, string inKeyName, ref Dictionary<TEnum, TValue>& refDataDict) { }

	[Address(RVA = "0x13DF9D4", Offset = "0x13DF9D4", Length = "0x670")]
	[Token(Token = "0x6000DF6")]
	public static bool ReadEnumKeyEnumDictionary(Dictionary<String, Object> inDict, string inKeyName, ref Dictionary<TEnumKey, TEnumValue>& refDataDict) { }

	[Address(RVA = "0x13E0828", Offset = "0x13E0828", Length = "0x760")]
	[Token(Token = "0x6000DF4")]
	public static bool ReadEnumKeyIntDictionary(Dictionary<String, Object> inDict, string inKeyName, ref Dictionary<TEnum, Int32>& refDataDict, int inDefaultValue = -1) { }

	[Address(RVA = "0x13E0F88", Offset = "0x13E0F88", Length = "0x6B0")]
	[Token(Token = "0x6000DFB")]
	public static bool ReadEnumKeyIntListDictionary(Dictionary<String, Object> inDict, string inKeyName, ref Dictionary<TEnumKey, List`1<Int32>>& refDataDict) { }

	[Address(RVA = "0x13E1638", Offset = "0x13E1638", Length = "0x5BC")]
	[Token(Token = "0x6000DF8")]
	public static bool ReadEnumKeyStringDictionary(Dictionary<String, Object> inDict, string inKeyName, ref Dictionary<TEnumKey, String>& refDataDict) { }

	[Address(RVA = "0x13E2290", Offset = "0x13E2290", Length = "0xF4")]
	[Token(Token = "0x6000DFE")]
	public static bool ReadEnumList(Dictionary<String, Object> inDict, string inStringName, ref List<TEnum>& refValue) { }

	[Address(RVA = "0x1227E30", Offset = "0x1227E30", Length = "0x84")]
	[Token(Token = "0x6000DB6")]
	public static float ReadFloat(Dictionary<String, Object> inDict, string inFloatName, float inDefaultValue = 0) { }

	[Address(RVA = "0x1227EB4", Offset = "0x1227EB4", Length = "0xA8")]
	[Token(Token = "0x6000DB7")]
	public static float ReadFloat(Dictionary<String, Object> inDict, string inFloatName, out bool outSuccess, float inDefaultValue = 0) { }

	[Address(RVA = "0x1228F70", Offset = "0x1228F70", Length = "0x104")]
	[Token(Token = "0x6000DC4")]
	public static object ReadGenericEnum(Type inEnumType, Dictionary<String, Object> inDict, string inVariableName, out bool inSuccess) { }

	[Address(RVA = "0x1228D98", Offset = "0x1228D98", Length = "0xEC")]
	[Token(Token = "0x6000DC3")]
	public static Enum ReadGenericEnum(Type inEnumType, Dictionary<String, Object> inDict, string inVariableName) { }

	[Address(RVA = "0x12277B0", Offset = "0x12277B0", Length = "0xA0")]
	[Token(Token = "0x6000DB1")]
	public static int ReadInt(Dictionary<String, Object> inDict, string inIntName, out bool outSuccess, int inDefaultValue = 0) { }

	[Address(RVA = "0x12161A8", Offset = "0x12161A8", Length = "0x84")]
	[Token(Token = "0x6000DB0")]
	public static int ReadInt(Dictionary<String, Object> inDict, string inIntName, int inDefaultValue = 0) { }

	[Address(RVA = "0x122AE00", Offset = "0x122AE00", Length = "0xA0")]
	[Token(Token = "0x6000DD4")]
	public static long ReadInt64(Dictionary<String, Object> inDict, string inVariableName, out bool outSuccess, long inDefaultValue = 0) { }

	[Address(RVA = "0x122ABEC", Offset = "0x122ABEC", Length = "0x84")]
	[Token(Token = "0x6000DD3")]
	public static long ReadInt64(Dictionary<String, Object> inDict, string inVariableName, long inDefaultValue = 0) { }

	[Address(RVA = "0x1229074", Offset = "0x1229074", Length = "0x250")]
	[Token(Token = "0x6000DC5")]
	public static bool ReadIntList(Dictionary<String, Object> inDict, string inVariableName, ref List<Int32>& refValue) { }

	[Address(RVA = "0x12268D0", Offset = "0x12268D0", Length = "0x84")]
	[Token(Token = "0x6000DA8")]
	public static bool ReadJSONList(Dictionary<String, Object> inDict, string inStringName, ref List<Object>& refValue) { }

	[Address(RVA = "0x13E247C", Offset = "0x13E247C", Length = "0x17C")]
	[Token(Token = "0x6000DF2")]
	public static bool ReadObject(Dictionary<String, Object> inDict, string inKeyName, ref T refObject) { }

	[Address(RVA = "0x1228BBC", Offset = "0x1228BBC", Length = "0xA0")]
	[Token(Token = "0x6000DBF")]
	public static Quaternion ReadQuaternion(Dictionary<String, Object> inDict, string inQuatName, Quaternion inDefaultValue = null) { }

	[Address(RVA = "0x1228C5C", Offset = "0x1228C5C", Length = "0x13C")]
	[Token(Token = "0x6000DC0")]
	public static Quaternion ReadQuaternion(Dictionary<String, Object> inDict, string inQuatName, out bool outSuccess, Quaternion inDefaultValue = null) { }

	[Address(RVA = "0x1227394", Offset = "0x1227394", Length = "0x9C")]
	[Token(Token = "0x6000DAD")]
	public static bool ReadString(Dictionary<String, Object> inDict, string inStringName, out string outStringValue, string inDefaultValue = null) { }

	[Address(RVA = "0x12272F0", Offset = "0x12272F0", Length = "0xA4")]
	[Token(Token = "0x6000DAC")]
	public static string ReadString(Dictionary<String, Object> inDict, string inStringName, out bool outSuccess, string inDefaultValue = null) { }

	[Address(RVA = "0x1213EBC", Offset = "0x1213EBC", Length = "0x88")]
	[Token(Token = "0x6000DAB")]
	public static string ReadString(Dictionary<String, Object> inDict, string inStringName, string inDefaultValue = null) { }

	[Address(RVA = "0x13E25F8", Offset = "0x13E25F8", Length = "0x434")]
	[Token(Token = "0x6000E00")]
	public static bool ReadStringKeyDictionary(Dictionary<String, Object> inDict, string inKeyName, ref Dictionary<String, T>& refDataDict) { }

	[Address(RVA = "0x1226F24", Offset = "0x1226F24", Length = "0x88")]
	[Token(Token = "0x6000DAA")]
	public static bool ReadStringList(Dictionary<String, Object> inDict, string inStringName, ref List<String>& refValue) { }

	[Address(RVA = "0x1226AAC", Offset = "0x1226AAC", Length = "0x88")]
	[Token(Token = "0x6000DA9")]
	public static bool ReadStringListList(Dictionary<String, Object> inDict, string inListName, ref List<List`1<String>>& refValue) { }

	[Address(RVA = "0x1227850", Offset = "0x1227850", Length = "0x84")]
	[Token(Token = "0x6000DB2")]
	public static uint ReadUInt(Dictionary<String, Object> inDict, string inUIntName, uint inDefaultValue = 0) { }

	[Address(RVA = "0x1227A34", Offset = "0x1227A34", Length = "0xA0")]
	[Token(Token = "0x6000DB3")]
	public static uint ReadUInt(Dictionary<String, Object> inDict, string inUIntName, out bool outSuccess, uint inDefaultValue = 0) { }

	[Address(RVA = "0x122A904", Offset = "0x122A904", Length = "0x84")]
	[Token(Token = "0x6000DD2")]
	public static ulong ReadUInt64(Dictionary<String, Object> inDict, string inVariableName, ulong inDefaultValue = 0) { }

	[Address(RVA = "0x122860C", Offset = "0x122860C", Length = "0x88")]
	[Token(Token = "0x6000DBB")]
	public static Vector2 ReadVector2(Dictionary<String, Object> inDict, string inVector2Name, Vector2 inDefaultValue = null) { }

	[Address(RVA = "0x1228694", Offset = "0x1228694", Length = "0xFC")]
	[Token(Token = "0x6000DBC")]
	public static Vector2 ReadVector2(Dictionary<String, Object> inDict, string inVector2Name, out bool outSuccess, Vector2 inDefaultValue = null) { }

	[Address(RVA = "0x12289F4", Offset = "0x12289F4", Length = "0xA0")]
	[Token(Token = "0x6000DBD")]
	public static Vector3 ReadVector3(Dictionary<String, Object> inDict, string inVector3Name, Vector3 inDefaultValue = null) { }

	[Address(RVA = "0x1228A94", Offset = "0x1228A94", Length = "0x128")]
	[Token(Token = "0x6000DBE")]
	public static Vector3 ReadVector3(Dictionary<String, Object> inDict, string inVector3Name, out bool outSuccess, Vector3 inDefaultValue = null) { }

	[Address(RVA = "0x122B590", Offset = "0x122B590", Length = "0x8C")]
	[Token(Token = "0x6000DDD")]
	public static DateTime SecondsSinceEpochToDateTime(double inSecondsSinceEpoch) { }

	[Address(RVA = "0x122B4E8", Offset = "0x122B4E8", Length = "0xA8")]
	[Token(Token = "0x6000DDC")]
	public static DateTime SecondsSinceEpochToDateTimeLocal(double inSecondsSinceEpoch) { }

	[Address(RVA = "0x13E2A2C", Offset = "0x13E2A2C", Length = "0x474")]
	[Token(Token = "0x6000DD8")]
	public static valueT TryGetKeyValueOrDefault(Dictionary<String, Object> inDict, string inKeyName, valueT inDefaultValue = null) { }

	[Address(RVA = "0x122B0D8", Offset = "0x122B0D8", Length = "0x13C")]
	[Token(Token = "0x6000DD6")]
	public static void WriteColorAsHexString(Dictionary<String, Object> inDict, string inVariableName, Color inValue) { }

	[Address(RVA = "0x122CB98", Offset = "0x122CB98", Length = "0x1BC")]
	[Token(Token = "0x6000DEB")]
	public static void WriteDateTimeList(string inKeyName, List<DateTime> inList, ref Dictionary<String, Object>& refDict, bool inIsLocal = false) { }

	[Address(RVA = "0x122CF24", Offset = "0x122CF24", Length = "0x2AC")]
	[Token(Token = "0x6000DED")]
	public static void WriteDateTimeWithKindList(string inKeyName, List<DateTime> inList, ref Dictionary<String, Object>& refDict, DateTimeKind inDateTimeKind) { }

}

