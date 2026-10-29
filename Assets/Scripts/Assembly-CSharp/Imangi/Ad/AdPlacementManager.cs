using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;

namespace Imangi.Ad
{
	public class AdPlacementManager
	{
		public delegate void AdPlacementFailedDelegate(string inPlacementName, AdService inService, AdType inType, string inAdSpaceName, string inError);

		public delegate void AdPlacementDismissedDelegate(string inPlacementName, AdService inService, AdType inType, string inAdSpaceName, bool inError);

		public const string LogChannel = "AdPlacement";

		public const string RemoteConfigKey = "AdPlacements";

		private const string _GlobalConditionRemoteConfigPrefix = "AP_GC_";

		private const string _PlacementRemoteConfigPrefix = "AP_P_";

		private const string _PlacementConditionRemoteConfigPrefix = "AP_PC_";

		public const string GlobalConditionsKey = "GC";

		private readonly Dictionary<string, AdPlacementCondition> _GlobalConditions;

		public const string PlacementsKey = "P";

		private readonly Dictionary<string, AdPlacement> _Placements;

		private string _ActivePlacement;

		public static readonly AdPlacementManager Instance;

		[CompilerGenerated]
		private Action<AdType, string, bool> m_OnAdAvailableEvent;

		[CompilerGenerated]
		private Action<AdType, string> m_OnFetchEvent;

		[CompilerGenerated]
		private Action<string, AdService, AdType, string> m_OnAdPlacementClickedEvent;

		[CompilerGenerated]
		private Action<string, AdService, AdType, string> m_OnAdPlacementOpenedEvent;

		[CompilerGenerated]
		private AdPlacementFailedDelegate m_OnAdPlacementFailedEvent;

		[CompilerGenerated]
		private Action<string, AdService, AdType, string> m_OnAdPlacementReceivedEvent;

		[CompilerGenerated]
		private Action<string, AdService, AdType, string> m_OnAdPlacementFailedToReceiveEvent;

		[CompilerGenerated]
		private Action<string, AdService, AdType, string> m_OnAdPlacementWillLeaveApplicationEvent;

		[CompilerGenerated]
		private AdPlacementDismissedDelegate m_OnAdPlacementDismissedEvent;

		[CompilerGenerated]
		private Action<string, bool, bool> m_OnAdPlacementFinishedEvent;

		public event Action<AdType, string, bool> OnAdAvailableEvent
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

		public event Action<AdType, string> OnFetchEvent
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

		public event AdPlacementFailedDelegate OnAdPlacementFailedEvent
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

		public event AdPlacementDismissedDelegate OnAdPlacementDismissedEvent
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

		public static void DeserializeConfig(Dictionary<string, object> inDict, Dictionary<string, AdPlacementCondition> inGlobalConditions, Dictionary<string, AdPlacement> inPlacements)
		{
		}

		private static void DeserializePlacements(Dictionary<string, object> inDict, Dictionary<string, AdPlacement> inPlacements)
		{
		}

		private static void DeserializeConditions(Dictionary<string, string> inDict, Dictionary<string, AdPlacementCondition> inGlobalConditions)
		{
		}

		public static Dictionary<string, object> SerializeConfig(Dictionary<string, AdPlacementCondition> inGlobalConditions, Dictionary<string, AdPlacement> inPlacements)
		{
			return null;
		}

		private static Dictionary<string, object> SerializePlacements(Dictionary<string, AdPlacement> inPlacements)
		{
			return null;
		}

		private static Dictionary<string, string> SerializeConditions(Dictionary<string, AdPlacementCondition> inGlobalConditions)
		{
			return null;
		}

		public void ApplyOverrides(Action<string> inGlobalConditionOverrideCallback, Action<string> inPlacementOverrideCallback, Action<string, string> inPlacementConditionOverrideCallback)
		{
		}

		public void OverrideGlobalCondition(string inName, string inJson)
		{
		}

		public void OverridePlacementCondition(string inPlacementName, string inConditionName, string inJson)
		{
		}

		public void OverridePlacement(string inPlacementName, string inJson)
		{
		}

		public Dictionary<string, object> SerializeSaveData()
		{
			return null;
		}

		public void DeserializeSaveData(Dictionary<string, object> inDict)
		{
		}

		public bool Initialize(string inJson)
		{
			return false;
		}

		public void Uninitialize()
		{
		}

		public AdPlacementCondition GetCondition(string inName)
		{
			return null;
		}

		public AdPlacementCondition GetCondition(string inPlacementName, string inConditionName)
		{
			return null;
		}

		public static string GetGlobalConditionRemoteConfigKey(string inConditionName)
		{
			return null;
		}

		public static string GetPlacementRemoteConfigKey(string inPlacementName)
		{
			return null;
		}

		public static string GetPlacementConditionRemoteConfigKey(string inPlacementName, string inConditionName)
		{
			return null;
		}

		public bool ShowPlacement(string inPlacementName)
		{
			return false;
		}

		public bool HidePlacement(string inPlacementName)
		{
			return false;
		}

		public bool IsAdAvailable(string inPlacementName)
		{
			return false;
		}

		public bool IsAdAvailable(AdType inType, string inAdSpaceName)
		{
			return false;
		}

		public void Fetch(AdType inType, string inAdSpaceName, BannerPosition inBannerPosition = BannerPosition.BottomCenter)
		{
		}

		private void HookPlacementEvents(AdPlacement inPlacement)
		{
		}

		private void UnhookPlacementEvents(AdPlacement inPlacement)
		{
		}

		private void OnAdPlacementClicked(string inPlacementName, AdService inService, AdType inAdType, string inAdSpaceName)
		{
		}

		private void OnAdPlacementOpened(string inPlacementName, AdService inService, AdType inAdType, string inAdSpaceName)
		{
		}

		private void OnAdPlacementFailed(string inPlacementName, AdService inService, AdType inAdType, string inAdSpaceName, string inError)
		{
		}

		private void OnAdPlacementReceived(string inPlacementName, AdService inService, AdType inAdType, string inAdSpaceName)
		{
		}

		private void OnAdPlacementFailedToReceive(string inPlacementName, AdService inService, AdType inAdType, string inAdSpaceName)
		{
		}

		private void OnAdPlacementWillLeaveApplication(string inPlacementName, AdService inService, AdType inAdType, string inAdSpaceName)
		{
		}

		private void OnAdPlacementDismissed(string inPlacementName, AdService inService, AdType inAdType, string inAdSpaceName, bool inCompleted)
		{
		}

		private void OnAdPlacementFinished(string inPlacementName, bool inFailed, bool inCompleted)
		{
		}

		public void AddCondition(string inName, AdPlacementCondition inCondition)
		{
		}

		public void RemoveCondition(string inName)
		{
		}

		public void AddCondition(string inPlacementName, string inConditionName, AdPlacementCondition inCondition)
		{
		}

		public void RemoveCondition(string inPlacementName, string inConditionName)
		{
		}
	}
}
