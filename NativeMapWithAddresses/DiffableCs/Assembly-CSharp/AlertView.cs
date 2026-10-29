//Type is in global namespace

[Token(Token = "0x2000105")]
public class AlertView : BasePanel
{
	[Token(Token = "0x4000917")]
	private const string _PanelName = "Alert"; //Field offset: 0x0
	[Token(Token = "0x4000915")]
	private const string _Analytics_DialogTitleKey = "Title"; //Field offset: 0x0
	[Token(Token = "0x4000914")]
	public static AlertView Instance; //Field offset: 0x0
	[Token(Token = "0x4000916")]
	private const string _Analytics_DialogSourceKey = "Source"; //Field offset: 0x0
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x40008ED")]
	public GameObject TextAlertObject; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x40008EE")]
	public GameObject ImagePopupAlertObject; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x40008EF")]
	public GameObject TextAlertLargeObject; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x40008F0")]
	public GameObject DLImagePopupAlertObject; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x40008F1")]
	public GameObject LeftButton; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x40008F2")]
	public GameObject CenterButton; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x40008F3")]
	public GameObject RightButton; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x40008F4")]
	public UILabel LeftButtonText; //Field offset: 0x88
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x40008F5")]
	public UILabel CenterButtonText; //Field offset: 0x90
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x40008F6")]
	public UILabel RightButtonText; //Field offset: 0x98
	[FieldOffset(Offset = "0xA0")]
	[Token(Token = "0x40008F7")]
	public UILabel TitleText; //Field offset: 0xA0
	[FieldOffset(Offset = "0xA8")]
	[Token(Token = "0x40008F8")]
	public UILabel DialogText; //Field offset: 0xA8
	[FieldOffset(Offset = "0xB0")]
	[Token(Token = "0x40008F9")]
	public GameObject InputBox; //Field offset: 0xB0
	[FieldOffset(Offset = "0xB8")]
	[Token(Token = "0x40008FA")]
	public UISprite TwitterSprite; //Field offset: 0xB8
	[FieldOffset(Offset = "0xC0")]
	[Token(Token = "0x40008FB")]
	public UIInput Inputter; //Field offset: 0xC0
	[FieldOffset(Offset = "0xC8")]
	[Token(Token = "0x40008FC")]
	private Action LeftButtonAction; //Field offset: 0xC8
	[FieldOffset(Offset = "0xD0")]
	[Token(Token = "0x40008FD")]
	private Action RightButtonAction; //Field offset: 0xD0
	[FieldOffset(Offset = "0xD8")]
	[Token(Token = "0x40008FE")]
	private Action CenterButtonAction; //Field offset: 0xD8
	[FieldOffset(Offset = "0xE0")]
	[Header("Image Alert UI Elements")]
	[Token(Token = "0x40008FF")]
	public GameObject ImagePopupLeftButton; //Field offset: 0xE0
	[FieldOffset(Offset = "0xE8")]
	[Token(Token = "0x4000900")]
	public GameObject ImagePopupCenterButton; //Field offset: 0xE8
	[FieldOffset(Offset = "0xF0")]
	[Token(Token = "0x4000901")]
	public GameObject ImagePopupRightButton; //Field offset: 0xF0
	[FieldOffset(Offset = "0xF8")]
	[Token(Token = "0x4000902")]
	public UILabel ImagePopupLeftButtonText; //Field offset: 0xF8
	[FieldOffset(Offset = "0x100")]
	[Token(Token = "0x4000903")]
	public UILabel ImagePopupCenterButtonText; //Field offset: 0x100
	[FieldOffset(Offset = "0x108")]
	[Token(Token = "0x4000904")]
	public UILabel ImagePopupRightButtonText; //Field offset: 0x108
	[FieldOffset(Offset = "0x110")]
	[Token(Token = "0x4000905")]
	public UISprite ImageSprite; //Field offset: 0x110
	[FieldOffset(Offset = "0x118")]
	[Token(Token = "0x4000906")]
	public UILabel ImagePopupTitleText; //Field offset: 0x118
	[FieldOffset(Offset = "0x120")]
	[Token(Token = "0x4000907")]
	public UILabel ImagePopupDialogText; //Field offset: 0x120
	[FieldOffset(Offset = "0x128")]
	[Token(Token = "0x4000908")]
	public UILabel ImagePopupImageTextH1; //Field offset: 0x128
	[FieldOffset(Offset = "0x130")]
	[Token(Token = "0x4000909")]
	public UILabel ImagePopupImageTextH2; //Field offset: 0x130
	[FieldOffset(Offset = "0x138")]
	[Token(Token = "0x400090A")]
	public UILabel ImagePopupImageTextH3; //Field offset: 0x138
	[FieldOffset(Offset = "0x140")]
	[Token(Token = "0x400090B")]
	public UILabel DLImagePopupTitleText; //Field offset: 0x140
	[FieldOffset(Offset = "0x148")]
	[Token(Token = "0x400090C")]
	public UILabel DLImagePopupCenterButtonText; //Field offset: 0x148
	[FieldOffset(Offset = "0x150")]
	[Token(Token = "0x400090D")]
	public UILabel DLImagePopupImageTextH1; //Field offset: 0x150
	[FieldOffset(Offset = "0x158")]
	[Token(Token = "0x400090E")]
	public UILabel DLImagePopupImageTextH2; //Field offset: 0x158
	[FieldOffset(Offset = "0x160")]
	[Token(Token = "0x400090F")]
	public UILabel DLImagePopupImageTextH3; //Field offset: 0x160
	[FieldOffset(Offset = "0x168")]
	[Header("Alert Large UI Elements")]
	[Token(Token = "0x4000910")]
	public UILabel LargeAlertLeftButtonText; //Field offset: 0x168
	[FieldOffset(Offset = "0x170")]
	[Token(Token = "0x4000911")]
	public UILabel LargeAlertRightButtonText; //Field offset: 0x170
	[FieldOffset(Offset = "0x178")]
	[Token(Token = "0x4000912")]
	public UILabel LargeAlertTitleText; //Field offset: 0x178
	[FieldOffset(Offset = "0x180")]
	[Token(Token = "0x4000913")]
	public UILabel LargeAlertDialogText; //Field offset: 0x180

