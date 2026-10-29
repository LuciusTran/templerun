//Type is in global namespace

[AddComponentMenu("NGUI/Interaction/Drag Object")]
[Token(Token = "0x200002B")]
public class UIDragObject : IgnoreTimeScale
{
	[Token(Token = "0x200002C")]
	internal enum DragEffect
	{
		None = 0,
		Momentum = 1,
		MomentumAndSpring = 2,
	}

	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000107")]
	public Transform target; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000108")]
	public Vector3 scale; //Field offset: 0x38
	[FieldOffset(Offset = "0x44")]
	[Token(Token = "0x4000109")]
	public float scrollWheelFactor; //Field offset: 0x44
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x400010A")]
	public bool restrictWithinPanel; //Field offset: 0x48
	[FieldOffset(Offset = "0x4C")]
	[Token(Token = "0x400010B")]
	public DragEffect dragEffect; //Field offset: 0x4C
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x400010C")]
	public float momentumAmount; //Field offset: 0x50
	[FieldOffset(Offset = "0x54")]
	[Token(Token = "0x400010D")]
	private Plane mPlane; //Field offset: 0x54
	[FieldOffset(Offset = "0x64")]
	[Token(Token = "0x400010E")]
	private Vector3 mLastPos; //Field offset: 0x64
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x400010F")]
	private UIPanel mPanel; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4000110")]
	private bool mPressed; //Field offset: 0x78
	[FieldOffset(Offset = "0x7C")]
	[Token(Token = "0x4000111")]
	private Vector3 mMomentum; //Field offset: 0x7C
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x4000112")]
	private float mScroll; //Field offset: 0x88
	[FieldOffset(Offset = "0x8C")]
	[Token(Token = "0x4000113")]
	private Bounds mBounds; //Field offset: 0x8C

	[Address(RVA = "0x11F69C0", Offset = "0x11F69C0", Length = "0xA0")]
	[Token(Token = "0x60000D8")]
	public UIDragObject() { }

	[Address(RVA = "0x11F5CAC", Offset = "0x11F5CAC", Length = "0xEC")]
	[Token(Token = "0x60000D3")]
	private void FindPanel() { }

	[Address(RVA = "0x11F65D0", Offset = "0x11F65D0", Length = "0x370")]
	[Token(Token = "0x60000D6")]
	private void LateUpdate() { }

	[Address(RVA = "0x11F61C0", Offset = "0x11F61C0", Length = "0x410")]
	[Token(Token = "0x60000D5")]
	private void OnDrag(Vector2 delta) { }

	[Address(RVA = "0x11F5D98", Offset = "0x11F5D98", Length = "0x428")]
	[Token(Token = "0x60000D4")]
	private void OnPress(bool pressed) { }

	[Address(RVA = "0x11F6940", Offset = "0x11F6940", Length = "0x80")]
	[Token(Token = "0x60000D7")]
	private void OnScroll(float delta) { }

}

