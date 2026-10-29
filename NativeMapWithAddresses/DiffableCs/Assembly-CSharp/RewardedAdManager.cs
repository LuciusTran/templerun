//Type is in global namespace

[Token(Token = "0x20000F5")]
public class RewardedAdManager
{
	[Token(Token = "0x400081C")]
	private const string _LogChannel = "RewardedAdManager"; //Field offset: 0x0
	[Token(Token = "0x400081D")]
	public const string FeatureName = "RewardedAd"; //Field offset: 0x0
	[Token(Token = "0x400081E")]
	private static RewardedAdConfigData _RewardedAdData; //Field offset: 0x0
	[Token(Token = "0x400081F")]
	private const int _DefaultStoreReward = 100; //Field offset: 0x0

	[Token(Token = "0x1700013C")]
	public static int MaxDoubleAmount
	{
		[Address(RVA = "0x12D6D98", Offset = "0x12D6D98", Length = "0x58")]
		[Token(Token = "0x600073D")]
		 get { } //Length: 88
	}

	[Token(Token = "0x1700013B")]
	public static int MinDoubleAmount
	{
		[Address(RVA = "0x12D6D40", Offset = "0x12D6D40", Length = "0x58")]
		[Token(Token = "0x600073C")]
		 get { } //Length: 88
	}

	[Token(Token = "0x1700013D")]
	public static StoreItem RewardedAdItem
	{
		[Address(RVA = "0x12D6DF0", Offset = "0x12D6DF0", Length = "0x58")]
		[Token(Token = "0x600073E")]
		 get { } //Length: 88
	}

	[Token(Token = "0x1700013E")]
	public static int RewardedAdItemCooldown
	{
		[Address(RVA = "0x12D6E48", Offset = "0x12D6E48", Length = "0x58")]
		[Token(Token = "0x600073F")]
		 get { } //Length: 88
	}

	[Address(RVA = "0x12D70D0", Offset = "0x12D70D0", Length = "0x8")]
	[Token(Token = "0x6000743")]
	public RewardedAdManager() { }

	[Address(RVA = "0x12D6D98", Offset = "0x12D6D98", Length = "0x58")]
	[Token(Token = "0x600073D")]
	public static int get_MaxDoubleAmount() { }

	[Address(RVA = "0x12D6D40", Offset = "0x12D6D40", Length = "0x58")]
	[Token(Token = "0x600073C")]
	public static int get_MinDoubleAmount() { }

	[Address(RVA = "0x12D6DF0", Offset = "0x12D6DF0", Length = "0x58")]
	[Token(Token = "0x600073E")]
	public static StoreItem get_RewardedAdItem() { }

	[Address(RVA = "0x12D6E48", Offset = "0x12D6E48", Length = "0x58")]
	[Token(Token = "0x600073F")]
	public static int get_RewardedAdItemCooldown() { }

	[Address(RVA = "0x12D6FF0", Offset = "0x12D6FF0", Length = "0xE0")]
	[Token(Token = "0x6000742")]
	public static int GetRewardAmountForStore(int inDistanceTraveled) { }

	[Address(RVA = "0x12D6EA0", Offset = "0x12D6EA0", Length = "0xB4")]
	[Token(Token = "0x6000740")]
	public static void InitializeConfig(PromoFile inPromoFile) { }

	[Address(RVA = "0x12D6F54", Offset = "0x12D6F54", Length = "0x9C")]
	[Token(Token = "0x6000741")]
	private static bool ProcessRewardedAdConfig(ConfigData inConfigData) { }

}

