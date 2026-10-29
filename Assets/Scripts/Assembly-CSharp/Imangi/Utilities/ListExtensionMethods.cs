using System.Collections;
using System.Collections.Generic;

namespace Imangi.Utilities
{
	public static class ListExtensionMethods
	{
		public static void AddRange<TList, TRange>(this List<TList> inList, IEnumerable<TRange> inRange) where TRange : TList
		{
		}

		public static bool ContainsAnObjectOfExactlyType<TTarget>(this IList inList)
		{
			return false;
		}
	}
}
