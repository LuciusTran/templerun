using System.Collections.Generic;

public class AdsConfigData : ConfigData
{
	public const string PromoKeyword = "Ads";

	private const float DefaultCooldownTimeBetweenInterstitialAd = 10f;

	private const int DefaultNumberOfRunsForFirstInterstitial = 0;

	private const string _InterstitialAdCoolDownTimerKey = "InterstitialAdCoolDownTimer";

	public float InterstitialCoolDownTimer;

	private const string _NumofRunsforFirstInterAdsKey = "NumberOfRunsForFirstInter";

	public int NumberOfRunsForFirstInterstitial;

	private const string _PrecacheAtRunEndKey = "PrecacheAtRunEnd";

	private const bool DefaultPrecacheAtRunEnd = true;

	public bool PrecacheAtRunEnd;

	private const string _RecacheOnDismissKey = "RecacheOnDismiss";

	private const bool DefaultRecacheOnDismiss = true;

	public bool RecacheOnDismiss;

	public override int Index => 0;

	public override string Keyword => null;

	public override string RemoteConfigKey => null;

	public override int ErrorCode => 0;

	public override Dictionary<string, object> ToDict()
	{
		return null;
	}

	public override bool FromDict(Dictionary<string, object> inDict)
	{
		return false;
	}
}
