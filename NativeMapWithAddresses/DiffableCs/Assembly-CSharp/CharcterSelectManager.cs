//Type is in global namespace

[Token(Token = "0x20000BE")]
public class CharcterSelectManager
{
	[Token(Token = "0x40006A7")]
	public static CharacterSelectConfigData CharacterSelectConfigData; //Field offset: 0x0
	[Token(Token = "0x40006A8")]
	public static CharacterGiveAwayConfigData CharacterGiveAwayConfigDataObj; //Field offset: 0x8

	[Address(RVA = "0x12C2B70", Offset = "0x12C2B70", Length = "0xA4")]
	[Token(Token = "0x60005D9")]
	private static CharcterSelectManager() { }

	[Address(RVA = "0x12C2B68", Offset = "0x12C2B68", Length = "0x8")]
	[Token(Token = "0x60005D8")]
	public CharcterSelectManager() { }

	[Address(RVA = "0x12C2684", Offset = "0x12C2684", Length = "0x12C")]
	[Token(Token = "0x60005D3")]
	public static void InitializeConfig(PromoFile inPromoFile) { }

	[Address(RVA = "0x12C299C", Offset = "0x12C299C", Length = "0x1CC")]
	[Token(Token = "0x60005D7")]
	public static bool IsCharacterAvailableToGiveAway(int CurrentChar) { }

	[Address(RVA = "0x12C2938", Offset = "0x12C2938", Length = "0x64")]
	[Token(Token = "0x60005D6")]
	public static bool IsCharacterGiveAwayEnabled() { }

	[Address(RVA = "0x12C2874", Offset = "0x12C2874", Length = "0xC4")]
	[Token(Token = "0x60005D5")]
	private static bool ProcessCharacterGiveAwayConfigData(ConfigData inConfigData) { }

	[Address(RVA = "0x12C27B0", Offset = "0x12C27B0", Length = "0xC4")]
	[Token(Token = "0x60005D4")]
	private static bool ProcessStoreConfigData(ConfigData inConfigData) { }

}

