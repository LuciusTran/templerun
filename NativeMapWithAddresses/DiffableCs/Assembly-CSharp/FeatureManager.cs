//Type is in global namespace

[Token(Token = "0x20000F2")]
public static class FeatureManager
{
	[Token(Token = "0x4000814")]
	public const string LogChannel = "FeatureManager"; //Field offset: 0x0
	[Token(Token = "0x4000815")]
	private static Dictionary<String, Boolean> _FeatureToggleMap; //Field offset: 0x0

	[Address(RVA = "0x12D66C8", Offset = "0x12D66C8", Length = "0x8C")]
	[Token(Token = "0x600072F")]
	private static FeatureManager() { }

	[Address(RVA = "0x12D6538", Offset = "0x12D6538", Length = "0x4")]
	[Token(Token = "0x600072C")]
	public static void Dump() { }

	[Address(RVA = "0x12D653C", Offset = "0x12D653C", Length = "0xB4")]
	[Token(Token = "0x600072D")]
	public static void InitializeConfig(PromoFile inPromoFile) { }

	[Address(RVA = "0x12D634C", Offset = "0x12D634C", Length = "0xD4")]
	[Token(Token = "0x600072A")]
	public static bool IsFeatureEnabled(string inFeatureName) { }

	[Address(RVA = "0x12D65F0", Offset = "0x12D65F0", Length = "0xD8")]
	[Token(Token = "0x600072E")]
	private static bool ProcessFeatureState(ConfigData inConfigData) { }

	[Address(RVA = "0x12D6420", Offset = "0x12D6420", Length = "0x118")]
	[Token(Token = "0x600072B")]
	public static void SetFeatureEnabledState(string inFeatureName, bool inEnabled) { }

}

