//Type is in global namespace

[AddComponentMenu("NGUI/Interaction/Slider")]
[ExecuteInEditMode]
[Token(Token = "0x2000038")]
public class UISlider : IgnoreTimeScale
{
	[Token(Token = "0x2000039")]
	internal enum Direction
	{
		Horizontal = 0,
		Vertical = 1,
	}

	[Token(Token = "0x4000163")]
	public static UISlider current; //Field offset: 0x0
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000164")]
	public Transform foreground; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000165")]
	public Transform thumb; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000166")]
	public Direction direction; //Field offset: 0x40
	[FieldOffset(Offset = "0x44")]
	[Token(Token = "0x4000167")]
	public Vector2 fullSize; //Field offset: 0x44
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000168")]
	public GameObject eventReceiver; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000169")]
	public string functionName; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x400016A")]
	public int numberOfSteps; //Field offset: 0x60
	[FieldOffset(Offset = "0x64")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x400016B")]
	private float rawValue; //Field offset: 0x64
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x400016C")]
	private float mStepValue; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x400016D")]
	private BoxCollider mCol; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x400016E")]
	private Transform mTrans; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x400016F")]
	private Transform mFGTrans; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x4000170")]
	private UIWidget mFGWidget; //Field offset: 0x88
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x4000171")]
	private UIFilledSprite mFGFilled; //Field offset: 0x90
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x4000172")]
	private bool mInitDone; //Field offset: 0x98

	[Token(Token = "0x17000019")]
	public float sliderValue
	{
		[Address(RVA = "0x11FB0B0", Offset = "0x11FB0B0", Length = "0x8")]
		[Token(Token = "0x6000128")]
		 get { } //Length: 8
		[Address(RVA = "0x11FB0B8", Offset = "0x11FB0B8", Length = "0x8")]
		[Token(Token = "0x6000129")]
		 set { } //Length: 8
	}

	[Address(RVA = "0x11FBF20", Offset = "0x11FBF20", Length = "0x90")]
	[Token(Token = "0x6000135")]
	public UISlider() { }

	[Address(RVA = "0x11FB750", Offset = "0x11FB750", Length = "0xB4")]
	[Token(Token = "0x600012B")]
	private void Awake() { }

	[Address(RVA = "0x11FBF14", Offset = "0x11FBF14", Length = "0xC")]
	[Token(Token = "0x6000134")]
	public void ForceUpdate() { }

	[Address(RVA = "0x11FB0B0", Offset = "0x11FB0B0", Length = "0x8")]
	[Token(Token = "0x6000128")]
	public float get_sliderValue() { }

	[Address(RVA = "0x11FB4CC", Offset = "0x11FB4CC", Length = "0x284")]
	[Token(Token = "0x600012A")]
	private void Init() { }

	[Address(RVA = "0x11FBE94", Offset = "0x11FBE94", Length = "0x4")]
	[Token(Token = "0x600012E")]
	private void OnDrag(Vector2 delta) { }

	[Address(RVA = "0x11FBEA4", Offset = "0x11FBEA4", Length = "0x4")]
	[Token(Token = "0x6000130")]
	private void OnDragThumb(GameObject go, Vector2 delta) { }

	[Address(RVA = "0x11FBEA8", Offset = "0x11FBEA8", Length = "0x6C")]
	[Token(Token = "0x6000131")]
	private void OnKey(KeyCode key) { }

	[Address(RVA = "0x11FBA34", Offset = "0x11FBA34", Length = "0xC")]
	[Token(Token = "0x600012D")]
	private void OnPress(bool pressed) { }

	[Address(RVA = "0x11FBE98", Offset = "0x11FBE98", Length = "0xC")]
	[Token(Token = "0x600012F")]
	private void OnPressThumb(GameObject go, bool pressed) { }

	[Address(RVA = "0x11FB0C0", Offset = "0x11FB0C0", Length = "0x40C")]
	[Token(Token = "0x6000133")]
	private void Set(float input, bool force) { }

	[Address(RVA = "0x11FB0B8", Offset = "0x11FB0B8", Length = "0x8")]
	[Token(Token = "0x6000129")]
	public void set_sliderValue(float value) { }

	[Address(RVA = "0x11FB804", Offset = "0x11FB804", Length = "0x230")]
	[Token(Token = "0x600012C")]
	private void Start() { }

	[Address(RVA = "0x11FBA40", Offset = "0x11FBA40", Length = "0x454")]
	[Token(Token = "0x6000132")]
	private void UpdateDrag() { }

}

