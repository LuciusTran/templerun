using System.Collections.Generic;
using Imangi.Analytics;
using Imangi.Utilities;

public class TRAnalytics
{
	public static string LogChannel;

	private const string UserIDKeyForAnalytics = "deviceID";

	protected static bool VerboseLogging;

	protected static bool _CanTrack;

	protected static bool InitializedAnalytics;

	public static TRUserAttributes User;

	protected static List<int> _UserABTestIds;

	public const int TestUserIdRangeMin = 0;

	public const int TestUserIdRangeMax = 999;

	private static ABTestSystemConfigData _ABTestsConfig;

	private static Dictionary<int, ABTestConfigData> _ABTests;

	public static bool Enabled => false;

	public static int UserABTestId => 0;

	public static ABTestSystemConfigData ABTestsConfig => null;

	public static void Initialize()
	{
	}

	private static void SetUserAttributes(ImangiLocaleInfo inLocale)
	{
	}

	public static void OnPromoLoadComplete()
	{
	}

	private static void CheckServiceEnabled()
	{
	}

	public static string GetID()
	{
		return null;
	}

	public static void LogEvent(string inName)
	{
	}

	public static void LogEvent(string inName, string inParameterName, string inParameterValue)
	{
	}

	public static void LogEvent(string inName, string inParameterName, double inParameterValue)
	{
	}

	public static void LogEvent(string inName, string inParameterName, long inParameterValue)
	{
	}

	public static void LogEvent(string inName, string inParameterName, int inParameterValue)
	{
	}

	public static void LogEvent(string inName, EventParameter[] inEventParameters)
	{
	}

	private static void LogDynamicAttributes()
	{
	}

	public static bool IsEventEnabled(string inEventId)
	{
		return false;
	}

	private static void SetEventsState(List<string> inEventList, bool inEnabledState)
	{
	}

	public static void LogUserABTests()
	{
	}

	public static int GetUserABTestId()
	{
		return 0;
	}

	public static bool IsABTestsEnabled()
	{
		return false;
	}

	public static Dictionary<int, int> GetTestAndGroupIDsForUser()
	{
		return null;
	}

	public static bool IsUserInABTestGroup(int inTestID, int inGroupID)
	{
		return false;
	}

	public static int GenerateUserABGroupID()
	{
		return 0;
	}

	public static void InitializeConfig(PromoFile inPromoFile)
	{
	}

	public static bool ProcessABTestsGlobalConfigData(ConfigData inConfigData)
	{
		return false;
	}

	public static bool ProcessABTestConfigData(ConfigData inConfigData)
	{
		return false;
	}

	public static bool ProcessAnaylticEventsConfigData(ConfigData inConfigData)
	{
		return false;
	}
}
