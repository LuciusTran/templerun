using System;
using System.Collections.Generic;

public class ErrorHandler
{
	private static Dictionary<int, string> _ErrorCodeToString;

	private static string _ErrorCodesConfigName;

	public const int PromoErrors = 1000;

	public const int PromoFileErrors = 1000;

	public const int PromoFileNotEnoughSpaceError = 1001;

	public const int PromoFileNotFoundError = 1002;

	public const int PromoFileUnhandledWriteError = 1003;

	public const int PromoFileUnhandledReadError = 1004;

	public const int PromoDataErrors = 1100;

	public const int PromoDataNoRegionDataError = 1101;

	public const int PromoDataNoCharacterDataError = 1102;

	public const int PromoDataInvalidShippedPromoError = 1103;

	public const int PromoDataInvalidDownloadedPromoError = 1104;

	public const int PromoDataInvalidCachedPromoError = 1105;

	public const int PromoDataNoCoinSetDataError = 1106;

	public const int PromoLineParseErrors = 1200;

	public const int PromoLineParseAdsError = 1201;

	public const int PromoLineParseAdsPauseGameError = 1202;

	public const int PromoLineParseAdServiceError = 1203;

	public const int PromoLineParseAnalyticsError = 1205;

	public const int PromoLineParseSharedAttachmentBundleConfigDatarror = 1206;

	public const int PromoLineParseAttachmentBundleConfigError = 1207;

	public const int PromoLineParseCharacterAttachmentError = 1208;

	public const int PromoLineParseSpecificAttachmentDataError = 1209;

	public const int PromoLineParseSpecificAttachmentCharDataError = 1210;

	public const int PromoLineParseDailyRewardTableError = 1211;

	public const int PromoLineParseStreakChestsError = 1212;

	public const int PromoLineParseDailyChallengeError = 1213;

	public const int PromoLineParseWeeklyChallengeError = 1214;

	public const int PromoLineParseComeBackNotifyError = 1215;

	public const int PromoLineParseDailyChallengeNotifyError = 1216;

	public const int PromoLineParseCharacterDisplayOrderError = 1217;

	public const int PromoLineParseCharacterStoreListError = 1218;

	public const int PromoLineParseDynamicCharactersSetupError = 1219;

	public const int PromoLineParseCharacterBundleConfigError = 1220;

	public const int PromoLineParseCollectableError = 1221;

	public const int PromoLineParseCollectablesDefinitionBundleConfigError = 1222;

	public const int PromoLineParseCollectablesGenericBundleConfigError = 1223;

	public const int PromoLineParseCollectablesCategoryBundleConfigError = 1224;

	public const int PromoLineParseDealDataError = 1225;

	public const int PromoLineParseForceUpdateError = 1226;

	public const int PromoLineParseNextPromoTimeError = 1227;

	public const int PromoLineParseAwardError = 1228;

	public const int PromoLineParseGemProbabilityError = 1229;

	public const int PromoLineParseSaveMeError = 1230;

	public const int PromoLineParseWheelBonusItemsError = 1231;

	public const int PromoLineParseChestError = 1232;

	public const int PromoLineParseInGameChestsLevelsError = 1233;

	public const int PromoLineParseClipsError = 1235;

	public const int PromoLineParseMerchandiseError = 1236;

	public const int PromoLineParseProductDataError = 1237;

	public const int PromoLineParsePromoConfigError = 1238;

	public const int PromoLineParsePromoPopupError = 1239;

	public const int PromoLineParseRegionChallegeGuidError = 1240;

	public const int PromoLineParseRegionBundleConfigDataError = 1241;

	public const int PromoLineParseRegionOrderError = 1242;

	public const int PromoLineParseSupportDataError = 1243;

	public const int PromoLineParseABTestsConfigError = 1244;

	public const int PromoLineParseABTestError = 1245;

	public const int PromoLineParseFeatureStateError = 1246;

	public const int PromoLineParseLocalNotifError = 1251;

	public const int PromoLineParseCoinSetBundleConfigDataError = 1260;

	public const int PromoLineParseCoinSetError = 1261;

	public const int PromoLineParseWelcomeScreenError = 1262;

	public const int PromoLineParseWebTextureBundleInfoError = 1264;

	public const int PromoLineParseDeviceMapError = 1265;

	public const int PromoLineParseDeviceConfigError = 1266;

