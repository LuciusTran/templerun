using System;
using System.Collections.Generic;
using UnityEngine;

namespace Imangi.Utilities
{
	public class DictionaryHelper
	{
		private delegate double DateTimeToSecondsSinceEpochFunction(DateTime inDateTime);

		public const int DefaultInt = 0;

		public const float DefaultFloat = 0f;

		public const double DefaultDouble = 0.0;

		public static readonly DateTime EpochDateTime;

		public static bool ReadJSONList(Dictionary<string, object> inDict, string inStringName, ref List<object> refValue)
		{
			return false;
		}

		public static bool ReadStringListList(Dictionary<string, object> inDict, string inListName, ref List<List<string>> refValue)
		{
			return false;
		}

		public static bool ReadStringList(Dictionary<string, object> inDict, string inStringName, ref List<string> refValue)
		{
			return false;
		}

		public static string ReadString(Dictionary<string, object> inDict, string inStringName, string inDefaultValue = null)
		{
			return null;
		}

		public static string ReadString(Dictionary<string, object> inDict, string inStringName, out bool outSuccess, string inDefaultValue = null)
		{
			outSuccess = default;
			return null;
		}

		public static bool ReadString(Dictionary<string, object> inDict, string inStringName, out string outStringValue, string inDefaultValue = null)
		{
			outStringValue = null;
			return false;
		}

		public static bool ReadBool(Dictionary<string, object> inDict, string inBoolName, bool inDefaultValue = false)
		{
			return false;
		}

		public static bool ReadBool(Dictionary<string, object> inDict, string inBoolName, out bool outSuccess, bool inDefaultValue = false)
		{
			outSuccess = default;
			return false;
		}

		public static int ReadInt(Dictionary<string, object> inDict, string inIntName, int inDefaultValue = 0)
		{
			return 0;
		}

		public static int ReadInt(Dictionary<string, object> inDict, string inIntName, out bool outSuccess, int inDefaultValue = 0)
		{
			outSuccess = default;
			return 0;
		}

		public static uint ReadUInt(Dictionary<string, object> inDict, string inUIntName, uint inDefaultValue = 0u)
		{
			return 0u;
		}

		public static uint ReadUInt(Dictionary<string, object> inDict, string inUIntName, out bool outSuccess, uint inDefaultValue = 0u)
		{
			outSuccess = default;
			return 0u;
		}

		public static double ReadDouble(Dictionary<string, object> inDict, string inDoubleName, double inDefaultValue = 0.0)
		{
			return 0.0;
		}

		public static double ReadDouble(Dictionary<string, object> inDict, string inDoubleName, out bool outSuccess, double inDefaultValue = 0.0)
		{
			outSuccess = default;
			return 0.0;
		}

		public static float ReadFloat(Dictionary<string, object> inDict, string inFloatName, float inDefaultValue = 0f)
		{
			return 0f;
		}

		public static float ReadFloat(Dictionary<string, object> inDict, string inFloatName, out bool outSuccess, float inDefaultValue = 0f)
		{
			outSuccess = default;
			return 0f;
		}

		public static void AddVector2(ref Dictionary<string, object> refDict, string inVector2Name, Vector2 inValue)
		{
		}

		public static void AddVector3(Dictionary<string, object> inDict, string inVector3Name, Vector3 inValue)
		{
		}

		public static void AddQuaternion(Dictionary<string, object> inDict, string inQuatName, Quaternion inValue)
		{
		}

		public static Vector2 ReadVector2(Dictionary<string, object> inDict, string inVector2Name, Vector2 inDefaultValue = default(Vector2))
		{
			return default;
		}

		public static Vector2 ReadVector2(Dictionary<string, object> inDict, string inVector2Name, out bool outSuccess, Vector2 inDefaultValue = default(Vector2))
		{
			outSuccess = default;
			return default;
		}

		public static Vector3 ReadVector3(Dictionary<string, object> inDict, string inVector3Name, Vector3 inDefaultValue = default(Vector3))
		{
			return default;
		}

		public static Vector3 ReadVector3(Dictionary<string, object> inDict, string inVector3Name, out bool outSuccess, Vector3 inDefaultValue = default(Vector3))
		{
			outSuccess = default;
			return default;
		}

		public static Quaternion ReadQuaternion(Dictionary<string, object> inDict, string inQuatName, Quaternion inDefaultValue = default(Quaternion))
		{
			return default;
		}

		public static Quaternion ReadQuaternion(Dictionary<string, object> inDict, string inQuatName, out bool outSuccess, Quaternion inDefaultValue = default(Quaternion))
		{
			outSuccess = default;
			return default;
		}

