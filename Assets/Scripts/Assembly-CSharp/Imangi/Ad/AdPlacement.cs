using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Imangi.Utilities;

namespace Imangi.Ad
{
	public class AdPlacement
	{
		public class ConfigValues : IParsableJSONListElement
		{
			public const string NameKey = "N";

			public string Name;

			private const string _PlacementAdTypeKey = "T";

			public AdType PlacementAdType;

			private const string _AdSpaceNameKey = "AS";

			public string AdSpaceName;

			private const string _BannerPositionKey = "BP";

			public BannerPosition BannerPosition;

			public const string EnabledKey = "E";

			public bool Enabled;

			public Dictionary<string, object> ToDict()
			{
				return null;
			}

			public bool FromDict(Dictionary<string, object> inDict)
			{
				return false;
			}

			public Dictionary<string, object> ToOverrideDict()
			{
				return null;
			}

			public void FromOverrideDict(Dictionary<string, object> inDict)
			{
			}
		}

		public readonly ConfigValues Config;

		public const string ConditionsKey = "C";

		public readonly Dictionary<string, AdPlacementCondition> Conditions;

		[CompilerGenerated]
		private Action<string, AdService, AdType, string> m_OnAdPlacementClickedEvent;

		[CompilerGenerated]
		private Action<string, AdService, AdType, string> m_OnAdPlacementOpenedEvent;

		[CompilerGenerated]
		private AdPlacementManager.AdPlacementFailedDelegate m_OnAdPlacementFailedEvent;

		[CompilerGenerated]
		private Action<string, AdService, AdType, string> m_OnAdPlacementReceivedEvent;

		[CompilerGenerated]
		private Action<string, AdService, AdType, string> m_OnAdPlacementFailedToReceiveEvent;

		[CompilerGenerated]
		private Action<string, AdService, AdType, string> m_OnAdPlacementWillLeaveApplicationEvent;

		[CompilerGenerated]
		private AdPlacementManager.AdPlacementDismissedDelegate m_OnAdPlacementDismissedEvent;

		[CompilerGenerated]
		private Action<string, bool, bool> m_OnAdPlacementFinishedEvent;

		public bool IgnoreGlobalConditions => false;

		public event Action<string, AdService, AdType, string> OnAdPlacementClickedEvent
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<string, AdService, AdType, string> OnAdPlacementOpenedEvent
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event AdPlacementManager.AdPlacementFailedDelegate OnAdPlacementFailedEvent
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<string, AdService, AdType, string> OnAdPlacementReceivedEvent
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<string, AdService, AdType, string> OnAdPlacementFailedToReceiveEvent
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<string, AdService, AdType, string> OnAdPlacementWillLeaveApplicationEvent
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event AdPlacementManager.AdPlacementDismissedDelegate OnAdPlacementDismissedEvent
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<string, bool, bool> OnAdPlacementFinishedEvent
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public Dictionary<string, object> SerializeConfig()
		{
			return null;
		}

		private Dictionary<string, string> SerializeConditionsConfig()
		{
			return null;
		}

		public void DeserializeConfig(Dictionary<string, object> inDict)
		{
		}

		private void DeserializeConditionsConfig(Dictionary<string, string> inConditionsDict)
		{
		}

		public void OverridePlacement(string inJson)
		{
		}

		public void OverrideCondition(string inName, string inJson)
		{
		}

		public Dictionary<string, object> SerializeSaveData()
		{
			return null;
		}

		public void DeserializeSaveData(Dictionary<string, object> inDict)
		{
		}

		public AdPlacementCondition GetCondition(string inName)
		{
			return null;
		}

		public AdPlacement()
		{
		}

		public AdPlacement(Dictionary<string, object> inDict)
		{
		}

		public void PreFetch()
		{
		}

		public bool Show()
		{
			return false;
		}

		private void Finish(bool inFailed, bool inCompleted)
		{
		}

		public bool Hide()
		{
			return false;
		}

		private void HookAdManagerEvents()
		{
		}

		private void UnhookAdManagerEvents()
		{
		}

		private void OnAdClicked(AdService inService, AdType inAdType, string inAdSpaceName)
		{
		}

		private void OnAdOpened(AdService inService, AdType inAdType, string inAdSpaceName)
		{
		}

		private void OnAdFailed(AdService inService, AdType inAdType, string inAdSpaceName, string inError)
		{
		}

		private void OnAdReceived(AdService inService, AdType inAdType, string inAdSpaceName)
		{
		}

		private void OnAdFailedToReceive(AdService inService, AdType inAdType, string inAdSpaceName)
		{
		}

		private void OnAdWillLeaveApplication(AdService inService, AdType inAdType, string inAdSpaceName)
		{
		}

		private void OnAdDismissed(AdService inService, AdType inAdType, string inAdSpaceName, bool inCompleted)
		{
		}

		public void AddCondition(string inName, AdPlacementCondition inCondition)
		{
		}

		public void RemoveCondition(string inName)
		{
		}
	}
}
