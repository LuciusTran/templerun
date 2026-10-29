//Type is in global namespace

[AddComponentMenu("NGUI/UI/Sprite (Filled)")]
[ExecuteInEditMode]
[Token(Token = "0x2000072")]
public class UIFilledSprite : UISprite
{
	[Token(Token = "0x2000073")]
	internal enum FillDirection
	{
		Horizontal = 0,
		Vertical = 1,
		Radial90 = 2,
		Radial180 = 3,
		Radial360 = 4,
	}

	[FieldOffset(Offset = "0xD8")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x40002A1")]
	private FillDirection mFillDirection; //Field offset: 0xD8
	[FieldOffset(Offset = "0xDC")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x40002A2")]
	private float mFillAmount; //Field offset: 0xDC
	[FieldOffset(Offset = "0xE0")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x40002A3")]
	private bool mInvert; //Field offset: 0xE0

	[Token(Token = "0x17000066")]
	public float fillAmount
	{
		[Address(RVA = "0x12112C4", Offset = "0x12112C4", Length = "0x8")]
		[Token(Token = "0x60002CD")]
		 get { } //Length: 8
		[Address(RVA = "0x12112CC", Offset = "0x12112CC", Length = "0x30")]
		[Token(Token = "0x60002CE")]
		 set { } //Length: 48
	}

	[Token(Token = "0x17000065")]
	public FillDirection fillDirection
	{
		[Address(RVA = "0x12112A0", Offset = "0x12112A0", Length = "0x8")]
		[Token(Token = "0x60002CB")]
		 get { } //Length: 8
		[Address(RVA = "0x12112A8", Offset = "0x12112A8", Length = "0x1C")]
		[Token(Token = "0x60002CC")]
		 set { } //Length: 28
	}

	[Token(Token = "0x17000067")]
	public bool invert
	{
		[Address(RVA = "0x12112FC", Offset = "0x12112FC", Length = "0x8")]
		[Token(Token = "0x60002CF")]
		 get { } //Length: 8
		[Address(RVA = "0x1211304", Offset = "0x1211304", Length = "0x20")]
		[Token(Token = "0x60002D0")]
		 set { } //Length: 32
	}

	[Address(RVA = "0x12122C4", Offset = "0x12122C4", Length = "0x14")]
	[Token(Token = "0x60002D4")]
	public UIFilledSprite() { }

	[Address(RVA = "0x1211324", Offset = "0x1211324", Length = "0x2B0")]
	[Token(Token = "0x60002D1")]
	private bool AdjustRadial(Vector2[] xy, Vector2[] uv, float fill, bool invert) { }

	[Address(RVA = "0x12112C4", Offset = "0x12112C4", Length = "0x8")]
	[Token(Token = "0x60002CD")]
	public float get_fillAmount() { }

	[Address(RVA = "0x12112A0", Offset = "0x12112A0", Length = "0x8")]
	[Token(Token = "0x60002CB")]
	public FillDirection get_fillDirection() { }

	[Address(RVA = "0x12112FC", Offset = "0x12112FC", Length = "0x8")]
	[Token(Token = "0x60002CF")]
	public bool get_invert() { }

	[Address(RVA = "0x1211628", Offset = "0x1211628", Length = "0xC9C")]
	[Token(Token = "0x60002D3")]
	public virtual void OnFill(BetterList<Vector3> verts, BetterList<Vector2> uvs, BetterList<Color> cols) { }

	[Address(RVA = "0x12115D4", Offset = "0x12115D4", Length = "0x54")]
	[Token(Token = "0x60002D2")]
	private void Rotate(Vector2[] v, int offset) { }

	[Address(RVA = "0x12112CC", Offset = "0x12112CC", Length = "0x30")]
	[Token(Token = "0x60002CE")]
	public void set_fillAmount(float value) { }

	[Address(RVA = "0x12112A8", Offset = "0x12112A8", Length = "0x1C")]
	[Token(Token = "0x60002CC")]
	public void set_fillDirection(FillDirection value) { }

	[Address(RVA = "0x1211304", Offset = "0x1211304", Length = "0x20")]
	[Token(Token = "0x60002D0")]
	public void set_invert(bool value) { }

}

