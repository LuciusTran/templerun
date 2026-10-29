//Type is in global namespace

[Token(Token = "0x20000EC")]
public class DeepLinkingRewardsManager
{
	[Token(Token = "0x4000804")]
	private const string _LogChannel = "DeepLinkingRewards"; //Field offset: 0x0
	[Token(Token = "0x4000805")]
	public static DeepLinkingRewards_ConfigData ConfigData; //Field offset: 0x0

	[Address(RVA = "0x12D521C", Offset = "0x12D521C", Length = "0x6C")]
	[Token(Token = "0x6000712")]
	private static DeepLinkingRewardsManager() { }

	[Address(RVA = "0x12D5214", Offset = "0x12D5214", Length = "0x8")]
	[Token(Token = "0x6000711")]
	public DeepLinkingRewardsManager() { }

	[Address(RVA = "0x12D4D2C", Offset = "0x12D4D2C", Length = "0x4E8")]
	[Token(Token = "0x600070F")]
	private static bool GrantReward(string url) { }

	[Address(RVA = "0x12D48EC", Offset = "0x12D48EC", Length = "0xB4")]
	[Token(Token = "0x600070B")]
	public static void InitializeConfig(PromoFile inPromoFile) { }

	[Address(RVA = "0x12D4A64", Offset = "0x12D4A64", Length = "0x1F8")]
	[Token(Token = "0x6000710")]
	private static bool IsURLConfigured(string url) { }

	[Address(RVA = "0x12D49A0", Offset = "0x12D49A0", Length = "0xC4")]
	[Token(Token = "0x600070C")]
	private static bool ProcessConfigData(ConfigData inConfigData) { }

	[Address(RVA = "0x12CF478", Offset = "0x12CF478", Length = "0x168")]
	[Token(Token = "0x600070D")]
	public static void ProcessDeeplink() { }

	[Address(RVA = "0x12D4C5C", Offset = "0x12D4C5C", Length = "0xD0")]
	[Token(Token = "0x600070E")]
	private static bool ProcessReward(string url) { }

}

