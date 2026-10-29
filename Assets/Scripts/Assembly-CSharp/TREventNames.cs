using System.Collections.Generic;

public static class TREventNames
{
	public const string Initialize = "Initialize";

	public const string DelayedInitialize = "DelayedInitialize";

	public const string NewInstall = "NewInstall";

	public const string NewUpdate = "NewUpdate";

	public const string UserABTest = "UserABTest";

	public const string Attributes = "Attributes";

	public const string Metrics = "Metrics";

	public const string BeginPrivacyConsentFlow = "BeginPrivacyConsentFlow";

	public const string EndPrivacyConsentFlow = "EndPrivacyConsentFlow";

	public const string BeginAppTrackingTransparencyFlow = "BeginAppTrackingTransparencyFlow";

	public const string EndAppTrackingTransparencyFlow = "EndAppTrackingTransparencyFlow";

	public const string PrivacyDowloadFailed = "PrivacyDowloadFailed";

	public const string PrivacyDownloadEmptyResp = "PrivacyDownloadEmptyResp";

	public const string PromoDowloadFailed = "PromoDownloadFailed";

	public const string PromoDownloadEmptyResp = "PromoDownloadEmptyResp";

	public const string ResetUIStack = "ResetUIStack";

	public const string DialogOpen = "DialogOpen";

	public const string DialogClose = "DialogClose";

	public const string RevivePromptOpen = "RevivePromptOpen";

	public const string RevivePromptClose = "RevivePromptClose";

	public const string StartRun = "StartOfRun";

	public const string EndRun = "EndOfRun";

	public const string EndFirstRun = "EndOfFirstRun";

	public const string QuitRun = "QuitRun";

	public const string TutorialDeath = "TutorialDeath";

	public const string TutorialStumble = "TutorialStumble";

	public const string TutorialExited = "TutorialExited";

	public const string TutorialSectionCompleteTurns = "TutorialSectionCompleteTurns";

	public const string TutorialSectionCompleteJumps = "TutorialSectionCompleteJumps";

	public const string TutorialSectionCompleteSlides = "TutorialSectionCompleteSlides";

	public const string TutorialSectionCompleteTilting = "TutorialSectionCompleteTilting";

	public const string TutorialSectionCompleteMeter = "TutorialSectionCompleteMeter";

	public const string SaveMe = "SaveMe";

	public const string InterstitialAdAvailable = "InterstitialAdAvailable";

	public const string InterstitialAdClicked = "InterstitialAdClicked";

	public const string InterstitialAdDismiss = "InterstitialAdDismiss";

	public const string InterstitialAdFailed = "InterstitialAdFailed";

	public const string InterstitialAdFetch = "InterstitialAdFetch";

	public const string InterstitialAdOpened = "InterstitialAdOpened";

	public const string InterstitialAdUnAvailable = "InterstitialAdUnAvailable";

	public const string VideoAdAvailable = "VideoAdAvailable";

	public const string VideoAdClicked = "VideoAdClicked";

	public const string VideoAdComplete = "VideoAdComplete";

	public const string VideoAdDismiss = "VideoAdDismiss";

	public const string VideoAdFailed = "VideoAdFailed";

	public const string VideoAdOpened = "VideoAdOpened";

	public const string VideoAdUnAvailable = "VideoAdUnAvailable";

	public const string BannerAdReceived = "BannerAdReceived";

	public const string BannerAdClicked = "BannerAdClicked";

	public const string BannerAdFailed = "BannerAdFailed";

	public const string AdInitRetry = "ad_init_retry";

	public const string AdInitRetryResult = "ad_init_retry_result";

	public const string AdInitRetryFirstImpression = "ad_init_retry_first_impression";

	public const string FirstIAP = "IAPFirstPurchase";

	public const string IAPStart = "IAPPurchaseStart";

	public const string IAPFailed = "IAPPurchaseFailed";

	public const string IAPCanceled = "IAPPurchaseCanceled";

	public const string IAPComplete = "IAPPurchaseComplete";

	public const string Scored25000 = "Scored_25000";

	public const string Scored50000 = "Scored_50000";

	public const string Scored100000 = "Scored_100000";

	public const string Scored250000 = "Scored_250000";

	public const string Scored500000 = "Scored_500000";

	public const string Scored1000000 = "Scored_1000000";

	public const string Scored2500000 = "Scored_2500000";

	public const string Scored5000000 = "Scored_5000000";

	public const string Scored10000000 = "Scored_10000000";

	public const string LifetimeRuns5 = "LifetimeRuns_5";

	public const string LifetimeRuns10 = "LifetimeRuns_10";

	public const string LifetimeRuns25 = "LifetimeRuns_25";

	public const string LifetimeRuns50 = "LifetimeRuns_50";

	public const string LifetimeRuns100 = "LifetimeRuns_100";

	public const string LifetimeRuns250 = "LifetimeRuns_250";

	public const string LifetimeRuns500 = "LifetimeRuns_500";

	public const string LifetimeRuns1000 = "LifetimeRuns_1000";

	public const string ScoreMultiplier11 = "ScoreMultiplierReached_11";

	public const string ScoreMultiplier13 = "ScoreMultiplierReached_13";

	public const string ScoreMultiplier16 = "ScoreMultiplierReached_16";

	public const string ScoreMultiplier21 = "ScoreMultiplierReached_21";

	public const string ScoreMultiplier31 = "ScoreMultiplierReached_31";

	public const string ScoreMultiplier41 = "ScoreMultiplierReached_41";

	public const string ScoreMultiplier51 = "ScoreMultiplierReached_51";

	public const string ScoreMultiplier61 = "ScoreMultiplierReached_61";

	public const string ScoreMultiplier67 = "ScoreMultiplierReached_67";

	public const string InterstitialAdsSeen2 = "InterstitialAdsSeen_2";

	public const string InterstitialAdsSeen3 = "InterstitialAdsSeen_3";

	public const string InterstitialAdsSeen5 = "InterstitialAdsSeen_5";

	public const string InterstitialAdsSeen10 = "InterstitialAdsSeen_10";

	public const string InterstitialAdsSeen25 = "InterstitialAdsSeen_25";

	public const string VideoAdsWatched2 = "VideoAdsWatched_2";

	public const string VideoAdsWatched3 = "VideoAdsWatched_3";

	public const string VideoAdsWatched5 = "VideoAdsWatched_5";

	public const string VideoAdsWatched10 = "VideoAdsWatched_10";

	public const string VideoAdsWatched25 = "VideoAdsWatched_25";

	public const string gc_milestone1_complete = "gc_milestone1_complete";

	public const string gc_milestone6_complete = "gc_milestone6_complete";

	private static readonly HashSet<string> AllEvents;

	private static HashSet<string> _Disabled;

	static TREventNames()
	{
	}

	public static bool EventExists(string inEvent)
	{
		return false;
	}

	public static bool EventEnabled(string inEvent)
	{
		return false;
	}

	public static void EnableEvent(string inEvent, bool inEnable)
	{
	}
}
