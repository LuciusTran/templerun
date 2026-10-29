//Type is in global namespace

[Token(Token = "0x200016A")]
public class Obstacle : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000C8D")]
	public bool MustJumpOver; //Field offset: 0x20
	[FieldOffset(Offset = "0x21")]
	[Token(Token = "0x4000C8E")]
	public bool MustSlideUnder; //Field offset: 0x21
	[FieldOffset(Offset = "0x22")]
	[Token(Token = "0x4000C8F")]
	public bool DoesKill; //Field offset: 0x22

	[Address(RVA = "0x1309DC4", Offset = "0x1309DC4", Length = "0x8")]
	[Token(Token = "0x6000A6E")]
	public Obstacle() { }

	[Address(RVA = "0x1309C0C", Offset = "0x1309C0C", Length = "0xE8")]
	[Token(Token = "0x6000A6C")]
	public bool DoesLineSegementIntersect(Vector2 p1, Vector2 p2) { }

	[Address(RVA = "0x1309CF4", Offset = "0x1309CF4", Length = "0xD0")]
	[Token(Token = "0x6000A6D")]
	public bool IsPointInRegion(Vector2 p) { }

}

