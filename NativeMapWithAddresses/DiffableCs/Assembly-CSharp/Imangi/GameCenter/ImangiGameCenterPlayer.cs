namespace Imangi.GameCenter;

[Token(Token = "0x2000275")]
public class ImangiGameCenterPlayer : IParsableJSONListElement
{
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x400131E")]
	public string PlayerID; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x400131F")]
	public bool IsFriend; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4001320")]
	public string DisplayName; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4001321")]
	public string Alias; //Field offset: 0x28

	[Address(RVA = "0x1265900", Offset = "0x1265900", Length = "0x8")]
	[Token(Token = "0x6001260")]
	private ImangiGameCenterPlayer() { }

	[Address(RVA = "0x125AF58", Offset = "0x125AF58", Length = "0x30")]
	[Token(Token = "0x6001261")]
	public ImangiGameCenterPlayer(string inJSONString) { }

	[Address(RVA = "0x1265908", Offset = "0x1265908", Length = "0x2C")]
	[Token(Token = "0x6001262")]
	public ImangiGameCenterPlayer(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x1265934", Offset = "0x1265934", Length = "0x120")]
	[Token(Token = "0x6001263")]
	public override bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x1265A54", Offset = "0x1265A54", Length = "0x168")]
	[Token(Token = "0x6001264")]
	public override Dictionary<String, Object> ToDict() { }

}

