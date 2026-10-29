//Type is in global namespace

[AddComponentMenu("NGUI/UI/Camera")]
[ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
[Token(Token = "0x200006E")]
public class UICamera : MonoBehaviour
{
	[Token(Token = "0x200006F")]
	internal enum ClickNotification
	{
		None = 0,
		Always = 1,
		BasedOnDelta = 2,
	}

	[Token(Token = "0x2000071")]
	private class Highlighted
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x400029F")]
		public GameObject go; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x40002A0")]
		public int counter; //Field offset: 0x18

		[Address(RVA = "0x120EB30", Offset = "0x120EB30", Length = "0x8")]
		[Token(Token = "0x60002CA")]
		public Highlighted() { }

	}

	[Token(Token = "0x2000070")]
	internal class MouseOrTouch
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000297")]
		public Vector2 pos; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000298")]
		public Vector2 delta; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000299")]
		public Vector2 totalDelta; //Field offset: 0x20
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x400029A")]
		public Camera pressedCam; //Field offset: 0x28
		[FieldOffset(Offset = "0x30")]
		[Token(Token = "0x400029B")]
		public GameObject current; //Field offset: 0x30
		[FieldOffset(Offset = "0x38")]
		[Token(Token = "0x400029C")]
		public GameObject pressed; //Field offset: 0x38
		[FieldOffset(Offset = "0x40")]
		[Token(Token = "0x400029D")]
		public float clickTime; //Field offset: 0x40
		[FieldOffset(Offset = "0x44")]
		[Token(Token = "0x400029E")]
		public ClickNotification clickNotification; //Field offset: 0x44

		[Address(RVA = "0x120EC0C", Offset = "0x120EC0C", Length = "0x10")]
		[Token(Token = "0x60002C9")]
		public MouseOrTouch() { }

	}

	[Token(Token = "0x400027F")]
	public static Vector2 lastTouchPosition; //Field offset: 0x0
	[Token(Token = "0x4000280")]
	public static RaycastHit lastHit; //Field offset: 0x8
	[Token(Token = "0x4000281")]
	public static Camera currentCamera; //Field offset: 0x38
	[Token(Token = "0x4000282")]
	public static int currentTouchID; //Field offset: 0x40
	[Token(Token = "0x4000283")]
	public static MouseOrTouch currentTouch; //Field offset: 0x48
	[Token(Token = "0x4000284")]
	public static bool inputHasFocus; //Field offset: 0x50
	[Token(Token = "0x4000285")]
	public static GameObject fallThrough; //Field offset: 0x58
	[Token(Token = "0x4000286")]
	private static List<UICamera> mList; //Field offset: 0x60
	[Token(Token = "0x4000287")]
	private static List<Highlighted> mHighlighted; //Field offset: 0x68
	[Token(Token = "0x4000288")]
	private static GameObject mSel; //Field offset: 0x70
	[Token(Token = "0x4000289")]
	private static MouseOrTouch[] mMouse; //Field offset: 0x78
	[Token(Token = "0x400028A")]
	private static GameObject mHover; //Field offset: 0x80
	[Token(Token = "0x400028B")]
	private static MouseOrTouch mController; //Field offset: 0x88
	[Token(Token = "0x400028C")]
	private static float mNextEvent; //Field offset: 0x90
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x400026E")]
	public bool useMouse; //Field offset: 0x20
	[FieldOffset(Offset = "0x21")]
	[Token(Token = "0x400026F")]
	public bool useTouch; //Field offset: 0x21
	[FieldOffset(Offset = "0x22")]
	[Token(Token = "0x4000270")]
	public bool useKeyboard; //Field offset: 0x22
	[FieldOffset(Offset = "0x23")]
	[Token(Token = "0x4000271")]
	public bool useController; //Field offset: 0x23
	[FieldOffset(Offset = "0x24")]
	[Token(Token = "0x4000272")]
	public LayerMask eventReceiverMask; //Field offset: 0x24
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000273")]
	public float tooltipDelay; //Field offset: 0x28
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x4000274")]
	public bool stickyTooltip; //Field offset: 0x2C
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000275")]
	public float mouseClickThreshold; //Field offset: 0x30
	[FieldOffset(Offset = "0x34")]
	[Token(Token = "0x4000276")]
	public float touchClickThreshold; //Field offset: 0x34
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000277")]
	public float rangeDistance; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000278")]
	public string scrollAxisName; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4000279")]
	public string verticalAxisName; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x400027A")]
	public string horizontalAxisName; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x400027B")]
	public KeyCode submitKey0; //Field offset: 0x58
	[FieldOffset(Offset = "0x5C")]
	[Token(Token = "0x400027C")]
	public KeyCode submitKey1; //Field offset: 0x5C
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x400027D")]
	public KeyCode cancelKey0; //Field offset: 0x60
	[FieldOffset(Offset = "0x64")]
	[Token(Token = "0x400027E")]
	public KeyCode cancelKey1; //Field offset: 0x64
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x400028D")]
	private Dictionary<Int32, MouseOrTouch> mTouches; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x400028E")]
	private GameObject mTooltip; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x400028F")]
	private Camera mCam; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x4000290")]
	private LayerMask mLayerMask; //Field offset: 0x80
	[FieldOffset(Offset = "0x84")]
	[Token(Token = "0x4000291")]
	private float mTooltipTime; //Field offset: 0x84
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x4000292")]
	private bool mIsEditor; //Field offset: 0x88

	[Token(Token = "0x17000060")]
	public Camera cachedCamera
	{
		[Address(RVA = "0x120DA50", Offset = "0x120DA50", Length = "0x94")]
		[Token(Token = "0x60002AD")]
		 get { } //Length: 148
	}

	[Token(Token = "0x17000064")]
	public static UICamera eventHandler
	{
		[Address(RVA = "0x120D90C", Offset = "0x120D90C", Length = "0x144")]
		[Token(Token = "0x60002B3")]
		 get { } //Length: 324
	}

	[Token(Token = "0x1700005F")]
	private bool handlesEvents
	{
		[Address(RVA = "0x120D880", Offset = "0x120D880", Length = "0x8C")]
		[Token(Token = "0x60002AC")]
		private get { } //Length: 140
	}

	[Token(Token = "0x17000061")]
	public static GameObject hoveredObject
	{
		[Address(RVA = "0x120DAE4", Offset = "0x120DAE4", Length = "0x58")]
		[Token(Token = "0x60002AE")]
		 get { } //Length: 88
	}

	[Obsolete("Use UICamera.currentCamera instead")]
	[Token(Token = "0x1700005D")]
	public static Camera lastCamera
	{
		[Address(RVA = "0x120D7D0", Offset = "0x120D7D0", Length = "0x58")]
		[Token(Token = "0x60002AA")]
		 get { } //Length: 88
	}

	[Obsolete("Use UICamera.currentTouchID instead")]
	[Token(Token = "0x1700005E")]
	public static int lastTouchID
	{
		[Address(RVA = "0x120D828", Offset = "0x120D828", Length = "0x58")]
		[Token(Token = "0x60002AB")]
		 get { } //Length: 88
	}

	[Token(Token = "0x17000063")]
	public static Camera mainCamera
	{
		[Address(RVA = "0x120E414", Offset = "0x120E414", Length = "0xAC")]
		[Token(Token = "0x60002B2")]
		 get { } //Length: 172
	}

	[Token(Token = "0x17000062")]
	public static GameObject selectedObject
	{
		[Address(RVA = "0x120DB3C", Offset = "0x120DB3C", Length = "0x58")]
		[Token(Token = "0x60002AF")]
		 get { } //Length: 88
		[Address(RVA = "0x120DB94", Offset = "0x120DB94", Length = "0x340")]
		[Token(Token = "0x60002B0")]
		 set { } //Length: 832
	}

	[Address(RVA = "0x1211018", Offset = "0x1211018", Length = "0x288")]
	[Token(Token = "0x60002C8")]
	private static UICamera() { }

	[Address(RVA = "0x1210F00", Offset = "0x1210F00", Length = "0x118")]
	[Token(Token = "0x60002C7")]
	public UICamera() { }

	[Address(RVA = "0x120EC74", Offset = "0x120EC74", Length = "0x2BC")]
	[Token(Token = "0x60002BE")]
	private void Awake() { }

	[Address(RVA = "0x120E4C0", Offset = "0x120E4C0", Length = "0xA8")]
	[Token(Token = "0x60002B4")]
	private static int CompareFunc(UICamera a, UICamera b) { }

	[Address(RVA = "0x120DED4", Offset = "0x120DED4", Length = "0x14C")]
	[Token(Token = "0x60002B6")]
	public static UICamera FindCameraForLayer(int layer) { }

	[Address(RVA = "0x120EFB0", Offset = "0x120EFB0", Length = "0x174")]
	[Token(Token = "0x60002C0")]
	private void FixedUpdate() { }

	[Address(RVA = "0x120DA50", Offset = "0x120DA50", Length = "0x94")]
	[Token(Token = "0x60002AD")]
	public Camera get_cachedCamera() { }

	[Address(RVA = "0x120D90C", Offset = "0x120D90C", Length = "0x144")]
	[Token(Token = "0x60002B3")]
	public static UICamera get_eventHandler() { }

	[Address(RVA = "0x120D880", Offset = "0x120D880", Length = "0x8C")]
	[Token(Token = "0x60002AC")]
	private bool get_handlesEvents() { }

	[Address(RVA = "0x120DAE4", Offset = "0x120DAE4", Length = "0x58")]
	[Token(Token = "0x60002AE")]
	public static GameObject get_hoveredObject() { }

	[Address(RVA = "0x120D7D0", Offset = "0x120D7D0", Length = "0x58")]
	[Token(Token = "0x60002AA")]
	public static Camera get_lastCamera() { }

	[Address(RVA = "0x120D828", Offset = "0x120D828", Length = "0x58")]
	[Token(Token = "0x60002AB")]
	public static int get_lastTouchID() { }

	[Address(RVA = "0x120E414", Offset = "0x120E414", Length = "0xAC")]
	[Token(Token = "0x60002B2")]
	public static Camera get_mainCamera() { }

	[Address(RVA = "0x120DB3C", Offset = "0x120DB3C", Length = "0x58")]
	[Token(Token = "0x60002AF")]
	public static GameObject get_selectedObject() { }

	[Address(RVA = "0x120E91C", Offset = "0x120E91C", Length = "0xF4")]
	[Token(Token = "0x60002B9")]
	private static int GetDirection(string axis) { }

	[Address(RVA = "0x120E878", Offset = "0x120E878", Length = "0x38")]
	[Token(Token = "0x60002B7")]
	private static int GetDirection(KeyCode up, KeyCode down) { }

	[Address(RVA = "0x120E8B0", Offset = "0x120E8B0", Length = "0x6C")]
	[Token(Token = "0x60002B8")]
	private static int GetDirection(KeyCode up0, KeyCode up1, KeyCode down0, KeyCode down1) { }

	[Address(RVA = "0x120EB38", Offset = "0x120EB38", Length = "0xD4")]
	[Token(Token = "0x60002BC")]
	private MouseOrTouch GetTouch(int id) { }

	[Address(RVA = "0x120E020", Offset = "0x120E020", Length = "0x35C")]
	[Token(Token = "0x60002BB")]
	private static void Highlight(GameObject go, bool highlighted) { }

	[Address(RVA = "0x120EA10", Offset = "0x120EA10", Length = "0x120")]
	[Token(Token = "0x60002BA")]
	public static bool IsHighlighted(GameObject go) { }

	[Address(RVA = "0x120E37C", Offset = "0x120E37C", Length = "0x98")]
	[Token(Token = "0x60002B1")]
	private void OnApplicationQuit() { }

	[Address(RVA = "0x120EF30", Offset = "0x120EF30", Length = "0x80")]
	[Token(Token = "0x60002BF")]
	private void OnDestroy() { }

	[Address(RVA = "0x120F508", Offset = "0x120F508", Length = "0x6D4")]
	[Token(Token = "0x60002C2")]
	private void ProcessMouse() { }

	[Address(RVA = "0x1210048", Offset = "0x1210048", Length = "0x528")]
	[Token(Token = "0x60002C4")]
	private void ProcessOthers() { }

	[Address(RVA = "0x1210570", Offset = "0x1210570", Length = "0x990")]
	[Token(Token = "0x60002C5")]
	private void ProcessTouch(bool pressed, bool unpressed) { }

	[Address(RVA = "0x120FBDC", Offset = "0x120FBDC", Length = "0x38C")]
	[Token(Token = "0x60002C3")]
	private void ProcessTouches() { }

	[Address(RVA = "0x120E568", Offset = "0x120E568", Length = "0x310")]
	[Token(Token = "0x60002B5")]
	private static bool Raycast(Vector3 inPos, ref RaycastHit hit) { }

	[Address(RVA = "0x120EC1C", Offset = "0x120EC1C", Length = "0x58")]
	[Token(Token = "0x60002BD")]
	private void RemoveTouch(int id) { }

	[Address(RVA = "0x120DB94", Offset = "0x120DB94", Length = "0x340")]
	[Token(Token = "0x60002B0")]
	public static void set_selectedObject(GameObject value) { }

	[Address(RVA = "0x120FF68", Offset = "0x120FF68", Length = "0xE0")]
	[Token(Token = "0x60002C6")]
	public void ShowTooltip(bool val) { }

	[Address(RVA = "0x120F124", Offset = "0x120F124", Length = "0x3E4")]
	[Token(Token = "0x60002C1")]
	private void Update() { }

}

