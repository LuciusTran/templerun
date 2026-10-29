//Type is in global namespace

[Token(Token = "0x2000045")]
public class ByteReader
{
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x40001AE")]
	private Byte[] mBuffer; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x40001AF")]
	private int mOffset; //Field offset: 0x18

	[Token(Token = "0x17000026")]
	public bool canRead
	{
		[Address(RVA = "0x11FEA90", Offset = "0x11FEA90", Length = "0x24")]
		[Token(Token = "0x600017A")]
		 get { } //Length: 36
	}

	[Address(RVA = "0x11FEA2C", Offset = "0x11FEA2C", Length = "0x28")]
	[Token(Token = "0x6000178")]
	public ByteReader(Byte[] bytes) { }

	[Address(RVA = "0x11FEA54", Offset = "0x11FEA54", Length = "0x3C")]
	[Token(Token = "0x6000179")]
	public ByteReader(TextAsset asset) { }

	[Address(RVA = "0x11FEA90", Offset = "0x11FEA90", Length = "0x24")]
	[Token(Token = "0x600017A")]
	public bool get_canRead() { }

	[Address(RVA = "0x11FEBB8", Offset = "0x11FEBB8", Length = "0x16C")]
	[Token(Token = "0x600017D")]
	public Dictionary<String, String> ReadDictionary() { }

	[Address(RVA = "0x11FEAB4", Offset = "0x11FEAB4", Length = "0x48")]
	[Token(Token = "0x600017B")]
	private static string ReadLine(Byte[] buffer, int start, int count) { }

	[Address(RVA = "0x11FEAFC", Offset = "0x11FEAFC", Length = "0xBC")]
	[Token(Token = "0x600017C")]
	public string ReadLine() { }

}

