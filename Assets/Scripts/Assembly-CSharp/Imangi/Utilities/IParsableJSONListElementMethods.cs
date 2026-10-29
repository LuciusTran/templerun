using System.Collections.Generic;

namespace Imangi.Utilities
{
	public static class IParsableJSONListElementMethods
	{
		public static string ToJSONString(this IParsableJSONListElement inElement)
		{
			return null;
		}

		public static bool FromJSONString(this IParsableJSONListElement inElement, string inJSONString)
		{
			return false;
		}

		public static string ListToJSONString<T>(List<T> inList) where T : IParsableJSONListElement, new()
		{
			return null;
		}

		public static List<T> ListFromJSONString<T>(string inJSONString) where T : IParsableJSONListElement, new()
		{
			return null;
		}

		public static Dictionary<string, object> ListToDict<T>(List<T> inList) where T : IParsableJSONListElement, new()
		{
			return null;
		}

		public static List<T> ListFromDict<T>(Dictionary<string, object> inDict) where T : IParsableJSONListElement, new()
		{
			return null;
		}
	}
}
