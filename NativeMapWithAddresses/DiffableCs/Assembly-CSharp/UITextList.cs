//Type is in global namespace

[AddComponentMenu("NGUI/UI/Text List")]
[Token(Token = "0x2000085")]
public class UITextList : MonoBehaviour
{
	[Token(Token = "0x2000087")]
	internal class Paragraph
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x400033C")]
		public string text; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x400033D")]
		public String[] lines; //Field offset: 0x18

		[Address(RVA = "0x12AA150", Offset = "0x12AA150", Length = "0x8")]
		[Token(Token = "0x6000388")]
		public Paragraph() { }

	}

	[Token(Token = "0x2000086")]
	internal enum Style
	{
		Text = 0,
		Chat = 1,
	}

	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x400032E")]
	public Style style; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x400032F")]
	public UILabel textLabel; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000330")]
	public float maxWidth; //Field offset: 0x30
	[FieldOffset(Offset = "0x34")]
	[Token(Token = "0x4000331")]
	public float maxHeight; //Field offset: 0x34
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000332")]
	public int maxEntries; //Field offset: 0x38
	[FieldOffset(Offset = "0x3C")]
	[Token(Token = "0x4000333")]
	public bool supportScrollWheel; //Field offset: 0x3C
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000334")]
	protected Char[] mSeparator; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4000335")]
	protected List<Paragraph> mParagraphs; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000336")]
	protected float mScroll; //Field offset: 0x50
	[FieldOffset(Offset = "0x54")]
	[Token(Token = "0x4000337")]
	protected bool mSelected; //Field offset: 0x54
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000338")]
	protected int mTotalLines; //Field offset: 0x58

	[Address(RVA = "0x12AA374", Offset = "0x12AA374", Length = "0xC4")]
	[Token(Token = "0x6000387")]
	public UITextList() { }

	[Address(RVA = "0x12A9E94", Offset = "0x12A9E94", Length = "0x8")]
	[Token(Token = "0x6000381")]
	public void Add(string text) { }

	[Address(RVA = "0x12A9E9C", Offset = "0x12A9E9C", Length = "0x2B4")]
	[Token(Token = "0x6000382")]
	protected void Add(string text, bool updateVisible) { }

	[Address(RVA = "0x12AA158", Offset = "0x12AA158", Length = "0x1CC")]
	[Token(Token = "0x6000383")]
	private void Awake() { }

	[Address(RVA = "0x12A9A6C", Offset = "0x12A9A6C", Length = "0x6C")]
	[Token(Token = "0x6000380")]
	public void Clear() { }

	[Address(RVA = "0x12AA330", Offset = "0x12AA330", Length = "0x44")]
	[Token(Token = "0x6000386")]
	private void OnScroll(float val) { }

	[Address(RVA = "0x12AA324", Offset = "0x12AA324", Length = "0xC")]
	[Token(Token = "0x6000384")]
	private void OnSelect(bool selected) { }

	[Address(RVA = "0x12A9AD8", Offset = "0x12A9AD8", Length = "0x3BC")]
	[Token(Token = "0x6000385")]
	protected void UpdateVisibleText() { }

}

