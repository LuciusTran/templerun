//Type is in global namespace

[AddComponentMenu("NGUI/Internal/Draw Call")]
[ExecuteInEditMode]
[Token(Token = "0x200004C")]
public class UIDrawCall : MonoBehaviour
{
	[Token(Token = "0x200004D")]
	internal enum Clipping
	{
		None = 0,
		HardClip = 1,
		AlphaClip = 2,
		SoftClip = 3,
	}

	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40001C1")]
	private Transform mTrans; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40001C2")]
	private Material mSharedMat; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40001C3")]
	private Mesh mMesh0; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x40001C4")]
	private Mesh mMesh1; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x40001C5")]
	private MeshFilter mFilter; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x40001C6")]
	private MeshRenderer mRen; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x40001C7")]
	private Clipping mClipping; //Field offset: 0x50
	[FieldOffset(Offset = "0x54")]
	[Token(Token = "0x40001C8")]
	private Vector4 mClipRange; //Field offset: 0x54
	[FieldOffset(Offset = "0x64")]
	[Token(Token = "0x40001C9")]
	private Vector2 mClipSoft; //Field offset: 0x64
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x40001CA")]
	private Material mClippedMat; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x40001CB")]
	private Material mDepthMat; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x40001CC")]
	private Int32[] mIndices; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x40001CD")]
	private bool mDepthPass; //Field offset: 0x88
	[FieldOffset(Offset = "0x89")]
	[Token(Token = "0x40001CE")]
	private bool mReset; //Field offset: 0x89
	[FieldOffset(Offset = "0x8A")]
	[Token(Token = "0x40001CF")]
	private bool mEven; //Field offset: 0x8A

	[Token(Token = "0x1700002B")]
	public Transform cachedTransform
	{
		[Address(RVA = "0x120485C", Offset = "0x120485C", Length = "0x80")]
		[Token(Token = "0x60001D0")]
		 get { } //Length: 128
	}

	[Token(Token = "0x1700002E")]
	public Clipping clipping
	{
		[Address(RVA = "0x1204988", Offset = "0x1204988", Length = "0x8")]
		[Token(Token = "0x60001D4")]
		 get { } //Length: 8
		[Address(RVA = "0x1204990", Offset = "0x1204990", Length = "0x1C")]
		[Token(Token = "0x60001D5")]
		 set { } //Length: 28
	}

	[Token(Token = "0x1700002F")]
	public Vector4 clipRange
	{
		[Address(RVA = "0x12049AC", Offset = "0x12049AC", Length = "0xC")]
		[Token(Token = "0x60001D6")]
		 get { } //Length: 12
		[Address(RVA = "0x12049B8", Offset = "0x12049B8", Length = "0xC")]
		[Token(Token = "0x60001D7")]
		 set { } //Length: 12
	}

	[Token(Token = "0x17000030")]
	public Vector2 clipSoftness
	{
		[Address(RVA = "0x12049C4", Offset = "0x12049C4", Length = "0x8")]
		[Token(Token = "0x60001D8")]
		 get { } //Length: 8
		[Address(RVA = "0x12049CC", Offset = "0x12049CC", Length = "0x8")]
		[Token(Token = "0x60001D9")]
		 set { } //Length: 8
	}

	[Token(Token = "0x1700002A")]
	public bool depthPass
	{
		[Address(RVA = "0x1204834", Offset = "0x1204834", Length = "0x8")]
		[Token(Token = "0x60001CE")]
		 get { } //Length: 8
		[Address(RVA = "0x120483C", Offset = "0x120483C", Length = "0x20")]
		[Token(Token = "0x60001CF")]
		 set { } //Length: 32
	}

	[Token(Token = "0x1700002C")]
	public Material material
	{
		[Address(RVA = "0x12048DC", Offset = "0x12048DC", Length = "0x8")]
		[Token(Token = "0x60001D1")]
		 get { } //Length: 8
		[Address(RVA = "0x12048E4", Offset = "0x12048E4", Length = "0x8")]
		[Token(Token = "0x60001D2")]
		 set { } //Length: 8
	}

