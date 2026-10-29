using System;
using System.Collections.Generic;
using Imangi.Utilities;

namespace Imangi.Privacy
{
	public class ImangiPrivacyConfigInfo : IParsableJSONListElement
	{
		protected static readonly string ImangiPrivacyConfigInfoKey;

		protected static readonly string AppIDConfigKey;

		protected static readonly string AppVersionConfigKey;

		protected static readonly string ABIDConfigKey;

		protected static readonly string MaxRetryConfigKey;

		protected static readonly string RetryDelayConfigKey;

		protected static readonly string ReConsentRequireDurationConfigKey;

		protected static readonly string CCPAReConsentRequireDurationKey;

		protected static readonly string GlobalReconsentConfigKey;

		protected static readonly string AgeOfConsentConfigKey;

		protected static readonly string HttpSchemeConfigKey;

		protected static readonly string PrivacyDomainConfigKey;

		protected static readonly string ConsentRelativePathConfigKey;

		protected static readonly string PrivacyPolicyURLConfigKey;

		protected static readonly string ConsentGroupURLsConfigKey;

		protected static readonly string ConsentGroupConsentTypesConfigKey;

		protected static readonly string ConsentFlowVersionKey;

		protected static readonly string MainConsentFlowGroupsConfigKey;

		protected static readonly string ConsentLocalesKey;

		public const int NoReConsentRequiredDuration = -1;

		private const string AppVersionDefault = "0.0.0.0";

		private const int ABIDDefault = -1;

		private const int MaxRetryDefault = 3;

		private const float RetryDelayDefault = 1f;

		private const int ReConsentRequiredDurationDefault = 365;

		private const int AgeOfConsentDefault = 16;

		private const string HttpSchemeDefault = "https";

		private const string PrivacyDomainDefault = "privacy.imangisupport.com";

		private const string ConsentRelativePathDefault = "privacy/consent";

		private const string PrivacyPolicyURLDefault = "https://www.imangistudios.com/privacy/privacy-policy-app.html";

		private const int ConsentFlowVersionDefault = 0;

		public ImangiConsentPlatformID ConsentPlatformID;

		public ImangiConsentAppID ConsentAppID;

		public string AppVersion;

		public int ABID;

		public int MaxRetryCount;

		public float RetryDelay;

		public int ReConsentRequiredDuration;

		public int CCPAReConsentRequiredDuration;

		public DateTime GlobalReconsentDate;

		public DateTime CCPAGlobalReconsentDate;

		public int AgeOfConsent;

		public string HttpScheme;

		public string PrivacyDomain;

		public string ConsentRelativePath;

		public string PrivacyPolicyURL;

		public int ConsentFlowVersion;

		public Dictionary<ImangiConsentGroup, string> ConsentGroupURLs;

		public Dictionary<ImangiConsentGroup, ImangiConsentType> ConsentGroupConsentTypes;

		public List<ImangiConsentGroup> MainConsentFlowGroups;

		public ImangiOfflineLocaleRequirements ConsentLocalesList;

		public ImangiPrivacyConfigInfo()
		{
		}

		public ImangiPrivacyConfigInfo(Dictionary<string, object> inDict)
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

		private void SetPlatformID()
		{
		}
	}
}
