namespace Imangi.Ad;

[Token(Token = "0x20002A9")]
public class AdPlatformInitializationInfo : IParsableJSONListElement
{
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x40013F9")]
	public AdServicePlatform ServicePlatform; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x40013FA")]
	public List<AdServiceInitializationInfo> ServiceInitInfo; //Field offset: 0x18

	[Address(RVA = "0x127E5FC", Offset = "0x127E5FC", Length = "0x2E8")]
	[Token(Token = "0x60014AA")]
	public AdPlatformInitializationInfo(AdServicePlatform inServicePlatform) { }

	[Address(RVA = "0x127E8E4", Offset = "0x127E8E4", Length = "0x8C")]
	[Token(Token = "0x60014AB")]
	public AdPlatformInitializationInfo(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x127F518", Offset = "0x127F518", Length = "0x298")]
	[Token(Token = "0x60014AE")]
	public void Dump(string inIndentString, StringBuilder inDumpSB) { }

	[Address(RVA = "0x127E970", Offset = "0x127E970", Length = "0x678")]
	[Token(Token = "0x60014AD")]
	public override bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x127EFE8", Offset = "0x127EFE8", Length = "0x530")]
	[Token(Token = "0x60014AC")]
	public override Dictionary<String, Object> ToDict() { }

}

