//Type is in global namespace

[Token(Token = "0x2000195")]
public class ErrorHandler
{
	[Token(Token = "0x4000E5E")]
	private static Dictionary<Int32, String> _ErrorCodeToString; //Field offset: 0x0
	[Token(Token = "0x4000EBF")]
	public const int GameServicesErrors = 3000; //Field offset: 0x0
	[Token(Token = "0x4000EBE")]
	public const int BundleCoinSetDefaultFailedToLoad = 2301; //Field offset: 0x0
	[Token(Token = "0x4000EBD")]
	public const int BundleCoinSetErrors = 2300; //Field offset: 0x0
	[Token(Token = "0x4000EBC")]
	public const int BundleContentUpdateDownloadFailedError = 2201; //Field offset: 0x0
	[Token(Token = "0x4000EBB")]
	public const int BundleContentUpdateErrors = 2200; //Field offset: 0x0
	[Token(Token = "0x4000EBA")]
	public const int BundleRegionDownloadNotSupportedError = 2108; //Field offset: 0x0
	[Token(Token = "0x4000EB9")]
	public const int BundleRegionDownloadNetworkUnavailableError = 2107; //Field offset: 0x0
	[Token(Token = "0x4000EB8")]
	public const int BundleRegionDownloadInvalidCertificateError = 2106; //Field offset: 0x0
	[Token(Token = "0x4000EB7")]
	public const int BundleRegionDownloadTimeOutError = 2105; //Field offset: 0x0
	[Token(Token = "0x4000EB6")]
	public const int BundleRegionDownloadReachabilityTimeOutError = 2104; //Field offset: 0x0
	[Token(Token = "0x4000EB5")]
	public const int BundleRegionDownloadHostNotFoundError = 2103; //Field offset: 0x0
	[Token(Token = "0x4000EB4")]
	public const int BundleRegionDownloadNotFoundError = 2102; //Field offset: 0x0
	[Token(Token = "0x4000EB3")]
	public const int BundleRegionDownloadGenericError = 2101; //Field offset: 0x0
	[Token(Token = "0x4000EB2")]
	public const int BundleRegionDownloadErrors = 2100; //Field offset: 0x0
	[Token(Token = "0x4000EB1")]
	public const int BundleGenericDownloadCorruptError = 2003; //Field offset: 0x0
	[Token(Token = "0x4000EB0")]
	public const int BundleGenericShippedCorruptError = 2002; //Field offset: 0x0
	[Token(Token = "0x4000EAF")]
	public const int BundleGenericNotEnoughSpaceError = 2001; //Field offset: 0x0
	[Token(Token = "0x4000EAE")]
	public const int BundleGenericErrors = 2000; //Field offset: 0x0
	[Token(Token = "0x4000EAD")]
	public const int BundleErrors = 2000; //Field offset: 0x0
	[Token(Token = "0x4000EAC")]
	public const int PromoLineParseRAMThresholdError = 1284; //Field offset: 0x0
	[Token(Token = "0x4000EAB")]
	public const int PromoLineParseStoreError = 1283; //Field offset: 0x0
	[Token(Token = "0x4000EAA")]
	public const int PromoLineParseIAPError = 1282; //Field offset: 0x0
	[Token(Token = "0x4000EA9")]
	public const int PromoLineParsePlayerError = 1281; //Field offset: 0x0
	[Token(Token = "0x4000EA8")]
	public const int PromoLineParseControlsError = 1280; //Field offset: 0x0
	[Token(Token = "0x4000EA7")]
	public const int PromoLineParseCoinSpawnError = 1273; //Field offset: 0x0
	[Token(Token = "0x4000EA6")]
	public const int PromoLineParseBannerAdsError = 1272; //Field offset: 0x0
	[Token(Token = "0x4000EA5")]
	public const int PromoLineParsePrivacyError = 1271; //Field offset: 0x0
	[Token(Token = "0x4000EA4")]
	public const int PromoLineParseTRGameSharingError = 1270; //Field offset: 0x0
	[Token(Token = "0x4000EA3")]
	public const int PromoLineParseTRGameServicesError = 1269; //Field offset: 0x0
	[Token(Token = "0x4000EC0")]
	public const int GameServicesGenericErrors = 3000; //Field offset: 0x0
	[Token(Token = "0x4000EC1")]
	public const int GameServicesGenericNotSupportedError = 3001; //Field offset: 0x0
	[Token(Token = "0x4000EC2")]
	public const int GameServicesGenericNotSignedInError = 3002; //Field offset: 0x0
	[Token(Token = "0x4000EC3")]
	public const int GameServicesNoConsentError = 3003; //Field offset: 0x0
	[Token(Token = "0x4000EE1")]
	public const int SharingGenericErrors = 9000; //Field offset: 0x0
	[Token(Token = "0x4000EE0")]
	public const int SharingErrors = 9000; //Field offset: 0x0
	[Token(Token = "0x4000EDF")]
	public const int SupportReimbursementsFailedError = 8002; //Field offset: 0x0
	[Token(Token = "0x4000EDE")]
	public const int SupportGenericInvalidCodeError = 8001; //Field offset: 0x0
	[Token(Token = "0x4000EDD")]
	public const int SupportGenericErrors = 8000; //Field offset: 0x0
	[Token(Token = "0x4000EDC")]
	public const int SupportErrors = 8000; //Field offset: 0x0
	[Token(Token = "0x4000EDB")]
	public const int DemoFeatureNotAvailableError = 7001; //Field offset: 0x0
	[Token(Token = "0x4000EDA")]
	public const int DemoGenericErrors = 7000; //Field offset: 0x0
	[Token(Token = "0x4000ED9")]
	public const int DemoErrors = 7000; //Field offset: 0x0
	[Token(Token = "0x4000ED8")]
	public const int StoreGenericUnhandledError = 6002; //Field offset: 0x0
	[Token(Token = "0x4000ED7")]
	public const int StoreGenericLostConnectionError = 6001; //Field offset: 0x0
	[Token(Token = "0x4000ED6")]
	public const int StoreGenericErrors = 6000; //Field offset: 0x0
	[Token(Token = "0x4000ED5")]
	public const int StoreErrors = 6000; //Field offset: 0x0
	[Token(Token = "0x4000ED4")]
	public const int NetworkGenericNetworkUnavailableError = 5001; //Field offset: 0x0
	[Token(Token = "0x4000EA2")]
	public const int PromoLineParseRewardedAdsError = 1268; //Field offset: 0x0
	[Token(Token = "0x4000ED3")]
	public const int NetworkGenericErrors = 5000; //Field offset: 0x0
	[Token(Token = "0x4000ED1")]
	public const int RegionChallengeGenericMissingChallengeError = 4003; //Field offset: 0x0
	[Token(Token = "0x4000ED0")]
	public const int RegionChallengeGenericActivateFailedError = 4002; //Field offset: 0x0
	[Token(Token = "0x4000ECF")]
	public const int RegionChallengeGenericRegionNotSupportedError = 4001; //Field offset: 0x0
	[Token(Token = "0x4000ECE")]
	public const int RegionChallengeGenericErrors = 4000; //Field offset: 0x0
	[Token(Token = "0x4000ECD")]
	public const int RegionChallenegeErrors = 4000; //Field offset: 0x0
	[Token(Token = "0x4000ECC")]
	public const int GameServicesLeaderboardsNoConsentError = 3302; //Field offset: 0x0
	[Token(Token = "0x4000ECB")]
	public const int GameServicesLeaderboardNotSupportedError = 3301; //Field offset: 0x0
	[Token(Token = "0x4000ECA")]
	public const int GameServicesLeaderboardErrors = 3300; //Field offset: 0x0
	[Token(Token = "0x4000EC9")]
	public const int GameServicesAchievementsNoConsentError = 3202; //Field offset: 0x0
	[Token(Token = "0x4000EC8")]
	public const int GameServicesAchievementsNotSupportedError = 3201; //Field offset: 0x0
	[Token(Token = "0x4000EC7")]
	public const int GameServicesAchievementsErrors = 3200; //Field offset: 0x0
	[Token(Token = "0x4000EC6")]
	public const int GameServicesFriendsNoConsentError = 3102; //Field offset: 0x0
	[Token(Token = "0x4000EC5")]
	public const int GameServicesFriendsNotSupportedError = 3101; //Field offset: 0x0
	[Token(Token = "0x4000EC4")]
	public const int GameServicesFriendsErrors = 3100; //Field offset: 0x0
	[Token(Token = "0x4000ED2")]
	public const int NetworkErrors = 5000; //Field offset: 0x0
	[Token(Token = "0x4000EA1")]
	public const int PromoLineParseMissionConfigError = 1267; //Field offset: 0x0
	[Token(Token = "0x4000EA0")]
	public const int PromoLineParseDeviceConfigError = 1266; //Field offset: 0x0
	[Token(Token = "0x4000E9F")]
	public const int PromoLineParseDeviceMapError = 1265; //Field offset: 0x0
	[Token(Token = "0x4000E7C")]
	public const int PromoLineParseDailyChallengeNotifyError = 1216; //Field offset: 0x0
	[Token(Token = "0x4000E7B")]
	public const int PromoLineParseComeBackNotifyError = 1215; //Field offset: 0x0
	[Token(Token = "0x4000E7A")]
	public const int PromoLineParseWeeklyChallengeError = 1214; //Field offset: 0x0
	[Token(Token = "0x4000E79")]
	public const int PromoLineParseDailyChallengeError = 1213; //Field offset: 0x0
	[Token(Token = "0x4000E78")]
	public const int PromoLineParseStreakChestsError = 1212; //Field offset: 0x0
	[Token(Token = "0x4000E77")]
	public const int PromoLineParseDailyRewardTableError = 1211; //Field offset: 0x0
	[Token(Token = "0x4000E76")]
	public const int PromoLineParseSpecificAttachmentCharDataError = 1210; //Field offset: 0x0
	[Token(Token = "0x4000E75")]
	public const int PromoLineParseSpecificAttachmentDataError = 1209; //Field offset: 0x0
	[Token(Token = "0x4000E74")]
	public const int PromoLineParseCharacterAttachmentError = 1208; //Field offset: 0x0
	[Token(Token = "0x4000E73")]
	public const int PromoLineParseAttachmentBundleConfigError = 1207; //Field offset: 0x0
	[Token(Token = "0x4000E72")]
	public const int PromoLineParseSharedAttachmentBundleConfigDatarror = 1206; //Field offset: 0x0
	[Token(Token = "0x4000E71")]
	public const int PromoLineParseAnalyticsError = 1205; //Field offset: 0x0
	[Token(Token = "0x4000E70")]
	public const int PromoLineParseAdServiceError = 1203; //Field offset: 0x0
	[Token(Token = "0x4000E6F")]
	public const int PromoLineParseAdsPauseGameError = 1202; //Field offset: 0x0
	[Token(Token = "0x4000E6E")]
	public const int PromoLineParseAdsError = 1201; //Field offset: 0x0
	[Token(Token = "0x4000E6D")]
	public const int PromoLineParseErrors = 1200; //Field offset: 0x0
	[Token(Token = "0x4000E6C")]
	public const int PromoDataNoCoinSetDataError = 1106; //Field offset: 0x0
	[Token(Token = "0x4000E6B")]
	public const int PromoDataInvalidCachedPromoError = 1105; //Field offset: 0x0
	[Token(Token = "0x4000E6A")]
	public const int PromoDataInvalidDownloadedPromoError = 1104; //Field offset: 0x0
	[Token(Token = "0x4000E69")]
	public const int PromoDataInvalidShippedPromoError = 1103; //Field offset: 0x0
	[Token(Token = "0x4000E68")]
	public const int PromoDataNoCharacterDataError = 1102; //Field offset: 0x0
	[Token(Token = "0x4000E67")]
	public const int PromoDataNoRegionDataError = 1101; //Field offset: 0x0
	[Token(Token = "0x4000E66")]
	public const int PromoDataErrors = 1100; //Field offset: 0x0
	[Token(Token = "0x4000E65")]
	public const int PromoFileUnhandledReadError = 1004; //Field offset: 0x0
	[Token(Token = "0x4000E64")]
	public const int PromoFileUnhandledWriteError = 1003; //Field offset: 0x0
	[Token(Token = "0x4000E63")]
	public const int PromoFileNotFoundError = 1002; //Field offset: 0x0
	[Token(Token = "0x4000E62")]
	public const int PromoFileNotEnoughSpaceError = 1001; //Field offset: 0x0
	[Token(Token = "0x4000E61")]
	public const int PromoFileErrors = 1000; //Field offset: 0x0
	[Token(Token = "0x4000E60")]
	public const int PromoErrors = 1000; //Field offset: 0x0
	[Token(Token = "0x4000E7D")]
	public const int PromoLineParseCharacterDisplayOrderError = 1217; //Field offset: 0x0
	[Token(Token = "0x4000EE2")]
	public const int SharingNotSupported = 9001; //Field offset: 0x0
	[Token(Token = "0x4000E7E")]
	public const int PromoLineParseCharacterStoreListError = 1218; //Field offset: 0x0
	[Token(Token = "0x4000E80")]
	public const int PromoLineParseCharacterBundleConfigError = 1220; //Field offset: 0x0
	[Token(Token = "0x4000E9E")]
	public const int PromoLineParseWebTextureBundleInfoError = 1264; //Field offset: 0x0
	[Token(Token = "0x4000E9D")]
	public const int PromoLineParseWelcomeScreenError = 1262; //Field offset: 0x0
	[Token(Token = "0x4000E9C")]
	public const int PromoLineParseCoinSetError = 1261; //Field offset: 0x0
	[Token(Token = "0x4000E9B")]
	public const int PromoLineParseCoinSetBundleConfigDataError = 1260; //Field offset: 0x0
	[Token(Token = "0x4000E9A")]
	public const int PromoLineParseLocalNotifError = 1251; //Field offset: 0x0
	[Token(Token = "0x4000E99")]
	public const int PromoLineParseFeatureStateError = 1246; //Field offset: 0x0
	[Token(Token = "0x4000E98")]
	public const int PromoLineParseABTestError = 1245; //Field offset: 0x0
	[Token(Token = "0x4000E97")]
	public const int PromoLineParseABTestsConfigError = 1244; //Field offset: 0x0
	[Token(Token = "0x4000E96")]
	public const int PromoLineParseSupportDataError = 1243; //Field offset: 0x0
	[Token(Token = "0x4000E95")]
	public const int PromoLineParseRegionOrderError = 1242; //Field offset: 0x0
	[Token(Token = "0x4000E94")]
	public const int PromoLineParseRegionBundleConfigDataError = 1241; //Field offset: 0x0
	[Token(Token = "0x4000E93")]
	public const int PromoLineParseRegionChallegeGuidError = 1240; //Field offset: 0x0
	[Token(Token = "0x4000E92")]
	public const int PromoLineParsePromoPopupError = 1239; //Field offset: 0x0
	[Token(Token = "0x4000E91")]
	public const int PromoLineParsePromoConfigError = 1238; //Field offset: 0x0
	[Token(Token = "0x4000E7F")]
	public const int PromoLineParseDynamicCharactersSetupError = 1219; //Field offset: 0x0
	[Token(Token = "0x4000E90")]
	public const int PromoLineParseProductDataError = 1237; //Field offset: 0x0
	[Token(Token = "0x4000E8E")]
	public const int PromoLineParseClipsError = 1235; //Field offset: 0x0
	[Token(Token = "0x4000E81")]
	public const int PromoLineParseCollectableError = 1221; //Field offset: 0x0
	[Token(Token = "0x4000E82")]
	public const int PromoLineParseCollectablesDefinitionBundleConfigError = 1222; //Field offset: 0x0
	[Token(Token = "0x4000E83")]
	public const int PromoLineParseCollectablesGenericBundleConfigError = 1223; //Field offset: 0x0
	[Token(Token = "0x4000E84")]
	public const int PromoLineParseCollectablesCategoryBundleConfigError = 1224; //Field offset: 0x0
	[Token(Token = "0x4000E85")]
	public const int PromoLineParseDealDataError = 1225; //Field offset: 0x0
	[Token(Token = "0x4000E8F")]
	public const int PromoLineParseMerchandiseError = 1236; //Field offset: 0x0
	[Token(Token = "0x4000E86")]
	public const int PromoLineParseForceUpdateError = 1226; //Field offset: 0x0
	[Token(Token = "0x4000E88")]
	public const int PromoLineParseAwardError = 1228; //Field offset: 0x0
	[Token(Token = "0x4000E89")]
	public const int PromoLineParseGemProbabilityError = 1229; //Field offset: 0x0
	[Token(Token = "0x4000E8A")]
	public const int PromoLineParseSaveMeError = 1230; //Field offset: 0x0
	[Token(Token = "0x4000E8B")]
	public const int PromoLineParseWheelBonusItemsError = 1231; //Field offset: 0x0
	[Token(Token = "0x4000E8C")]
	public const int PromoLineParseChestError = 1232; //Field offset: 0x0
	[Token(Token = "0x4000E8D")]
	public const int PromoLineParseInGameChestsLevelsError = 1233; //Field offset: 0x0
	[Token(Token = "0x4000E87")]
	public const int PromoLineParseNextPromoTimeError = 1227; //Field offset: 0x0
	[Token(Token = "0x4000EE3")]
	public const int SharingNoConsent = 9002; //Field offset: 0x0
	[Token(Token = "0x4000E5F")]
	private static string _ErrorCodesConfigName; //Field offset: 0x8

