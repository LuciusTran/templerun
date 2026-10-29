//Type is in global namespace

[Token(Token = "0x2000042")]
public class BMGlyph
{
	[Token(Token = "0x2000043")]
	internal struct Kerning
	{
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x40001A6")]
		public int previousChar; //Field offset: 0x0
		[FieldOffset(Offset = "0x4")]
		[Token(Token = "0x40001A7")]
		public int amount; //Field offset: 0x4

	}

	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x400019C")]
	public int index; //Field offset: 0x10
	[FieldOffset(Offset = "0x14")]
	[Token(Token = "0x400019D")]
	public int x; //Field offset: 0x14
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x400019E")]
	public int y; //Field offset: 0x18
	[FieldOffset(Offset = "0x1C")]
	[Token(Token = "0x400019F")]
	public int width; //Field offset: 0x1C
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40001A0")]
	public int height; //Field offset: 0x20
	[FieldOffset(Offset = "0x24")]
	[Token(Token = "0x40001A1")]
	public int offsetX; //Field offset: 0x24
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40001A2")]
	public int offsetY; //Field offset: 0x28
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x40001A3")]
	public int advance; //Field offset: 0x2C
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40001A4")]
	public int channel; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x40001A5")]
	public List<Kerning> kerning; //Field offset: 0x38

	[Address(RVA = "0x11FE1CC", Offset = "0x11FE1CC", Length = "0x8")]
	[Token(Token = "0x6000175")]
	public BMGlyph() { }

	[Address(RVA = "0x11FE7D0", Offset = "0x11FE7D0", Length = "0xA8")]
	[Token(Token = "0x6000172")]
	public int GetKerning(int previousChar) { }

	[Address(RVA = "0x11FE878", Offset = "0x11FE878", Length = "0x1B4")]
	[Token(Token = "0x6000173")]
	public void SetKerning(int previousChar, int amount) { }

	[Address(RVA = "0x11FE638", Offset = "0x11FE638", Length = "0x8C")]
	[Token(Token = "0x6000174")]
	public void Trim(int xMin, int yMin, int xMax, int yMax) { }

}

