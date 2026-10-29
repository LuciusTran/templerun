//Type is in global namespace

[Token(Token = "0x20000EB")]
public class DeepLinkingRewardsUrlPair_ConfigData : ConfigData
{
	[Token(Token = "0x4000800")]
	public const string DeepLinkingRewardsUrlPairKeyWord = "DeepLinkingRewardsUrlPair"; //Field offset: 0x0
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000801")]
	private int _Index; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000802")]
	public string Parameter; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000803")]
	public List<RewardData_ConfigData> Rewards; //Field offset: 0x38

	[Token(Token = "0x17000135")]
	public virtual int ErrorCode
	{
		[Address(RVA = "0x12D45D0", Offset = "0x12D45D0", Length = "0x8")]
		[Token(Token = "0x6000706")]
		 get { } //Length: 8
	}

	[Token(Token = "0x17000132")]
	public virtual int Index
	{
		[Address(RVA = "0x12D457C", Offset = "0x12D457C", Length = "0x8")]
		[Token(Token = "0x6000703")]
		 get { } //Length: 8
	}

	[Token(Token = "0x17000133")]
	public virtual string Keyword
	{
		[Address(RVA = "0x12D4584", Offset = "0x12D4584", Length = "0x40")]
		[Token(Token = "0x6000704")]
		 get { } //Length: 64
	}

	[Token(Token = "0x17000134")]
	public virtual string RemoteConfigKey
	{
		[Address(RVA = "0x12D45C4", Offset = "0x12D45C4", Length = "0xC")]
		[Token(Token = "0x6000705")]
		 get { } //Length: 12
	}

	[Address(RVA = "0x12D484C", Offset = "0x12D484C", Length = "0xA0")]
	[Token(Token = "0x600070A")]
	public DeepLinkingRewardsUrlPair_ConfigData() { }

	[Address(RVA = "0x12D45D8", Offset = "0x12D45D8", Length = "0x44")]
	[Token(Token = "0x6000707")]
	protected virtual bool Deserialize_Internal(String[] inWords) { }

	[Address(RVA = "0x12D4758", Offset = "0x12D4758", Length = "0xF4")]
	[Token(Token = "0x6000709")]
	public virtual bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12D45D0", Offset = "0x12D45D0", Length = "0x8")]
	[Token(Token = "0x6000706")]
	public virtual int get_ErrorCode() { }

	[Address(RVA = "0x12D457C", Offset = "0x12D457C", Length = "0x8")]
	[Token(Token = "0x6000703")]
	public virtual int get_Index() { }

	[Address(RVA = "0x12D4584", Offset = "0x12D4584", Length = "0x40")]
	[Token(Token = "0x6000704")]
	public virtual string get_Keyword() { }

	[Address(RVA = "0x12D45C4", Offset = "0x12D45C4", Length = "0xC")]
	[Token(Token = "0x6000705")]
	public virtual string get_RemoteConfigKey() { }

	[Address(RVA = "0x12D461C", Offset = "0x12D461C", Length = "0x13C")]
	[Token(Token = "0x6000708")]
	public virtual Dictionary<String, Object> ToDict() { }

}

