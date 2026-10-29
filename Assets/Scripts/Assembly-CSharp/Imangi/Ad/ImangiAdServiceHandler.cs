using System.Collections.Generic;
using Imangi.Utilities;
using UnityEngine;

namespace Imangi.Ad
{
	public class ImangiAdServiceHandler : MonoBehaviour
	{
		public AdManager AdMngr;

		protected AdService _Service;

		protected bool _Initialized;

		protected bool _IsEnabled;

		protected bool _VerboseLogging;

		public Dictionary<string, string> AdSpaceNameMappings;

		public Dictionary<string, string> AdSpaceNameUnmappings;

		public const string TestAdSpaceName_Video = "NetworkTest_Video";

		protected string _TestMappedAdSpaceName_Video;

		protected string _CurrentAdSpaceName_Video;

		public const string TestAdSpaceName_Card = "NetworkTest";

		protected string _TestMappedAdSpaceName_Card;

		protected string _CurrentAdSpaceName_Card;

		public const string TestAdSpaceName_Banner = "NetworkTest_Banner";

		protected string _TestMappedAdSpaceName_Banner;

		protected string _CurrentAdSpaceName_Banner;

		public bool Initialized => false;

		public bool IsEnabled => false;

		public static bool IsPrivacyCompliant(AdService inService)
		{
			return false;
		}

		public static bool SupportsVideoAds(AdService inService)
		{
			return false;
		}

		public static bool SupportsCardAds(AdService inService)
		{
			return false;
		}

		public static bool SupportsBannerAds(AdService inService)
		{
			return false;
		}

		public virtual bool IsAvailableOnDevice(AdType inType, bool inAnyAdType = false)
		{
			return false;
		}

		protected virtual ApplicationVersionInfo GetMinimumCompatibleOSVersion()
		{
			return null;
		}

		protected virtual ApplicationVersionInfo GetMaximumCompatibleOSVersion()
		{
			return null;
		}

		protected bool IsCompatibleWithOSVersion()
		{
			return false;
		}

		protected virtual int GetRequiredMinimumDeviceMemoryInMegabytes()
		{
			return 0;
		}

		protected bool DeviceHasSufficientMemory()
		{
			return false;
		}

		public virtual bool PreInit(AdManager inAdMngr, AdService inService)
		{
			return false;
		}

		public virtual bool InitializeAdServiceHandler(AdManager inAdMngr, bool inPrivacyCompliantRequired, bool inHasConsent, bool inIsAgeRestricted, bool isCCPA, AdServiceInitializationInfo inInitInfo, bool adMobInitStatusPrivacyFlow = false)
		{
			return false;
		}

		public virtual void ShutdownAdServiceHandler(AdManager inAdMngr)
		{
		}

		public virtual void EnableAdServiceHandler()
		{
		}

		public virtual void DisableAdServiceHandler()
		{
		}

		public virtual bool ReapplyConsentSettings(bool inHasConsent, bool inIsAgeRestricted)
		{
			return false;
		}

		public virtual void SetVerboseLogging(bool inVerbose)
		{
		}

		public virtual void SetPrivacyFlags(bool hasConsent, bool trackingEnabled)
		{
		}

		public virtual void SetupAdSpaceNameMappings(AdServiceInitializationInfo inInitInfo)
		{
		}

		public virtual string GetMappedAdSpaceName(AdType inAdType, string inAdSpaceName, bool inIsFetch)
		{
			return null;
		}

		public virtual string GetUnmappedAdSpaceName(AdType inAdType, string inMappedAdSpaceName)
		{
			return null;
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

		public void OnAdOpened(AdType inType, string inAdSpaceName)
		{
		}

		public void OnAdClicked(AdType inType, string inAdSpaceName)
		{
		}

		public void OnAdDismissed(AdType inType, string inAdSpaceName, bool inCompleted)
		{
		}

		public void OnAdFailed(AdType inType, string inAdSpaceName, string inError)
		{
		}

		public void OnAdWillLeaveApplication(AdType inType, string inAdSpaceName)
		{
		}

		public virtual void ServiceInitializeCompleted(bool inPreGameCall, bool inSuccessful)
		{
		}

		public virtual void AdClicked(bool inPreGameCall, AdType inAdType, string inMappedAdSpaceName)
		{
		}

		public virtual void AdOpened(bool inPreGameCall, AdType inAdType, string inMappedAdSpaceName)
		{
		}

		public virtual void AdFailed(bool inPreGameCall, AdType inAdType, string inMappedAdSpaceName, string inError)
		{
		}

		public virtual void AdReceived(bool inPreGameCall, AdType inAdType, string inMappedAdSpaceName)
		{
		}

		public virtual void AdFailedToReceive(bool inPreGameCall, AdType inAdType, string inMappedAdSpaceName)
		{
		}

		public virtual void AdWillLeaveApplication(bool inPreGameCall, AdType inAdType, string inMappedAdSpaceName)
		{
		}

		public virtual void AdDismissed(bool inPreGameCall, AdType inAdType, string inMappedAdSpaceName, bool inCompleted)
		{
		}
	}
}
