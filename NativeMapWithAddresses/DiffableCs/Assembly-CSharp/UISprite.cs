//Type is in global namespace

[AddComponentMenu("NGUI/UI/Sprite (Basic)")]
[ExecuteInEditMode]
[Token(Token = "0x2000081")]
public class UISprite : UIWidget
{
	[FieldOffset(Offset = "0x90")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x4000316")]
	private UIAtlas mAtlas; //Field offset: 0x90
	[FieldOffset(Offset = "0x98")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x4000317")]
	private string mSpriteName; //Field offset: 0x98
	[FieldOffset(Offset = "0xA0")]
	[Token(Token = "0x4000318")]
	protected Sprite mSprite; //Field offset: 0xA0
	[FieldOffset(Offset = "0xA8")]
	[Token(Token = "0x4000319")]
	protected Rect mOuter; //Field offset: 0xA8
	[FieldOffset(Offset = "0xB8")]
	[Token(Token = "0x400031A")]
	protected Rect mOuterUV; //Field offset: 0xB8
	[FieldOffset(Offset = "0xC8")]
	[Token(Token = "0x400031B")]
	private bool mSpriteSet; //Field offset: 0xC8
	[FieldOffset(Offset = "0xD0")]
	[Token(Token = "0x400031C")]
	private string mLastName; //Field offset: 0xD0

	[Token(Token = "0x17000091")]
	public UIAtlas atlas
	{
		[Address(RVA = "0x12A83E4", Offset = "0x12A83E4", Length = "0x8")]
		[Token(Token = "0x6000366")]
		 get { } //Length: 8
		[Address(RVA = "0x12A83EC", Offset = "0x12A83EC", Length = "0x1E8")]
		[Token(Token = "0x6000367")]
		 set { } //Length: 488
	}

	[Token(Token = "0x17000096")]
	public override Vector4 border
	{
		[Address(RVA = "0x12A88B8", Offset = "0x12A88B8", Length = "0x44")]
		[Token(Token = "0x600036E")]
		 get { } //Length: 68
	}

	[Token(Token = "0x17000095")]
	public virtual Material material
	{
		[Address(RVA = "0x12A87B4", Offset = "0x12A87B4", Length = "0x104")]
		[Token(Token = "0x600036D")]
		 get { } //Length: 260
	}

	[Token(Token = "0x17000090")]
	public Rect outerUV
	{
		[Address(RVA = "0x12A83B8", Offset = "0x12A83B8", Length = "0x2C")]
		[Token(Token = "0x6000365")]
		 get { } //Length: 44
	}

	[Token(Token = "0x17000094")]
	public virtual Vector2 pivotOffset
	{
		[Address(RVA = "0x12A8688", Offset = "0x12A8688", Length = "0x12C")]
		[Token(Token = "0x600036C")]
		 get { } //Length: 300
	}

	[Token(Token = "0x17000093")]
	public Sprite sprite
	{
		[Address(RVA = "0x12A7150", Offset = "0x12A7150", Length = "0x174")]
		[Token(Token = "0x600036A")]
		 get { } //Length: 372
		[Address(RVA = "0x12A85D4", Offset = "0x12A85D4", Length = "0xAC")]
		[Token(Token = "0x600036B")]
		 set { } //Length: 172
	}

	[Token(Token = "0x17000092")]
	public string spriteName
	{
		[Address(RVA = "0x12A8680", Offset = "0x12A8680", Length = "0x8")]
		[Token(Token = "0x6000368")]
		 get { } //Length: 8
		[Address(RVA = "0x12A2D48", Offset = "0x12A2D48", Length = "0x9C")]
		[Token(Token = "0x6000369")]
		 set { } //Length: 156
	}

	[Address(RVA = "0x12A8368", Offset = "0x12A8368", Length = "0x50")]
	[Token(Token = "0x6000374")]
	public UISprite() { }

	[Address(RVA = "0x12A83E4", Offset = "0x12A83E4", Length = "0x8")]
	[Token(Token = "0x6000366")]
	public UIAtlas get_atlas() { }

	[Address(RVA = "0x12A88B8", Offset = "0x12A88B8", Length = "0x44")]
	[Token(Token = "0x600036E")]
	public override Vector4 get_border() { }

	[Address(RVA = "0x12A87B4", Offset = "0x12A87B4", Length = "0x104")]
	[Token(Token = "0x600036D")]
	public virtual Material get_material() { }

	[Address(RVA = "0x12A83B8", Offset = "0x12A83B8", Length = "0x2C")]
	[Token(Token = "0x6000365")]
	public Rect get_outerUV() { }

	[Address(RVA = "0x12A8688", Offset = "0x12A8688", Length = "0x12C")]
	[Token(Token = "0x600036C")]
	public virtual Vector2 get_pivotOffset() { }

	[Address(RVA = "0x12A7150", Offset = "0x12A7150", Length = "0x174")]
	[Token(Token = "0x600036A")]
	public Sprite get_sprite() { }

	[Address(RVA = "0x12A8680", Offset = "0x12A8680", Length = "0x8")]
	[Token(Token = "0x6000368")]
	public string get_spriteName() { }

	[Address(RVA = "0x12A8A6C", Offset = "0x12A8A6C", Length = "0x708")]
	[Token(Token = "0x6000370")]
	public virtual void MakePixelPerfect() { }

	[Address(RVA = "0x12A815C", Offset = "0x12A815C", Length = "0x1A8")]
	[Token(Token = "0x6000373")]
	public virtual void OnFill(BetterList<Vector3> verts, BetterList<Vector2> uvs, BetterList<Color> cols) { }

	[Address(RVA = "0x12A9174", Offset = "0x12A9174", Length = "0x88")]
	[Token(Token = "0x6000371")]
	protected virtual void OnStart() { }

	[Address(RVA = "0x12A91FC", Offset = "0x12A91FC", Length = "0x7C")]
	[Token(Token = "0x6000372")]
	public virtual bool OnUpdate() { }

	[Address(RVA = "0x12A83EC", Offset = "0x12A83EC", Length = "0x1E8")]
	[Token(Token = "0x6000367")]
	public void set_atlas(UIAtlas value) { }

	[Address(RVA = "0x12A85D4", Offset = "0x12A85D4", Length = "0xAC")]
	[Token(Token = "0x600036B")]
	public void set_sprite(Sprite value) { }

	[Address(RVA = "0x12A2D48", Offset = "0x12A2D48", Length = "0x9C")]
	[Token(Token = "0x6000369")]
	public void set_spriteName(string value) { }

	[Address(RVA = "0x12A88FC", Offset = "0x12A88FC", Length = "0x170")]
	[Token(Token = "0x600036F")]
	public override void UpdateUVs(bool force) { }

}

