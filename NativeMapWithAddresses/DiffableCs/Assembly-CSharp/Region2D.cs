//Type is in global namespace

[Token(Token = "0x2000185")]
public class Region2D : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000DFF")]
	public List<Vector2> Points; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000E00")]
	public Transform TestPoint; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000E01")]
	public float Height; //Field offset: 0x30
	[FieldOffset(Offset = "0x34")]
	[Token(Token = "0x4000E02")]
	public Vector3 testProjectedPoint; //Field offset: 0x34
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000E03")]
	public bool testIsIn; //Field offset: 0x40

	[Address(RVA = "0x131EE68", Offset = "0x131EE68", Length = "0x7C")]
	[Token(Token = "0x6000B74")]
	public Region2D() { }

	[Address(RVA = "0x131E754", Offset = "0x131E754", Length = "0x4")]
	[Token(Token = "0x6000B6C")]
	public void AddPoint(float x, float y) { }

	[Address(RVA = "0x131E758", Offset = "0x131E758", Length = "0xB8")]
	[Token(Token = "0x6000B6D")]
	public void AddPoint(Vector2 p) { }

	[Address(RVA = "0x131E810", Offset = "0x131E810", Length = "0x50")]
	[Token(Token = "0x6000B6E")]
	public void Clear() { }

	[Address(RVA = "0x131ED58", Offset = "0x131ED58", Length = "0x110")]
	[Token(Token = "0x6000B73")]
	public bool DoesLineSegementIntersect(Vector2 p1, Vector2 p2) { }

	[Address(RVA = "0x131E860", Offset = "0x131E860", Length = "0xA8")]
	[Token(Token = "0x6000B6F")]
	private void DrawLine(Vector2 lastPoint, Vector2 nextPoint) { }

	[Address(RVA = "0x131EB60", Offset = "0x131EB60", Length = "0x8")]
	[Token(Token = "0x6000B71")]
	public bool IsPointInside(Vector3 point) { }

	[Address(RVA = "0x131EB68", Offset = "0x131EB68", Length = "0x1F0")]
	[Token(Token = "0x6000B72")]
	public bool IsPointInside(Vector2 worldPoint) { }

	[Address(RVA = "0x131E908", Offset = "0x131E908", Length = "0x258")]
	[Token(Token = "0x6000B70")]
	private void OnDrawGizmos() { }

}

