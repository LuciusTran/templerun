//Type is in global namespace

[Token(Token = "0x2000128")]
public class ImageAlertView : BasePanel
{
	[Token(Token = "0x4000A7D")]
	public static ImageAlertView Instance; //Field offset: 0x0
	[Token(Token = "0x4000A7E")]
	private const string _Analytics_DialogTitleKey = "Title"; //Field offset: 0x0
	[Token(Token = "0x4000A7F")]
	private const string _Analytics_DialogSourceKey = "Source"; //Field offset: 0x0
	[Token(Token = "0x4000A80")]
	private const string _PanelName = "ImageAlert"; //Field offset: 0x0
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000A78")]
	public GameObject CenterButton; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000A79")]
	public UILabel CenterButtonText; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000A7A")]
	public UILabel TitleText; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000A7B")]
	public UISprite ImageSprite; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x4000A7C")]
	private Action CenterButtonAction; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4000A81")]
	public UILabel ImagePopupImageTextH1; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x4000A82")]
	public UILabel ImagePopupImageTextH2; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x4000A83")]
	public UILabel ImagePopupImageTextH3; //Field offset: 0x88

	[Address(RVA = "0x12F0890", Offset = "0x12F0890", Length = "0x8")]
	[Token(Token = "0x60008CA")]
	public ImageAlertView() { }

	[Address(RVA = "0x12F06CC", Offset = "0x12F06CC", Length = "0x1C4")]
	[Token(Token = "0x60008C9")]
	private void OnClickCenter() { }

	[Address(RVA = "0x12F0550", Offset = "0x12F0550", Length = "0x17C")]
	[Token(Token = "0x60008C8")]
	public void ShowImageAlert(string title, string imageName, string descName, string centerButton, string descriptionH1, string descriptionH2, string descriptionH3, bool IsImagePopupLocalized, Action centerButtonAction = null, bool showBannerAds = true) { }

	[Address(RVA = "0x12F04C4", Offset = "0x12F04C4", Length = "0x8C")]
	[Token(Token = "0x60008C7")]
	public virtual void Start() { }

}

