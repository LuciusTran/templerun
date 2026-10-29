using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace Imangi.Ad
{
	public class ImangiAdServiceHandler_AppLovin : ImangiAdServiceHandler
	{
		public class AppLovin_AdInfo
		{
			public ImangiAdServiceHandler_AppLovin Handler;

			public AdType Type;

			public AdState State;

			public string AdUnitID;

			public string LastError;

			public bool CompletedWatch;

			public bool WasClicked;

			public AppLovin_AdInfo(ImangiAdServiceHandler_AppLovin inHandler, AdType inAdType, string inAdUnitID)
			{
			}

			public virtual bool IsValid(bool inFetching)
			{
				return false;
			}

			public virtual void Reset()
			{
			}

			public virtual bool ShouldFetchAd()
			{
				return false;
			}

			public bool CanDisplayAd()
			{
				return false;
			}

			public virtual void FetchAd_Internal(BannerPosition inBannerPosition)
			{
			}

			public virtual void FetchAd_Internal()
			{
			}

			public void FetchAd(BannerPosition inBannerPosition = BannerPosition.BottomCenter)
			{
			}

			public virtual bool IsAdAvailable_Internal()
			{
				return false;
			}

			public bool IsAdAvailable()
			{
				return false;
			}

			public virtual bool DisplayAd_Internal(string inPlacement = "", bool byPass = false)
			{
				return false;
			}

			public bool DisplayAd(string inPlacement = "", bool bypassflow = false)
			{
				return false;
			}

			public virtual void HideAd_Internal()
			{
			}

			public void HideAd()
			{
			}

			public void AdCached(string inAdUnitID)
			{
			}

			public void AdOpened(string inAdUnitID)
			{
			}

			public void AdFailed(string inAdUnitID, string inError)
			{
			}

			public void AdDismissed(string inAdUnitID)
			{
			}

			public void AdClicked(string inAdUnitID)
			{
			}

			public void AdCompleted(string inAdUnitID)
			{
			}

			public void AdWillLeaveApplication(string inAdUnitID)
			{
			}
		}

		public class AppLovin_AdInfo_Card : AppLovin_AdInfo
		{
			public AppLovin_AdInfo_Card(ImangiAdServiceHandler_AppLovin inHandler, string inAdUnitID)
				: base(null, AdType.Video, null)
			{
			}

			public override void FetchAd_Internal()
			{
			}

			public override bool IsAdAvailable_Internal()
			{
				return false;
			}

			public override bool DisplayAd_Internal(string inPlacement = "", bool byPass = false)
			{
				return false;
			}
		}

		public class AppLovin_AdInfo_Video : AppLovin_AdInfo
		{
			public AppLovin_AdInfo_Video(ImangiAdServiceHandler_AppLovin inHandler, string inAdUnitID)
				: base(null, AdType.Video, null)
			{
			}

			public override void FetchAd_Internal()
			{
			}

			public override bool IsAdAvailable_Internal()
			{
				return false;
			}

			public override bool DisplayAd_Internal(string inPlacement = "", bool byPass = false)
			{
				return false;
			}
		}

		public class AppLovin_AdInfo_Banner : AppLovin_AdInfo
		{
			private MaxSdkBase.BannerPosition _BannerAdPosition;

			private Color _BackgroundColor;

			public AppLovin_AdInfo_Banner(ImangiAdServiceHandler_AppLovin inHandler, string inAdUnitID)
				: base(null, AdType.Video, null)
			{
			}

			public void SetAdBannerPosition(BannerPosition inBannerPosition)
			{
			}

			public override void FetchAd_Internal(BannerPosition inBannerPosition = BannerPosition.BottomCenter)
			{
			}

			public override bool DisplayAd_Internal(string inPlacement = "", bool byPass = false)
			{
				return false;
			}

			public override void HideAd_Internal()
			{
			}
		}

		[CompilerGenerated]
		private sealed class _003CInitializeSDKCoroutine_003Ed__20 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public AdServiceInitializationInfo inInitInfo;

			object IEnumerator<object>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CInitializeSDKCoroutine_003Ed__20(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}
		}

		[CompilerGenerated]
		private sealed class _003CRetryFetchCoroutine_003Ed__40 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public int retryCount;

			public ImangiAdServiceHandler_AppLovin _003C_003E4__this;

			public AdType inType;

			public string inAdUnitID;

			object IEnumerator<object>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CRetryFetchCoroutine_003Ed__40(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}
		}

		private const float FetchRetryDelay = 4f;

		private const int MaxRetries = 8;

		private int _RetryCountVideo;

		private int _RetryCountInterstitial;

		private int _RetryCountBanner;

		private bool _InterstitialEventsHooked;

		private bool _RewardVideoEventsHooked;

		private bool _BannerEventsHooked;

		private Dictionary<string, AppLovin_AdInfo_Card> _InterstitialMap;

		private Dictionary<string, AppLovin_AdInfo_Video> _RewardedVideoMap;

		private Dictionary<string, AppLovin_AdInfo_Banner> _BannerMap;

		private bool _HasConsent;

		private bool _IsAgeRestricted;

		public bool HasConsent => false;

		public bool IsAgeRestricted => false;

		public override bool IsAvailableOnDevice(AdType inType, bool inAnyType = false)
		{
			return false;
		}

		public override void SetPrivacyFlags(bool hasConsent, bool trackingEnabled)
		{
		}

		public override bool InitializeAdServiceHandler(AdManager inAdMngr, bool inPrivacyCompliantRequired, bool inHasConsent, bool inIsAgeRestricted, bool isCCPA, AdServiceInitializationInfo inInitInfo, bool adMobInitStatusPrivacyFlow = false)
		{
			return false;
		}

		[IteratorStateMachine(typeof(_003CInitializeSDKCoroutine_003Ed__20))]
		private IEnumerator InitializeSDKCoroutine(AdServiceInitializationInfo inInitInfo)
		{
			return null;
		}

		private void OnSdkInitialized(MaxSdkBase.SdkConfiguration inSDKConfiguration)
		{
		}

		public override void ShutdownAdServiceHandler(AdManager inAdMngr)
		{
		}

		public override bool ReapplyConsentSettings(bool inHasConsent, bool inIsAgeRestricted)
		{
			return false;
		}

		protected void HookInterstitialEvents()
		{
		}

		protected void UnhookInterstitialEvents()
		{
		}

		protected void HookRewardVideoEvents()
		{
		}

		protected void UnhookRewardVideoEvents()
		{
		}

		protected void HookBannerEvents()
		{
		}

		protected void UnhookBannerEvents()
		{
		}

		private AppLovin_AdInfo GetAdInfo(AdType inAdType, string inAdUnitId, bool inCreateIfNotFound)
		{
			return null;
		}

		private AppLovin_AdInfo_Video GetRewardedVideoAdInfo(string inAdUnitId, bool inCreateIfNotFound)
		{
			return null;
		}

		private AppLovin_AdInfo_Card GetInterstitialAdInfo(string inAdUnitId, bool inCreateIfNotFound)
		{
			return null;
		}

		private AppLovin_AdInfo_Banner GetBannerAdInfo(string inAdUnitId, bool inCreateIfNotFound)
		{
			return null;
		}

		protected string ValidateOperation(AdType inType)
		{
			return null;
		}

		public override void FetchAd(AdType inType, string inAdUnitID, BannerPosition inBannerPosition = BannerPosition.BottomCenter)
		{
		}

		public override void HideAd(AdType inType, string inAdUnitID)
		{
		}

		public override bool IsAdAvailable(AdType inType, string inAdUnitID)
		{
			return false;
		}

		public override void DisplayAdForced(AdType inType, string inAdUnitID, string inPlacement = "")
		{
		}

		public override void DisplayAd(AdType inType, string inAdUnitID, string inPlacement = "")
		{
		}

		[IteratorStateMachine(typeof(_003CRetryFetchCoroutine_003Ed__40))]
		private IEnumerator RetryFetchCoroutine(AdType inType, string inAdUnitID, int retryCount)
		{
			return null;
		}

		private void OnAdRevenuePaidEvent(string adUnitId, MaxSdkBase.AdInfo impressionData)
		{
		}

		protected void AppLovin_Handler_OnAdCached(AdType inAdType, string inAdUnitID)
		{
		}

		protected void AppLovin_Handler_OnAdCacheFailed(AdType inAdType, string inAdUnitID, string inError)
		{
		}

		protected void AppLovin_Handler_OnAdOpened(AdType inAdType, string inAdUnitID)
		{
		}

		protected void AppLovin_Handler_OnAdFailed(AdType inAdType, string inAdUnitID, string inError)
		{
		}

		protected void AppLovin_Handler_OnAdDismissed(AdType inAdType, string inAdUnitID, bool inComplete)
		{
		}

		protected void AppLovin_Handler_OnAdClicked(AdType inAdType, string inAdUnitID)
		{
		}

		protected void AppLovin_Handler_OnAdClosed(AdType inAdType, string inAdUnitID)
		{
		}

		protected void AppLovin_Handler_OnAdWillLeaveApplication(AdType inAdType, string inAdUnitID)
		{
		}

		protected void AppLovin_Handler_OnAdStarted(AdType inAdType, string inAdUnitID)
		{
		}

		public void OnInterstitialLoadedEvent(string inAdUnitId, MaxSdkBase.AdInfo adInfo)
		{
		}

		public void OnInterstitialFailedToLoadEvent(string inAdUnitId, MaxSdkBase.ErrorInfo errorInfo)
		{
		}

		public void OnInterstitialFailedToDisplayEvent(string inAdUnitId, MaxSdkBase.ErrorInfo errorInfo, MaxSdkBase.AdInfo adInfo)
		{
		}

		public void OnInterstitialDismissedEvent(string inAdUnitId, MaxSdkBase.AdInfo adInfo)
		{
		}

		public void OnInterstitialDisplayedEvent(string inAdUnitId, MaxSdkBase.AdInfo inAdInfo)
		{
		}

		public void OnRewardedAdLoadedEvent(string inAdUnitId, MaxSdkBase.AdInfo adInfo)
		{
		}

		public void OnRewardedAdFailedToLoadEvent(string inAdUnitId, MaxSdkBase.ErrorInfo errorInfo)
		{
		}

		public void OnRewardedAdFailedToDisplayEvent(string inAdUnitId, MaxSdkBase.ErrorInfo errorInfo, MaxSdkBase.AdInfo adInfo)
		{
		}

		public void OnRewardedAdDisplayedEvent(string inAdUnitId, MaxSdkBase.AdInfo adInfo)
		{
		}

		public void OnRewardedAdClickedEvent(string inAdUnitId, MaxSdkBase.AdInfo adInfo)
		{
		}

		public void OnRewardedAdReceivedRewardEvent(string inAdUnitId, MaxSdkBase.Reward inReward, MaxSdkBase.AdInfo adInfo)
		{
		}

		public void OnRewardedAdDismissedEvent(string inAdUnitId, MaxSdkBase.AdInfo adInfo)
		{
		}

		public void OnBannerLoadedEvent(string inAdUnitId, MaxSdkBase.AdInfo adInfo)
		{
		}

		public void OnBannerLoadFailedEvent(string inAdUnitId, MaxSdkBase.ErrorInfo errorInfo)
		{
		}

		public void OnBannerClickedEvent(string inAdUnitId, MaxSdkBase.AdInfo adInfo)
		{
		}

		public void OnBannerExpandedEvent(string inAdUnitId, MaxSdkBase.AdInfo adInfo)
		{
		}

		public void OnBannerCollapsedEvent(string inAdUnitId, MaxSdkBase.AdInfo adInfo)
		{
		}
	}
}
