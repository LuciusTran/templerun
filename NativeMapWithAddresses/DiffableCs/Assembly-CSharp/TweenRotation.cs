//Type is in global namespace

[AddComponentMenu("NGUI/Tween/Rotation")]
[Token(Token = "0x2000061")]
public class TweenRotation : UITweener
{
	[FieldOffset(Offset = "0x5C")]
	[Token(Token = "0x4000225")]
	public Vector3 from; //Field offset: 0x5C
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000226")]
	public Vector3 to; //Field offset: 0x68
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4000227")]
	private Transform mTrans; //Field offset: 0x78

	[Token(Token = "0x17000046")]
	public Transform cachedTransform
	{
		[Address(RVA = "0x1209F10", Offset = "0x1209F10", Length = "0x80")]
		[Token(Token = "0x6000261")]
		 get { } //Length: 128
	}

	[Token(Token = "0x17000047")]
	public Quaternion rotation
	{
		[Address(RVA = "0x1209F90", Offset = "0x1209F90", Length = "0x1C")]
		[Token(Token = "0x6000262")]
		 get { } //Length: 28
		[Address(RVA = "0x1209FAC", Offset = "0x1209FAC", Length = "0x4C")]
		[Token(Token = "0x6000263")]
		 set { } //Length: 76
	}

	[Address(RVA = "0x120A1B8", Offset = "0x120A1B8", Length = "0x14")]
	[Token(Token = "0x6000266")]
	public TweenRotation() { }

	[Address(RVA = "0x120A0C8", Offset = "0x120A0C8", Length = "0xF0")]
	[Token(Token = "0x6000265")]
	public static TweenRotation Begin(GameObject go, float duration, Quaternion rot) { }

	[Address(RVA = "0x1209F10", Offset = "0x1209F10", Length = "0x80")]
	[Token(Token = "0x6000261")]
	public Transform get_cachedTransform() { }

	[Address(RVA = "0x1209F90", Offset = "0x1209F90", Length = "0x1C")]
	[Token(Token = "0x6000262")]
	public Quaternion get_rotation() { }

	[Address(RVA = "0x1209FF8", Offset = "0x1209FF8", Length = "0xD0")]
	[Token(Token = "0x6000264")]
	protected virtual void OnUpdate(float factor) { }

	[Address(RVA = "0x1209FAC", Offset = "0x1209FAC", Length = "0x4C")]
	[Token(Token = "0x6000263")]
	public void set_rotation(Quaternion value) { }

}

