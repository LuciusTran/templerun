//Type is in global namespace

[Token(Token = "0x20000F6")]
public class SaveMeManager
{
	[Token(Token = "0x4000820")]
	public const string FeatureName = "SM"; //Field offset: 0x0
	[Token(Token = "0x4000821")]
	public static SaveMeConfigData Configuration; //Field offset: 0x0

	[Address(RVA = "0x12D7238", Offset = "0x12D7238", Length = "0x8")]
	[Token(Token = "0x6000746")]
	public SaveMeManager() { }

	[Address(RVA = "0x12D70D8", Offset = "0x12D70D8", Length = "0xB4")]
	[Token(Token = "0x6000744")]
	public static void InitializeConfig(PromoFile inPromoFile) { }

	[Address(RVA = "0x12D718C", Offset = "0x12D718C", Length = "0xAC")]
	[Token(Token = "0x6000745")]
	private static bool ProcessSaveMeConfig(ConfigData inConfigData) { }

}

