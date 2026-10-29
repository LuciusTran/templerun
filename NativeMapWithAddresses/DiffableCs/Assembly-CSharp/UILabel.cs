//Type is in global namespace

[AddComponentMenu("NGUI/UI/Label")]
[ExecuteInEditMode]
[Token(Token = "0x2000079")]
public class UILabel : UIWidget
{
	[Token(Token = "0x200007A")]
	internal enum Effect
	{
		None = 0,
		Shadow = 1,
		Outline = 2,
	}

	[FieldOffset(Offset = "0x90")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x40002C9")]
	private UIFont mFont; //Field offset: 0x90
	[FieldOffset(Offset = "0x98")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x40002CA")]
	private string mText; //Field offset: 0x98
	[FieldOffset(Offset = "0xA0")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x40002CB")]
	private int mMaxLineWidth; //Field offset: 0xA0
	[FieldOffset(Offset = "0xA4")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x40002CC")]
	private bool mEncoding; //Field offset: 0xA4
	[FieldOffset(Offset = "0xA5")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x40002CD")]
	private bool mMultiline; //Field offset: 0xA5
	[FieldOffset(Offset = "0xA6")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x40002CE")]
	private bool mPassword; //Field offset: 0xA6
	[FieldOffset(Offset = "0xA7")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x40002CF")]
	private bool mShowLastChar; //Field offset: 0xA7
	[FieldOffset(Offset = "0xA8")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x40002D0")]
	private Effect mEffectStyle; //Field offset: 0xA8
	[FieldOffset(Offset = "0xAC")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x40002D1")]
	private Color mEffectColor; //Field offset: 0xAC
	[FieldOffset(Offset = "0xBC")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x40002D2")]
	private SymbolStyle mSymbols; //Field offset: 0xBC
	[FieldOffset(Offset = "0xC0")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x40002D3")]
	private float mLineWidth; //Field offset: 0xC0
	[FieldOffset(Offset = "0xC4")]
	[Token(Token = "0x40002D4")]
	private bool mShouldBeProcessed; //Field offset: 0xC4
	[FieldOffset(Offset = "0xC8")]
	[Token(Token = "0x40002D5")]
	private string mProcessedText; //Field offset: 0xC8
	[FieldOffset(Offset = "0xD0")]
	[Token(Token = "0x40002D6")]
	private Vector3 mLastScale; //Field offset: 0xD0
	[FieldOffset(Offset = "0xE0")]
	[Token(Token = "0x40002D7")]
	private string mLastText; //Field offset: 0xE0
	[FieldOffset(Offset = "0xE8")]
	[Token(Token = "0x40002D8")]
	private int mLastWidth; //Field offset: 0xE8
	[FieldOffset(Offset = "0xEC")]
	[Token(Token = "0x40002D9")]
	private bool mLastEncoding; //Field offset: 0xEC
	[FieldOffset(Offset = "0xED")]
	[Token(Token = "0x40002DA")]
	private bool mLastMulti; //Field offset: 0xED
	[FieldOffset(Offset = "0xEE")]
	[Token(Token = "0x40002DB")]
	private bool mLastPass; //Field offset: 0xEE
	[FieldOffset(Offset = "0xEF")]
	[Token(Token = "0x40002DC")]
	private bool mLastShow; //Field offset: 0xEF
	[FieldOffset(Offset = "0xF0")]
	[Token(Token = "0x40002DD")]
	private Effect mLastEffect; //Field offset: 0xF0
	[FieldOffset(Offset = "0xF4")]
	[Token(Token = "0x40002DE")]
	private Color mLastColor; //Field offset: 0xF4
	[FieldOffset(Offset = "0x104")]
	[Token(Token = "0x40002DF")]
	private Vector3 mSize; //Field offset: 0x104

	[Token(Token = "0x17000081")]
	public Color effectColor
	{
		[Address(RVA = "0x12A0F18", Offset = "0x12A0F18", Length = "0xC")]
		[Token(Token = "0x6000319")]
		 get { } //Length: 12
		[Address(RVA = "0x12A0F24", Offset = "0x12A0F24", Length = "0x64")]
		[Token(Token = "0x600031A")]
		 set { } //Length: 100
	}

	[Token(Token = "0x17000080")]
	public Effect effectStyle
	{
		[Address(RVA = "0x12A0EF0", Offset = "0x12A0EF0", Length = "0x8")]
		[Token(Token = "0x6000317")]
		 get { } //Length: 8
		[Address(RVA = "0x12A0EF8", Offset = "0x12A0EF8", Length = "0x20")]
		[Token(Token = "0x6000318")]
		 set { } //Length: 32
	}

	[Token(Token = "0x17000078")]
	public UIFont font
	{
		[Address(RVA = "0x12A0E44", Offset = "0x12A0E44", Length = "0x8")]
		[Token(Token = "0x6000307")]
		 get { } //Length: 8
		[Address(RVA = "0x129E74C", Offset = "0x129E74C", Length = "0xEC")]
		[Token(Token = "0x6000308")]
		 set { } //Length: 236
	}

	[Token(Token = "0x17000077")]
	private bool hasChanged
	{
		[Address(RVA = "0x12A0D38", Offset = "0x12A0D38", Length = "0xD8")]
		[Token(Token = "0x6000305")]
		private get { } //Length: 216
		[Address(RVA = "0x12A0E10", Offset = "0x12A0E10", Length = "0x34")]
		[Token(Token = "0x6000306")]
		private set { } //Length: 52
	}

	[Token(Token = "0x1700007C")]
	public int lineWidth
	{
		[Address(RVA = "0x12A0E84", Offset = "0x12A0E84", Length = "0x8")]
		[Token(Token = "0x600030F")]
		 get { } //Length: 8
		[Address(RVA = "0x12A0E8C", Offset = "0x12A0E8C", Length = "0x20")]
		[Token(Token = "0x6000310")]
		 set { } //Length: 32
	}

	[Token(Token = "0x17000083")]
	public virtual Material material
	{
		[Address(RVA = "0x12A1390", Offset = "0x12A1390", Length = "0xC0")]
		[Token(Token = "0x600031C")]
		 get { } //Length: 192
	}

	[Token(Token = "0x1700007D")]
	public bool multiLine
	{
		[Address(RVA = "0x12A0EAC", Offset = "0x12A0EAC", Length = "0x8")]
		[Token(Token = "0x6000311")]
		 get { } //Length: 8
		[Address(RVA = "0x12A0EB4", Offset = "0x12A0EB4", Length = "0x2C")]
		[Token(Token = "0x6000312")]
		 set { } //Length: 44
	}

	[Token(Token = "0x1700007E")]
	public bool password
	{
		[Address(RVA = "0x12A0EE0", Offset = "0x12A0EE0", Length = "0x8")]
		[Token(Token = "0x6000313")]
		 get { } //Length: 8
		[Address(RVA = "0x12A05FC", Offset = "0x12A05FC", Length = "0x28")]
		[Token(Token = "0x6000314")]
		 set { } //Length: 40
	}

	[Token(Token = "0x17000082")]
	public string processedText
	{
		[Address(RVA = "0x12A0F88", Offset = "0x12A0F88", Length = "0xB0")]
		[Token(Token = "0x600031B")]
		 get { } //Length: 176
	}

	[Token(Token = "0x17000084")]
	public virtual Vector2 relativeSize
	{
		[Address(RVA = "0x12A1450", Offset = "0x12A1450", Length = "0xC8")]
		[Token(Token = "0x600031D")]
		 get { } //Length: 200
	}

	[Token(Token = "0x1700007F")]
	public bool showLastPasswordChar
	{
		[Address(RVA = "0x12A0EE8", Offset = "0x12A0EE8", Length = "0x8")]
		[Token(Token = "0x6000315")]
		 get { } //Length: 8
		[Address(RVA = "0x129FEE0", Offset = "0x129FEE0", Length = "0x24")]
		[Token(Token = "0x6000316")]
		 set { } //Length: 36
	}

	[Token(Token = "0x1700007A")]
	public bool supportEncoding
	{
		[Address(RVA = "0x12A0E54", Offset = "0x12A0E54", Length = "0x8")]
		[Token(Token = "0x600030B")]
		 get { } //Length: 8
		[Address(RVA = "0x129FDA4", Offset = "0x129FDA4", Length = "0x2C")]
		[Token(Token = "0x600030C")]
		 set { } //Length: 44
	}

	[Token(Token = "0x1700007B")]
	public SymbolStyle symbolStyle
	{
		[Address(RVA = "0x12A0E5C", Offset = "0x12A0E5C", Length = "0x8")]
		[Token(Token = "0x600030D")]
		 get { } //Length: 8
		[Address(RVA = "0x12A0E64", Offset = "0x12A0E64", Length = "0x20")]
		[Token(Token = "0x600030E")]
		 set { } //Length: 32
	}

	[Token(Token = "0x17000079")]
	public string text
	{
		[Address(RVA = "0x12A0E4C", Offset = "0x12A0E4C", Length = "0x8")]
		[Token(Token = "0x6000309")]
		 get { } //Length: 8
		[Address(RVA = "0x129FEA0", Offset = "0x129FEA0", Length = "0x40")]
		[Token(Token = "0x600030A")]
		 set { } //Length: 64
	}

	[Address(RVA = "0x12A29B8", Offset = "0x12A29B8", Length = "0x10C")]
	[Token(Token = "0x6000325")]
	public UILabel() { }

	[Address(RVA = "0x12A2318", Offset = "0x12A2318", Length = "0x1F4")]
	[Token(Token = "0x6000323")]
	private void ApplyShadow(BetterList<Vector3> verts, BetterList<Vector2> uvs, BetterList<Color> cols, int start, int end, float x, float y) { }

	[Address(RVA = "0x12A0F18", Offset = "0x12A0F18", Length = "0xC")]
	[Token(Token = "0x6000319")]
	public Color get_effectColor() { }

	[Address(RVA = "0x12A0EF0", Offset = "0x12A0EF0", Length = "0x8")]
	[Token(Token = "0x6000317")]
	public Effect get_effectStyle() { }

	[Address(RVA = "0x12A0E44", Offset = "0x12A0E44", Length = "0x8")]
	[Token(Token = "0x6000307")]
	public UIFont get_font() { }

	[Address(RVA = "0x12A0D38", Offset = "0x12A0D38", Length = "0xD8")]
	[Token(Token = "0x6000305")]
	private bool get_hasChanged() { }

	[Address(RVA = "0x12A0E84", Offset = "0x12A0E84", Length = "0x8")]
	[Token(Token = "0x600030F")]
	public int get_lineWidth() { }

	[Address(RVA = "0x12A1390", Offset = "0x12A1390", Length = "0xC0")]
	[Token(Token = "0x600031C")]
	public virtual Material get_material() { }

	[Address(RVA = "0x12A0EAC", Offset = "0x12A0EAC", Length = "0x8")]
	[Token(Token = "0x6000311")]
	public bool get_multiLine() { }

	[Address(RVA = "0x12A0EE0", Offset = "0x12A0EE0", Length = "0x8")]
	[Token(Token = "0x6000313")]
	public bool get_password() { }

	[Address(RVA = "0x12A0F88", Offset = "0x12A0F88", Length = "0xB0")]
	[Token(Token = "0x600031B")]
	public string get_processedText() { }

	[Address(RVA = "0x12A1450", Offset = "0x12A1450", Length = "0xC8")]
	[Token(Token = "0x600031D")]
	public virtual Vector2 get_relativeSize() { }

	[Address(RVA = "0x12A0EE8", Offset = "0x12A0EE8", Length = "0x8")]
	[Token(Token = "0x6000315")]
	public bool get_showLastPasswordChar() { }

	[Address(RVA = "0x12A0E54", Offset = "0x12A0E54", Length = "0x8")]
	[Token(Token = "0x600030B")]
	public bool get_supportEncoding() { }

	[Address(RVA = "0x12A0E5C", Offset = "0x12A0E5C", Length = "0x8")]
	[Token(Token = "0x600030D")]
	public SymbolStyle get_symbolStyle() { }

	[Address(RVA = "0x12A0E4C", Offset = "0x12A0E4C", Length = "0x8")]
	[Token(Token = "0x6000309")]
	public string get_text() { }

	[Address(RVA = "0x12A1D50", Offset = "0x12A1D50", Length = "0x5C8")]
	[Token(Token = "0x6000322")]
	public virtual void MakePixelPerfect() { }

	[Address(RVA = "0x12A161C", Offset = "0x12A161C", Length = "0x734")]
	[Token(Token = "0x6000321")]
	public void MakePositionPerfect() { }

	[Address(RVA = "0x12A1608", Offset = "0x12A1608", Length = "0x14")]
	[Token(Token = "0x600031F")]
	public virtual void MarkAsChanged() { }

	[Address(RVA = "0x12A250C", Offset = "0x12A250C", Length = "0x4AC")]
	[Token(Token = "0x6000324")]
	public virtual void OnFill(BetterList<Vector3> verts, BetterList<Vector2> uvs, BetterList<Color> cols) { }

	[Address(RVA = "0x12A1518", Offset = "0x12A1518", Length = "0xF0")]
	[Token(Token = "0x600031E")]
	protected virtual void OnStart() { }

	[Address(RVA = "0x12A1038", Offset = "0x12A1038", Length = "0x358")]
	[Token(Token = "0x6000320")]
	private void ProcessText() { }

	[Address(RVA = "0x12A0F24", Offset = "0x12A0F24", Length = "0x64")]
	[Token(Token = "0x600031A")]
	public void set_effectColor(Color value) { }

	[Address(RVA = "0x12A0EF8", Offset = "0x12A0EF8", Length = "0x20")]
	[Token(Token = "0x6000318")]
	public void set_effectStyle(Effect value) { }

	[Address(RVA = "0x129E74C", Offset = "0x129E74C", Length = "0xEC")]
	[Token(Token = "0x6000308")]
	public void set_font(UIFont value) { }

	[Address(RVA = "0x12A0E10", Offset = "0x12A0E10", Length = "0x34")]
	[Token(Token = "0x6000306")]
	private void set_hasChanged(bool value) { }

	[Address(RVA = "0x12A0E8C", Offset = "0x12A0E8C", Length = "0x20")]
	[Token(Token = "0x6000310")]
	public void set_lineWidth(int value) { }

	[Address(RVA = "0x12A0EB4", Offset = "0x12A0EB4", Length = "0x2C")]
	[Token(Token = "0x6000312")]
	public void set_multiLine(bool value) { }

	[Address(RVA = "0x12A05FC", Offset = "0x12A05FC", Length = "0x28")]
	[Token(Token = "0x6000314")]
	public void set_password(bool value) { }

	[Address(RVA = "0x129FEE0", Offset = "0x129FEE0", Length = "0x24")]
	[Token(Token = "0x6000316")]
	public void set_showLastPasswordChar(bool value) { }

	[Address(RVA = "0x129FDA4", Offset = "0x129FDA4", Length = "0x2C")]
	[Token(Token = "0x600030C")]
	public void set_supportEncoding(bool value) { }

	[Address(RVA = "0x12A0E64", Offset = "0x12A0E64", Length = "0x20")]
	[Token(Token = "0x600030E")]
	public void set_symbolStyle(SymbolStyle value) { }

	[Address(RVA = "0x129FEA0", Offset = "0x129FEA0", Length = "0x40")]
	[Token(Token = "0x600030A")]
	public void set_text(string value) { }

}

