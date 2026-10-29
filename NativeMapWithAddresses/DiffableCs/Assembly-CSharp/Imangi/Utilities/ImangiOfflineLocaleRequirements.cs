namespace Imangi.Utilities;

[Token(Token = "0x2000231")]
public class ImangiOfflineLocaleRequirements : IImangiRequirements, IParsableJSONListElement
{
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x4001136")]
	public List<ImangiPrivacyOfflineLocaleInfo> Locales; //Field offset: 0x10

	[Address(RVA = "0x123E008", Offset = "0x123E008", Length = "0x7C")]
	[Token(Token = "0x6000F91")]
	public ImangiOfflineLocaleRequirements() { }

	[Address(RVA = "0x123E084", Offset = "0x123E084", Length = "0x8C")]
	[Token(Token = "0x6000F92")]
	public ImangiOfflineLocaleRequirements(string inJSONString) { }

	[Address(RVA = "0x123E110", Offset = "0x123E110", Length = "0x70")]
	[Token(Token = "0x6000F93")]
	public override void Clear() { }

	[Address(RVA = "0x123E264", Offset = "0x123E264", Length = "0xD8")]
	[Token(Token = "0x6000F95")]
	public override bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x123E33C", Offset = "0x123E33C", Length = "0x40")]
	[Token(Token = "0x6000F96")]
	public override string GetDescription() { }

	[Address(RVA = "0x123E37C", Offset = "0x123E37C", Length = "0x50")]
	[Token(Token = "0x6000F97")]
	public bool IsDefault() { }

	[Address(RVA = "0x123E180", Offset = "0x123E180", Length = "0xE4")]
	[Token(Token = "0x6000F94")]
	public override Dictionary<String, Object> ToDict() { }

}

