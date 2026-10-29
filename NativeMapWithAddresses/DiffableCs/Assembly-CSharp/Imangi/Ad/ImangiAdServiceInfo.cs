namespace Imangi.Ad;

[Token(Token = "0x20002B5")]
public class ImangiAdServiceInfo : IParsableJSONListElement
{
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x4001438")]
	public AdService ActiveService; //Field offset: 0x10

	[Address(RVA = "0x1285538", Offset = "0x1285538", Length = "0x10")]
	[Token(Token = "0x6001560")]
	public ImangiAdServiceInfo() { }

	[Address(RVA = "0x1285548", Offset = "0x1285548", Length = "0x38")]
	[Token(Token = "0x6001561")]
	public ImangiAdServiceInfo(string inJSONString) { }

	[Address(RVA = "0x128566C", Offset = "0x128566C", Length = "0xA4")]
	[Token(Token = "0x6001563")]
	public override bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x1285580", Offset = "0x1285580", Length = "0xEC")]
	[Token(Token = "0x6001562")]
	public override Dictionary<String, Object> ToDict() { }

}

