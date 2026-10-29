//Type is in global namespace

[DefaultMember("Item")]
[Token(Token = "0x20000FB")]
public struct Polygon : IEnumerable<Vector2>, IEnumerable
{
	[FieldOffset(Offset = "0x0")]
	[Token(Token = "0x400089E")]
	private Vector2[] points; //Field offset: 0x0

	[Token(Token = "0x17000147")]
	public Vector2 Item
	{
		[Address(RVA = "0x12D89D4", Offset = "0x12D89D4", Length = "0x34")]
		[Token(Token = "0x6000769")]
		 get { } //Length: 52
		[Address(RVA = "0x12D8A08", Offset = "0x12D8A08", Length = "0x34")]
		[Token(Token = "0x600076A")]
		 set { } //Length: 52
	}

	[Token(Token = "0x17000146")]
	public int Length
	{
		[Address(RVA = "0x12D89B8", Offset = "0x12D89B8", Length = "0x1C")]
		[Token(Token = "0x6000768")]
		 get { } //Length: 28
	}

	[Token(Token = "0x17000145")]
	public Vector2[] Points
	{
		[Address(RVA = "0x12D89A8", Offset = "0x12D89A8", Length = "0x8")]
		[Token(Token = "0x6000766")]
		 get { } //Length: 8
		[Address(RVA = "0x12D89B0", Offset = "0x12D89B0", Length = "0x8")]
		[Token(Token = "0x6000767")]
		 set { } //Length: 8
	}

	[Address(RVA = "0x12D89A0", Offset = "0x12D89A0", Length = "0x8")]
	[Token(Token = "0x6000765")]
	public Polygon(Vector2[] points) { }

	[Address(RVA = "0x12D89D4", Offset = "0x12D89D4", Length = "0x34")]
	[Token(Token = "0x6000769")]
	public Vector2 get_Item(int index) { }

	[Address(RVA = "0x12D89B8", Offset = "0x12D89B8", Length = "0x1C")]
	[Token(Token = "0x6000768")]
	public int get_Length() { }

	[Address(RVA = "0x12D89A8", Offset = "0x12D89A8", Length = "0x8")]
	[Token(Token = "0x6000766")]
	public Vector2[] get_Points() { }

	[Address(RVA = "0x12D8ABC", Offset = "0x12D8ABC", Length = "0x1C")]
	[Token(Token = "0x600076E")]
	public override IEnumerator GetEnumerator() { }

	[Address(RVA = "0x12D8A3C", Offset = "0x12D8A3C", Length = "0x4")]
	[Token(Token = "0x600076B")]
	public static Vector2[] op_Implicit(Polygon polygon) { }

	[Address(RVA = "0x12D8A40", Offset = "0x12D8A40", Length = "0x4")]
	[Token(Token = "0x600076C")]
	public static Polygon op_Implicit(Vector2[] points) { }

	[Address(RVA = "0x12D8A08", Offset = "0x12D8A08", Length = "0x34")]
	[Token(Token = "0x600076A")]
	public void set_Item(int index, Vector2 value) { }

	[Address(RVA = "0x12D89B0", Offset = "0x12D89B0", Length = "0x8")]
	[Token(Token = "0x6000767")]
	public void set_Points(Vector2[] value) { }

	[Address(RVA = "0x12D8A44", Offset = "0x12D8A44", Length = "0x78")]
	[Token(Token = "0x600076D")]
	private override IEnumerator<Vector2> System.Collections.Generic.IEnumerable<UnityEngine.Vector2>.GetEnumerator() { }

}

