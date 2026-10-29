namespace Imangi.Utilities;

[Token(Token = "0x2000230")]
public class ImangiLocaleRequirements : IImangiRequirements, IParsableJSONListElement
{
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x4001134")]
	public List<ImangiLocaleInfo> Locales; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x4001135")]
	public List<ImangiLocaleInfo> OmitLocales; //Field offset: 0x18

	[Address(RVA = "0x123DA0C", Offset = "0x123DA0C", Length = "0x94")]
	[Token(Token = "0x6000F89")]
	public ImangiLocaleRequirements() { }

	[Address(RVA = "0x123DAA0", Offset = "0x123DAA0", Length = "0xA4")]
	[Token(Token = "0x6000F8A")]
	public ImangiLocaleRequirements(string inJSONString) { }

	[Address(RVA = "0x123DB44", Offset = "0x123DB44", Length = "0x9C")]
	[Token(Token = "0x6000F8B")]
	public override void Clear() { }

	[Address(RVA = "0x123DCEC", Offset = "0x123DCEC", Length = "0x138")]
	[Token(Token = "0x6000F8D")]
	public override bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x123DE24", Offset = "0x123DE24", Length = "0x40")]
	[Token(Token = "0x6000F8E")]
	public override string GetDescription() { }

	[Address(RVA = "0x123DFA0", Offset = "0x123DFA0", Length = "0x68")]
	[Token(Token = "0x6000F90")]
	public bool IsDefault() { }

	[Address(RVA = "0x123DE64", Offset = "0x123DE64", Length = "0x13C")]
	[Token(Token = "0x6000F8F")]
	public bool IsValid(ImangiLocaleInfo inCheckLocale, bool inStrict = false) { }

	[Address(RVA = "0x123DBE0", Offset = "0x123DBE0", Length = "0x10C")]
	[Token(Token = "0x6000F8C")]
	public override Dictionary<String, Object> ToDict() { }

}

