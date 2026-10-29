using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;

public static class ImangiErrorHandler
{
	private const string _LogChannel = "ErrorHandler";

	public const int BundleErrors = 2000;

	public const int BundleGenericErrors = 2000;

	public const int BundleGenericNotEnoughSpaceError = 2001;

	public const int BundleGenericShippedCorruptError = 2002;

	public const int BundleGenericDownloadCorruptError = 2003;

	public const int BundleContentUpdateErrors = 2200;

	public const int BundleContentUpdateDownloadFailedError = 2201;

	public const int BundleHUDErrors = 2600;

	public const int BundleHUDDefaultFailedToLoad = 2601;

	public const int BundleHUDDefaultBundleInfoDoesNotExist = 2602;

	public const int BundleHUDDefaultLoadedAsNull = 2603;

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

	public const int NetworkErrors = 5000;

	public const int NetworkGenericErrors = 5000;

	public const int NetworkGenericNetworkUnavailableError = 5001;

	public const int StoreErrors = 6000;

	public const int StoreGenericErrors = 6000;

	public const int StoreGenericLostConnectionError = 6001;

	public const int StoreGenericUnhandledError = 6002;

	public const int ReceiptValidationErrors = 6500;

	public const int ReceiptValidationGenericErrors = 6500;

	public const int SharingErrors = 9000;

	public const int SharingGenericErrors = 9000;

	public const int SharingNotSupported = 9001;

	public const int SharingNoConsent = 9002;

	public const int ShippedConfigErrors = 10000;

	public const int ShippedConfigGenericErrors = 10000;

	public const int ShippedConfigLoadFailedError = 10001;

	public const int ShippedConfigWriteCacheUnhandledError = 10002;

	public const int ShippedConfigCorruptError = 10003;

	public const int ShippedConfigParseFailedError = 10004;

	public const int ShippedConfigWriteCacheNotEnoughSpaceError = 10005;

	public const int ShippedConfigWriteCachePermissionsError = 10006;

	private static Dictionary<int, string> _ErrorCodeToString;

	private static string _ErrorCodesConfigName;

	[CompilerGenerated]
	private static Action<int> m_ContinueErrorEvent;

	[CompilerGenerated]
	private static Action<int> m_FatalErrorEvent;

	public static event Action<int> ContinueErrorEvent
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

	public static event Action<int> FatalErrorEvent
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

	public static void ContinueError(int inCode)
	{
	}

	public static void ContinueError(int inCode, string inStringArg)
	{
	}

	public static void FatalError(int inCode)
	{
	}
}
