//Type is in global namespace

[Token(Token = "0x20000B2")]
public class CMPManager
{
	[Token(Token = "0x400064F")]
	public static CMPConfigData CMPConfigDataObj; //Field offset: 0x0
	[Token(Token = "0x4000650")]
	public static bool ShowCMP; //Field offset: 0x8
	[Token(Token = "0x4000651")]
	public static bool wasLaunchedOffline; //Field offset: 0x9

	[Address(RVA = "0x12BF558", Offset = "0x12BF558", Length = "0x78")]
	[Token(Token = "0x6000584")]
	private static CMPManager() { }

	[Address(RVA = "0x12BF550", Offset = "0x12BF550", Length = "0x8")]
	[Token(Token = "0x6000583")]
	public CMPManager() { }

	[Address(RVA = "0x12BF3D4", Offset = "0x12BF3D4", Length = "0xB8")]
	[Token(Token = "0x6000581")]
	public static void InitializeConfig(PromoFile inPromoFile) { }

	[Address(RVA = "0x12BF48C", Offset = "0x12BF48C", Length = "0xC4")]
	[Token(Token = "0x6000582")]
	private static bool ProcessCMPConfigData(ConfigData inConfigData) { }

}

