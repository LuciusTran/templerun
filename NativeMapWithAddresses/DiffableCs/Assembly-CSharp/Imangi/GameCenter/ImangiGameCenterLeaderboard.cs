namespace Imangi.GameCenter;

[Token(Token = "0x2000272")]
public class ImangiGameCenterLeaderboard : IParsableJSONListElement
{
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x40012EE")]
	public string LeaderboardID; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x40012EF")]
	public string LeaderboardTitle; //Field offset: 0x18

	[Address(RVA = "0x125B32C", Offset = "0x125B32C", Length = "0x8")]
	[Token(Token = "0x60011AF")]
	private ImangiGameCenterLeaderboard() { }

	[Address(RVA = "0x125B334", Offset = "0x125B334", Length = "0x30")]
	[Token(Token = "0x60011B0")]
	public ImangiGameCenterLeaderboard(string inJSONString) { }

	[Address(RVA = "0x125B364", Offset = "0x125B364", Length = "0xBC")]
	[Token(Token = "0x60011B1")]
	public override bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x125B420", Offset = "0x125B420", Length = "0xE0")]
	[Token(Token = "0x60011B2")]
	public override Dictionary<String, Object> ToDict() { }

}