	[Token(Token = "0x1700002D")]
	public int triangles
	{
		[Address(RVA = "0x12048EC", Offset = "0x12048EC", Length = "0x9C")]
		[Token(Token = "0x60001D3")]
		 get { } //Length: 156
	}

	[Address(RVA = "0x12057F8", Offset = "0x12057F8", Length = "0x10")]
	[Token(Token = "0x60001DF")]
	public UIDrawCall() { }

	[Address(RVA = "0x120485C", Offset = "0x120485C", Length = "0x80")]
	[Token(Token = "0x60001D0")]
	public Transform get_cachedTransform() { }

	[Address(RVA = "0x1204988", Offset = "0x1204988", Length = "0x8")]
	[Token(Token = "0x60001D4")]
	public Clipping get_clipping() { }

	[Address(RVA = "0x12049AC", Offset = "0x12049AC", Length = "0xC")]
	[Token(Token = "0x60001D6")]
	public Vector4 get_clipRange() { }

	[Address(RVA = "0x12049C4", Offset = "0x12049C4", Length = "0x8")]
	[Token(Token = "0x60001D8")]
	public Vector2 get_clipSoftness() { }

	[Address(RVA = "0x1204834", Offset = "0x1204834", Length = "0x8")]
	[Token(Token = "0x60001CE")]
	public bool get_depthPass() { }

	[Address(RVA = "0x12048DC", Offset = "0x12048DC", Length = "0x8")]
	[Token(Token = "0x60001D1")]
	public Material get_material() { }

	[Address(RVA = "0x12048EC", Offset = "0x12048EC", Length = "0x9C")]
	[Token(Token = "0x60001D3")]
	public int get_triangles() { }

	[Address(RVA = "0x12049D4", Offset = "0x12049D4", Length = "0x210")]
	[Token(Token = "0x60001DA")]
	private Mesh GetMesh(ref bool rebuildIndices, int vertexCount) { }

	[Address(RVA = "0x12057CC", Offset = "0x12057CC", Length = "0x2C")]
	[Token(Token = "0x60001DE")]
	private void OnDestroy() { }

	[Address(RVA = "0x1205690", Offset = "0x1205690", Length = "0x13C")]
	[Token(Token = "0x60001DD")]
	private void OnWillRenderObject() { }

	[Address(RVA = "0x12050B8", Offset = "0x12050B8", Length = "0x5D8")]
	[Token(Token = "0x60001DC")]
	public void Set(BetterList<Vector3> verts, BetterList<Vector3> norms, BetterList<Vector4> tans, BetterList<Vector2> uvs, BetterList<Color> cols) { }

	[Address(RVA = "0x1204990", Offset = "0x1204990", Length = "0x1C")]
	[Token(Token = "0x60001D5")]
	public void set_clipping(Clipping value) { }

	[Address(RVA = "0x12049B8", Offset = "0x12049B8", Length = "0xC")]
	[Token(Token = "0x60001D7")]
	public void set_clipRange(Vector4 value) { }

	[Address(RVA = "0x12049CC", Offset = "0x12049CC", Length = "0x8")]
	[Token(Token = "0x60001D9")]
	public void set_clipSoftness(Vector2 value) { }

	[Address(RVA = "0x120483C", Offset = "0x120483C", Length = "0x20")]
	[Token(Token = "0x60001CF")]
	public void set_depthPass(bool value) { }

	[Address(RVA = "0x12048E4", Offset = "0x12048E4", Length = "0x8")]
	[Token(Token = "0x60001D2")]
	public void set_material(Material value) { }

	[Address(RVA = "0x1204BE4", Offset = "0x1204BE4", Length = "0x4D4")]
	[Token(Token = "0x60001DB")]
	private void UpdateMaterials() { }

}

