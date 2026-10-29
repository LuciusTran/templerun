//Type is in global namespace

[Token(Token = "0x2000157")]
public class UIPrivacyQuestion : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000BF2")]
	public UIWidget SizePlate; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000BF3")]
	public UILabel DescriptionLabel; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000BF4")]
	public UILabel CallToActionLabel; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000BF5")]
	public UILabel EntryLabel; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000BF6")]
	public UISavedOption QuestionBox; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4000BF7")]
	public UICheckbox PositiveBox; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000BF8")]
	public UICheckbox NegativeBox; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000BF9")]
	public UILabel PositiveLabel; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000BFA")]
	public UILabel NegativeLabel; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Header("Positioning")]
	[Token(Token = "0x4000BFB")]
	public Transform CallToActionParent; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x4000BFC")]
	public Transform AnswerParent; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4000BFD")]
	public float InfoToPromptPadding; //Field offset: 0x78
	[FieldOffset(Offset = "0x7C")]
	[Token(Token = "0x4000BFE")]
	public float PromptToAnswerPadding; //Field offset: 0x7C
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x4000BFF")]
	public float AnswerSize; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x4000C00")]
	private Action _OnQuestionAnswered; //Field offset: 0x88
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x4000C01")]
	private QuestionData _QuestionData; //Field offset: 0x90

	[Address(RVA = "0x1302184", Offset = "0x1302184", Length = "0x8")]
	[Token(Token = "0x60009EB")]
	public UIPrivacyQuestion() { }

	[Address(RVA = "0x1301AF8", Offset = "0x1301AF8", Length = "0xC4")]
	[Token(Token = "0x60009E9")]
	private void OnDestroy() { }

	[Address(RVA = "0x1301BBC", Offset = "0x1301BBC", Length = "0x5C8")]
	[Token(Token = "0x60009EA")]
	public void SetupWithQuestionData(QuestionData inQuestionData, string inEntryText, Action inOnQuestionAnswered) { }

}

