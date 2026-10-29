//Type is in global namespace

[Token(Token = "0x2000057")]
public abstract class UIWidget : MonoBehaviour
{
	[Token(Token = "0x2000058")]
	internal enum Pivot
	{
		TopLeft = 0,
		Top = 1,
		TopRight = 2,
		Left = 3,
		Center = 4,
		Right = 5,
		BottomLeft = 6,
		Bottom = 7,
		BottomRight = 8,
	}

	[FieldOffset(Offset = "0x20")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x40001EF")]
	private Material mMat; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x40001F0")]
	private Color mColor; //Field offset: 0x28
	[FieldOffset(Offset = "0x38")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x40001F1")]
	private Pivot mPivot; //Field offset: 0x38
	[FieldOffset(Offset = "0x3C")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x40001F2")]
	private int mDepth; //Field offset: 0x3C
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x40001F3")]
	private Transform mTrans; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x40001F4")]
	private Texture mTex; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x40001F5")]
	private UIPanel mPanel; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x40001F6")]
	protected bool mChanged; //Field offset: 0x58
	[FieldOffset(Offset = "0x59")]
	[Token(Token = "0x40001F7")]
	protected bool mPlayMode; //Field offset: 0x59
	[FieldOffset(Offset = "0x5C")]
	[Token(Token = "0x40001F8")]
	private Vector3 mDiffPos; //Field offset: 0x5C
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x40001F9")]
	private Quaternion mDiffRot; //Field offset: 0x68
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x40001FA")]
	private Vector3 mDiffScale; //Field offset: 0x78
	[FieldOffset(Offset = "0x84")]
	[Token(Token = "0x40001FB")]
	private int mVisibleFlag; //Field offset: 0x84
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x40001FC")]
	private UIGeometry mGeom; //Field offset: 0x88

	[Token(Token = "0x17000035")]
	public float alpha
	{
		[Address(RVA = "0x1206EB4", Offset = "0x1206EB4", Length = "0x8")]
		[Token(Token = "0x6000212")]
		 get { } //Length: 8
		[Address(RVA = "0x1206EBC", Offset = "0x1206EBC", Length = "0x18")]
		[Token(Token = "0x6000213")]
		 set { } //Length: 24
	}

	[Token(Token = "0x17000038")]
	public Transform cachedTransform
	{
		[Address(RVA = "0x12015AC", Offset = "0x12015AC", Length = "0x80")]
		[Token(Token = "0x6000218")]
		 get { } //Length: 128
	}

	[Token(Token = "0x17000034")]
	public Color color
	{
		[Address(RVA = "0x1206E50", Offset = "0x1206E50", Length = "0xC")]
		[Token(Token = "0x6000210")]
		 get { } //Length: 12
		[Address(RVA = "0x1206E5C", Offset = "0x1206E5C", Length = "0x58")]
		[Token(Token = "0x6000211")]
		 set { } //Length: 88
	}

	[Token(Token = "0x17000037")]
	public int depth
	{
		[Address(RVA = "0x1206EF8", Offset = "0x1206EF8", Length = "0x8")]
		[Token(Token = "0x6000216")]
		 get { } //Length: 8
		[Address(RVA = "0x1206F00", Offset = "0x1206F00", Length = "0xB4")]
		[Token(Token = "0x6000217")]
		 set { } //Length: 180
	}

	[Token(Token = "0x17000040")]
	public override bool keepMaterial
	{
		[Address(RVA = "0x12082B8", Offset = "0x12082B8", Length = "0x8")]
		[Token(Token = "0x6000231")]
		 get { } //Length: 8
	}

	[Token(Token = "0x1700003A")]
	public Texture mainTexture
	{
		[Address(RVA = "0x120723C", Offset = "0x120723C", Length = "0xC0")]
		[Token(Token = "0x600021B")]
		 get { } //Length: 192
	}

	[Token(Token = "0x17000039")]
	public override Material material
	{
		[Address(RVA = "0x1206FB4", Offset = "0x1206FB4", Length = "0x8")]
		[Token(Token = "0x6000219")]
		 get { } //Length: 8
		[Address(RVA = "0x1206FBC", Offset = "0x1206FBC", Length = "0x11C")]
		[Token(Token = "0x600021A")]
		 set { } //Length: 284
	}

	[Token(Token = "0x1700003B")]
	public UIPanel panel
	{
		[Address(RVA = "0x12072FC", Offset = "0x12072FC", Length = "0x74")]
		[Token(Token = "0x600021C")]
		 get { } //Length: 116
		[Address(RVA = "0x1207370", Offset = "0x1207370", Length = "0x8")]
		[Token(Token = "0x600021D")]
		 set { } //Length: 8
	}

	[Token(Token = "0x17000036")]
	public Pivot pivot
	{
		[Address(RVA = "0x1206ED4", Offset = "0x1206ED4", Length = "0x8")]
		[Token(Token = "0x6000214")]
		 get { } //Length: 8
		[Address(RVA = "0x1206EDC", Offset = "0x1206EDC", Length = "0x1C")]
		[Token(Token = "0x6000215")]
		 set { } //Length: 28
	}

	[Token(Token = "0x1700003D")]
	public override Vector2 pivotOffset
	{
		[Address(RVA = "0x12081C4", Offset = "0x12081C4", Length = "0xA8")]
		[Token(Token = "0x600022E")]
		 get { } //Length: 168
	}

	[Token(Token = "0x1700003F")]
	public override Vector2 relativeSize
	{
		[Address(RVA = "0x1208278", Offset = "0x1208278", Length = "0x40")]
		[Token(Token = "0x6000230")]
		 get { } //Length: 64
	}

	[Token(Token = "0x1700003C")]
	public int visibleFlag
	{
		[Address(RVA = "0x1207378", Offset = "0x1207378", Length = "0x8")]
		[Token(Token = "0x600021E")]
		 get { } //Length: 8
		[Address(RVA = "0x1207380", Offset = "0x1207380", Length = "0x8")]
		[Token(Token = "0x600021F")]
		 set { } //Length: 8
	}

	[Obsolete("Use 'relativeSize' instead")]
	[Token(Token = "0x1700003E")]
	public Vector2 visibleSize
	{
		[Address(RVA = "0x120826C", Offset = "0x120826C", Length = "0xC")]
		[Token(Token = "0x600022F")]
		 get { } //Length: 12
	}

	[Address(RVA = "0x12082D0", Offset = "0x12082D0", Length = "0x7C")]
	[Token(Token = "0x6000235")]
	protected UIWidget() { }

	[Address(RVA = "0x1207780", Offset = "0x1207780", Length = "0x60")]
	[Token(Token = "0x6000225")]
	private void Awake() { }

	[Address(RVA = "0x12074EC", Offset = "0x12074EC", Length = "0x140")]
	[Token(Token = "0x6000223")]
	private void CheckLayer() { }

	[Address(RVA = "0x120762C", Offset = "0x120762C", Length = "0x154")]
	[Token(Token = "0x6000224")]
	private void CheckParent() { }

	[Address(RVA = "0x1207388", Offset = "0x1207388", Length = "0x34")]
	[Token(Token = "0x6000220")]
	public static int CompareFunc(UIWidget left, UIWidget right) { }

	[Address(RVA = "0x12070D8", Offset = "0x12070D8", Length = "0x164")]
	[Token(Token = "0x6000222")]
	private void CreatePanel() { }

	[Address(RVA = "0x1206EB4", Offset = "0x1206EB4", Length = "0x8")]
	[Token(Token = "0x6000212")]
	public float get_alpha() { }

	[Address(RVA = "0x12015AC", Offset = "0x12015AC", Length = "0x80")]
	[Token(Token = "0x6000218")]
	public Transform get_cachedTransform() { }

	[Address(RVA = "0x1206E50", Offset = "0x1206E50", Length = "0xC")]
	[Token(Token = "0x6000210")]
	public Color get_color() { }

	[Address(RVA = "0x1206EF8", Offset = "0x1206EF8", Length = "0x8")]
	[Token(Token = "0x6000216")]
	public int get_depth() { }

	[Address(RVA = "0x12082B8", Offset = "0x12082B8", Length = "0x8")]
	[Token(Token = "0x6000231")]
	public override bool get_keepMaterial() { }

	[Address(RVA = "0x120723C", Offset = "0x120723C", Length = "0xC0")]
	[Token(Token = "0x600021B")]
	public Texture get_mainTexture() { }

	[Address(RVA = "0x1206FB4", Offset = "0x1206FB4", Length = "0x8")]
	[Token(Token = "0x6000219")]
	public override Material get_material() { }

	[Address(RVA = "0x12072FC", Offset = "0x12072FC", Length = "0x74")]
	[Token(Token = "0x600021C")]
	public UIPanel get_panel() { }

	[Address(RVA = "0x1206ED4", Offset = "0x1206ED4", Length = "0x8")]
	[Token(Token = "0x6000214")]
	public Pivot get_pivot() { }

	[Address(RVA = "0x12081C4", Offset = "0x12081C4", Length = "0xA8")]
	[Token(Token = "0x600022E")]
	public override Vector2 get_pivotOffset() { }

	[Address(RVA = "0x1208278", Offset = "0x1208278", Length = "0x40")]
	[Token(Token = "0x6000230")]
	public override Vector2 get_relativeSize() { }

	[Address(RVA = "0x1207378", Offset = "0x1207378", Length = "0x8")]
	[Token(Token = "0x600021E")]
	public int get_visibleFlag() { }

	[Address(RVA = "0x120826C", Offset = "0x120826C", Length = "0xC")]
	[Token(Token = "0x600022F")]
	public Vector2 get_visibleSize() { }

	[Address(RVA = "0x1207D88", Offset = "0x1207D88", Length = "0x43C")]
	[Token(Token = "0x600022D")]
	public override void MakePixelPerfect() { }

	[Address(RVA = "0x12073BC", Offset = "0x12073BC", Length = "0x130")]
	[Token(Token = "0x6000221")]
	public override void MarkAsChanged() { }

	[Address(RVA = "0x1207A54", Offset = "0x1207A54", Length = "0x84")]
	[Token(Token = "0x600022A")]
	private void OnDestroy() { }

	[Address(RVA = "0x12079A4", Offset = "0x12079A4", Length = "0xB0")]
	[Token(Token = "0x6000229")]
	private void OnDisable() { }

	[Address(RVA = "0x12077E0", Offset = "0x12077E0", Length = "0xEC")]
	[Token(Token = "0x6000226")]
	private void OnEnable() { }

	[Address(RVA = "0x12082CC", Offset = "0x12082CC", Length = "0x4")]
	[Token(Token = "0x6000234")]
	public override void OnFill(BetterList<Vector3> verts, BetterList<Vector2> uvs, BetterList<Color> cols) { }

	[Address(RVA = "0x12082C0", Offset = "0x12082C0", Length = "0x4")]
	[Token(Token = "0x6000232")]
	protected override void OnStart() { }

	[Address(RVA = "0x12082C4", Offset = "0x12082C4", Length = "0x8")]
	[Token(Token = "0x6000233")]
	public override bool OnUpdate() { }

	[Address(RVA = "0x1206EBC", Offset = "0x1206EBC", Length = "0x18")]
	[Token(Token = "0x6000213")]
	public void set_alpha(float value) { }

	[Address(RVA = "0x1206E5C", Offset = "0x1206E5C", Length = "0x58")]
	[Token(Token = "0x6000211")]
	public void set_color(Color value) { }

	[Address(RVA = "0x1206F00", Offset = "0x1206F00", Length = "0xB4")]
	[Token(Token = "0x6000217")]
	public void set_depth(int value) { }

	[Address(RVA = "0x1206FBC", Offset = "0x1206FBC", Length = "0x11C")]
	[Token(Token = "0x600021A")]
	public override void set_material(Material value) { }

	[Address(RVA = "0x1207370", Offset = "0x1207370", Length = "0x8")]
	[Token(Token = "0x600021D")]
	public void set_panel(UIPanel value) { }

	[Address(RVA = "0x1206EDC", Offset = "0x1206EDC", Length = "0x1C")]
	[Token(Token = "0x6000215")]
	public void set_pivot(Pivot value) { }

	[Address(RVA = "0x1207380", Offset = "0x1207380", Length = "0x8")]
	[Token(Token = "0x600021F")]
	public void set_visibleFlag(int value) { }

	[Address(RVA = "0x12078CC", Offset = "0x12078CC", Length = "0x20")]
	[Token(Token = "0x6000227")]
	private void Start() { }

	[Address(RVA = "0x12078EC", Offset = "0x12078EC", Length = "0xB8")]
	[Token(Token = "0x6000228")]
	private void Update() { }

	[Address(RVA = "0x1207AD8", Offset = "0x1207AD8", Length = "0x298")]
	[Token(Token = "0x600022B")]
	public bool UpdateGeometry(ref Matrix4x4 worldToPanel, bool parentMoved, bool generateNormals) { }

	[Address(RVA = "0x1207D70", Offset = "0x1207D70", Length = "0x18")]
	[Token(Token = "0x600022C")]
	public void WriteToBuffers(BetterList<Vector3> v, BetterList<Vector2> u, BetterList<Color> c, BetterList<Vector3> n, BetterList<Vector4> t) { }

}

