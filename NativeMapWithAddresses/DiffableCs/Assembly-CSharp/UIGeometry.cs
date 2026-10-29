//Type is in global namespace

[Token(Token = "0x2000055")]
public class UIGeometry
{
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x40001E0")]
	public BetterList<Vector3> verts; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x40001E1")]
	public BetterList<Vector2> uvs; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40001E2")]
	public BetterList<Color> cols; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40001E3")]
	private BetterList<Vector3> mRtpVerts; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40001E4")]
	private Vector3 mRtpNormal; //Field offset: 0x30
	[FieldOffset(Offset = "0x3C")]
	[Token(Token = "0x40001E5")]
	private Vector4 mRtpTan; //Field offset: 0x3C

	[Token(Token = "0x17000032")]
	public bool hasTransformed
	{
		[Address(RVA = "0x120626C", Offset = "0x120626C", Length = "0x40")]
		[Token(Token = "0x6000206")]
		 get { } //Length: 64
	}

	[Token(Token = "0x17000031")]
	public bool hasVertices
	{
		[Address(RVA = "0x1206248", Offset = "0x1206248", Length = "0x24")]
		[Token(Token = "0x6000205")]
		 get { } //Length: 36
	}

	[Address(RVA = "0x1206974", Offset = "0x1206974", Length = "0x124")]
	[Token(Token = "0x600020B")]
	public UIGeometry() { }

	[Address(RVA = "0x1206354", Offset = "0x1206354", Length = "0x74")]
	[Token(Token = "0x6000208")]
	public void ApplyOffset(Vector3 pivotOffset) { }

	[Address(RVA = "0x12063C8", Offset = "0x12063C8", Length = "0x2E8")]
	[Token(Token = "0x6000209")]
	public void ApplyTransform(Matrix4x4 widgetToPanel, bool normals) { }

	[Address(RVA = "0x12062AC", Offset = "0x12062AC", Length = "0xA8")]
	[Token(Token = "0x6000207")]
	public void Clear() { }

	[Address(RVA = "0x120626C", Offset = "0x120626C", Length = "0x40")]
	[Token(Token = "0x6000206")]
	public bool get_hasTransformed() { }

	[Address(RVA = "0x1206248", Offset = "0x1206248", Length = "0x24")]
	[Token(Token = "0x6000205")]
	public bool get_hasVertices() { }

	[Address(RVA = "0x12066B0", Offset = "0x12066B0", Length = "0x2C4")]
	[Token(Token = "0x600020A")]
	public void WriteToBuffers(BetterList<Vector3> v, BetterList<Vector2> u, BetterList<Color> c, BetterList<Vector3> n, BetterList<Vector4> t) { }

}

