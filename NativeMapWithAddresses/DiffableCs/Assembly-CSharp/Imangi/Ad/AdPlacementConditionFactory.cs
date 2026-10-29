namespace Imangi.Ad;

[Token(Token = "0x200028D")]
public static class AdPlacementConditionFactory
{

	[Address(RVA = "0x127015C", Offset = "0x127015C", Length = "0x14")]
	[Token(Token = "0x6001373")]
	public static AdPlacementCondition Create(string inJson) { }

	[Address(RVA = "0x1270170", Offset = "0x1270170", Length = "0x100")]
	[Token(Token = "0x6001374")]
	public static AdPlacementCondition Create(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x1270270", Offset = "0x1270270", Length = "0x118")]
	[Token(Token = "0x6001375")]
	public static AdPlacementCondition Create(AdPlacementConditionType inType) { }

}

