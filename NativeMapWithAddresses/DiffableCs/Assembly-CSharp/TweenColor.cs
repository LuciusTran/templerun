//Type is in global namespace

[AddComponentMenu("NGUI/Tween/Color")]
[Token(Token = "0x200005F")]
public class TweenColor : UITweener
{
	[FieldOffset(Offset = "0x5C")]
	[Token(Token = "0x400021C")]
	public Color from; //Field offset: 0x5C
	[FieldOffset(Offset = "0x6C")]
	[Token(Token = "0x400021D")]
	public Color to; //Field offset: 0x6C
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x400021E")]
	private Transform mTrans; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x400021F")]
	private UIWidget mWidget; //Field offset: 0x88
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x4000220")]
	private Material mMat; //Field offset: 0x90
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x4000221")]
	private Light mLight; //Field offset: 0x98

	[Token(Token = "0x17000043")]
	public Color color
	{
		[Address(RVA = "0x12098B4", Offset = "0x12098B4", Length = "0x110")]
		[Token(Token = "0x6000255")]
		 get { } //Length: 272
		[Address(RVA = "0x12099C4", Offset = "0x12099C4", Length = "0x170")]
		[Token(Token = "0x6000256")]
		 set { } //Length: 368
	}

	[Address(RVA = "0x1209CF4", Offset = "0x1209CF4", Length = "0x20")]
	[Token(Token = "0x600025A")]
	public TweenColor() { }

	[Address(RVA = "0x1209B34", Offset = "0x1209B34", Length = "0xF4")]
	[Token(Token = "0x6000257")]
	private void Awake() { }

	[Address(RVA = "0x1209C54", Offset = "0x1209C54", Length = "0xA0")]
	[Token(Token = "0x6000259")]
	public static TweenColor Begin(GameObject go, float duration, Color color) { }

	[Address(RVA = "0x12098B4", Offset = "0x12098B4", Length = "0x110")]
	[Token(Token = "0x6000255")]
	public Color get_color() { }

	[Address(RVA = "0x1209C28", Offset = "0x1209C28", Length = "0x2C")]
	[Token(Token = "0x6000258")]
	protected virtual void OnUpdate(float factor) { }

	[Address(RVA = "0x12099C4", Offset = "0x12099C4", Length = "0x170")]
	[Token(Token = "0x6000256")]
	public void set_color(Color value) { }

}