	public const int PromoLineParseMissionConfigError = 1267;

	public const int PromoLineParseRewardedAdsError = 1268;

	public const int PromoLineParseTRGameServicesError = 1269;

	public const int PromoLineParseTRGameSharingError = 1270;

	public const int PromoLineParsePrivacyError = 1271;

	public const int PromoLineParseBannerAdsError = 1272;

	public const int PromoLineParseCoinSpawnError = 1273;

	public const int PromoLineParseControlsError = 1280;

	public const int PromoLineParsePlayerError = 1281;

	public const int PromoLineParseIAPError = 1282;

	public const int PromoLineParseStoreError = 1283;

	public const int PromoLineParseRAMThresholdError = 1284;

	public const int BundleErrors = 2000;

	public const int BundleGenericErrors = 2000;

	public const int BundleGenericNotEnoughSpaceError = 2001;

	public const int BundleGenericShippedCorruptError = 2002;

	public const int BundleGenericDownloadCorruptError = 2003;

	public const int BundleRegionDownloadErrors = 2100;

	public const int BundleRegionDownloadGenericError = 2101;

	public const int BundleRegionDownloadNotFoundError = 2102;

	public const int BundleRegionDownloadHostNotFoundError = 2103;

	public const int BundleRegionDownloadReachabilityTimeOutError = 2104;

	public const int BundleRegionDownloadTimeOutError = 2105;

	public const int BundleRegionDownloadInvalidCertificateError = 2106;

	public const int BundleRegionDownloadNetworkUnavailableError = 2107;

	public const int BundleRegionDownloadNotSupportedError = 2108;

	public const int BundleContentUpdateErrors = 2200;

	public const int BundleContentUpdateDownloadFailedError = 2201;

	public const int BundleCoinSetErrors = 2300;

	public const int BundleCoinSetDefaultFailedToLoad = 2301;

	public const int GameServicesErrors = 3000;

	public const int GameServicesGenericErrors = 3000;

	public const int GameServicesGenericNotSupportedError = 3001;

	public const int GameServicesGenericNotSignedInError = 3002;

	public const int GameServicesNoConsentError = 3003;

	public const int GameServicesFriendsErrors = 3100;

	public const int GameServicesFriendsNotSupportedError = 3101;

	public const int GameServicesFriendsNoConsentError = 3102;

	public const int GameServicesAchievementsErrors = 3200;

	public const int GameServicesAchievementsNotSupportedError = 3201;

	public const int GameServicesAchievementsNoConsentError = 3202;

	public const int GameServicesLeaderboardErrors = 3300;

	public const int GameServicesLeaderboardNotSupportedError = 3301;

	public const int GameServicesLeaderboardsNoConsentError = 3302;

	public const int RegionChallenegeErrors = 4000;

	public const int RegionChallengeGenericErrors = 4000;

	public const int RegionChallengeGenericRegionNotSupportedError = 4001;

	public const int RegionChallengeGenericActivateFailedError = 4002;

	public const int RegionChallengeGenericMissingChallengeError = 4003;

	public const int NetworkErrors = 5000;

	public const int NetworkGenericErrors = 5000;

	public const int NetworkGenericNetworkUnavailableError = 5001;

	public const int StoreErrors = 6000;

	public const int StoreGenericErrors = 6000;

	public const int StoreGenericLostConnectionError = 6001;

	public const int StoreGenericUnhandledError = 6002;

	public const int DemoErrors = 7000;

	public const int DemoGenericErrors = 7000;

	public const int DemoFeatureNotAvailableError = 7001;

	public const int SupportErrors = 8000;

	public const int SupportGenericErrors = 8000;

	public const int SupportGenericInvalidCodeError = 8001;

	public const int SupportReimbursementsFailedError = 8002;

	public const int SharingErrors = 9000;

	public const int SharingGenericErrors = 9000;

	public const int SharingNotSupported = 9001;

	public const int SharingNoConsent = 9002;

	public static void Initialize()
	{
	}

	private static string GetTitleString(int inCode)
	{
		return null;
	}

	private static string GetErrorString(int inCode, List<int> inUsedCodes = null)
	{
		return null;
	}

	public static void ContinueError(int inCode, Action inCallback = null)
	{
	}

	public static void ContinueError(int inCode, string inStringArg, Action inCallback = null)
	{
	}

	public static void FatalError(int inCode)
	{
	}
}
