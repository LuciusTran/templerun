public class CharcterSelectManager
{
	public static CharacterSelectConfigData CharacterSelectConfigData;

	public static CharacterGiveAwayConfigData CharacterGiveAwayConfigDataObj;

	public static void InitializeConfig(PromoFile inPromoFile)
	{
	}

	private static bool ProcessStoreConfigData(ConfigData inConfigData)
	{
		return false;
	}

	private static bool ProcessCharacterGiveAwayConfigData(ConfigData inConfigData)
	{
		return false;
	}

	public static bool IsCharacterGiveAwayEnabled()
	{
		return false;
	}

	public static bool IsCharacterAvailableToGiveAway(int CurrentChar)
	{
		return false;
	}
}
