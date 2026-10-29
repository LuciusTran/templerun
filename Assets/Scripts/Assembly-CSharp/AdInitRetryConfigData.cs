using System.Collections.Generic;

public class AdInitRetryConfigData : ConfigData
{
	public const string PromoKeyword = "AdInitRetry";

	private const int DefaultMaxAppLovinRetries = -1;

	private const int MinRetries = -1;

	private const int MaxRetries = 50;

	private const string _MaxAppLovinRetriesKey = "MaxAppLovinRetries";

	public int MaxAppLovinRetries;

	private const string _ConsentRescueEnabledKey = "ConsentRescueEnabled";

	private const bool DefaultConsentRescueEnabled = true;

	public bool ConsentRescueEnabled;

	private const string _BootConsentRescueEnabledKey = "BootConsentRescueEnabled";

	private const bool DefaultBootConsentRescueEnabled = true;

	public bool BootConsentRescueEnabled;

	private const string _BootCMPWatchdogSecondsKey = "BootCMPWatchdogSeconds";

	private const int DefaultBootCMPWatchdogSeconds = 15;

	private const int MinBootCMPWatchdogSeconds = 5;

	private const int MaxBootCMPWatchdogSeconds = 60;

	public int BootCMPWatchdogSeconds;

	private const string _HoldAdInitOnUnresolvedRegulationKey = "HoldAdInitOnUnresolvedRegulation";

	private const bool DefaultHoldAdInitOnUnresolvedRegulation = true;

	public bool HoldAdInitOnUnresolvedRegulation;

	private static AdInitRetryConfigData _instance;

	private bool _rcApplied;

	private static bool _loggedFallback;

	public static AdInitRetryConfigData Instance => null;

	public override int Index => 0;

	public override string Keyword => null;

	public override int ErrorCode => 0;

	public override Dictionary<string, object> ToDict()
	{
		return null;
	}

	public override bool FromDict(Dictionary<string, object> inDict)
	{
		return false;
	}

	private static void LogFallbackOnce(string inReason)
	{
	}
}
