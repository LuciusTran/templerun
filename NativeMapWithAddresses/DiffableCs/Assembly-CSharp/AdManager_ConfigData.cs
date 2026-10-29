//Type is in global namespace

[Token(Token = "0x200008D")]
public static class AdManager_ConfigData
{
	[Token(Token = "0x400034F")]
	public static AdsConfigData AdsConfig; //Field offset: 0x0
	[Token(Token = "0x4000350")]
	public static BannerAdsConfigData BannerConfig; //Field offset: 0x8
	[Token(Token = "0x4000351")]
	public static AdsThresholdRAMConfigData AdsThresholdRAMConfig; //Field offset: 0x10

	[Address(RVA = "0x12AC3F4", Offset = "0x12AC3F4", Length = "0xE0")]
	[Token(Token = "0x60003A4")]
	private static AdManager_ConfigData() { }

	[Address(RVA = "0x12AC2B0", Offset = "0x12AC2B0", Length = "0xE0")]
	[Token(Token = "0x60003A2")]
	public static bool BannerAdPlacementEnabled(string inPlacementName) { }

	[Address(RVA = "0x12AC390", Offset = "0x12AC390", Length = "0x64")]
	[Token(Token = "0x60003A3")]
	public static bool BannerAdPlacementEnabledInTutorial() { }

	[Address(RVA = "0x12ABD44", Offset = "0x12ABD44", Length = "0x214")]
	[Token(Token = "0x600039D")]
	public static void InitializeConfig(PromoFile inPromoFile) { }

	[Address(RVA = "0x12ABF58", Offset = "0x12ABF58", Length = "0xC4")]
	[Token(Token = "0x600039E")]
	private static bool ProcessAds(ConfigData inConfigData) { }

	[Address(RVA = "0x12AC01C", Offset = "0x12AC01C", Length = "0x10C")]
	[Token(Token = "0x600039F")]
	private static bool ProcessAdService(ConfigData inConfigData) { }

	[Address(RVA = "0x12AC1EC", Offset = "0x12AC1EC", Length = "0xC4")]
	[Token(Token = "0x60003A1")]
	private static bool ProcessAdsRAMThreshold(ConfigData inConfigData) { }

	[Address(RVA = "0x12AC128", Offset = "0x12AC128", Length = "0xC4")]
	[Token(Token = "0x60003A0")]
	private static bool ProcessBannerAds(ConfigData inConfigData) { }

}

