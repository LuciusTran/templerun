public static class AdManager_ConfigData
{
	public static AdsConfigData AdsConfig;

	public static BannerAdsConfigData BannerConfig;

	public static AdsThresholdRAMConfigData AdsThresholdRAMConfig;

	public static void InitializeConfig(PromoFile inPromoFile)
	{
	}

	private static bool ProcessAds(ConfigData inConfigData)
	{
		return false;
	}

	private static bool ProcessAdService(ConfigData inConfigData)
	{
		return false;
	}

	private static bool ProcessBannerAds(ConfigData inConfigData)
	{
		return false;
	}

	private static bool ProcessAdsRAMThreshold(ConfigData inConfigData)
	{
		return false;
	}

	public static bool BannerAdPlacementEnabled(string inPlacementName)
	{
		return false;
	}

	public static bool BannerAdPlacementEnabledInTutorial()
	{
		return false;
	}
}
