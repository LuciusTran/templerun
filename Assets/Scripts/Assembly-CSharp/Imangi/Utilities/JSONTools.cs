using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Imangi.Utilities
{
	public class JSONTools
	{
		public static bool ReadBool(object inObj, bool inDefaultValue = false)
		{
			return false;
		}

		public static int ReadInt(object inObj)
		{
			return 0;
		}

		public static long ReadInt64(object inObj)
		{
			return 0L;
		}

		public static uint ReadUInt(object inObj)
		{
			return 0u;
		}

		public static ulong ReadUInt64(object inObj)
		{
			return 0uL;
		}

		public static double ReadDouble(object inObj)
		{
			return 0.0;
		}

		public static Vector3 ReadVector3(object inObj)
		{
			return default;
		}

		public static string ReadString(object inObj, string inDefaultValue = null)
		{
			return null;
		}

		public static List<object> ReadJSONList(IDictionary inBaseDictionary, string inKey)
		{
			return null;
		}

		public static List<int> ReadIntList(object inObj)
		{
			return null;
		}

		public static List<float> ReadFloatList(object inObj)
		{
			return null;
		}

		public static List<string> ReadStringList(object inObj)
		{
			return null;
		}

		public static List<List<string>> ReadStringListList(object inObj)
		{
			return null;
		}

		public static TEnum ReadEnum<TEnum>(object inObj, TEnum inDefaultValue) where TEnum : struct, IComparable, IFormattable, IConvertible
		{
			return default;
		}

		public static Enum ReadGenericEnum(Type inEnumType, object inObj)
		{
			return null;
		}

		public static List<TEnum> ReadEnumList<TEnum>(object inObj) where TEnum : struct, IComparable, IFormattable, IConvertible
		{
			return null;
		}

		public static Dictionary<string, object> ReadDictionary(IDictionary inBaseDictionary, string inKey)
		{
			return null;
		}

		public static Dictionary<string, string> ReadDictionaryStringString(IDictionary inBaseDictionary, string inKey)
		{
			return null;
		}

		public static Dictionary<string, bool> ReadDictionaryStringBool(IDictionary inBaseDictionary, string inKey)
		{
			return null;
		}

		public static Dictionary<string, List<string>> ReadDictionaryStringStringList(IDictionary inBaseDictionary, string inKey)
		{
			return null;
		}

		public static string WriteDictionaryIntInt(Dictionary<int, int> inDictionary)
		{
			return null;
		}

		public static Dictionary<int, int> ReadDictionaryIntInt(IDictionary inBaseDictionary, string inKey)
		{
			return null;
		}

		public static Dictionary<int, string> ReadDictionaryIntString(IDictionary inBaseDictionary, string inKey)
		{
			return null;
		}

		public static bool ReadDictionaryIntObject<T>(IDictionary inBaseDictionary, string inKey, ref Dictionary<int, T> refDict) where T : IParsableJSONListElement, new()
		{
			return false;
		}

		public static bool ObjectListToFromDictList<T>(List<object> inJSONList, ref List<T> data) where T : IParsableJSONListElement, new()
		{
			return false;
		}

		public static List<object> ToDictListToObjectList<T>(List<T> inList) where T : IParsableJSONListElement
		{
			return null;
		}
	}
}
