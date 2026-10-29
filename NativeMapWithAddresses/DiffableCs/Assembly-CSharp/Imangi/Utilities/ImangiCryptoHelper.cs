namespace Imangi.Utilities;

[Token(Token = "0x20001E7")]
public class ImangiCryptoHelper
{
	[Token(Token = "0x20001E8")]
	internal enum AESSize
	{
		AES128 = 128,
		AES256 = 256,
	}

	[Token(Token = "0x4001058")]
	public static readonly string LogChannel; //Field offset: 0x0
	[Token(Token = "0x4001059")]
	private static readonly int _IVBase64Length128Bit; //Field offset: 0x8
	[Token(Token = "0x400105A")]
	private static readonly int _IVBase64Length256Bit; //Field offset: 0xC

	[Address(RVA = "0x1225E58", Offset = "0x1225E58", Length = "0x74")]
	[Token(Token = "0x6000D9E")]
	private static ImangiCryptoHelper() { }

	[Address(RVA = "0x1225E50", Offset = "0x1225E50", Length = "0x8")]
	[Token(Token = "0x6000D9D")]
	public ImangiCryptoHelper() { }

	[Address(RVA = "0x1225A24", Offset = "0x1225A24", Length = "0x39C")]
	[Token(Token = "0x6000D9B")]
	public static string DecryptFile(string inFilename, string inPassword, AESSize inBlockSize = 128, AESSize inKeySize = 128) { }

	[Address(RVA = "0x1225DC0", Offset = "0x1225DC0", Length = "0x90")]
	[Token(Token = "0x6000D9C")]
	public static string DecryptFile(TextAsset inTextAsset, string inPassword, AESSize inBlockSize = 128, AESSize inKeySize = 128) { }

	[Address(RVA = "0x1225304", Offset = "0x1225304", Length = "0x720")]
	[Token(Token = "0x6000D9A")]
	public static string DecryptMessage(string inEncryptedMessage, string inPassword, AESSize inBlockSize = 128, AESSize inKeySize = 128) { }

	[Address(RVA = "0x1224FB0", Offset = "0x1224FB0", Length = "0x354")]
	[Token(Token = "0x6000D99")]
	public static string EncryptFile(string inFilename, string inMessage, string inPassword, AESSize inBlockSize = 128, AESSize inKeySize = 128) { }

	[Address(RVA = "0x1224854", Offset = "0x1224854", Length = "0x75C")]
	[Token(Token = "0x6000D98")]
	public static string EncryptMessage(string inMessage, string inPassword, AESSize inBlockSize = 128, AESSize inKeySize = 128) { }

	[Address(RVA = "0x122475C", Offset = "0x122475C", Length = "0xF8")]
	[Token(Token = "0x6000D97")]
	public static Byte[] PasswordToKey(string inPassword, AESSize inKeySize = 128) { }

}

