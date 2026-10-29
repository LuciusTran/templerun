//Type is in global namespace

[Token(Token = "0x2000044")]
public class BMSymbol
{
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x40001A8")]
	public string sequence; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x40001A9")]
	public int x; //Field offset: 0x18
	[FieldOffset(Offset = "0x1C")]
	[Token(Token = "0x40001AA")]
	public int y; //Field offset: 0x1C
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40001AB")]
	public int width; //Field offset: 0x20
	[FieldOffset(Offset = "0x24")]
	[Token(Token = "0x40001AC")]
	public int height; //Field offset: 0x24
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40001AD")]
	private int mLength; //Field offset: 0x28

	[Token(Token = "0x17000025")]
	public int length
	{
		[Address(RVA = "0x11FE4A0", Offset = "0x11FE4A0", Length = "0x2C")]
		[Token(Token = "0x6000176")]
		 get { } //Length: 44
	}

	[Address(RVA = "0x11FE348", Offset = "0x11FE348", Length = "0x8")]
	[Token(Token = "0x6000177")]
	public BMSymbol() { }

	[Address(RVA = "0x11FE4A0", Offset = "0x11FE4A0", Length = "0x2C")]
	[Token(Token = "0x6000176")]
	public int get_length() { }

}