		public static TEnum ReadEnum<TEnum>(Dictionary<string, object> inDict, string inVariableName, TEnum inDefaultValue) where TEnum : struct, IComparable, IFormattable, IConvertible
		{
			return default;
		}

		public static TEnum ReadEnum<TEnum>(Dictionary<string, object> inDict, string inVariableName, out bool inSuccess, TEnum inDefaultValue) where TEnum : struct, IComparable, IFormattable, IConvertible
		{
			inSuccess = default;
			return default;
		}

		public static Enum ReadGenericEnum(Type inEnumType, Dictionary<string, object> inDict, string inVariableName)
		{
			return null;
		}

		public static object ReadGenericEnum(Type inEnumType, Dictionary<string, object> inDict, string inVariableName, out bool inSuccess)
		{
			inSuccess = default;
			return null;
		}

		public static bool ReadIntList(Dictionary<string, object> inDict, string inVariableName, ref List<int> refValue)
		{
			return false;
		}

		public static void AddDictionary(ref Dictionary<string, object> refDict, string inKeyName, Dictionary<string, object> inDict)
		{
		}

		public static void AddDictionaryStringString(ref Dictionary<string, object> refDict, string inKeyName, Dictionary<string, string> inDict)
		{
		}

		public static void AddDictionaryStringBool(ref Dictionary<string, object> refDict, string inKeyName, Dictionary<string, bool> inDict)
		{
		}

		public static void AddDictionaryIntString(ref Dictionary<string, object> refDict, string inKeyName, Dictionary<int, string> inDict)
		{
		}

		public static void AddDictionaryIntObject<T>(ref Dictionary<string, object> refDict, string inKeyName, Dictionary<int, T> inDict) where T : IParsableJSONListElement
		{
		}

		public static bool ReadBoolList(Dictionary<string, object> inDict, string inVariableName, ref List<bool> refValue)
		{
			return false;
		}

		public static bool ReadDictionaryIntString(Dictionary<string, object> inDict, string inVariableName, ref Dictionary<int, string> refValue)
		{
			return false;
		}

		public static bool ReadDictionaryIntObject<T>(Dictionary<string, object> inDict, string inVariableName, ref Dictionary<int, T> refValue) where T : class, IParsableJSONListElement, new()
		{
			return false;
		}

		public static bool ReadDictionaryIntInt(Dictionary<string, object> inDict, string inVariableName, ref Dictionary<int, int> refValue)
		{
			return false;
		}

		public static bool ReadDictionaryStringString(Dictionary<string, object> inDict, string inVariableName, ref Dictionary<string, string> refValue)
		{
			return false;
		}

		public static bool ReadDictionaryStringBool(Dictionary<string, object> inDict, string inVariableName, ref Dictionary<string, bool> refValue)
		{
			return false;
		}

		public static bool ReadDictionary(Dictionary<string, object> inDict, string inVariableName, ref Dictionary<string, object> refValue)
		{
			return false;
		}

		public static ulong ReadUInt64(Dictionary<string, object> inDict, string inVariableName, ulong inDefaultValue = 0uL)
		{
			return 0uL;
		}

		public static long ReadInt64(Dictionary<string, object> inDict, string inVariableName, long inDefaultValue = 0L)
		{
			return 0L;
		}

		public static long ReadInt64(Dictionary<string, object> inDict, string inVariableName, out bool outSuccess, long inDefaultValue = 0L)
		{
			outSuccess = default;
			return 0L;
		}

		public static Color ReadColor(Dictionary<string, object> inDict, string inVariableName, out bool outSuccess)
		{
			outSuccess = default;
			return default;
		}

		public static void WriteColorAsHexString(Dictionary<string, object> inDict, string inVariableName, Color inValue)
		{
		}

		public static Color ReadColorFromHexString(Dictionary<string, object> inDict, string inVariableName, out bool outSuccess, Color inDefaultColor)
		{
			outSuccess = default;
			return default;
		}

		public static valueT TryGetKeyValueOrDefault<valueT>(Dictionary<string, object> inDict, string inKeyName, valueT inDefaultValue = default(valueT))
		{
			return default;
		}

		public static double DateTimeToSecondsSinceEpoch(DateTime inDateTime)
		{
			return 0.0;
		}

		public static double DateTimeToSecondsSinceEpochLocal(DateTime inDateTime)
		{
			return 0.0;
		}

		public static double DateTimeToMillisecondsSinceEpoch(DateTime inTimeToConvert)
		{
			return 0.0;
		}

		public static DateTime SecondsSinceEpochToDateTimeLocal(double inSecondsSinceEpoch)
		{
			return default;
		}

