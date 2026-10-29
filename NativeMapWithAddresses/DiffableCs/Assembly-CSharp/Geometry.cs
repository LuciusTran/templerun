//Type is in global namespace

[Token(Token = "0x20000FD")]
public static class Geometry
{

	[Address(RVA = "0x12D8AD8", Offset = "0x12D8AD8", Length = "0x148")]
	[Token(Token = "0x600076F")]
	public static Intersection IntersectionOf(Line line, Polygon polygon) { }

	[Address(RVA = "0x12D8EAC", Offset = "0x12D8EAC", Length = "0x290")]
	[Token(Token = "0x6000770")]
	public static Intersection IntersectionOf(Vector2 point, Polygon polygon) { }

	[Address(RVA = "0x12D8C20", Offset = "0x12D8C20", Length = "0xF0")]
	[Token(Token = "0x6000771")]
	public static Intersection IntersectionOf(Vector2 point, Line line) { }

	[Address(RVA = "0x12D8D10", Offset = "0x12D8D10", Length = "0x19C")]
	[Token(Token = "0x6000772")]
	public static Intersection IntersectionOf(Line line1, Line line2) { }

}

