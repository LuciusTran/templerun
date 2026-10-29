using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace Imangi.Ad
{
	public class AdManager : MonoBehaviour
	{
		public delegate void AdEventDelegate_String(AdService inService, AdType inType, string inString);

		public delegate void AdEventDelegate_StringString(AdService inService, AdType inType, string inString0, string inString1);

		public delegate void AdEventDelegate_StringBool(AdService inService, AdType inAdType, string inString, bool inBool);

		public const string LogChannel = "Ad";

		public const string RemoteConfigKey = "AdManager";

		public const string AdServiceInfosKey = "AdServiceInfos";

		protected static AdServicePlatform CurrentPlatform;

		public AdService ActiveService;

		public ImangiAdServiceHandler ActiveServiceHandler;

		public AdServiceInitInfo ServiceInitInfo;

		protected static AdManager Instance;

		protected static GameObject ImangiAdGameObj;

		protected bool _RequirePrivacyCompliantNetworks;

		protected bool _IsCCPA;

		protected bool _HasConsent;

		protected bool _IsAgeRestricted;

		protected bool _adMobInitStatusPrivacyFlow;

		public List<string> PrefetchVideoNames;

		public List<string> PrefetchCardNames;

		public List<string> PrefetchBannerNames;

		[CompilerGenerated]
		private AdEventDelegate_String m_OnAdClickedEvent;

		[CompilerGenerated]
		private AdEventDelegate_String m_OnAdOpenedEvent;

		[CompilerGenerated]
		private AdEventDelegate_StringString m_OnAdFailedEvent;

		[CompilerGenerated]
		private AdEventDelegate_String m_OnAdReceivedEvent;

		[CompilerGenerated]
		private AdEventDelegate_String m_OnAdFailedToReceiveEvent;

		[CompilerGenerated]
		private AdEventDelegate_String m_OnAdWillLeaveApplicationEvent;

		[CompilerGenerated]
		private AdEventDelegate_StringBool m_OnAdDismissedEvent;

		protected bool _InitializationCompleted;

		protected const float _InitializationDelay = 1.5f;

		protected static bool _UseTestAdSpaceNames;

		protected static bool _UseTestDevicesIfAvailable;

		protected static bool ImangiAd_VerboseLogging;

		public const string AdError_ServiceNotFound = "ServiceNotFound";

		public const string AdError_ServiceDisabled = "ServiceDisabled";

		public const string AdError_NotPrivacyCompliant = "NotPrivacyCompliant";

		public const string AdError_NoConnection = "NoConnection";

		public const string AdError_InvalidType = "InvalidType";

		public const string AdError_AdNotAvailable = "AdNotAvailable";

		public const string AdError_ProviderInternal = "ProviderInternal";

		public const string AdError_MissingImplementation = "MissingImplementation";

		public const string AdError_ClassNotFound = "ClassNotFound";

		public const string AdError_VideoAdsDisabled = "VideoAdsDisabled";

		public const string AdError_CardAdsDisabled = "CardAdsDisabled";

		public const string AdError_NotInitialized = "NotInitialized";

		private bool _ActiveServiceExplicitlySet;

		private readonly Dictionary<AdType, string> _LastAdLoadError;

		public bool Initialized => false;

		public static bool UseTestAdSpaceNames
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public static bool UseTestDevicesIfAvailable
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public event AdEventDelegate_String OnAdClickedEvent
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

		public event AdEventDelegate_String OnAdOpenedEvent
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

		public event AdEventDelegate_StringString OnAdFailedEvent
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

		public event AdEventDelegate_String OnAdReceivedEvent
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

		public event AdEventDelegate_String OnAdFailedToReceiveEvent
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

		public event AdEventDelegate_String OnAdWillLeaveApplicationEvent
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

		public event AdEventDelegate_StringBool OnAdDismissedEvent
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

		public static AdServicePlatform GetCurrentPlatform()
		{
			return AdServicePlatform.iOS;
		}

		public static bool GetVerboseLogging()
		{
			return false;
		}

		public static void SetVerboseLogging(bool inVerbose)
		{
		}

		protected AdManager()
		{
		}

		public static AdManager GetInstance()
		{
			return null;
		}

		public static string GetAdServiceAnalyticCode(AdService inService)
		{
			return null;
		}

		protected void UpdateVerboseLoggingOnActiveService(bool inOnlyIfEnabled)
		{
		}

		protected static T InstanceAdServiceHandler<T>(AdService inService) where T : ImangiAdServiceHandler
		{
			return null;
		}

		protected static void DestroyAdService(AdService inRemoveService, string inReason)
		{
		}

		protected static ImangiAdServiceHandler CreateAdServiceHandler(AdService inService)
		{
			return null;
		}

		protected virtual bool InitializeAdService(AdService inService, AdPlatformInitializationInfo inPlatformInitInfo)
		{
			return false;
		}

		protected void InitializeAdServiceHandler(bool bypass = false)
		{
		}

		public virtual void InitializeAdServices(AdServicePlatform inPlatform, bool inRequirePrivacyCompliantNetworks = false, bool inHasConsent = true, bool inIsAgeRestricted = false, bool isCCPA = false, string[] inPrefetchVideoNames = null, string[] inPrefetchCardNames = null, string[] inPrefetchBannerNames = null, string inAdInitFilename = "", bool bypass = false, bool adMobInitStatusPrivacyFlow = false)
		{
		}

		public virtual bool ReapplyConsentSettings(bool inRequirePrivacyCompliantNetworks, bool inHasConsent, bool inIsAgeRestricted, bool isCCPA)
		{
			return false;
		}

		public void SetActiveService(AdService inActiveService)
		{
		}

		public void ForceActiveService(AdService inService)
		{
		}

		public void EnableAdMobFallback()
		{
		}

		public bool IsAdServiceEnabled(AdType inType)
		{
			return false;
		}

		public virtual void FetchAd_Video(string inAdSpaceName)
		{
		}

		public virtual void RemoveAd_Video(string inAdSpaceName)
		{
		}

		public virtual void DisplayAd_Video(string inAdSpaceName, string inPlacement = "")
		{
		}

		protected virtual bool IsAdAvailable_Video_Internal(string inAdSpaceName)
		{
			return false;
		}

		protected virtual bool IsAdAvailable_Video(string inAdSpaceName)
		{
			return false;
		}

		public virtual void FetchAd_Card(string inAdSpaceName)
		{
		}

		public virtual void RemoveAd_Card(string inAdSpaceName)
		{
		}

		public virtual void DisplayAd_Card(string inAdSpaceName, string inPlacement = "")
		{
		}

		protected virtual bool IsAdAvailable_Card_Internal(string inAdSpaceName)
		{
			return false;
		}

		protected virtual bool IsAdAvailable_Card(string inAdSpaceName)
		{
			return false;
		}

		public virtual void FetchAd_Banner(string inAdSpaceName, BannerPosition inBannerPosition)
		{
		}

		public virtual void RemoveAd_Banner(string inAdSpaceName)
		{
		}

		public virtual void DisplayAd_Banner(string inAdSpaceName, string inPlacement = "")
		{
		}

		public virtual void HideAd_Banner(string inAdSpaceName)
		{
		}

		protected virtual bool IsAdAvailable_Banner_Internal(string inAdSpaceName)
		{
			return false;
		}

		protected virtual bool IsAdAvailable_Banner(string inAdSpaceName)
		{
			return false;
		}

		public virtual void FetchAd(AdType inType, string inAdSpaceName, BannerPosition inBannerPosition = BannerPosition.BottomCenter)
		{
		}

		public virtual void RemoveAd(AdType inType, string inAdSpaceName)
		{
		}

		public virtual void HideAd(AdType inType, string inAdSpaceName)
		{
		}

		public virtual bool IsAdAvailable(AdType inType, string inAdSpaceName)
		{
			return false;
		}

		public virtual void DisplayAdForced(AdType inType, string inAdSpaceName, string inPlacement = "")
		{
		}

		public virtual void DisplayAd(AdType inType, string inAdSpaceName, string inPlacement = "")
		{
		}

		public void PrefetchVideos()
		{
		}

		public void PrefetchCards()
		{
		}

		public void PrefetchBanners()
		{
		}

		protected virtual void FetchAd_Internal(AdType inType, string inAdSpaceName, BannerPosition inBannerPosition = BannerPosition.BottomCenter)
		{
		}

		protected virtual void RemoveAd_Internal(AdType inType, string inAdSpaceName)
		{
		}

		protected virtual void HideAd_Internal(AdType inType, string inAdSpaceName)
		{
		}

		protected virtual void DisplayAd_Internal(AdType inType, string inAdSpaceName, string inPlacement = "", bool forced = false)
		{
		}

		public void Ad_ServiceInitializeSuccessful(AdService inService)
		{
		}

		public void Ad_ServiceInitializeFailed(AdService inService, string inError)
		{
		}

		public void AdClicked(AdService inService, AdType inType, string inAdSpaceName)
		{
		}

		public void AdOpened(AdService inService, AdType inType, string inAdSpaceName)
		{
		}

		public void AdFailed(AdService inService, AdType inType, string inAdSpaceName, string inError)
		{
		}

		public void RecordAdLoadError(AdType inType, string inError)
		{
		}

		public string GetLastAdLoadError(AdType inType)
		{
			return null;
		}

		public void AdReceived(AdService inService, AdType inType, string inAdSpaceName)
		{
		}

		public void AdFailedToReceive(AdService inService, AdType inType, string inAdSpaceName)
		{
		}

		public void AdWillLeaveApplication(AdService inService, AdType inType, string inAdSpaceName)
		{
		}

		public void AdDismissed(AdService inService, AdType inType, string inAdSpaceName, bool inCompleted)
		{
		}
	}
}
