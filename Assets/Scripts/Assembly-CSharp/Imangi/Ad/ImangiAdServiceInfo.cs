using System;
using System.Collections.Generic;
using Imangi.Utilities;

namespace Imangi.Ad
{
	[Serializable]
	public class ImangiAdServiceInfo : IParsableJSONListElement
	{
		public AdService ActiveService;

		public ImangiAdServiceInfo()
		{
		}

		public ImangiAdServiceInfo(string inJSONString)
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
