//Type is in global namespace

[AddComponentMenu("NGUI/Interaction/Button Rotation")]
[Token(Token = "0x200001E")]
public class UIButtonRotation : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40000A3")]
	public Transform tweenTarget; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40000A4")]
	public Vector3 hover; //Field offset: 0x28
	[FieldOffset(Offset = "0x34")]
	[Token(Token = "0x40000A5")]
	public Vector3 pressed; //Field offset: 0x34
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x40000A6")]
	public float duration; //Field offset: 0x40
	[FieldOffset(Offset = "0x44")]
	[Token(Token = "0x40000A7")]
	private Quaternion mRot; //Field offset: 0x44
	[FieldOffset(Offset = "0x54")]
	[Token(Token = "0x40000A8")]
	private bool mInitDone; //Field offset: 0x54
	[FieldOffset(Offset = "0x55")]
	[Token(Token = "0x40000A9")]
	private bool mStarted; //Field offset: 0x55
	[FieldOffset(Offset = "0x56")]
	[Token(Token = "0x40000AA")]
	private bool mHighlighted; //Field offset: 0x56

	[Address(RVA = "0x11F1BF4", Offset = "0x11F1BF4", Length = "0x80")]
	[Token(Token = "0x600008D")]
	public UIButtonRotation() { }

	[Address(RVA = "0x11F191C", Offset = "0x11F191C", Length = "0xA0")]
	[Token(Token = "0x600008A")]
	private void Init() { }

	[Address(RVA = "0x11F1830", Offset = "0x11F1830", Length = "0xEC")]
	[Token(Token = "0x6000089")]
	private void OnDisable() { }

	[Address(RVA = "0x11F165C", Offset = "0x11F165C", Length = "0x94")]
	[Token(Token = "0x6000088")]
	private void OnEnable() { }

	[Address(RVA = "0x11F16F0", Offset = "0x11F16F0", Length = "0x140")]
	[Token(Token = "0x600008C")]
	private void OnHover(bool isOver) { }

	[Address(RVA = "0x11F19BC", Offset = "0x11F19BC", Length = "0x238")]
	[Token(Token = "0x600008B")]
	private void OnPress(bool isPressed) { }

	[Address(RVA = "0x11F1650", Offset = "0x11F1650", Length = "0xC")]
	[Token(Token = "0x6000087")]
	private void Start() { }

}

