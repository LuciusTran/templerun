using System;
using System.Collections.Generic;
using Imangi.Utilities;
using UnityEngine;

public class ImangiJSONHelper : MonoBehaviour
{
	public static string FormatJSONForSave(string inJSONString)
	{
		return null;
	}

	public static string EnumKeyDictionaryToJson<TEnum, TValue>(Dictionary<TEnum, TValue> inValueDict) where TEnum : struct, IComparable, IFormattable, IConvertible where TValue : IParsableJSONListElement
	{
		return null;
	}

	public static Dictionary<TEnum, TValue> EnumKeyDictionaryFromJson<TEnum, TValue>(string inJSONString) where TEnum : struct, IComparable, IFormattable, IConvertible where TValue : class, IParsableJSONListElement, new()
	{
		return null;
	}
}
