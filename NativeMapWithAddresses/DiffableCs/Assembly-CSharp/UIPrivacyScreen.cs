//Type is in global namespace

[Token(Token = "0x2000158")]
public class UIPrivacyScreen : BasePanel
{
	[Token(Token = "0x4000C12")]
	private const string _LogChannel = "UIPrivacyScreen"; //Field offset: 0x0
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000C02")]
	public GameObject SlideInOffset; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000C03")]
	public GameObject ConfirmButton; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000C04")]
	public GameObject Header; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000C05")]
	public GameObject QuestionPrefab; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x4000C06")]
	public GameObject SeperatorPrefab; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4000C07")]
	public UIPanel ScrollViewPanel; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x4000C08")]
	public Transform ScrollContent; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x4000C09")]
	public UIStack ScrollStack; //Field offset: 0x88
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x4000C0A")]
	public UILabel PrivacyLabel; //Field offset: 0x90
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x4000C0B")]
	public UILabel MoreInfoLabel; //Field offset: 0x98
	[FieldOffset(Offset = "0xA0")]
	[Token(Token = "0x4000C0C")]
	private bool _FirstSlide; //Field offset: 0xA0
	[FieldOffset(Offset = "0xA8")]
	[Token(Token = "0x4000C0D")]
	private UIButtonColor ConfirmButtonColor; //Field offset: 0xA8
	[FieldOffset(Offset = "0xB0")]
	[Token(Token = "0x4000C0E")]
	private UIWidget ConfirmButtonWidget; //Field offset: 0xB0
	[FieldOffset(Offset = "0xB8")]
	[Token(Token = "0x4000C0F")]
	private Collider ConfirmButtonCollider; //Field offset: 0xB8
	[FieldOffset(Offset = "0xC0")]
	[Token(Token = "0x4000C10")]
	private List<QuestionData> _QuestionsToShow; //Field offset: 0xC0
	[FieldOffset(Offset = "0xC8")]
	[Token(Token = "0x4000C11")]
	private List<String> _QuestionGroupNames; //Field offset: 0xC8

	[Address(RVA = "0x13030B0", Offset = "0x13030B0", Length = "0xCC")]
	[Token(Token = "0x60009F5")]
	public UIPrivacyScreen() { }

	[Address(RVA = "0x1302618", Offset = "0x1302618", Length = "0x230")]
	[Token(Token = "0x60009EF")]
	private void AddQuestion(QuestionData inQuestionData, int inCurrentQuestionIdx, int inTotalQuestionCount) { }

	[Address(RVA = "0x130218C", Offset = "0x130218C", Length = "0xD8")]
	[Token(Token = "0x60009EC")]
	private void Awake() { }

	[Address(RVA = "0x1302DB0", Offset = "0x1302DB0", Length = "0x300")]
	[Token(Token = "0x60009F4")]
	private void ConfirmClicked() { }

	[Address(RVA = "0x1302C50", Offset = "0x1302C50", Length = "0xF8")]
	[Token(Token = "0x60009F1")]
	private void MoreInfoClicked() { }

	[Address(RVA = "0x1302D58", Offset = "0x1302D58", Length = "0x58")]
	[Token(Token = "0x60009F3")]
	private void OnFailedToShowPrivacyPolicy() { }

	[Address(RVA = "0x1302D48", Offset = "0x1302D48", Length = "0x10")]
	[Token(Token = "0x60009F2")]
	private void OnShowPrivacyPolicy(string inMoreInfoURL) { }

	[Address(RVA = "0x1302848", Offset = "0x1302848", Length = "0x224")]
	[Token(Token = "0x60009F0")]
	private void SetConfirmButton() { }

	[Address(RVA = "0x1302264", Offset = "0x1302264", Length = "0x3B4")]
	[Token(Token = "0x60009ED")]
	public void Setup(List<QuestionData> inConsentQuestionData) { }

	[Address(RVA = "0x1302A6C", Offset = "0x1302A6C", Length = "0x1E4")]
	[Token(Token = "0x60009EE")]
	public virtual void SlideIn(BasePanel returnTo) { }

}

