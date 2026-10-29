//Type is in global namespace

[Token(Token = "0x20000E1")]
public class ReactivationLocalNotificationsConfigManager
{
	[Token(Token = "0x40007A9")]
	public static ReactivationLocalNotificationsConfigData _LNData; //Field offset: 0x0

	[Address(RVA = "0x12D0238", Offset = "0x12D0238", Length = "0x8")]
	[Token(Token = "0x60006D2")]
	public ReactivationLocalNotificationsConfigManager() { }

	[Address(RVA = "0x12D00D4", Offset = "0x12D00D4", Length = "0xB4")]
	[Token(Token = "0x60006D0")]
	public static void InitializeConfig(PromoFile inPromoFile) { }

	[Address(RVA = "0x12D0188", Offset = "0x12D0188", Length = "0xB0")]
	[Token(Token = "0x60006D1")]
	private static bool ProcessPromoLocalNotification(ConfigData inConfigData) { }

}