		public static DateTime SecondsSinceEpochToDateTime(double inSecondsSinceEpoch)
		{
			return default;
		}

		public static DateTime MillisecondsSinceEpochToDateTimeUtc(long inMillisecondsSinceEpoch)
		{
			return default;
		}

		public static DateTime MillisecondsSinceEpochToDateTimeLocal(long inMillisecondsSinceEpoch)
		{
			return default;
		}

		public static bool AddDateTime(string inVariableName, DateTime inDate, ref Dictionary<string, object> inJSONDict, bool inIsLocal = false)
		{
			return false;
		}

		public static bool AddDateTimeWithKind(string inVariableName, DateTime inDate, ref Dictionary<string, object> inJSONDict, DateTimeKind inDateKind = DateTimeKind.Unspecified)
		{
			return false;
		}

		public static bool ReadDateTime(Dictionary<string, object> inDict, string inVariableName, ref DateTime refValue, bool inIsLocal = false)
		{
			return false;
		}

		public static bool ReadDateTimeWithKind(Dictionary<string, object> inDict, string inVariableName, ref DateTime refValue)
		{
			return false;
		}

		public static bool ReadDateTimeBinary(Dictionary<string, object> inDict, string inVariableName, ref DateTime refValue)
		{
			return false;
		}

		public static bool DictionaryEquals(Dictionary<string, object> inA, Dictionary<string, object> inB)
		{
			return false;
		}

		public static void AddCustomList<T>(string inKeyName, List<T> inList, ref Dictionary<string, object> refDict) where T : IParsableJSONListElement
		{
		}

		public static void AddIntList(ref Dictionary<string, object> refDict, string inKeyName, List<int> inIntList)
		{
		}

		public static void AddStringList(ref Dictionary<string, object> refDict, string inKeyName, List<string> inStringList, bool inAddIfDefault = false)
		{
		}

		public static void AddDictionaryStringStringList(ref Dictionary<string, object> refDict, string inKeyName, List<Dictionary<string, string>> inDictionaryStringStringList)
		{
		}

		public static bool ReadDictionaryStringStringList(Dictionary<string, object> inDict, string inVariableName, ref Dictionary<string, List<string>> refValue)
		{
			return false;
		}

		public static void WriteDateTimeList(string inKeyName, List<DateTime> inList, ref Dictionary<string, object> refDict, bool inIsLocal = false)
		{
		}

		public static bool ReadDateTimeList(Dictionary<string, object> inDict, string inKeyName, ref List<DateTime> refList, bool inIsLocal = false)
		{
			return false;
		}

		public static void WriteDateTimeWithKindList(string inKeyName, List<DateTime> inList, ref Dictionary<string, object> refDict, DateTimeKind inDateTimeKind)
		{
		}

		public static bool ReadDateTimeWithKindList(Dictionary<string, object> inDict, string inKeyName, List<DateTime> refList)
		{
			return false;
		}

		public static bool ReadCustomList<T>(Dictionary<string, object> inDict, string inKeyName, ref List<T> refList) where T : IParsableJSONListElement, new()
		{
			return false;
		}

		public static bool ReadCustomListList<T>(Dictionary<string, object> inDict, string inKeyName, ref List<List<T>> refList) where T : IParsableJSONListElement, new()
		{
			return false;
		}

		public static void AddObject<T>(string inKeyName, T inObject, ref Dictionary<string, object> refDict) where T : IParsableJSONListElement
		{
		}

		public static bool ReadObject<T>(Dictionary<string, object> inDict, string inKeyName, ref T refObject) where T : class, IParsableJSONListElement, new()
		{
			return false;
		}

		public static bool AddEnumKeyIntDictionary<TEnum>(string inKeyName, Dictionary<TEnum, int> inValueDict, ref Dictionary<string, object> refDict) where TEnum : struct, IComparable, IFormattable, IConvertible
		{
			return false;
		}

		public static bool ReadEnumKeyIntDictionary<TEnum>(Dictionary<string, object> inDict, string inKeyName, ref Dictionary<TEnum, int> refDataDict, int inDefaultValue = -1) where TEnum : struct, IComparable, IFormattable, IConvertible
		{
			return false;
		}

		public static bool AddEnumKeyEnumDictionary<TEnumKey, TEnumValue>(string inKeyName, Dictionary<TEnumKey, TEnumValue> inValueDict, ref Dictionary<string, object> refDict) where TEnumKey : struct, IComparable, IFormattable, IConvertible where TEnumValue : struct, IComparable, IFormattable, IConvertible
		{
			return false;
		}

