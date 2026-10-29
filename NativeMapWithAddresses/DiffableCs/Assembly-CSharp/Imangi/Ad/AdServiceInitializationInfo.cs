namespace Imangi.Ad;

[Token(Token = "0x20002A8")]
public class AdServiceInitializationInfo : IParsableJSONListElement
{
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x40013F4")]
	public AdService Service; //Field offset: 0x10
	[FieldOffset(Offset = "0x14")]
	[Token(Token = "0x40013F5")]
	public bool PrefetchVideo; //Field offset: 0x14
	[FieldOffset(Offset = "0x15")]
	[Token(Token = "0x40013F6")]
	public bool PrefetchCard; //Field offset: 0x15
	[FieldOffset(Offset = "0x16")]
	[Token(Token = "0x40013F7")]
	public bool PrefetchBanner; //Field offset: 0x16
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x40013F8")]
	public Dictionary<String, String> InitializationInfo; //Field offset: 0x18

	[Address(RVA = "0x127DD38", Offset = "0x127DD38", Length = "0x84")]
	[Token(Token = "0x60014A4")]
	public AdServiceInitializationInfo() { }

	[Address(RVA = "0x127DDBC", Offset = "0x127DDBC", Length = "0x94")]
	[Token(Token = "0x60014A5")]
	public AdServiceInitializationInfo(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x127E314", Offset = "0x127E314", Length = "0x2E8")]
	[Token(Token = "0x60014A9")]
	public void Dump(string inIndentString, StringBuilder inDumpSB) { }

	[Address(RVA = "0x127DE50", Offset = "0x127DE50", Length = "0x1A4")]
	[Token(Token = "0x60014A7")]
	public override bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x127E1BC", Offset = "0x127E1BC", Length = "0x70")]
	[Token(Token = "0x60014A8")]
	public static AdServiceInitializationInfo GetDefaultInitializationInfoForService(AdService inService) { }

	[Address(RVA = "0x127DFF4", Offset = "0x127DFF4", Length = "0x1C8")]
	[Token(Token = "0x60014A6")]
	public override Dictionary<String, Object> ToDict() { }

}

