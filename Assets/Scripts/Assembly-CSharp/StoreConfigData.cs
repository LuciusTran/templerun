using System.Collections.Generic;

public class StoreConfigData : ConfigData
{
	public const string PromoKeyword = "Store";

	private const string _PowerupMegaCoinUpgradeCostByLevelKey = "MegaCoinLvl";

	public List<int> PowerupMegaCoinUpgradeCostByLevel;

	private const string _PowerupCoinMagnetUpgradeCostByLevelKey = "MagnetLvl";

	public List<int> PowerupCoinMagnetUpgradeCostByLevel;

	private const string _PowerupInvisibilityUpgradeCostByLevelKey = "InvLvl";

	public List<int> PowerupInvisibilityUpgradeCostByLevel;

	private const string _PowerupBoostUpgradeCostByLevelKey = "BoostLvl";

	public List<int> PowerupBoostUpgradeCostByLevel;

	private const string _PowerupCoinValueUpgradeCostByLevelKey = "CoinValueLvl";

	public List<int> PowerupCoinValueUpgradeCostByLevel;

	private const string _UtilityCostListKey = "Utilities";

	public List<int> UtilityCostList;

	private const string _CharacterCostListKey = "Characters";

	public List<int> CharacterCostList;

	private const string _WallpaperCostListKey = "Wallpapers";

	public List<int> WallpaperCostList;

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