		public static bool ReadEnumKeyEnumDictionary<TEnumKey, TEnumValue>(Dictionary<string, object> inDict, string inKeyName, ref Dictionary<TEnumKey, TEnumValue> refDataDict) where TEnumKey : struct, IComparable, IFormattable, IConvertible where TEnumValue : struct, IComparable, IFormattable, IConvertible
		{
			return false;
		}

		public static bool AddEnumKeyStringDictionary<TEnumKey>(string inKeyName, Dictionary<TEnumKey, string> inValueDict, ref Dictionary<string, object> refDict) where TEnumKey : struct, IComparable, IFormattable, IConvertible
		{
			return false;
		}

		public static bool ReadEnumKeyStringDictionary<TEnumKey>(Dictionary<string, object> inDict, string inKeyName, ref Dictionary<TEnumKey, string> refDataDict) where TEnumKey : struct, IComparable, IFormattable, IConvertible
		{
			return false;
		}

		public static bool AddEnumKeyDictionary<TEnum, TValue>(string inKeyName, Dictionary<TEnum, TValue> inValueDict, ref Dictionary<string, object> refDict) where TEnum : struct, IComparable, IFormattable, IConvertible where TValue : IParsableJSONListElement
		{
			return false;
		}

		public static bool AddEnumKeyIntListDictionary<TEnum>(string inKeyName, Dictionary<TEnum, List<int>> inValueDict, ref Dictionary<string, object> refDict)
		{
			return false;
		}

		public static bool ReadEnumKeyIntListDictionary<TEnumKey>(Dictionary<string, object> inDict, string inKeyName, ref Dictionary<TEnumKey, List<int>> refDataDict) where TEnumKey : struct, IComparable, IFormattable, IConvertible
		{
			return false;
		}

		public static bool ReadEnumKeyDictionary<TEnum, TValue>(Dictionary<string, object> inDict, string inKeyName, ref Dictionary<TEnum, TValue> refDataDict) where TEnum : struct, IComparable, IFormattable, IConvertible where TValue : class, IParsableJSONListElement, new()
		{
			return false;
		}

		public static bool AddEnumList<TEnum>(string inKeyName, List<TEnum> inEnumList, ref Dictionary<string, object> refDict) where TEnum : struct, IComparable, IFormattable, IConvertible
		{
			return false;
		}

		public static bool ReadEnumList<TEnum>(Dictionary<string, object> inDict, string inStringName, ref List<TEnum> refValue) where TEnum : struct, IComparable, IFormattable, IConvertible
		{
			return false;
		}

		public static void AddStringKeyDictionary<T>(string inKeyName, Dictionary<string, T> inValueDict, ref Dictionary<string, object> refDict) where T : IParsableJSONListElement
		{
		}

		public static bool ReadStringKeyDictionary<T>(Dictionary<string, object> inDict, string inKeyName, ref Dictionary<string, T> refDataDict) where T : class, IParsableJSONListElement, new()
		{
			return false;
		}

		public static void AddString(ref Dictionary<string, object> refDict, string inKeyName, string inValue, string inDefaultValue = null, bool inAddIfDefault = false)
		{
		}

		public static void AddBool(ref Dictionary<string, object> refDict, string inKeyName, bool inValue, bool inDefaultValue = false, bool inAddIfDefault = false)
		{
		}

		public static void AddInt(ref Dictionary<string, object> refDict, string inKeyName, int inValue, int inDefaultValue = 0, bool inAddIfDefault = false)
		{
		}

		public static void AddInt64(ref Dictionary<string, object> refDict, string inKeyName, long inValue, long inDefaultValue = 0L, bool inAddIfDefault = false)
		{
		}

		public static void AddUInt(ref Dictionary<string, object> refDict, string inKeyName, uint inValue, uint inDefaultValue = 0u, bool inAddIfDefault = false)
		{
		}

		public static void AddULong(ref Dictionary<string, object> refDict, string inKeyName, ulong inValue, ulong inDefaultValue = 0uL, bool inAddIfDefault = false)
		{
		}

		public static void AddFloat(ref Dictionary<string, object> refDict, string inKeyName, float inValue, float inDefaultValue = 0f, bool inAddIfDefault = false)
		{
		}

		public static void AddDouble(ref Dictionary<string, object> refDict, string inKeyName, double inValue, double inDefaultValue = 0.0, bool inAddIfDefault = false)
		{
		}

		public static void AddEnum<TEnum>(ref Dictionary<string, object> refDict, string inKeyName, TEnum inValue, TEnum inDefaultValue, bool inAddIfDefault = false) where TEnum : struct, IComparable, IFormattable, IConvertible
		{
		}

		public static void AddGenericEnum(ref Dictionary<string, object> refDict, string inKeyName, object inValue)
		{
		}
	}
}
