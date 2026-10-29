//Type is in global namespace

[Token(Token = "0x20000DF")]
public class ReactivationRewardData : IParsableJSONListElement
{
	[Token(Token = "0x4000798")]
	private const string _RewardAfterDaysKey = "RADK"; //Field offset: 0x0
	[Token(Token = "0x4000799")]
	private const string _RewardTypesKey = "RTK"; //Field offset: 0x0
	[Token(Token = "0x400079A")]
	private const string _RewardCoinsAmountKey = "RCAK"; //Field offset: 0x0
	[Token(Token = "0x400079B")]
	private const string _MessageKey = "MK"; //Field offset: 0x0
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x400079C")]
	public int rewardAfterDays; //Field offset: 0x10
	[FieldOffset(Offset = "0x14")]
	[Token(Token = "0x400079D")]
	public RewardTypes rewardType; //Field offset: 0x14
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x400079E")]
	public int rewardCoinsAmount; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x400079F")]
	public string message; //Field offset: 0x20

	[Address(RVA = "0x12CF8B4", Offset = "0x12CF8B4", Length = "0x50")]
	[Token(Token = "0x60006C4")]
	public ReactivationRewardData() { }

	[Address(RVA = "0x12CF65C", Offset = "0x12CF65C", Length = "0x104")]
	[Token(Token = "0x60006C2")]
	public override bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12CF760", Offset = "0x12CF760", Length = "0x154")]
	[Token(Token = "0x60006C3")]
	public override Dictionary<String, Object> ToDict() { }

}

