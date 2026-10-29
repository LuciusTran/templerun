//Type is in global namespace

[AddComponentMenu("NGUI/UI/Panel")]
[ExecuteInEditMode]
[Token(Token = "0x200007D")]
public class UIPanel : MonoBehaviour
{
	[Token(Token = "0x200007E")]
	internal enum DebugInfo
	{
		None = 0,
		Gizmos = 1,
		Geometry = 2,
	}

	[Token(Token = "0x4000302")]
	private static Single[] mTemp; //Field offset: 0x0
	[Token(Token = "0x4000309")]
	private static List<UINode> mHierarchy; //Field offset: 0x8
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40002E9")]
	public bool showInPanelTool; //Field offset: 0x20
	[FieldOffset(Offset = "0x21")]
	[Token(Token = "0x40002EA")]
	public bool generateNormals; //Field offset: 0x21
	[FieldOffset(Offset = "0x22")]
	[Token(Token = "0x40002EB")]
	public bool depthPass; //Field offset: 0x22
	[FieldOffset(Offset = "0x23")]
	[Token(Token = "0x40002EC")]
	public bool widgetsAreStatic; //Field offset: 0x23
	[FieldOffset(Offset = "0x24")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x40002ED")]
	private DebugInfo mDebugInfo; //Field offset: 0x24
	[FieldOffset(Offset = "0x28")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x40002EE")]
	private Clipping mClipping; //Field offset: 0x28
	[FieldOffset(Offset = "0x2C")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x40002EF")]
	private Vector4 mClipRange; //Field offset: 0x2C
	[FieldOffset(Offset = "0x3C")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x40002F0")]
	private Vector2 mClipSoftness; //Field offset: 0x3C
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x40002F1")]
	private OrderedDictionary mChildren; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x40002F2")]
	private List<UIWidget> mWidgets; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x40002F3")]
	private List<Material> mChanged; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x40002F4")]
	private List<UIDrawCall> mDrawCalls; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x40002F5")]
	private BetterList<Vector3> mVerts; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x40002F6")]
	private BetterList<Vector3> mNorms; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x40002F7")]
	private BetterList<Vector4> mTans; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x40002F8")]
	private BetterList<Vector2> mUvs; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x40002F9")]
	private BetterList<Color> mCols; //Field offset: 0x88
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x40002FA")]
	private Transform mTrans; //Field offset: 0x90
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x40002FB")]
	private Camera mCam; //Field offset: 0x98
	[FieldOffset(Offset = "0xA0")]
	[Token(Token = "0x40002FC")]
	private int mLayer; //Field offset: 0xA0
	[FieldOffset(Offset = "0xA4")]
	[Token(Token = "0x40002FD")]
	private bool mDepthChanged; //Field offset: 0xA4
	[FieldOffset(Offset = "0xA5")]
	[Token(Token = "0x40002FE")]
	private bool mRebuildAll; //Field offset: 0xA5
	[FieldOffset(Offset = "0xA6")]
	[Token(Token = "0x40002FF")]
	private bool mChangedLastFrame; //Field offset: 0xA6
	[FieldOffset(Offset = "0xA8")]
	[Token(Token = "0x4000300")]
	private float mMatrixTime; //Field offset: 0xA8
	[FieldOffset(Offset = "0xAC")]
	[Token(Token = "0x4000301")]
	private Matrix4x4 mWorldToLocal; //Field offset: 0xAC
	[FieldOffset(Offset = "0xEC")]
	[Token(Token = "0x4000303")]
	private Vector2 mMin; //Field offset: 0xEC
	[FieldOffset(Offset = "0xF4")]
	[Token(Token = "0x4000304")]
	private Vector2 mMax; //Field offset: 0xF4
	[FieldOffset(Offset = "0x100")]
	[Token(Token = "0x4000305")]
	private List<Transform> mRemoved; //Field offset: 0x100
	[FieldOffset(Offset = "0x108")]
	[Token(Token = "0x4000306")]
	private bool mCheckVisibility; //Field offset: 0x108
	[FieldOffset(Offset = "0x10C")]
	[Token(Token = "0x4000307")]
	private float mCullTime; //Field offset: 0x10C
	[FieldOffset(Offset = "0x110")]
	[Token(Token = "0x4000308")]
	private bool mCulled; //Field offset: 0x110

	[Token(Token = "0x17000085")]
	public Transform cachedTransform
	{
		[Address(RVA = "0x12A30EC", Offset = "0x12A30EC", Length = "0x80")]
		[Token(Token = "0x600032D")]
		 get { } //Length: 128
	}

	[Token(Token = "0x17000086")]
	public bool changedLastFrame
	{
		[Address(RVA = "0x12A316C", Offset = "0x12A316C", Length = "0x8")]
		[Token(Token = "0x600032E")]
		 get { } //Length: 8
	}

	[Token(Token = "0x17000088")]
	public Clipping clipping
	{
		[Address(RVA = "0x12A3390", Offset = "0x12A3390", Length = "0x8")]
		[Token(Token = "0x6000331")]
		 get { } //Length: 8
		[Address(RVA = "0x12A3398", Offset = "0x12A3398", Length = "0x20")]
		[Token(Token = "0x6000332")]
		 set { } //Length: 32
	}

	[Token(Token = "0x17000089")]
	public Vector4 clipRange
	{
		[Address(RVA = "0x12A3600", Offset = "0x12A3600", Length = "0xC")]
		[Token(Token = "0x6000333")]
		 get { } //Length: 12
		[Address(RVA = "0x12A360C", Offset = "0x12A360C", Length = "0xC8")]
		[Token(Token = "0x6000334")]
		 set { } //Length: 200
	}

	[Token(Token = "0x1700008A")]
	public Vector2 clipSoftness
	{
		[Address(RVA = "0x12A36D4", Offset = "0x12A36D4", Length = "0x8")]
		[Token(Token = "0x6000335")]
		 get { } //Length: 8
		[Address(RVA = "0x12A36DC", Offset = "0x12A36DC", Length = "0x34")]
		[Token(Token = "0x6000336")]
		 set { } //Length: 52
	}

	[Token(Token = "0x17000087")]
	public DebugInfo debugInfo
	{
		[Address(RVA = "0x12A3174", Offset = "0x12A3174", Length = "0x8")]
		[Token(Token = "0x600032F")]
		 get { } //Length: 8
		[Address(RVA = "0x12A317C", Offset = "0x12A317C", Length = "0x110")]
		[Token(Token = "0x6000330")]
		 set { } //Length: 272
	}

	[Token(Token = "0x1700008C")]
	public List<UIDrawCall> drawCalls
	{
		[Address(RVA = "0x12A328C", Offset = "0x12A328C", Length = "0x104")]
		[Token(Token = "0x6000338")]
		 get { } //Length: 260
	}

	[Token(Token = "0x1700008B")]
	public List<UIWidget> widgets
	{
		[Address(RVA = "0x12A3710", Offset = "0x12A3710", Length = "0x8")]
		[Token(Token = "0x6000337")]
		 get { } //Length: 8
	}

	[Address(RVA = "0x12A6694", Offset = "0x12A6694", Length = "0xB8")]
	[Token(Token = "0x6000354")]
	private static UIPanel() { }

	[Address(RVA = "0x12A631C", Offset = "0x12A631C", Length = "0x378")]
	[Token(Token = "0x6000353")]
	public UIPanel() { }

	[Address(RVA = "0x12A3F98", Offset = "0x12A3F98", Length = "0x188")]
	[Token(Token = "0x600033E")]
	private UINode AddTransform(Transform t) { }

	[Address(RVA = "0x12A423C", Offset = "0x12A423C", Length = "0x2AC")]
	[Token(Token = "0x6000340")]
	public void AddWidget(UIWidget w) { }

	[Address(RVA = "0x12A5DC8", Offset = "0x12A5DC8", Length = "0x7C")]
	[Token(Token = "0x600034D")]
	public Vector3 CalculateConstrainOffset(Vector2 min, Vector2 max) { }

	[Address(RVA = "0x12A603C", Offset = "0x12A603C", Length = "0x64")]
	[Token(Token = "0x600034F")]
	public bool ConstrainTargetToBounds(Transform target, bool immediate) { }

	[Address(RVA = "0x12A5E44", Offset = "0x12A5E44", Length = "0x1F8")]
	[Token(Token = "0x600034E")]
	public bool ConstrainTargetToBounds(Transform target, ref Bounds targetBounds, bool immediate) { }

	[Address(RVA = "0x12A5590", Offset = "0x12A5590", Length = "0x3EC")]
	[Token(Token = "0x600034B")]
	private void Fill(Material mat) { }

	[Address(RVA = "0x12A62C4", Offset = "0x12A62C4", Length = "0x58")]
	[Token(Token = "0x6000352")]
	public static UIPanel Find(Transform trans) { }

	[Address(RVA = "0x12A60A0", Offset = "0x12A60A0", Length = "0x224")]
	[Token(Token = "0x6000351")]
	public static UIPanel Find(Transform trans, bool createIfMissing) { }

	[Address(RVA = "0x12A30EC", Offset = "0x12A30EC", Length = "0x80")]
	[Token(Token = "0x600032D")]
	public Transform get_cachedTransform() { }

	[Address(RVA = "0x12A316C", Offset = "0x12A316C", Length = "0x8")]
	[Token(Token = "0x600032E")]
	public bool get_changedLastFrame() { }

	[Address(RVA = "0x12A3390", Offset = "0x12A3390", Length = "0x8")]
	[Token(Token = "0x6000331")]
	public Clipping get_clipping() { }

	[Address(RVA = "0x12A3600", Offset = "0x12A3600", Length = "0xC")]
	[Token(Token = "0x6000333")]
	public Vector4 get_clipRange() { }

	[Address(RVA = "0x12A36D4", Offset = "0x12A36D4", Length = "0x8")]
	[Token(Token = "0x6000335")]
	public Vector2 get_clipSoftness() { }

	[Address(RVA = "0x12A3174", Offset = "0x12A3174", Length = "0x8")]
	[Token(Token = "0x600032F")]
	public DebugInfo get_debugInfo() { }

	[Address(RVA = "0x12A328C", Offset = "0x12A328C", Length = "0x104")]
	[Token(Token = "0x6000338")]
	public List<UIDrawCall> get_drawCalls() { }

	[Address(RVA = "0x12A3710", Offset = "0x12A3710", Length = "0x8")]
	[Token(Token = "0x6000337")]
	public List<UIWidget> get_widgets() { }

	[Address(RVA = "0x12A4BF8", Offset = "0x12A4BF8", Length = "0x274")]
	[Token(Token = "0x6000346")]
	private int GetChangeFlag(UINode start) { }

	[Address(RVA = "0x12A46A0", Offset = "0x12A46A0", Length = "0x268")]
	[Token(Token = "0x6000342")]
	private UIDrawCall GetDrawCall(Material mat, bool createIfMissing) { }

	[Address(RVA = "0x12A3718", Offset = "0x12A3718", Length = "0xF8")]
	[Token(Token = "0x6000339")]
	private UINode GetNode(Transform t) { }

	[Address(RVA = "0x12A3810", Offset = "0x12A3810", Length = "0x280")]
	[Token(Token = "0x600033A")]
	private bool IsVisible(Vector3 a, Vector3 b, Vector3 c, Vector3 d) { }

	[Address(RVA = "0x12A3C28", Offset = "0x12A3C28", Length = "0x1A4")]
	[Token(Token = "0x600033B")]
	public bool IsVisible(UIWidget w) { }

	[Address(RVA = "0x12A597C", Offset = "0x12A597C", Length = "0x30C")]
	[Token(Token = "0x600034C")]
	private void LateUpdate() { }

	[Address(RVA = "0x12A3DCC", Offset = "0x12A3DCC", Length = "0x124")]
	[Token(Token = "0x600033C")]
	public void MarkMaterialAsChanged(Material mat, bool sort) { }

	[Address(RVA = "0x12A4A98", Offset = "0x12A4A98", Length = "0x160")]
	[Token(Token = "0x6000345")]
	private void OnDisable() { }

	[Address(RVA = "0x12A49F4", Offset = "0x12A49F4", Length = "0xA4")]
	[Token(Token = "0x6000344")]
	private void OnEnable() { }

	[Address(RVA = "0x12A4120", Offset = "0x12A4120", Length = "0x11C")]
	[Token(Token = "0x600033F")]
	private void RemoveTransform(Transform t) { }

	[Address(RVA = "0x12A44E8", Offset = "0x12A44E8", Length = "0x1B8")]
	[Token(Token = "0x6000341")]
	public void RemoveWidget(UIWidget w) { }

	[Address(RVA = "0x12A3398", Offset = "0x12A3398", Length = "0x20")]
	[Token(Token = "0x6000332")]
	public void set_clipping(Clipping value) { }

	[Address(RVA = "0x12A360C", Offset = "0x12A360C", Length = "0xC8")]
	[Token(Token = "0x6000334")]
	public void set_clipRange(Vector4 value) { }

	[Address(RVA = "0x12A36DC", Offset = "0x12A36DC", Length = "0x34")]
	[Token(Token = "0x6000336")]
	public void set_clipSoftness(Vector2 value) { }

	[Address(RVA = "0x12A317C", Offset = "0x12A317C", Length = "0x110")]
	[Token(Token = "0x6000330")]
	public void set_debugInfo(DebugInfo value) { }

	[Address(RVA = "0x12A5C88", Offset = "0x12A5C88", Length = "0x140")]
	[Token(Token = "0x6000350")]
	private static void SetChildLayer(Transform t, int layer) { }

	[Address(RVA = "0x12A4908", Offset = "0x12A4908", Length = "0xEC")]
	[Token(Token = "0x6000343")]
	private void Start() { }

	[Address(RVA = "0x12A33B8", Offset = "0x12A33B8", Length = "0x248")]
	[Token(Token = "0x600034A")]
	public void UpdateDrawcalls() { }

	[Address(RVA = "0x12A3A90", Offset = "0x12A3A90", Length = "0x198")]
	[Token(Token = "0x6000347")]
	private void UpdateTransformMatrix() { }

	[Address(RVA = "0x12A4E6C", Offset = "0x12A4E6C", Length = "0x4FC")]
	[Token(Token = "0x6000348")]
	private void UpdateTransforms() { }

	[Address(RVA = "0x12A5368", Offset = "0x12A5368", Length = "0x228")]
	[Token(Token = "0x6000349")]
	private void UpdateWidgets() { }

	[Address(RVA = "0x12A3EF0", Offset = "0x12A3EF0", Length = "0xA8")]
	[Token(Token = "0x600033D")]
	public bool WatchesTransform(Transform t) { }

}

