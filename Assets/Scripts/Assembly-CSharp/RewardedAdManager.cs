public class RewardedAdManager
{
	private const string _LogChannel = "RewardedAdManager";

	public const string FeatureName = "RewardedAd";

	private static RewardedAdConfigData _RewardedAdData;

	private const int _DefaultStoreReward = 100;

	public static int MinDoubleAmount => 0;

	public static int MaxDoubleAmount => 0;

	public static RewardedAdConfigData.StoreItem RewardedAdItem => RewardedAdConfigData.StoreItem.None;

	public static int RewardedAdItemCooldown => 0;

	public static void InitializeConfig(PromoFile inPromoFile)
	{
	}

	private static bool ProcessRewardedAdConfig(ConfigData inConfigData)
	{
		return false;
	}

	public static int GetRewardAmountForStore(int inDistanceTraveled)
	{
		return 0;
	}
}
