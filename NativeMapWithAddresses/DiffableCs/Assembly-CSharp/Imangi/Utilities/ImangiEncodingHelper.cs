namespace Imangi.Utilities;

[Token(Token = "0x20001ED")]
public class ImangiEncodingHelper
{

	[Address(RVA = "0x122E200", Offset = "0x122E200", Length = "0x8")]
	[Token(Token = "0x6000E18")]
	public ImangiEncodingHelper() { }

	[Address(RVA = "0x122DD94", Offset = "0x122DD94", Length = "0xF4")]
	[Token(Token = "0x6000E16")]
	public static bool ConvertByteArrayToStringWithUtf8Encoder(Byte[] byteDataToConvert, ref string refString) { }

	[Address(RVA = "0x122DE88", Offset = "0x122DE88", Length = "0x378")]
	[Token(Token = "0x6000E17")]
	public static int ConvertHexStringToInt(string inValueString, int inDigitCount = 6) { }

	[Address(RVA = "0x122DCA0", Offset = "0x122DCA0", Length = "0xF4")]
	[Token(Token = "0x6000E15")]
	public static bool ConvertStringToByteArrayWithUtf8Encoder(string stringToConvert, ref Byte[] refByteData) { }

}

