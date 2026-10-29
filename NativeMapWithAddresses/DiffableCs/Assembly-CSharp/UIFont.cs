//Type is in global namespace

[AddComponentMenu("NGUI/UI/Font")]
[ExecuteInEditMode]
[Token(Token = "0x2000074")]
public class UIFont : MonoBehaviour
{
	[Token(Token = "0x2000075")]
	internal enum Alignment
	{
		Left = 0,
		Center = 1,
		Right = 2,
	}

	[Token(Token = "0x2000076")]
	internal enum SymbolStyle
	{
		None = 0,
		Uncolored = 1,
		Colored = 2,
	}

	[FieldOffset(Offset = "0x20")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x40002AA")]
	private Material mMat; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x40002AB")]
	private Rect mUVRect; //Field offset: 0x28
	[FieldOffset(Offset = "0x38")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x40002AC")]
	private BMFont mFont; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x40002AD")]
	private int mSpacingX; //Field offset: 0x40
	[FieldOffset(Offset = "0x44")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x40002AE")]
	private int mSpacingY; //Field offset: 0x44
	[FieldOffset(Offset = "0x48")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x40002AF")]
	private UIAtlas mAtlas; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x40002B0")]
	private UIFont mReplacement; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x40002B1")]
	private Sprite mSprite; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x40002B2")]
	private bool mSpriteSet; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x40002B3")]
	private List<Color> mColors; //Field offset: 0x68

	[Token(Token = "0x1700006B")]
	public UIAtlas atlas
	{
		[Address(RVA = "0x129D10C", Offset = "0x129D10C", Length = "0x7C")]
		[Token(Token = "0x60002D8")]
		 get { } //Length: 124
		[Address(RVA = "0x129D188", Offset = "0x129D188", Length = "0x144")]
		[Token(Token = "0x60002D9")]
		 set { } //Length: 324
	}

	[Token(Token = "0x17000068")]
	public BMFont bmFont
	{
		[Address(RVA = "0x129CF78", Offset = "0x129CF78", Length = "0x7C")]
		[Token(Token = "0x60002D5")]
		 get { } //Length: 124
	}

	[Token(Token = "0x17000070")]
	public int horizontalSpacing
	{
		[Address(RVA = "0x129E158", Offset = "0x129E158", Length = "0x7C")]
		[Token(Token = "0x60002E1")]
		 get { } //Length: 124
		[Address(RVA = "0x129E1D4", Offset = "0x129E1D4", Length = "0xAC")]
		[Token(Token = "0x60002E2")]
		 set { } //Length: 172
	}

	[Token(Token = "0x1700006C")]
	public Material material
	{
		[Address(RVA = "0x129D7B4", Offset = "0x129D7B4", Length = "0xC0")]
		[Token(Token = "0x60002DA")]
		 get { } //Length: 192
		[Address(RVA = "0x129D874", Offset = "0x129D874", Length = "0xF0")]
		[Token(Token = "0x60002DB")]
		 set { } //Length: 240
	}

	[Token(Token = "0x17000074")]
	public UIFont replacement
	{
		[Address(RVA = "0x129E42C", Offset = "0x129E42C", Length = "0x8")]
		[Token(Token = "0x60002E7")]
		 get { } //Length: 8
		[Address(RVA = "0x129E434", Offset = "0x129E434", Length = "0x148")]
		[Token(Token = "0x60002E8")]
		 set { } //Length: 328
	}

	[Token(Token = "0x17000072")]
	public int size
	{
		[Address(RVA = "0x129E3A8", Offset = "0x129E3A8", Length = "0x84")]
		[Token(Token = "0x60002E5")]
		 get { } //Length: 132
	}

	[Token(Token = "0x17000073")]
	public Sprite sprite
	{
		[Address(RVA = "0x129D2CC", Offset = "0x129D2CC", Length = "0x1F0")]
		[Token(Token = "0x60002E6")]
		 get { } //Length: 496
	}

	[Token(Token = "0x1700006F")]
	public string spriteName
	{
		[Address(RVA = "0x129E010", Offset = "0x129E010", Length = "0x84")]
		[Token(Token = "0x60002DF")]
		 get { } //Length: 132
		[Address(RVA = "0x129E094", Offset = "0x129E094", Length = "0xC4")]
		[Token(Token = "0x60002E0")]
		 set { } //Length: 196
	}

	[Token(Token = "0x1700006A")]
	public int texHeight
	{
		[Address(RVA = "0x129D080", Offset = "0x129D080", Length = "0x8C")]
		[Token(Token = "0x60002D7")]
		 get { } //Length: 140
	}

	[Token(Token = "0x1700006D")]
	public Texture2D texture
	{
		[Address(RVA = "0x129D964", Offset = "0x129D964", Length = "0xF0")]
		[Token(Token = "0x60002DC")]
		 get { } //Length: 240
	}

	[Token(Token = "0x17000069")]
	public int texWidth
	{
		[Address(RVA = "0x129CFF4", Offset = "0x129CFF4", Length = "0x8C")]
		[Token(Token = "0x60002D6")]
		 get { } //Length: 140
	}

	[Token(Token = "0x1700006E")]
	public Rect uvRect
	{
		[Address(RVA = "0x129D4BC", Offset = "0x129D4BC", Length = "0x1FC")]
		[Token(Token = "0x60002DD")]
		 get { } //Length: 508
		[Address(RVA = "0x129DF18", Offset = "0x129DF18", Length = "0xF8")]
		[Token(Token = "0x60002DE")]
		 set { } //Length: 248
	}

	[Token(Token = "0x17000071")]
	public int verticalSpacing
	{
		[Address(RVA = "0x129E280", Offset = "0x129E280", Length = "0x7C")]
		[Token(Token = "0x60002E3")]
		 get { } //Length: 124
		[Address(RVA = "0x129E2FC", Offset = "0x129E2FC", Length = "0xAC")]
		[Token(Token = "0x60002E4")]
		 set { } //Length: 172
	}

	[Address(RVA = "0x129FB40", Offset = "0x129FB40", Length = "0xB4")]
	[Token(Token = "0x60002F4")]
	public UIFont() { }

	[Address(RVA = "0x129F114", Offset = "0x129F114", Length = "0x190")]
	[Token(Token = "0x60002F2")]
	private void Align(BetterList<Vector3> verts, int indexOffset, Alignment alignment, int x, int lineWidth) { }

	[Address(RVA = "0x129E838", Offset = "0x129E838", Length = "0x2B8")]
	[Token(Token = "0x60002ED")]
	public Vector2 CalculatePrintedSize(string text, bool encoding, SymbolStyle symbolStyle) { }

	[Address(RVA = "0x129E654", Offset = "0x129E654", Length = "0xF8")]
	[Token(Token = "0x60002EB")]
	public static bool CheckIfRelated(UIFont a, UIFont b) { }

	[Address(RVA = "0x129EAF0", Offset = "0x129EAF0", Length = "0x88")]
	[Token(Token = "0x60002EE")]
	private static void EndLine(ref StringBuilder s) { }

	[Address(RVA = "0x129D10C", Offset = "0x129D10C", Length = "0x7C")]
	[Token(Token = "0x60002D8")]
	public UIAtlas get_atlas() { }

	[Address(RVA = "0x129CF78", Offset = "0x129CF78", Length = "0x7C")]
	[Token(Token = "0x60002D5")]
	public BMFont get_bmFont() { }

	[Address(RVA = "0x129E158", Offset = "0x129E158", Length = "0x7C")]
	[Token(Token = "0x60002E1")]
	public int get_horizontalSpacing() { }

	[Address(RVA = "0x129D7B4", Offset = "0x129D7B4", Length = "0xC0")]
	[Token(Token = "0x60002DA")]
	public Material get_material() { }

	[Address(RVA = "0x129E42C", Offset = "0x129E42C", Length = "0x8")]
	[Token(Token = "0x60002E7")]
	public UIFont get_replacement() { }

	[Address(RVA = "0x129E3A8", Offset = "0x129E3A8", Length = "0x84")]
	[Token(Token = "0x60002E5")]
	public int get_size() { }

	[Address(RVA = "0x129D2CC", Offset = "0x129D2CC", Length = "0x1F0")]
	[Token(Token = "0x60002E6")]
	public Sprite get_sprite() { }

	[Address(RVA = "0x129E010", Offset = "0x129E010", Length = "0x84")]
	[Token(Token = "0x60002DF")]
	public string get_spriteName() { }

	[Address(RVA = "0x129D080", Offset = "0x129D080", Length = "0x8C")]
	[Token(Token = "0x60002D7")]
	public int get_texHeight() { }

	[Address(RVA = "0x129D964", Offset = "0x129D964", Length = "0xF0")]
	[Token(Token = "0x60002DC")]
	public Texture2D get_texture() { }

	[Address(RVA = "0x129CFF4", Offset = "0x129CFF4", Length = "0x8C")]
	[Token(Token = "0x60002D6")]
	public int get_texWidth() { }

	[Address(RVA = "0x129D4BC", Offset = "0x129D4BC", Length = "0x1FC")]
	[Token(Token = "0x60002DD")]
	public Rect get_uvRect() { }

	[Address(RVA = "0x129E280", Offset = "0x129E280", Length = "0x7C")]
	[Token(Token = "0x60002E3")]
	public int get_verticalSpacing() { }

	[Address(RVA = "0x129D6B8", Offset = "0x129D6B8", Length = "0xFC")]
	[Token(Token = "0x60002EC")]
	public void MarkAsDirty() { }

	[Address(RVA = "0x129F2A4", Offset = "0x129F2A4", Length = "0x89C")]
	[Token(Token = "0x60002F3")]
	public void Print(string text, Color color, BetterList<Vector3> verts, BetterList<Vector2> uvs, BetterList<Color> cols, bool encoding, SymbolStyle symbolStyle, Alignment alignment, int lineWidth) { }

	[Address(RVA = "0x129E57C", Offset = "0x129E57C", Length = "0xD8")]
	[Token(Token = "0x60002EA")]
	private bool References(UIFont font) { }

	[Address(RVA = "0x129D188", Offset = "0x129D188", Length = "0x144")]
	[Token(Token = "0x60002D9")]
	public void set_atlas(UIAtlas value) { }

	[Address(RVA = "0x129E1D4", Offset = "0x129E1D4", Length = "0xAC")]
	[Token(Token = "0x60002E2")]
	public void set_horizontalSpacing(int value) { }

	[Address(RVA = "0x129D874", Offset = "0x129D874", Length = "0xF0")]
	[Token(Token = "0x60002DB")]
	public void set_material(Material value) { }

	[Address(RVA = "0x129E434", Offset = "0x129E434", Length = "0x148")]
	[Token(Token = "0x60002E8")]
	public void set_replacement(UIFont value) { }

	[Address(RVA = "0x129E094", Offset = "0x129E094", Length = "0xC4")]
	[Token(Token = "0x60002E0")]
	public void set_spriteName(string value) { }

	[Address(RVA = "0x129DF18", Offset = "0x129DF18", Length = "0xF8")]
	[Token(Token = "0x60002DE")]
	public void set_uvRect(Rect value) { }

	[Address(RVA = "0x129E2FC", Offset = "0x129E2FC", Length = "0xAC")]
	[Token(Token = "0x60002E4")]
	public void set_verticalSpacing(int value) { }

	[Address(RVA = "0x129DA54", Offset = "0x129DA54", Length = "0x4C4")]
	[Token(Token = "0x60002E9")]
	private void Trim() { }

	[Address(RVA = "0x129EB78", Offset = "0x129EB78", Length = "0x57C")]
	[Token(Token = "0x60002EF")]
	public string WrapText(string text, float maxWidth, bool multiline, bool encoding, SymbolStyle symbolStyle) { }

	[Address(RVA = "0x129F0F4", Offset = "0x129F0F4", Length = "0x10")]
	[Token(Token = "0x60002F0")]
	public string WrapText(string text, float maxWidth, bool multiline, bool encoding) { }

	[Address(RVA = "0x129F104", Offset = "0x129F104", Length = "0x10")]
	[Token(Token = "0x60002F1")]
	public string WrapText(string text, float maxWidth, bool multiline) { }

}

