//Type is in global namespace

[Token(Token = "0x20000CF")]
public class GlobalChallengesConfigManager
{
	[Token(Token = "0x4000718")]
	public static GlobalChallengesConfigData _GCData; //Field offset: 0x0
	[Token(Token = "0x4000719")]
	public static List<GlobalChallengesConfigData> _GCDatas; //Field offset: 0x8

	[Address(RVA = "0x12C7B58", Offset = "0x12C7B58", Length = "0xBC")]
	[Token(Token = "0x6000644")]
	private static GlobalChallengesConfigManager() { }

	[Address(RVA = "0x12C7B50", Offset = "0x12C7B50", Length = "0x8")]
	[Token(Token = "0x6000643")]
	public GlobalChallengesConfigManager() { }

	[Address(RVA = "0x12C75A4", Offset = "0x12C75A4", Length = "0x154")]
	[Token(Token = "0x6000641")]
	public static void InitializeConfig(PromoFile inPromoFile) { }

	[Address(RVA = "0x12C76F8", Offset = "0x12C76F8", Length = "0x458")]
	[Token(Token = "0x6000642")]
	private static bool ProcessGlobalChallenges(ConfigData inConfigData) { }

}

