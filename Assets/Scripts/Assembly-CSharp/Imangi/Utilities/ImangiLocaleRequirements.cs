using System;
using System.Collections.Generic;

namespace Imangi.Utilities
{
	[Serializable]
	public class ImangiLocaleRequirements : IImangiRequirements, IParsableJSONListElement
	{
		public List<ImangiLocaleInfo> Locales;

		public List<ImangiLocaleInfo> OmitLocales;

		public ImangiLocaleRequirements()
		{
		}

		public ImangiLocaleRequirements(string inJSONString)
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

		public bool IsValid(ImangiLocaleInfo inCheckLocale, bool inStrict = false)
		{
			return false;
		}

		public bool IsDefault()
		{
			return false;
		}
	}
}
