//Type is in global namespace

[AddComponentMenu("NGUI/Internal/Active Animation")]
[RequireComponent(typeof(Animation))]
[Token(Token = "0x200003E")]
public class ActiveAnimation : IgnoreTimeScale
{
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000187")]
	public GameObject eventReceiver; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000188")]
	public string callWhenFinished; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000189")]
	private Animation mAnim; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x400018A")]
	private Direction mLastDirection; //Field offset: 0x48
	[FieldOffset(Offset = "0x4C")]
	[Token(Token = "0x400018B")]
	private Direction mDisableDirection; //Field offset: 0x4C
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x400018C")]
	private bool mNotify; //Field offset: 0x50

	[Address(RVA = "0x11FDD24", Offset = "0x11FDD24", Length = "0x8")]
	[Token(Token = "0x6000149")]
	public ActiveAnimation() { }

	[Address(RVA = "0x11FD6C8", Offset = "0x11FD6C8", Length = "0x4B4")]
	[Token(Token = "0x6000145")]
	private void Play(string clipName, Direction playDirection) { }

	[Address(RVA = "0x11FDB7C", Offset = "0x11FDB7C", Length = "0x15C")]
	[Token(Token = "0x6000146")]
	public static ActiveAnimation Play(Animation anim, string clipName, Direction playDirection, EnableCondition enableBeforePlay, DisableCondition disableCondition) { }

	[Address(RVA = "0x11FDD04", Offset = "0x11FDD04", Length = "0xC")]
	[Token(Token = "0x6000147")]
	public static ActiveAnimation Play(Animation anim, string clipName, Direction playDirection) { }

	[Address(RVA = "0x11FDD10", Offset = "0x11FDD10", Length = "0x14")]
	[Token(Token = "0x6000148")]
	public static ActiveAnimation Play(Animation anim, Direction playDirection) { }

	[Address(RVA = "0x11FCDDC", Offset = "0x11FCDDC", Length = "0x348")]
	[Token(Token = "0x6000143")]
	public void Reset() { }

	[Address(RVA = "0x11FD124", Offset = "0x11FD124", Length = "0x4C4")]
	[Token(Token = "0x6000144")]
	private void Update() { }

}

