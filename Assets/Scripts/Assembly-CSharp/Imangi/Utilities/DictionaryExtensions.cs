using System;
using System.Collections.Generic;

namespace Imangi.Utilities
{
	public static class DictionaryExtensions
	{
		public static Dictionary<K, V> DeepCopyCloneable<K, V>(this Dictionary<K, V> inDict) where V : class, ICloneable
		{
			return null;
		}

		public static Dictionary<KOut, VOut> ConvertAll<K, V, KOut, VOut>(this Dictionary<K, V> inDict, Converter<K, KOut> inKeyConv, Converter<V, VOut> inValConv)
		{
			return null;
		}

		public static Dictionary<KOut, V> ConvertAllKeys<K, V, KOut>(this Dictionary<K, V> inDict, Converter<K, KOut> inKeyConv)
		{
			return null;
		}

		public static Dictionary<K, VOut> ConvertAllValues<K, V, VOut>(this Dictionary<K, V> inDict, Converter<V, VOut> inValConv)
		{
			return null;
		}
	}
}
