namespace Imangi.Ad;

[Token(Token = "0x20002A7")]
public class ImangiAdDebug : IParsableJSONListElement
{

	[Address(RVA = "0x127DD30", Offset = "0x127DD30", Length = "0x8")]
	[Token(Token = "0x60014A3")]
	public ImangiAdDebug() { }

	[Address(RVA = "0x127DD28", Offset = "0x127DD28", Length = "0x8")]
	[Token(Token = "0x60014A2")]
	public override bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x127BE58", Offset = "0x127BE58", Length = "0x4")]
	[Token(Token = "0x60014A0")]
	public static void OverrideAdSettings() { }

	[Address(RVA = "0x127DCC0", Offset = "0x127DCC0", Length = "0x68")]
	[Token(Token = "0x60014A1")]
	public override Dictionary<String, Object> ToDict() { }

}

