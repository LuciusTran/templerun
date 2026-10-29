//Type is in global namespace

[Token(Token = "0x20000E0")]
public class ReactivationLocalNotificationsConfigData : ConfigData
{
	[Token(Token = "0x40007A0")]
	public const string LocalNotificationKeyWord = "RLN"; //Field offset: 0x0
	[Token(Token = "0x40007A1")]
	public const string _ReactivationNotificationRewardsKey = "RRK"; //Field offset: 0x0
	[Token(Token = "0x40007A3")]
	public static int amountOfRewards; //Field offset: 0x0
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40007A2")]
	private int _Index; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40007A4")]
	public RewardTypes[] rewardTypes; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x40007A5")]
	public Int32[] rewardAfterDays; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x40007A6")]
	public Int32[] rewardCoinsAmounts; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x40007A7")]
	public String[] messages; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x40007A8")]
	public List<ReactivationRewardData> rewardsList; //Field offset: 0x50

	[Token(Token = "0x17000125")]
	public int AmountOfRewards
	{
		[Address(RVA = "0x12CF94C", Offset = "0x12CF94C", Length = "0x58")]
		[Token(Token = "0x60006C7")]
		 get { } //Length: 88
	}

	[Token(Token = "0x17000127")]
	public virtual int ErrorCode
	{
		[Address(RVA = "0x12CF9B0", Offset = "0x12CF9B0", Length = "0x8")]
		[Token(Token = "0x60006C9")]
		 get { } //Length: 8
	}

	[Token(Token = "0x17000123")]
	public virtual int Index
	{
		[Address(RVA = "0x12CF904", Offset = "0x12CF904", Length = "0x8")]
		[Token(Token = "0x60006C5")]
		 get { } //Length: 8
	}

	[Token(Token = "0x17000124")]
	public virtual string Keyword
	{
		[Address(RVA = "0x12CF90C", Offset = "0x12CF90C", Length = "0x40")]
		[Token(Token = "0x60006C6")]
		 get { } //Length: 64
	}

	[Token(Token = "0x17000126")]
	public virtual string RemoteConfigKey
	{
		[Address(RVA = "0x12CF9A4", Offset = "0x12CF9A4", Length = "0xC")]
		[Token(Token = "0x60006C8")]
		 get { } //Length: 12
	}

	[Address(RVA = "0x12D0088", Offset = "0x12D0088", Length = "0x4C")]
	[Token(Token = "0x60006CF")]
	private static ReactivationLocalNotificationsConfigData() { }

	[Address(RVA = "0x12CFF3C", Offset = "0x12CFF3C", Length = "0x14C")]
	[Token(Token = "0x60006CE")]
	public ReactivationLocalNotificationsConfigData() { }

	[Address(RVA = "0x12CF9B8", Offset = "0x12CF9B8", Length = "0x44")]
	[Token(Token = "0x60006CA")]
	protected virtual bool Deserialize_Internal(String[] inWords) { }

	[Address(RVA = "0x12CFC90", Offset = "0x12CFC90", Length = "0x2AC")]
	[Token(Token = "0x60006CD")]
	public virtual bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12CF94C", Offset = "0x12CF94C", Length = "0x58")]
	[Token(Token = "0x60006C7")]
	public int get_AmountOfRewards() { }

	[Address(RVA = "0x12CF9B0", Offset = "0x12CF9B0", Length = "0x8")]
	[Token(Token = "0x60006C9")]
	public virtual int get_ErrorCode() { }

	[Address(RVA = "0x12CF904", Offset = "0x12CF904", Length = "0x8")]
	[Token(Token = "0x60006C5")]
	public virtual int get_Index() { }

	[Address(RVA = "0x12CF90C", Offset = "0x12CF90C", Length = "0x40")]
	[Token(Token = "0x60006C6")]
	public virtual string get_Keyword() { }

	[Address(RVA = "0x12CF9A4", Offset = "0x12CF9A4", Length = "0xC")]
	[Token(Token = "0x60006C8")]
	public virtual string get_RemoteConfigKey() { }

	[Address(RVA = "0x12CF9FC", Offset = "0x12CF9FC", Length = "0x8")]
	[Token(Token = "0x60006CB")]
	public void SetIndex(int inIndex) { }

	[Address(RVA = "0x12CFA04", Offset = "0x12CFA04", Length = "0x28C")]
	[Token(Token = "0x60006CC")]
	public virtual Dictionary<String, Object> ToDict() { }

}

