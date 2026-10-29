using System.Collections.Generic;

public class BannerAdsConfigData : ConfigData
{
	public const string PromoKeyword = "BannerAds";

	private const string _BannerAdsEnabledKey = "E";

	private const string _TurnOffBannerAdsInTutorialKey = "T";

	private const string _TurnOnBannerAdsAfterNoOfRunsKey = "TOBAABRK";

	public bool BannerAdsEnabled;

	public bool TurnOffBannerAdsInTutorial;

	public int TurnOnBannerAdsAfterNoOfRuns;

	private const string _PlacementsKey = "P";

	public Dictionary<string, bool> Placements;

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
}
