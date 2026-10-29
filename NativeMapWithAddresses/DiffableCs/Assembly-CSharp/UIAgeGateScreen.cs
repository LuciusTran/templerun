//Type is in global namespace

[Token(Token = "0x200014E")]
public class UIAgeGateScreen : BasePanel
{
	[Token(Token = "0x4000BBC")]
	private const string _LogChannel = "UIAgeGateScreen"; //Field offset: 0x0
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000BBD")]
	public GameObject SlideInOffset; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000BBE")]
	public GameObject ConfirmButton; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000BBF")]
	public GameObject Header; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000BC0")]
	public GameObject Content; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x4000BC1")]
	public Transform Thumb; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4000BC2")]
	public UIPrivacyQuestion AgeQuestionUi; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x4000BC3")]
	public QuestionData AgeQuestionData; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x4000BC4")]
	public UILabel MoreInfoLabel; //Field offset: 0x88
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x4000BC5")]
	public UISlider Slider; //Field offset: 0x90
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x4000BC6")]
	public UILabel AgeLabel; //Field offset: 0x98
	[FieldOffset(Offset = "0xA0")]
	[Token(Token = "0x4000BC7")]
	private bool _FirstSlide; //Field offset: 0xA0
	[FieldOffset(Offset = "0xA8")]
	[Token(Token = "0x4000BC8")]
	private UIButtonColor ConfirmButtonColor; //Field offset: 0xA8
	[FieldOffset(Offset = "0xB0")]
	[Token(Token = "0x4000BC9")]
	private UIWidget ConfirmButtonWidget; //Field offset: 0xB0
	[FieldOffset(Offset = "0xB8")]
	[Token(Token = "0x4000BCA")]
	private Collider ConfirmButtonCollider; //Field offset: 0xB8
	[FieldOffset(Offset = "0xC0")]
	[Token(Token = "0x4000BCB")]
	private Action<Int32> SystemOnClosedHandler; //Field offset: 0xC0
	[FieldOffset(Offset = "0xC8")]
	[Token(Token = "0x4000BCC")]
	private float SliderValue; //Field offset: 0xC8

	[Address(RVA = "0x13008F4", Offset = "0x13008F4", Length = "0x10")]
	[Token(Token = "0x60009C8")]
	public UIAgeGateScreen() { }

	[Address(RVA = "0x12FFC04", Offset = "0x12FFC04", Length = "0xE8")]
	[Token(Token = "0x60009BD")]
	private void Awake() { }

	[Address(RVA = "0x1300434", Offset = "0x1300434", Length = "0x28C")]
	[Token(Token = "0x60009C5")]
	private void ConfirmClicked() { }

	[Address(RVA = "0x13006C0", Offset = "0x13006C0", Length = "0x50")]
	[Token(Token = "0x60009C6")]
	private void EndPrivacyFlow() { }

	[Address(RVA = "0x1300124", Offset = "0x1300124", Length = "0x118")]
	[Token(Token = "0x60009C1")]
	private void MoreInfoClicked() { }

	[Address(RVA = "0x130023C", Offset = "0x130023C", Length = "0xE4")]
	[Token(Token = "0x60009C4")]
	private void OnFailedToShowMoreInfo() { }

	[Address(RVA = "0x1300424", Offset = "0x1300424", Length = "0x10")]
	[Token(Token = "0x60009C3")]
	private void OnShowMoreInfo(string inMoreInfoURL) { }

	[Address(RVA = "0x1300710", Offset = "0x1300710", Length = "0x1E4")]
	[Token(Token = "0x60009C7")]
	public void OnSlider(float v) { }

	[Address(RVA = "0x1300320", Offset = "0x1300320", Length = "0x104")]
	[Token(Token = "0x60009C2")]
	private void PPClicked() { }

	[Address(RVA = "0x12FFFC8", Offset = "0x12FFFC8", Length = "0x148")]
	[Token(Token = "0x60009C0")]
	private void SetConfirmButton() { }

	[Address(RVA = "0x12FFCEC", Offset = "0x12FFCEC", Length = "0x2DC")]
	[Token(Token = "0x60009BE")]
	public void Setup(List<QuestionData> inConsentQuestionData, Action<Int32> systemCloseCallback = null) { }

	[Address(RVA = "0x1300110", Offset = "0x1300110", Length = "0x14")]
	[Token(Token = "0x60009BF")]
	public virtual void SlideIn(BasePanel returnTo) { }

}

