using System;
using System.Collections.Generic;

namespace Imangi.Utilities
{
	[Serializable]
	public class ImangiOfflineLocaleRequirements : IImangiRequirements, IParsableJSONListElement
	{
		public List<ImangiPrivacyOfflineLocaleInfo> Locales;

		public ImangiOfflineLocaleRequirements()
		{
		}

		public ImangiOfflineLocaleRequirements(string inJSONString)
		{
		}

		public void Clear()
		{
		}

		public virtual Dictionary<string, object> ToDict()
		{
			return null;
		}

		public bool FromDict(Dictionary<string, object> inDict)
		{
			return false;
		}

		public string GetDescription()
		{
			return null;
		}

		public bool IsDefault()
		{
			return false;
		}
	}
}