	[Address(RVA = "0x13248D0", Offset = "0x13248D0", Length = "0xB0")]
	[Token(Token = "0x6000BD0")]
	private static ErrorHandler() { }

	[Address(RVA = "0x13248C8", Offset = "0x13248C8", Length = "0x8")]
	[Token(Token = "0x6000BCF")]
	public ErrorHandler() { }

	[Address(RVA = "0x1324650", Offset = "0x1324650", Length = "0x134")]
	[Token(Token = "0x6000BCC")]
	public static void ContinueError(int inCode, Action inCallback = null) { }

	[Address(RVA = "0x1324784", Offset = "0x1324784", Length = "0x144")]
	[Token(Token = "0x6000BCD")]
	public static void ContinueError(int inCode, string inStringArg, Action inCallback = null) { }

	[Address(RVA = "0x131CC1C", Offset = "0x131CC1C", Length = "0x10C")]
	[Token(Token = "0x6000BCE")]
	public static void FatalError(int inCode) { }

	[Address(RVA = "0x13241E4", Offset = "0x13241E4", Length = "0x46C")]
	[Token(Token = "0x6000BCB")]
	private static string GetErrorString(int inCode, List<Int32> inUsedCodes = null) { }

	[Address(RVA = "0x13240D4", Offset = "0x13240D4", Length = "0x110")]
	[Token(Token = "0x6000BCA")]
	private static string GetTitleString(int inCode) { }

	[Address(RVA = "0x1323CA8", Offset = "0x1323CA8", Length = "0x42C")]
	[Token(Token = "0x6000BC9")]
	public static void Initialize() { }

}

