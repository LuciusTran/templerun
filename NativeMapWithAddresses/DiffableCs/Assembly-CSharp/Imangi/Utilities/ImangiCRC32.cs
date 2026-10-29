namespace Imangi.Utilities;

[Token(Token = "0x20001E6")]
public class ImangiCRC32
{
	[Token(Token = "0x4001057")]
	private static readonly UInt32[] _CrcTable; //Field offset: 0x0

	[Address(RVA = "0x12246C8", Offset = "0x12246C8", Length = "0x94")]
	[Token(Token = "0x6000D96")]
	private static ImangiCRC32() { }

	[Address(RVA = "0x12246C0", Offset = "0x12246C0", Length = "0x8")]
	[Token(Token = "0x6000D95")]
	public ImangiCRC32() { }

	[Address(RVA = "0x12245DC", Offset = "0x12245DC", Length = "0xE4")]
	[Token(Token = "0x6000D94")]
	public static uint Calculate(Byte[] inBuffer) { }

}

