//Type is in global namespace

[AddComponentMenu("NGUI/Tween/Position")]
[Token(Token = "0x2000060")]
public class TweenPosition : UITweener
{
	[FieldOffset(Offset = "0x5C")]
	[Token(Token = "0x4000222")]
	public Vector3 from; //Field offset: 0x5C
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000223")]
	public Vector3 to; //Field offset: 0x68
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4000224")]
	private Transform mTrans; //Field offset: 0x78

	[Token(Token = "0x17000044")]
	public Transform cachedTransform
	{
		[Address(RVA = "0x1209D28", Offset = "0x1209D28", Length = "0x80")]
		[Token(Token = "0x600025B")]
		 get { } //Length: 128
	}

	[Token(Token = "0x17000045")]
	public Vector3 position
	{
		[Address(RVA = "0x1209DA8", Offset = "0x1209DA8", Length = "0x1C")]
		[Token(Token = "0x600025C")]
		 get { } //Length: 28
		[Address(RVA = "0x1209DC4", Offset = "0x1209DC4", Length = "0x44")]
		[Token(Token = "0x600025D")]
		 set { } //Length: 68
	}

	[Address(RVA = "0x1209EFC", Offset = "0x1209EFC", Length = "0x14")]
	[Token(Token = "0x6000260")]
	public TweenPosition() { }

	[Address(RVA = "0x1209E6C", Offset = "0x1209E6C", Length = "0x90")]
	[Token(Token = "0x600025F")]
	public static TweenPosition Begin(GameObject go, float duration, Vector3 pos) { }

	[Address(RVA = "0x1209D28", Offset = "0x1209D28", Length = "0x80")]
	[Token(Token = "0x600025B")]
	public Transform get_cachedTransform() { }

	[Address(RVA = "0x1209DA8", Offset = "0x1209DA8", Length = "0x1C")]
	[Token(Token = "0x600025C")]
	public Vector3 get_position() { }

	[Address(RVA = "0x1209E08", Offset = "0x1209E08", Length = "0x64")]
	[Token(Token = "0x600025E")]
	protected virtual void OnUpdate(float factor) { }

	[Address(RVA = "0x1209DC4", Offset = "0x1209DC4", Length = "0x44")]
	[Token(Token = "0x600025D")]
	public void set_position(Vector3 value) { }

}

