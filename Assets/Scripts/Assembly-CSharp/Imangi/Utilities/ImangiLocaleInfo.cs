using System.Collections.Generic;

namespace Imangi.Utilities
{
	public class ImangiLocaleInfo : IParsableJSONListElement
	{
		private const string _CountryKey = "Cc";

		public string Country;

		private const string _Country_iso3Key = "Cc3";

		public string Country_iso3;

		private const string _LanguageCodeKey = "La";

		public string LanguageCode;

		private const string _TimeZoneKey = "TZ";

		public string TimeZone;

		public ImangiLocaleInfo()
		{
		}

		public ImangiLocaleInfo(string inCountry, string inCountry_iso3, string inLanguageCode = "", string inTimeZone = "")
		{
		}

		public ImangiLocaleInfo(Dictionary<string, object> inDict)
		{
		}

		public ImangiLocaleInfo(string inJSONString)
		{
		}

		public ImangiLocaleInfo(ImangiLocaleInfo inInfo)
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

		protected bool StrictCompareValues(string inSource, string inCheck)
		{
			return false;
		}

		public bool IsValidForDevice(ImangiLocaleInfo inCheckInfo, bool inStrict)
		{
			return false;
		}
	}
}
