//Type is in global namespace

[Token(Token = "0x20000ED")]
public class DeepLinkingRewards_ConfigData : ConfigData
{
	[Token(Token = "0x4000806")]
	public const string DeepLinkingRewardKeyWord = "DeepLinkingRewards"; //Field offset: 0x0
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000807")]
	private int _Index; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000808")]
	public List<DeepLinkingRewardsUrlPair_ConfigData> RewardUrlPairList; //Field offset: 0x30

	[Token(Token = "0x17000138")]
	public virtual int ErrorCode
	{
		[Address(RVA = "0x12D5354", Offset = "0x12D5354", Length = "0x8")]
		[Token(Token = "0x6000715")]
		 get { } //Length: 8
	}

	[Token(Token = "0x17000136")]
	public virtual int Index
	{
		[Address(RVA = "0x12D530C", Offset = "0x12D530C", Length = "0x8")]
		[Token(Token = "0x6000713")]
		 get { } //Length: 8
	}

	[Token(Token = "0x17000137")]
	public virtual string Keyword
	{
		[Address(RVA = "0x12D5314", Offset = "0x12D5314", Length = "0x40")]
		[Token(Token = "0x6000714")]
		 get { } //Length: 64
	}

	[Address(RVA = "0x12D5288", Offset = "0x12D5288", Length = "0x84")]
	[Token(Token = "0x6000718")]
	public DeepLinkingRewards_ConfigData() { }

	[Address(RVA = "0x12D5440", Offset = "0x12D5440", Length = "0xA4")]
	[Token(Token = "0x6000717")]
	public virtual bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12D5354", Offset = "0x12D5354", Length = "0x8")]
	[Token(Token = "0x6000715")]
	public virtual int get_ErrorCode() { }

	[Address(RVA = "0x12D530C", Offset = "0x12D530C", Length = "0x8")]
	[Token(Token = "0x6000713")]
	public virtual int get_Index() { }

	[Address(RVA = "0x12D5314", Offset = "0x12D5314", Length = "0x40")]
	[Token(Token = "0x6000714")]
	public virtual string get_Keyword() { }

	[Address(RVA = "0x12D535C", Offset = "0x12D535C", Length = "0xE4")]
	[Token(Token = "0x6000716")]
	public virtual Dictionary<String, Object> ToDict() { }

}

