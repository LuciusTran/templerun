//Type is in global namespace

[Token(Token = "0x20000C7")]
public class DailyLoginLocalNotificationsConfigManager
{
	[Token(Token = "0x40006DC")]
	public static DailyLoginLocalNotificationsConfigData _LNData; //Field offset: 0x0

	[Address(RVA = "0x12C50C0", Offset = "0x12C50C0", Length = "0x8")]
	[Token(Token = "0x6000617")]
	public DailyLoginLocalNotificationsConfigManager() { }

	[Address(RVA = "0x12C4F58", Offset = "0x12C4F58", Length = "0xB8")]
	[Token(Token = "0x6000615")]
	public static void InitializeConfig(PromoFile inPromoFile) { }

	[Address(RVA = "0x12C5010", Offset = "0x12C5010", Length = "0xB0")]
	[Token(Token = "0x6000616")]
	private static bool ProcessPromoLocalNotification(ConfigData inConfigData) { }

}

