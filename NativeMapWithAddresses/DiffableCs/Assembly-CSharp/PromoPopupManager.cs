//Type is in global namespace

[Token(Token = "0x20000DD")]
public class PromoPopupManager
{
	[Token(Token = "0x400078D")]
	private static PromoPopupConfigData _PopupData; //Field offset: 0x0
	[Token(Token = "0x400078E")]
	private static ForceUpdateConfigData _ForceUpdateConfig; //Field offset: 0x8
	[Token(Token = "0x400078F")]
	private static bool _ForceUpdateOSAlertEventsHooked; //Field offset: 0x10
	[Token(Token = "0x4000790")]
	private static string _ForceUpdateURL; //Field offset: 0x18

	[Address(RVA = "0x12CF5E8", Offset = "0x12CF5E8", Length = "0x74")]
	[Token(Token = "0x60006C1")]
	private static PromoPopupManager() { }

	[Address(RVA = "0x12CF5E0", Offset = "0x12CF5E0", Length = "0x8")]
	[Token(Token = "0x60006C0")]
	public PromoPopupManager() { }

	[Address(RVA = "0x12CF42C", Offset = "0x12CF42C", Length = "0x4C")]
	[Token(Token = "0x60006BF")]
	private static void ClaimReactivationCampaignReward() { }

	[Address(RVA = "0x12CDA4C", Offset = "0x12CDA4C", Length = "0x444")]
	[Token(Token = "0x60006B7")]
	public static void DoShowGC_Promo() { }

	[Address(RVA = "0x12CDE90", Offset = "0x12CDE90", Length = "0x708")]
	[Token(Token = "0x60006B8")]
	public static void DoShowPromo() { }

	[Address(RVA = "0x12CD4A4", Offset = "0x12CD4A4", Length = "0x288")]
	[Token(Token = "0x60006BE")]
	public static void DoShowReactivationCampaignPromo() { }

	[Address(RVA = "0x12CEE7C", Offset = "0x12CEE7C", Length = "0xCC")]
	[Token(Token = "0x60006BA")]
	private static void HookForceUpdateOSAlertEvents() { }

	[Address(RVA = "0x12CC964", Offset = "0x12CC964", Length = "0x124")]
	[Token(Token = "0x60006B2")]
	public static void InitializeConfig(PromoFile inPromoFile) { }

	[Address(RVA = "0x12CF224", Offset = "0x12CF224", Length = "0x90")]
	[Token(Token = "0x60006BD")]
	private static void OnForceUpdateClicked() { }

	[Address(RVA = "0x12CF1D4", Offset = "0x12CF1D4", Length = "0x50")]
	[Token(Token = "0x60006BC")]
	private static void OnForceUpdateOSAlertClicked(int inAlertIndex, string inButtonString) { }

	[Address(RVA = "0x12CCC94", Offset = "0x12CCC94", Length = "0xC8")]
	[Token(Token = "0x60006B4")]
	private static bool ProcessForceUpdate(ConfigData inConfigData) { }

	[Address(RVA = "0x12CCA88", Offset = "0x12CCA88", Length = "0x140")]
	[Token(Token = "0x60006B3")]
	private static bool ProcessPromoPopup(ConfigData inConfigData) { }

	[Address(RVA = "0x12CD72C", Offset = "0x12CD72C", Length = "0x320")]
	[Token(Token = "0x60006B6")]
	private static void PromoAlertCancelledEvent() { }

	[Address(RVA = "0x12CCD5C", Offset = "0x12CCD5C", Length = "0x590")]
	[Token(Token = "0x60006B5")]
	public static void PromoAlertOK() { }

	[Address(RVA = "0x12CEC00", Offset = "0x12CEC00", Length = "0x27C")]
	[Token(Token = "0x60006B9")]
	public static bool ShowForceUpdate() { }

	[Address(RVA = "0x12CF10C", Offset = "0x12CF10C", Length = "0xC8")]
	[Token(Token = "0x60006BB")]
	private static void UnhookForceUpdateOSAlertEvents() { }

}

