//Type is in global namespace

[Token(Token = "0x20000FA")]
public struct Line
{
	[Token(Token = "0x400089B")]
	public static Line Empty; //Field offset: 0x0
	[FieldOffset(Offset = "0x0")]
	[Token(Token = "0x400089C")]
	private Vector2 p1; //Field offset: 0x0
	[FieldOffset(Offset = "0x8")]
	[Token(Token = "0x400089D")]
	private Vector2 p2; //Field offset: 0x8

	[Token(Token = "0x1700013F")]
	public Vector2 P1
	{
		[Address(RVA = "0x12D8940", Offset = "0x12D8940", Length = "0x8")]
		[Token(Token = "0x6000759")]
		 get { } //Length: 8
		[Address(RVA = "0x12D8948", Offset = "0x12D8948", Length = "0x8")]
		[Token(Token = "0x600075A")]
		 set { } //Length: 8
	}

	[Token(Token = "0x17000140")]
	public Vector2 P2
	{
		[Address(RVA = "0x12D8950", Offset = "0x12D8950", Length = "0x8")]
		[Token(Token = "0x600075B")]
		 get { } //Length: 8
		[Address(RVA = "0x12D8958", Offset = "0x12D8958", Length = "0x8")]
		[Token(Token = "0x600075C")]
		 set { } //Length: 8
	}

	[Token(Token = "0x17000141")]
	public float X1
	{
		[Address(RVA = "0x12D8960", Offset = "0x12D8960", Length = "0x8")]
		[Token(Token = "0x600075D")]
		 get { } //Length: 8
		[Address(RVA = "0x12D8968", Offset = "0x12D8968", Length = "0x8")]
		[Token(Token = "0x600075E")]
		 set { } //Length: 8
	}

	[Token(Token = "0x17000142")]
	public float X2
	{
		[Address(RVA = "0x12D8970", Offset = "0x12D8970", Length = "0x8")]
		[Token(Token = "0x600075F")]
		 get { } //Length: 8
		[Address(RVA = "0x12D8978", Offset = "0x12D8978", Length = "0x8")]
		[Token(Token = "0x6000760")]
		 set { } //Length: 8
	}

	[Token(Token = "0x17000143")]
	public float Y1
	{
		[Address(RVA = "0x12D8980", Offset = "0x12D8980", Length = "0x8")]
		[Token(Token = "0x6000761")]
		 get { } //Length: 8
		[Address(RVA = "0x12D8988", Offset = "0x12D8988", Length = "0x8")]
		[Token(Token = "0x6000762")]
		 set { } //Length: 8
	}

	[Token(Token = "0x17000144")]
	public float Y2
	{
		[Address(RVA = "0x12D8990", Offset = "0x12D8990", Length = "0x8")]
		[Token(Token = "0x6000763")]
		 get { } //Length: 8
		[Address(RVA = "0x12D8998", Offset = "0x12D8998", Length = "0x8")]
		[Token(Token = "0x6000764")]
		 set { } //Length: 8
	}

	[Address(RVA = "0x12D8934", Offset = "0x12D8934", Length = "0xC")]
	[Token(Token = "0x6000758")]
	public Line(Vector2 p1, Vector2 p2) { }

	[Address(RVA = "0x12D8940", Offset = "0x12D8940", Length = "0x8")]
	[Token(Token = "0x6000759")]
	public Vector2 get_P1() { }

	[Address(RVA = "0x12D8950", Offset = "0x12D8950", Length = "0x8")]
	[Token(Token = "0x600075B")]
	public Vector2 get_P2() { }

	[Address(RVA = "0x12D8960", Offset = "0x12D8960", Length = "0x8")]
	[Token(Token = "0x600075D")]
	public float get_X1() { }

	[Address(RVA = "0x12D8970", Offset = "0x12D8970", Length = "0x8")]
	[Token(Token = "0x600075F")]
	public float get_X2() { }

	[Address(RVA = "0x12D8980", Offset = "0x12D8980", Length = "0x8")]
	[Token(Token = "0x6000761")]
	public float get_Y1() { }

	[Address(RVA = "0x12D8990", Offset = "0x12D8990", Length = "0x8")]
	[Token(Token = "0x6000763")]
	public float get_Y2() { }

	[Address(RVA = "0x12D8948", Offset = "0x12D8948", Length = "0x8")]
	[Token(Token = "0x600075A")]
	public void set_P1(Vector2 value) { }

	[Address(RVA = "0x12D8958", Offset = "0x12D8958", Length = "0x8")]
	[Token(Token = "0x600075C")]
	public void set_P2(Vector2 value) { }

	[Address(RVA = "0x12D8968", Offset = "0x12D8968", Length = "0x8")]
	[Token(Token = "0x600075E")]
	public void set_X1(float value) { }

	[Address(RVA = "0x12D8978", Offset = "0x12D8978", Length = "0x8")]
	[Token(Token = "0x6000760")]
	public void set_X2(float value) { }

	[Address(RVA = "0x12D8988", Offset = "0x12D8988", Length = "0x8")]
	[Token(Token = "0x6000762")]
	public void set_Y1(float value) { }

	[Address(RVA = "0x12D8998", Offset = "0x12D8998", Length = "0x8")]
	[Token(Token = "0x6000764")]
	public void set_Y2(float value) { }

}

