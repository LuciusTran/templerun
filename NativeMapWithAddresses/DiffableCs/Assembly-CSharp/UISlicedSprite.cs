//Type is in global namespace

[AddComponentMenu("NGUI/UI/Sprite (Sliced)")]
[ExecuteInEditMode]
[Token(Token = "0x2000080")]
public class UISlicedSprite : UISprite
{
	[FieldOffset(Offset = "0xD8")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x4000312")]
	private bool mFillCenter; //Field offset: 0xD8
	[FieldOffset(Offset = "0xDC")]
	[Token(Token = "0x4000313")]
	protected Rect mInner; //Field offset: 0xDC
	[FieldOffset(Offset = "0xEC")]
	[Token(Token = "0x4000314")]
	protected Rect mInnerUV; //Field offset: 0xEC
	[FieldOffset(Offset = "0xFC")]
	[Token(Token = "0x4000315")]
	protected Vector3 mScale; //Field offset: 0xFC

	[Token(Token = "0x1700008F")]
	public virtual Vector4 border
	{
		[Address(RVA = "0x12A6F48", Offset = "0x12A6F48", Length = "0x208")]
		[Token(Token = "0x6000360")]
		 get { } //Length: 520
	}

	[Token(Token = "0x1700008E")]
	public bool fillCenter
	{
		[Address(RVA = "0x12A6F1C", Offset = "0x12A6F1C", Length = "0x8")]
		[Token(Token = "0x600035E")]
		 get { } //Length: 8
		[Address(RVA = "0x12A6F24", Offset = "0x12A6F24", Length = "0x24")]
		[Token(Token = "0x600035F")]
		 set { } //Length: 36
	}

	[Token(Token = "0x1700008D")]
	public Rect innerUV
	{
		[Address(RVA = "0x12A6EF0", Offset = "0x12A6EF0", Length = "0x2C")]
		[Token(Token = "0x600035D")]
		 get { } //Length: 44
	}

	[Address(RVA = "0x12A8304", Offset = "0x12A8304", Length = "0x64")]
	[Token(Token = "0x6000364")]
	public UISlicedSprite() { }

	[Address(RVA = "0x12A6F48", Offset = "0x12A6F48", Length = "0x208")]
	[Token(Token = "0x6000360")]
	public virtual Vector4 get_border() { }

	[Address(RVA = "0x12A6F1C", Offset = "0x12A6F1C", Length = "0x8")]
	[Token(Token = "0x600035E")]
	public bool get_fillCenter() { }

	[Address(RVA = "0x12A6EF0", Offset = "0x12A6EF0", Length = "0x2C")]
	[Token(Token = "0x600035D")]
	public Rect get_innerUV() { }

	[Address(RVA = "0x12A7544", Offset = "0x12A7544", Length = "0x454")]
	[Token(Token = "0x6000362")]
	public virtual void MakePixelPerfect() { }

	[Address(RVA = "0x12A7998", Offset = "0x12A7998", Length = "0x7C4")]
	[Token(Token = "0x6000363")]
	public virtual void OnFill(BetterList<Vector3> verts, BetterList<Vector2> uvs, BetterList<Color> cols) { }

	[Address(RVA = "0x12A6F24", Offset = "0x12A6F24", Length = "0x24")]
	[Token(Token = "0x600035F")]
	public void set_fillCenter(bool value) { }

	[Address(RVA = "0x12A72C4", Offset = "0x12A72C4", Length = "0x280")]
	[Token(Token = "0x6000361")]
	public virtual void UpdateUVs(bool force) { }

}