	[Address(RVA = "0x12DD3F4", Offset = "0x12DD3F4", Length = "0x8")]
	[Token(Token = "0x600079D")]
	public AlertView() { }

	[Address(RVA = "0x12DD3FC", Offset = "0x12DD3FC", Length = "0x4")]
	[CompilerGenerated]
	[Token(Token = "0x600079E")]
	private void <ShowTwitter>b__48_0() { }

	[Address(RVA = "0x12DD1B8", Offset = "0x12DD1B8", Length = "0x1C4")]
	[Token(Token = "0x600079B")]
	private void OnClickCenter() { }

	[Address(RVA = "0x12DCE30", Offset = "0x12DCE30", Length = "0x1C4")]
	[Token(Token = "0x6000799")]
	private void OnClickLeft() { }

	[Address(RVA = "0x12DCFF4", Offset = "0x12DCFF4", Length = "0x1C4")]
	[Token(Token = "0x600079A")]
	private void OnClickRight() { }

	[Address(RVA = "0x12DD37C", Offset = "0x12DD37C", Length = "0x78")]
	[Token(Token = "0x600079C")]
	private void OnSubmit() { }

	[Address(RVA = "0x12CE598", Offset = "0x12CE598", Length = "0x1C8")]
	[Token(Token = "0x6000790")]
	public void ShowAlert(string title, string description, string leftButton, string rightButton, Action leftButtonAction = null, Action rightButtonAction = null, bool showBannerAds = true) { }

	[Address(RVA = "0x12CD2EC", Offset = "0x12CD2EC", Length = "0x1B8")]
	[Token(Token = "0x6000792")]
	public void ShowAlert(string title, string description, string button, Action centerButtonAction = null, bool showBannerAds = true) { }

	[Address(RVA = "0x12DCA2C", Offset = "0x12DCA2C", Length = "0x1A4")]
	[Token(Token = "0x6000793")]
	public void ShowAlert(string title, string description, bool showBannerAds = true) { }

	[Address(RVA = "0x12DC8A0", Offset = "0x12DC8A0", Length = "0x18C")]
	[Token(Token = "0x6000791")]
	public void ShowAlertLarge(string title, string description, string leftButton, string rightButton, Action leftButtonAction = null, Action rightButtonAction = null, bool showBannerAds = true) { }

	[Address(RVA = "0x12CF2B4", Offset = "0x12CF2B4", Length = "0x178")]
	[Token(Token = "0x6000798")]
	public void ShowDeeplinkingAlert(string title, string inButtonText, string descriptionH1, string descriptionH2, string descriptionH3, Action centerButtonAction = null, bool showBannerAds = true) { }

	[Address(RVA = "0x12CEF48", Offset = "0x12CEF48", Length = "0x1C4")]
	[Token(Token = "0x6000795")]
	public void ShowForceUpdate(string inTitle, string inDescription, string inButtonText, Action centerButtonAction = null, bool showBannerAds = true) { }

	[Address(RVA = "0x12CE9F8", Offset = "0x12CE9F8", Length = "0x208")]
	[Token(Token = "0x6000796")]
	public void ShowImageAlert(string imageName, string title, string description, string inButtonText, Action leftButtonAction = null, Action rightButtonAction = null, bool showBannerAds = true) { }

	[Address(RVA = "0x12CE760", Offset = "0x12CE760", Length = "0x298")]
	[Token(Token = "0x6000797")]
	public void ShowImageAlert(string imageName, string title, string description, string inButtonText, string descriptionH1, string descriptionH2, string descriptionH3, Action centerButtonAction = null, bool showBannerAds = true, bool IsImagePopupLocalized = false) { }

	[Address(RVA = "0x12DCBD0", Offset = "0x12DCBD0", Length = "0x260")]
	[Token(Token = "0x6000794")]
	public void ShowTwitter(string message, Action inCancelAction, bool showBannerAds = true) { }

	[Address(RVA = "0x12DC814", Offset = "0x12DC814", Length = "0x8C")]
	[Token(Token = "0x600078F")]
	public virtual void Start() { }

}

