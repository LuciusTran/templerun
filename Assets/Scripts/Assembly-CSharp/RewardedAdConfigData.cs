using System.Collections.Generic;

public class RewardedAdConfigData : ConfigData
{
	public enum StoreItem
	{
		None = 0,
		Coins = 1,
		Wings = 2
	}

	public class StoreRewardPair
	{
		public int Meters;

		public int Coins;

		public StoreRewardPair()
		{
		}

		public StoreRewardPair(int inMeters, int inCoins)
		{
		}
	}

	public const string PromoKeyword = "RewardedAd";

	public const string MinDoubleAmountKey = "MiDA";

	public const string MaxDoubleAmountKey = "MxDA";

	public const string StoreItemTypeKey = "SIT";

	public const string StoreItemCooldownKey = "SIC";

	public const string CoinRewardPairs = "CRP";

	public const int MinDoubleAmountDefault = 100;

	public const int MaxDoubleAmountDefault = 10000;

	public const StoreItem StoreItemTypeDefault = StoreItem.None;

	public const int StoreItemCooldownDefault = 6;

	public int MinDoubleAmount;

	public int MaxDoubleAmount;

	public StoreItem StoreItemType;

	public int StoreItemCooldown;

	public List<StoreRewardPair> StoreRewardList;

	public override int Index => 0;

	public override string Keyword => null;

	public override int ErrorCode => 0;

	public override string ToString()
	{
		return null;
	}

	public override bool FromDict(Dictionary<string, object> inDict)
	{
		return false;
	}

	public override Dictionary<string, object> ToDict()
	{
		return null;
	}
}
