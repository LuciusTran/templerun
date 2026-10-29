namespace Imangi.Utilities;

[Token(Token = "0x2000219")]
public struct GETParameter
{
	[FieldOffset(Offset = "0x0")]
	[Token(Token = "0x40010DB")]
	public string Name; //Field offset: 0x0
	[FieldOffset(Offset = "0x8")]
	[Token(Token = "0x40010DC")]
	public string DisplayName; //Field offset: 0x8

	[Address(RVA = "0x12397BC", Offset = "0x12397BC", Length = "0x8")]
	[Token(Token = "0x6000F37")]
	public GETParameter(string inName, string inDisplayName) { }

	[Address(RVA = "0x12397C4", Offset = "0x12397C4", Length = "0x4C")]
	[Token(Token = "0x6000F38")]
	public string BuildFullDisplayName() { }

}

