using System.Collections.Generic;

public static class FeatureManager
{
	public const string LogChannel = "FeatureManager";

	private static Dictionary<string, bool> _FeatureToggleMap;

	public static bool IsFeatureEnabled(string inFeatureName)
	{
		return false;
	}

	public static void SetFeatureEnabledState(string inFeatureName, bool inEnabled)
	{
	}

	public static void Dump()
	{
	}

	public static void InitializeConfig(PromoFile inPromoFile)
	{
	}

	private static bool ProcessFeatureState(ConfigData inConfigData)
	{
		return false;
	}
}
