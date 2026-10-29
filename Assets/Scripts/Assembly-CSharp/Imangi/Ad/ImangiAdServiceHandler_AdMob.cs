using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Api;
using UnityEngine;

namespace Imangi.Ad
{
	public class ImangiAdServiceHandler_AdMob : ImangiAdServiceHandler
	{
		public class AdMob_AdInfo
		{
			public ImangiAdServiceHandler_AdMob Handler;

			public AdType Type;

			public AdState State;

			public string AdUnitID;

			public string LastError;

			public bool CompletedWatch;

			public bool WasClicked;

			public AdMob_AdInfo(ImangiAdServiceHandler_AdMob inHandler, AdType inAdType, string inAdUnitID)
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

		public class AdMob_AdInfo_Card : AdMob_AdInfo
		{
			public InterstitialAd _interstitialAd;

			public AdMob_AdInfo_Card(ImangiAdServiceHandler_AdMob inHandler, string inAdUnitID)
				: base(null, AdType.Video, null)
			{
			}

			private void RegisterEventHandlers(InterstitialAd interstitialAd)
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

		public class AdMob_AdInfo_Video : AdMob_AdInfo
		{
			private RewardedAd _rewardedAd;

			public AdMob_AdInfo_Video(ImangiAdServiceHandler_AdMob inHandler, string inAdUnitID)
				: base(null, AdType.Video, null)
			{
			}

			private void RegisterEventHandlers(RewardedAd ad)
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

		public class AdMob_AdInfo_Banner : AdMob_AdInfo
		{
			private BannerView _bannerView;

			public GameObject AdLoadedStatus;

			private Color _BackgroundColor;

			private AdPosition _BannerAdPosition;

			public AdMob_AdInfo_Banner(ImangiAdServiceHandler_AdMob inHandler, string inAdUnitID)
				: base(null, AdType.Video, null)
			{
			}

			public void SetAdBannerPosition(BannerPosition inBannerPosition)
			{
			}

			public override void FetchAd_Internal(BannerPosition inBannerPosition = BannerPosition.TopCenter)
			{
			}

			public void CreateBannerView()
			{
			}

			public override bool DisplayAd_Internal(string inPlacement = "", bool byPass = false)
			{
				return false;
			}

			public override void HideAd_Internal()
			{
			}

			public void HideBannerAd()
			{
			}

			public void DestroyAd()
			{
			}

			public void ShowBannerAd()
			{
			}

			private void RegisterEventHandlers()
			{
			}
		}

		[CompilerGenerated]
		private sealed class _003CRetryFetchCoroutine_003Ed__30 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public int retryCount;

			public ImangiAdServiceHandler_AdMob _003C_003E4__this;

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
			public _003CRetryFetchCoroutine_003Ed__30(int _003C_003E1__state)
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

		private Dictionary<string, AdMob_AdInfo_Card> _InterstitialMap;

		private Dictionary<string, AdMob_AdInfo_Video> _RewardedVideoMap;

		private Dictionary<string, AdMob_AdInfo_Banner> _BannerMap;

		private bool _HasConsent;

		private bool _IsAgeRestricted;

		public bool HasConsent => false;

		public bool IsAgeRestricted => false;

		public override bool InitializeAdServiceHandler(AdManager inAdMngr, bool inPrivacyCompliantRequired, bool inHasConsent, bool inIsAgeRestricted, bool isCCPA, AdServiceInitializationInfo inInitInfo, bool adMobInitStatusPrivacyFlow = false)
		{
			return false;
		}

		public override void ShutdownAdServiceHandler(AdManager inAdMngr)
		{
		}

		public override bool ReapplyConsentSettings(bool inHasConsent, bool inIsAgeRestricted)
		{
			return false;
		}

		private AdMob_AdInfo GetAdInfo(AdType inAdType, string inAdUnitId, bool inCreateIfNotFound)
		{
			return null;
		}

		private AdMob_AdInfo_Video GetRewardedVideoAdInfo(string inAdUnitId, bool inCreateIfNotFound)
		{
			return null;
		}

		public AdMob_AdInfo_Card GetInterstitialAdInfo(string inAdUnitId, bool inCreateIfNotFound)
		{
			return null;
		}

		private AdMob_AdInfo_Banner GetBannerAdInfo(string inAdUnitId, bool inCreateIfNotFound)
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

		[IteratorStateMachine(typeof(_003CRetryFetchCoroutine_003Ed__30))]
		private IEnumerator RetryFetchCoroutine(AdType inType, string inAdUnitID, int retryCount)
		{
			return null;
		}

		protected void AdMob_Handler_OnAdCached(AdType inAdType, string inAdUnitID)
		{
		}

		protected void AdMob_Handler_OnAdCacheFailed(AdType inAdType, string inAdUnitID, string inError)
		{
		}

		protected void AdMob_Handler_OnAdOpened(AdType inAdType, string inAdUnitID)
		{
		}

		protected void AdMob_Handler_OnAdFailed(AdType inAdType, string inAdUnitID, string inError)
		{
		}

		protected void AdMob_Handler_OnAdDismissed(AdType inAdType, string inAdUnitID, bool inComplete)
		{
		}

		protected void AdMob_Handler_OnAdClicked(AdType inAdType, string inAdUnitID)
		{
		}

		protected void AdMob_Handler_OnAdClosed(AdType inAdType, string inAdUnitID)
		{
		}

		protected void AdMob_Handler_OnAdWillLeaveApplication(AdType inAdType, string inAdUnitID)
		{
		}

		protected void AdMob_Handler_OnAdStarted(AdType inAdType, string inAdUnitID)
		{
		}

		public void OnInterstitialLoadedEvent(string inAdUnitId)
		{
		}

		public void OnInterstitialFailedToLoadEvent(string inAdUnitId, int inErrorCode)
		{
		}

		public void OnInterstitialFailedToDisplayEvent(string inAdUnitId, int inErrorCode)
		{
		}

		public void OnInterstitialDismissedEvent(string inAdUnitId)
		{
		}

		public void OnInterstitialDisplayedEvent(string inAdUnitId, MaxSdkBase.AdInfo inAdInfo)
		{
		}

		public void OnRewardedAdLoadedEvent(string inAdUnitId)
		{
		}

		public void OnRewardedAdFailedToLoadEvent(string inAdUnitId, int inErrorCode)
		{
		}

		public void OnRewardedAdFailedToDisplayEvent(string inAdUnitId, int inErrorCode)
		{
		}

		public void OnRewardedAdDisplayedEvent(string inAdUnitId)
		{
		}

		public void OnRewardedAdClickedEvent(string inAdUnitId)
		{
		}

		public void OnRewardedAdReceivedRewardEvent(string inAdUnitId, MaxSdkBase.Reward inReward)
		{
		}

		public void OnRewardedAdDismissedEvent(string inAdUnitId)
		{
		}

		public void OnBannerLoadedEvent(string inAdUnitId)
		{
		}

		public void OnBannerLoadFailedEvent(string inAdUnitId, int inErrorCode)
		{
		}

		public void OnBannerClickedEvent(string inAdUnitId)
		{
		}

		public void OnBannerExpandedEvent(string inAdUnitId)
		{
		}

		public void OnBannerCollapsedEvent(string inAdUnitId)
		{
		}
	}
}
