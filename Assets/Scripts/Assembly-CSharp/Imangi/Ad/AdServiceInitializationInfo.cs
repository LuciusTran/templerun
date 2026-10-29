using System;
using System.Collections.Generic;
using System.Text;
using Imangi.Utilities;

namespace Imangi.Ad
{
	[Serializable]
	public class AdServiceInitializationInfo : IParsableJSONListElement
	{
		public AdService Service;

		public bool PrefetchVideo;

		public bool PrefetchCard;

		public bool PrefetchBanner;

		public Dictionary<string, string> InitializationInfo;

		public AdServiceInitializationInfo()
		{
		}

		public AdServiceInitializationInfo(Dictionary<string, object> inDict)
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

		public static AdServiceInitializationInfo GetDefaultInitializationInfoForService(AdService inService)
		{
			return null;
		}

		public void Dump(string inIndentString, StringBuilder inDumpSB)
		{
		}
	}
}
