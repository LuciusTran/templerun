using System.Collections.Generic;
using Imangi.Utilities;

namespace Imangi.Privacy
{
	public class ImangiPrivacyConfigFlowInfo : IParsableJSONListElement
	{
		protected static readonly string ImangiPrivacyConfigFlowKey;

		protected static readonly string ReconsentToggleKey;

		protected static readonly string SystemConfirmAllToggleKey;

		protected static readonly string ForceSystemDialogueKey;

		protected static readonly string ShowUnderAgeInfoKey;

		private const string _ShowTrackingAuthorizationPromptKey = "TAP";

		public bool InformReconsentEnabled;

		public bool SystemConfirmAll;

		public bool ForceSystemDialogue;

		public bool ShowUnderAgeInfo;

		public bool ShowTrackingAuthorizationPrompt;

		public ImangiPrivacyConfigFlowInfo()
		{
		}

		public ImangiPrivacyConfigFlowInfo(Dictionary<string, object> inDict)
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
