//Type is in global namespace

[AddComponentMenu("NGUI/Tween/Scale")]
[Token(Token = "0x2000062")]
public class TweenScale : UITweener
{
	[FieldOffset(Offset = "0x5C")]
	[Token(Token = "0x4000228")]
	public Vector3 from; //Field offset: 0x5C
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000229")]
	public Vector3 to; //Field offset: 0x68
	[FieldOffset(Offset = "0x74")]
	[Token(Token = "0x400022A")]
	public bool updateTable; //Field offset: 0x74
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x400022B")]
	private Transform mTrans; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x400022C")]
	private UITable mTable; //Field offset: 0x80

	[Token(Token = "0x17000048")]
	public Transform cachedTransform
	{
		[Address(RVA = "0x120A1CC", Offset = "0x120A1CC", Length = "0x80")]
		[Token(Token = "0x6000267")]
		 get { } //Length: 128
	}

	[Token(Token = "0x17000049")]
	public Vector3 scale
	{
		[Address(RVA = "0x120A24C", Offset = "0x120A24C", Length = "0x1C")]
		[Token(Token = "0x6000268")]
		 get { } //Length: 28
		[Address(RVA = "0x120A268", Offset = "0x120A268", Length = "0x44")]
		[Token(Token = "0x6000269")]
		 set { } //Length: 68
	}

	[Address(RVA = "0x120A474", Offset = "0x120A474", Length = "0x80")]
	[Token(Token = "0x600026C")]
	public TweenScale() { }

	[Address(RVA = "0x120A3E4", Offset = "0x120A3E4", Length = "0x90")]
	[Token(Token = "0x600026B")]
	public static TweenScale Begin(GameObject go, float duration, Vector3 scale) { }

	[Address(RVA = "0x120A1CC", Offset = "0x120A1CC", Length = "0x80")]
	[Token(Token = "0x6000267")]
	public Transform get_cachedTransform() { }

	[Address(RVA = "0x120A24C", Offset = "0x120A24C", Length = "0x1C")]
	[Token(Token = "0x6000268")]
	public Vector3 get_scale() { }

	[Address(RVA = "0x120A2AC", Offset = "0x120A2AC", Length = "0x138")]
	[Token(Token = "0x600026A")]
	protected virtual void OnUpdate(float factor) { }

	[Address(RVA = "0x120A268", Offset = "0x120A268", Length = "0x44")]
	[Token(Token = "0x6000269")]
	public void set_scale(Vector3 value) { }

}

