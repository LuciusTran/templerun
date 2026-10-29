namespace Imangi.Privacy;

[Token(Token = "0x2000256")]
public class ImangiPrivacyRegulationInfo : IParsableJSONListElement
{
	[Token(Token = "0x400124F")]
	protected static readonly string _ImangiPrivacyRegulationKey; //Field offset: 0x0
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x4001250")]
	public ImangiRegulationType Type; //Field offset: 0x10
	[FieldOffset(Offset = "0x14")]
	[Token(Token = "0x4001251")]
	public bool InformReconsentEnabled; //Field offset: 0x14

	[Address(RVA = "0x124A22C", Offset = "0x124A22C", Length = "0x60")]
	[Token(Token = "0x6001091")]
	private static ImangiPrivacyRegulationInfo() { }

	[Address(RVA = "0x1249FB0", Offset = "0x1249FB0", Length = "0x10")]
	[Token(Token = "0x600108C")]
	public ImangiPrivacyRegulationInfo() { }

	[Address(RVA = "0x1249FC0", Offset = "0x1249FC0", Length = "0x30")]
	[Token(Token = "0x600108D")]
	public ImangiPrivacyRegulationInfo(ImangiRegulationType inRegulationType = -1) { }

	[Address(RVA = "0x1249FF0", Offset = "0x1249FF0", Length = "0x34")]
	[Token(Token = "0x600108E")]
	public ImangiPrivacyRegulationInfo(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x124A024", Offset = "0x124A024", Length = "0x100")]
	[Token(Token = "0x6001090")]
	public override bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x124A124", Offset = "0x124A124", Length = "0x108")]
	[Token(Token = "0x600108F")]
	public override Dictionary<String, Object> ToDict() { }

}

