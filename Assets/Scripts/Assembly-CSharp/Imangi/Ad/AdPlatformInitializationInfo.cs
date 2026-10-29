using System;
using System.Collections.Generic;
using System.Text;
using Imangi.Utilities;

namespace Imangi.Ad
{
	[Serializable]
	public class AdPlatformInitializationInfo : IParsableJSONListElement
	{
		public AdServicePlatform ServicePlatform;

		public List<AdServiceInitializationInfo> ServiceInitInfo;

		public AdPlatformInitializationInfo(AdServicePlatform inServicePlatform)
		{
		}

		public AdPlatformInitializationInfo(Dictionary<string, object> inDict)
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

		public void Dump(string inIndentString, StringBuilder inDumpSB)
		{
		}
	}
}
