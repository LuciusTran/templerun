using System.Collections.Generic;

namespace Imangi.Utilities
{
	public static class KeyValuePairExtensions
	{
		public static void Deconstruct<T1, T2>(this KeyValuePair<T1, T2> inKvp, out T1 outKey, out T2 outValue)
		{
			outKey = default;
			outValue = default;
		}
	}
}
