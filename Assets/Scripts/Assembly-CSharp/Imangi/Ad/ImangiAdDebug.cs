using System.Collections.Generic;
using Imangi.Utilities;

namespace Imangi.Ad
{
	public class ImangiAdDebug : IParsableJSONListElement
	{
		public static void OverrideAdSettings()
		{
		}

		public Dictionary<string, object> ToDict()
		{
			return null;
		}

		public bool FromDict(Dictionary<string, object> inDict)
		{
			return false;
		}
	}
}
