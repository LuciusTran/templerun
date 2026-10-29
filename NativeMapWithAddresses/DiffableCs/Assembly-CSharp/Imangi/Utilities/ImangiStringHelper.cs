namespace Imangi.Utilities;

[Token(Token = "0x2000212")]
public class ImangiStringHelper
{

	[Address(RVA = "0x12384E0", Offset = "0x12384E0", Length = "0x8")]
	[Token(Token = "0x6000F0F")]
	public ImangiStringHelper() { }

	[Address(RVA = "0x123824C", Offset = "0x123824C", Length = "0x10C")]
	[Token(Token = "0x6000F0D")]
	public static string GetOrdinalSuffix(int inValue) { }

	[Address(RVA = "0x12381F0", Offset = "0x12381F0", Length = "0x5C")]
	[Token(Token = "0x6000F0C")]
	public static int NumberOfCharInString(string inString, char inCharacter) { }

	[Address(RVA = "0x1238358", Offset = "0x1238358", Length = "0x188")]
	[Token(Token = "0x6000F0E")]
	public static Vector3 StringToVector3(string inString) { }

}

