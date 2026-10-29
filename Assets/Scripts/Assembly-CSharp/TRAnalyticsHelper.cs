using Imangi.Ad;

public class TRAnalyticsHelper
{
	public const string AdNetworkKeyName = "Network";

	public const string LocationKeyName = "Location";

	public const string NetworkStatusKeyName = "NetworkStatus";

	public const string ErrorKeyName = "Error";

	private const string TrueString = "True";

	private const string FalseString = "False";

	public const int MaxAttribLength = 100;

	private const string _DayInvalidBin = "dxx";

	private const string _Day0Bin = "d00";

	private const string _Day1To2Bin = "d01-d02";

	private const string _Day3To7Bin = "d03-d07";

	private const string _Day8To14Bin = "d08-d14";

	private const string _Day15To30Bin = "d15-d30";

	private const string _Day31To60Bin = "d31-d60";

	private const string _Day61To90Bin = "d61-d90";

	private const string _Day91PlusBin = "d91+";

	private const string _ScoreMultiplierInvalidBin = "xx";

	private const string _ScoreMultiplier10Bin = "10x";

	private const string _ScoreMultiplier11To12Bin = "11-12x";

	private const string _ScoreMultiplier13To15Bin = "13-15x";

	private const string _ScoreMultiplier16To20Bin = "16-20x";

	private const string _ScoreMultiplier21To30Bin = "21-30x";

	private const string _ScoreMultiplier31To40Bin = "31-40x";

	private const string _ScoreMultiplier41To50Bin = "41-50x";

	private const string _ScoreMultiplier51To60Bin = "51-60x";

	private const string _ScoreMultiplier61To65Bin = "61-65x";

	private const string _ScoreMultiplier66To67Bin = "66-67x";

	private const string _ScoreMultiplier68PlusBin = "68x+";

	private const string _LifetimeRunsInvalidBin = "x";

	private const string _LifetimeRuns0to9Bin = "0-9";

	private const string _LifetimeRuns10to24Bin = "10-24";

	private const string _LifetimeRuns25to49Bin = "25-49";

	private const string _LifetimeRuns50to99Bin = "50-99";

	private const string _LifetimeRuns100to249Bin = "100-249";

	private const string _LifetimeRuns250to499Bin = "250-499";

	private const string _LifetimeRuns500to999Bin = "500-999";

	private const string _LifetimeRuns1000to2499Bin = "1000-2499";

	private const string _LifetimeRuns2500to4999Bin = "2500-4999";

	private const string _LifetimeRuns5000to9999Bin = "5000-9999";

	private const string _LifetimeRuns10000PlusBin = "10000+";

	public static string BoolAsString(bool inBool)
	{
		return null;
	}

	public static string GetDaysSinceInstallBinned(int inDays)
	{
		return null;
	}

	public static string GetScoreMultiplierBinned(int inScoreMultiplier)
	{
		return null;
	}

	public static string GetLifetimeRunsBinned(int inLifetimeRuns)
	{
		return null;
	}

	public static string GetTutorialSectionName(int inTutorialId)
	{
		return null;
	}

	public static string GetDeathTypeName(CharacterPlayer.DeathTypes inDeathType)
	{
		return null;
	}

	public static string GetPathLevelName(PathElement.PathLevel inPathLevel)
	{
		return null;
	}

	public static string GetPathTypeName(PathElement.PathType inPathType)
	{
		return null;
	}

	public static string GetCharacterName(int inCharacterId)
	{
		return null;
	}

	public static string GetNetworkStatus()
	{
		return null;
	}

	public static void LogInterstitialAd(AdService inService, string inEventName, string inLocation, string inError = "")
	{
	}

	public static void LogVideoAd(AdService inService, string inEventName, string inLocation, string inError = "")
	{
	}

	public static void LogBannerAd(AdService inService, string inEventName, string inLocation, string inError = "")
	{
	}

	public static string SanitizeEventAttributeLength(string inParameter)
	{
		return null;
	}

	public static void UpdateDaysSinceInstall(AppInstallStatus inAppInstallStatus)
	{
	}

	public static void UpdateScoreMultiplier(int inScoreMultiplier)
	{
	}

	public static void UpdateLifetimeRuns(int inLifetimeRuns)
	{
	}

	public static void MarkPurchasedIAPAsTrue()
	{
	}

	public static void UpdateImangiABTestID()
	{
	}
}
