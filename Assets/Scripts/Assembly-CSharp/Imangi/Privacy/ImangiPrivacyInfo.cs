using System.Collections.Generic;
using Imangi.Utilities;
using UnityEngine;

namespace Imangi.Privacy
{
	public class ImangiPrivacyInfo : IParsableJSONListElement
	{
		public const string LogChannel = "ImangiPrivacyInfo";

		public const string VersionKey = "v";

		public const string RegulationKey = "r";

		public const string TimestampKey = "ts";

		public const string ConsentStatesKey = "c";

		public const string AgeConsentKey = "ag";

		public const string AnalyticConsentKey = "an";

		public const string AdsConsentKey = "ad";

		public const string GameServicesConsentKey = "gs";

		public const string CloudConsentKey = "c";

		public const string SupportConsentKey = "s";

		public const string SocialConsentKey = "so";

		public const string IAPConsentKey = "iap";

		public const string UserSelectedReconsentKey = "usr";

		private int _Version;

		private long _Timestamp;

		private ImangiRegulationType _Regulation;

		private ImangiRegulationType _RCRegulation;

		private bool _ConsentFlowShouldReconsent;

		private Dictionary<ImangiConsentGroup, ImangiConsentState> _ConsentStates;

		public int Version => 0;

		public long Timestamp => 0L;

		public ImangiRegulationType Regulation => ImangiRegulationType.GDPR;

		public ImangiRegulationType RCRegulation => ImangiRegulationType.GDPR;

		public bool ConsentFlowShouldReconsent => false;

		public void SetConsentFlowShouldReconsent(bool value)
		{
		}

		public ImangiPrivacyInfo()
		{
		}

		public ImangiPrivacyInfo(Dictionary<string, object> inDict)
		{
		}

		public ImangiPrivacyInfo(string inJSONString)
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

		private long GetCurrentTimeStamp()
		{
			return 0L;
		}

		public void SetRegulationType(ImangiRegulationType inRegulationType)
		{
		}

		public void SetRegulationTypeFromRC(ImangiRegulationType inRegulationType)
		{
		}

		public void ClearConsentStates()
		{
		}

		public bool SetConsentStates(Dictionary<ImangiConsentGroup, ImangiConsentState> inConsentStates)
		{
			return false;
		}

		public bool SetConsentState(ImangiConsentGroup inConsentGroup, ImangiConsentState inConsentState)
		{
			return false;
		}

		public ImangiConsentState GetConsentState(ImangiConsentGroup inConsentGroup)
		{
			return ImangiConsentState.NoConsent;
		}

		public void AddConsentStateInfoToWWWForm(ref WWWForm refWWWForm)
		{
		}
	}
}
