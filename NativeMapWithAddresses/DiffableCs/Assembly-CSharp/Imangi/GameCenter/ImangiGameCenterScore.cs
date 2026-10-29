namespace Imangi.GameCenter;

[Token(Token = "0x2000276")]
public class ImangiGameCenterScore : IParsableJSONListElement
{
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x4001322")]
	public ulong Context; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x4001323")]
	public DateTime Date; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4001324")]
	public string FormattedValue; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4001325")]
	public string PlayerID; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4001326")]
	public ImangiGameCenterPlayer Player; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4001327")]
	public string DisplayName; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4001328")]
	public int Rank; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4001329")]
	public long Value; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x400132A")]
	public bool Shown; //Field offset: 0x50

	[Address(RVA = "0x1265BBC", Offset = "0x1265BBC", Length = "0x8")]
	[Token(Token = "0x6001265")]
	public ImangiGameCenterScore() { }

	[Address(RVA = "0x125AF88", Offset = "0x125AF88", Length = "0x30")]
	[Token(Token = "0x6001266")]
	public ImangiGameCenterScore(string inJSONString) { }

	[Address(RVA = "0x1265BC4", Offset = "0x1265BC4", Length = "0x22C")]
	[Token(Token = "0x6001267")]
	public override bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x1265DF0", Offset = "0x1265DF0", Length = "0x2A8")]
	[Token(Token = "0x6001268")]
	public override Dictionary<String, Object> ToDict() { }

}

