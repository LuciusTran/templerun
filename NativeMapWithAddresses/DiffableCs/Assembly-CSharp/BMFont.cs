//Type is in global namespace

[Token(Token = "0x2000041")]
public class BMFont
{
	[FieldOffset(Offset = "0x10")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x4000193")]
	private BMGlyph[] mGlyphs; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x4000194")]
	private int mSize; //Field offset: 0x18
	[FieldOffset(Offset = "0x1C")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x4000195")]
	private int mBase; //Field offset: 0x1C
	[FieldOffset(Offset = "0x20")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x4000196")]
	private int mWidth; //Field offset: 0x20
	[FieldOffset(Offset = "0x24")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x4000197")]
	private int mHeight; //Field offset: 0x24
	[FieldOffset(Offset = "0x28")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x4000198")]
	private string mSpriteName; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x4000199")]
	private List<BMGlyph> mSaved; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x400019A")]
	private List<BMSymbol> mSymbols; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x400019B")]
	private Dictionary<Int32, BMGlyph> mDict; //Field offset: 0x40

	[Token(Token = "0x1700001F")]
	public int baseOffset
	{
		[Address(RVA = "0x11FDEE8", Offset = "0x11FDEE8", Length = "0x8")]
		[Token(Token = "0x600015F")]
		 get { } //Length: 8
		[Address(RVA = "0x11FDEF0", Offset = "0x11FDEF0", Length = "0x8")]
		[Token(Token = "0x6000160")]
		 set { } //Length: 8
	}

	[Token(Token = "0x1700001E")]
	public int charSize
	{
		[Address(RVA = "0x11FDED8", Offset = "0x11FDED8", Length = "0x8")]
		[Token(Token = "0x600015D")]
		 get { } //Length: 8
		[Address(RVA = "0x11FDEE0", Offset = "0x11FDEE0", Length = "0x8")]
		[Token(Token = "0x600015E")]
		 set { } //Length: 8
	}

	[Token(Token = "0x17000022")]
	public int glyphCount
	{
		[Address(RVA = "0x11FDF18", Offset = "0x11FDF18", Length = "0x5C")]
		[Token(Token = "0x6000165")]
		 get { } //Length: 92
	}

	[Token(Token = "0x1700001D")]
	public bool isValid
	{
		[Address(RVA = "0x11FDD34", Offset = "0x11FDD34", Length = "0x64")]
		[Token(Token = "0x600015C")]
		 get { } //Length: 100
	}

	[Token(Token = "0x17000023")]
	public string spriteName
	{
		[Address(RVA = "0x11FDF74", Offset = "0x11FDF74", Length = "0x8")]
		[Token(Token = "0x6000166")]
		 get { } //Length: 8
		[Address(RVA = "0x11FDF7C", Offset = "0x11FDF7C", Length = "0x8")]
		[Token(Token = "0x6000167")]
		 set { } //Length: 8
	}

	[Token(Token = "0x17000024")]
	public List<BMSymbol> symbols
	{
		[Address(RVA = "0x11FDF84", Offset = "0x11FDF84", Length = "0x8")]
		[Token(Token = "0x6000168")]
		 get { } //Length: 8
	}

	[Token(Token = "0x17000021")]
	public int texHeight
	{
		[Address(RVA = "0x11FDF08", Offset = "0x11FDF08", Length = "0x8")]
		[Token(Token = "0x6000163")]
		 get { } //Length: 8
		[Address(RVA = "0x11FDF10", Offset = "0x11FDF10", Length = "0x8")]
		[Token(Token = "0x6000164")]
		 set { } //Length: 8
	}

	[Token(Token = "0x17000020")]
	public int texWidth
	{
		[Address(RVA = "0x11FDEF8", Offset = "0x11FDEF8", Length = "0x8")]
		[Token(Token = "0x6000161")]
		 get { } //Length: 8
		[Address(RVA = "0x11FDF00", Offset = "0x11FDF00", Length = "0x8")]
		[Token(Token = "0x6000162")]
		 set { } //Length: 8
	}

	[Address(RVA = "0x11FE6C4", Offset = "0x11FE6C4", Length = "0x10C")]
	[Token(Token = "0x6000171")]
	public BMFont() { }

	[Address(RVA = "0x11FE4CC", Offset = "0x11FE4CC", Length = "0x98")]
	[Token(Token = "0x600016F")]
	public void Clear() { }

	[Address(RVA = "0x11FDEE8", Offset = "0x11FDEE8", Length = "0x8")]
	[Token(Token = "0x600015F")]
	public int get_baseOffset() { }

	[Address(RVA = "0x11FDED8", Offset = "0x11FDED8", Length = "0x8")]
	[Token(Token = "0x600015D")]
	public int get_charSize() { }

	[Address(RVA = "0x11FDF18", Offset = "0x11FDF18", Length = "0x5C")]
	[Token(Token = "0x6000165")]
	public int get_glyphCount() { }

	[Address(RVA = "0x11FDD34", Offset = "0x11FDD34", Length = "0x64")]
	[Token(Token = "0x600015C")]
	public bool get_isValid() { }

	[Address(RVA = "0x11FDF74", Offset = "0x11FDF74", Length = "0x8")]
	[Token(Token = "0x6000166")]
	public string get_spriteName() { }

	[Address(RVA = "0x11FDF84", Offset = "0x11FDF84", Length = "0x8")]
	[Token(Token = "0x6000168")]
	public List<BMSymbol> get_symbols() { }

	[Address(RVA = "0x11FDF08", Offset = "0x11FDF08", Length = "0x8")]
	[Token(Token = "0x6000163")]
	public int get_texHeight() { }

	[Address(RVA = "0x11FDEF8", Offset = "0x11FDEF8", Length = "0x8")]
	[Token(Token = "0x6000161")]
	public int get_texWidth() { }

	[Address(RVA = "0x11FDF8C", Offset = "0x11FDF8C", Length = "0x30")]
	[Token(Token = "0x600016A")]
	private int GetArraySize(int index) { }

	[Address(RVA = "0x11FDFBC", Offset = "0x11FDFBC", Length = "0x210")]
	[Token(Token = "0x600016B")]
	public BMGlyph GetGlyph(int index, bool createIfMissing) { }

	[Address(RVA = "0x11FE1D4", Offset = "0x11FE1D4", Length = "0x8")]
	[Token(Token = "0x600016C")]
	public BMGlyph GetGlyph(int index) { }

	[Address(RVA = "0x11FE1DC", Offset = "0x11FE1DC", Length = "0x16C")]
	[Token(Token = "0x600016D")]
	public BMSymbol GetSymbol(string sequence, bool createIfMissing) { }

	[Address(RVA = "0x11FDD98", Offset = "0x11FDD98", Length = "0x140")]
	[Token(Token = "0x6000169")]
	public bool LegacyCheck() { }

	[Address(RVA = "0x11FE350", Offset = "0x11FE350", Length = "0x150")]
	[Token(Token = "0x600016E")]
	public BMSymbol MatchSymbol(string text, int offset, int textLength) { }

	[Address(RVA = "0x11FDEF0", Offset = "0x11FDEF0", Length = "0x8")]
	[Token(Token = "0x6000160")]
	public void set_baseOffset(int value) { }

	[Address(RVA = "0x11FDEE0", Offset = "0x11FDEE0", Length = "0x8")]
	[Token(Token = "0x600015E")]
	public void set_charSize(int value) { }

	[Address(RVA = "0x11FDF7C", Offset = "0x11FDF7C", Length = "0x8")]
	[Token(Token = "0x6000167")]
	public void set_spriteName(string value) { }

	[Address(RVA = "0x11FDF10", Offset = "0x11FDF10", Length = "0x8")]
	[Token(Token = "0x6000164")]
	public void set_texHeight(int value) { }

	[Address(RVA = "0x11FDF00", Offset = "0x11FDF00", Length = "0x8")]
	[Token(Token = "0x6000162")]
	public void set_texWidth(int value) { }

	[Address(RVA = "0x11FE564", Offset = "0x11FE564", Length = "0xD4")]
	[Token(Token = "0x6000170")]
	public void Trim(int xMin, int yMin, int xMax, int yMax) { }

}

