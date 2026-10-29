//Type is in global namespace

[AddComponentMenu("NGUI/Internal/Ignore TimeScale Behaviour")]
[Token(Token = "0x2000046")]
public class IgnoreTimeScale : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40001B0")]
	private float mTime; //Field offset: 0x20
	[FieldOffset(Offset = "0x24")]
	[Token(Token = "0x40001B1")]
	private float mActual; //Field offset: 0x24
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40001B2")]
	private float mDelta; //Field offset: 0x28

	[Token(Token = "0x17000027")]
	public float realTimeDelta
	{
		[Address(RVA = "0x11FED24", Offset = "0x11FED24", Length = "0x8")]
		[Token(Token = "0x600017E")]
		 get { } //Length: 8
	}

	[Address(RVA = "0x11FDD2C", Offset = "0x11FDD2C", Length = "0x8")]
	[Token(Token = "0x6000182")]
	public IgnoreTimeScale() { }

	[Address(RVA = "0x11FED24", Offset = "0x11FED24", Length = "0x8")]
	[Token(Token = "0x600017E")]
	public float get_realTimeDelta() { }

	[Address(RVA = "0x11FED2C", Offset = "0x11FED2C", Length = "0x1C")]
	[Token(Token = "0x600017F")]
	private void OnEnable() { }

	[Address(RVA = "0x11FED48", Offset = "0x11FED48", Length = "0x1C")]
	[Token(Token = "0x6000180")]
	private void Start() { }

	[Address(RVA = "0x11FD5E8", Offset = "0x11FD5E8", Length = "0xE0")]
	[Token(Token = "0x6000181")]
	protected float UpdateRealTimeDelta() { }

}

