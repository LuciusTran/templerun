using System;
using System.Collections.Generic;
using Imangi.Privacy;

namespace Imangi.Utilities
{
	public class ImangiPrivacyOfflineLocaleInfo : IParsableJSONListElement
	{
		private const string _CountryKey = "CC";

		public string Country;

		private const string _RegulationTypeKey = "RT";

		public ImangiRegulationType RegulationType;

		private const string _UTCOffSetStartTimeKey = "OST";

		public string UTCOffSetStartTime;

		private const string _UTCOffSetEndTimeKey = "OSE";

		public string UTCOffSetEndTime;

		private const string _LanguageCodeKey = "La";

		public string LanguageCode;

		private const string _TimeZoneKey = "TZ";

		public string TimeZone;

		public ImangiPrivacyOfflineLocaleInfo()
		{
		}

		public ImangiPrivacyOfflineLocaleInfo(string inCountry, ImangiRegulationType inRegulationType, string inLanguageCode, string inUTCOffSetStartTime, string inUTCOffSetEndTime, string inTimeZone = "")
		{
		}

		public ImangiPrivacyOfflineLocaleInfo(Dictionary<string, object> inDict)
		{
		}

		public ImangiPrivacyOfflineLocaleInfo(string inJSONString)
		{
		}

		public ImangiPrivacyOfflineLocaleInfo(ImangiPrivacyOfflineLocaleInfo inInfo)
		{
		}

		public Dictionary<string, object> ToDict()
		{
			return null;
		}

		public string TimeSpanToString(TimeSpan timeSpan, string format = "hh\\:mm\\:ss")
		{
			return null;
		}

		public bool TryParseTimeSpan(string timeString, out TimeSpan timeSpan)
		{
			timeSpan = default;
			return false;
		}

		public bool FromDict(Dictionary<string, object> inDict)
		{
			return false;
		}

		public TimeSpan GetStartTimeSpan()
		{
			return default;
		}

		public TimeSpan GetEndTimeSpan()
		{
			return default;
		}
	}
}
