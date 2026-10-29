namespace Imangi.GameCenter;

[Token(Token = "0x2000270")]
public class ImangiGameCenterChallenge : IParsableJSONListElement
{
	[Token(Token = "0x2000271")]
	internal enum ChallengeState
	{
		Invalid = 0,
		Pending = 1,
		Completed = 2,
		Declined = 3,
	}

	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x40012DF")]
	public DateTime IssueDate; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x40012E0")]
	public string IssuingPlayerID; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40012E1")]
	public string ReceivingPlayerID; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40012E2")]
	public ImangiGameCenterPlayer IssuingPlayer; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40012E3")]
	public ImangiGameCenterPlayer ReceivingPlayer; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x40012E4")]
	public string Message; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x40012E5")]
	public ChallengeState State; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x40012E6")]
	public DateTime CompletionDate; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x40012E7")]
	public ImangiGameCenterScore Score; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x40012E8")]
	public ImangiGameCenterAchievement Achievement; //Field offset: 0x58

	[Address(RVA = "0x125AB14", Offset = "0x125AB14", Length = "0x8")]
	[Token(Token = "0x60011AB")]
	private ImangiGameCenterChallenge() { }

	[Address(RVA = "0x125AB1C", Offset = "0x125AB1C", Length = "0x30")]
	[Token(Token = "0x60011AC")]
	public ImangiGameCenterChallenge(string inJSONString) { }

	[Address(RVA = "0x125AB4C", Offset = "0x125AB4C", Length = "0x408")]
	[Token(Token = "0x60011AD")]
	public override bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x125AFB8", Offset = "0x125AFB8", Length = "0x374")]
	[Token(Token = "0x60011AE")]
	public override Dictionary<String, Object> ToDict() { }

}

