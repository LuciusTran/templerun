//Type is in global namespace

[AddComponentMenu("NGUI/Interaction/Draggable Camera")]
[RequireComponent(typeof(Camera))]
[Token(Token = "0x2000027")]
public class UIDraggableCamera : IgnoreTimeScale
{
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40000DC")]
	public Transform rootForBounds; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x40000DD")]
	public Vector2 scale; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x40000DE")]
	public float scrollWheelFactor; //Field offset: 0x40
	[FieldOffset(Offset = "0x44")]
	[Token(Token = "0x40000DF")]
	public DragEffect dragEffect; //Field offset: 0x44
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x40000E0")]
	public float momentumAmount; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x40000E1")]
	private Camera mCam; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x40000E2")]
	private Transform mTrans; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x40000E3")]
	private bool mPressed; //Field offset: 0x60
	[FieldOffset(Offset = "0x64")]
	[Token(Token = "0x40000E4")]
	private Vector2 mMomentum; //Field offset: 0x64
	[FieldOffset(Offset = "0x6C")]
	[Token(Token = "0x40000E5")]
	private Bounds mBounds; //Field offset: 0x6C
	[FieldOffset(Offset = "0x84")]
	[Token(Token = "0x40000E6")]
	private float mScroll; //Field offset: 0x84
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x40000E7")]
	private UIRoot mRoot; //Field offset: 0x88

	[Token(Token = "0x17000006")]
	public Vector2 currentMomentum
	{
		[Address(RVA = "0x11F3630", Offset = "0x11F3630", Length = "0x8")]
		[Token(Token = "0x60000B2")]
		 get { } //Length: 8
		[Address(RVA = "0x11F3638", Offset = "0x11F3638", Length = "0x8")]
		[Token(Token = "0x60000B3")]
		 set { } //Length: 8
	}

	[Address(RVA = "0x11F3E00", Offset = "0x11F3E00", Length = "0x90")]
	[Token(Token = "0x60000BC")]
	public UIDraggableCamera() { }

	[Address(RVA = "0x11F3640", Offset = "0x11F3640", Length = "0x130")]
	[Token(Token = "0x60000B4")]
	private void Awake() { }

	[Address(RVA = "0x11F37C8", Offset = "0x11F37C8", Length = "0x20C")]
	[Token(Token = "0x60000B6")]
	private Vector3 CalculateConstrainOffset() { }

	[Address(RVA = "0x11F39D4", Offset = "0x11F39D4", Length = "0x1A8")]
	[Token(Token = "0x60000B7")]
	public bool ConstrainToBounds(bool immediate) { }

	[Address(RVA = "0x11F3310", Offset = "0x11F3310", Length = "0x1D8")]
	[Token(Token = "0x60000B9")]
	public void Drag(Vector2 delta) { }

	[Address(RVA = "0x11F3630", Offset = "0x11F3630", Length = "0x8")]
	[Token(Token = "0x60000B2")]
	public Vector2 get_currentMomentum() { }

	[Address(RVA = "0x11F30CC", Offset = "0x11F30CC", Length = "0x17C")]
	[Token(Token = "0x60000B8")]
	public void Press(bool isPressed) { }

	[Address(RVA = "0x11F35A8", Offset = "0x11F35A8", Length = "0x80")]
	[Token(Token = "0x60000BA")]
	public void Scroll(float delta) { }

	[Address(RVA = "0x11F3638", Offset = "0x11F3638", Length = "0x8")]
	[Token(Token = "0x60000B3")]
	public void set_currentMomentum(Vector2 value) { }

	[Address(RVA = "0x11F3770", Offset = "0x11F3770", Length = "0x58")]
	[Token(Token = "0x60000B5")]
	private void Start() { }

	[Address(RVA = "0x11F3B7C", Offset = "0x11F3B7C", Length = "0x284")]
	[Token(Token = "0x60000BB")]
	private void Update() { }

}

