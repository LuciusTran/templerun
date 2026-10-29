//Type is in global namespace

[Token(Token = "0x20000E2")]
public class RewardedAdConfigData : ConfigData
{
	[Token(Token = "0x20000E3")]
	internal enum StoreItem
	{
		None = 0,
		Coins = 1,
		Wings = 2,
	}

	[Token(Token = "0x20000E4")]
	internal class StoreRewardPair
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x40007BD")]
		public int Meters; //Field offset: 0x10
		[FieldOffset(Offset = "0x14")]
		[Token(Token = "0x40007BE")]
		public int Coins; //Field offset: 0x14

		[Address(RVA = "0x12D0C48", Offset = "0x12D0C48", Length = "0x8")]
		[Token(Token = "0x60006DA")]
		public StoreRewardPair() { }

		[Address(RVA = "0x12D0844", Offset = "0x12D0844", Length = "0x2C")]
		[Token(Token = "0x60006DB")]
		public StoreRewardPair(int inMeters, int inCoins) { }

	}

	[Token(Token = "0x40007AA")]
	public const string PromoKeyword = "RewardedAd"; //Field offset: 0x0
	[Token(Token = "0x40007AB")]
	public const string MinDoubleAmountKey = "MiDA"; //Field offset: 0x0
	[Token(Token = "0x40007AC")]
	public const string MaxDoubleAmountKey = "MxDA"; //Field offset: 0x0
	[Token(Token = "0x40007AD")]
	public const string StoreItemTypeKey = "SIT"; //Field offset: 0x0
	[Token(Token = "0x40007AE")]
	public const string StoreItemCooldownKey = "SIC"; //Field offset: 0x0
	[Token(Token = "0x40007AF")]
	public const string CoinRewardPairs = "CRP"; //Field offset: 0x0
	[Token(Token = "0x40007B0")]
	public const int MinDoubleAmountDefault = 100; //Field offset: 0x0
	[Token(Token = "0x40007B1")]
	public const int MaxDoubleAmountDefault = 10000; //Field offset: 0x0
	[Token(Token = "0x40007B2")]
	public const StoreItem StoreItemTypeDefault = 0; //Field offset: 0x0
	[Token(Token = "0x40007B3")]
	public const int StoreItemCooldownDefault = 6; //Field offset: 0x0
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40007B4")]
	public int MinDoubleAmount; //Field offset: 0x28
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x40007B5")]
	public int MaxDoubleAmount; //Field offset: 0x2C
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40007B6")]
	public StoreItem StoreItemType; //Field offset: 0x30
	[FieldOffset(Offset = "0x34")]
	[Token(Token = "0x40007B7")]
	public int StoreItemCooldown; //Field offset: 0x34
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x40007B8")]
	public List<StoreRewardPair> StoreRewardList; //Field offset: 0x38

	[Token(Token = "0x1700012A")]
	public virtual int ErrorCode
	{
		[Address(RVA = "0x12D0504", Offset = "0x12D0504", Length = "0x8")]
		[Token(Token = "0x60006D6")]
		 get { } //Length: 8
	}

	[Token(Token = "0x17000128")]
	public virtual int Index
	{
		[Address(RVA = "0x12D04BC", Offset = "0x12D04BC", Length = "0x8")]
		[Token(Token = "0x60006D4")]
		 get { } //Length: 8
	}

	[Token(Token = "0x17000129")]
	public virtual string Keyword
	{
		[Address(RVA = "0x12D04C4", Offset = "0x12D04C4", Length = "0x40")]
		[Token(Token = "0x60006D5")]
		 get { } //Length: 64
	}

	[Address(RVA = "0x12D0BB8", Offset = "0x12D0BB8", Length = "0x90")]
	[Token(Token = "0x60006D9")]
	public RewardedAdConfigData() { }

	[Address(RVA = "0x12D050C", Offset = "0x12D050C", Length = "0x338")]
	[Token(Token = "0x60006D7")]
	public virtual bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12D0504", Offset = "0x12D0504", Length = "0x8")]
	[Token(Token = "0x60006D6")]
	public virtual int get_ErrorCode() { }

	[Address(RVA = "0x12D04BC", Offset = "0x12D04BC", Length = "0x8")]
	[Token(Token = "0x60006D4")]
	public virtual int get_Index() { }

	[Address(RVA = "0x12D04C4", Offset = "0x12D04C4", Length = "0x40")]
	[Token(Token = "0x60006D5")]
	public virtual string get_Keyword() { }

	[Address(RVA = "0x12D0870", Offset = "0x12D0870", Length = "0x348")]
	[Token(Token = "0x60006D8")]
	public virtual Dictionary<String, Object> ToDict() { }

	[Address(RVA = "0x12D0240", Offset = "0x12D0240", Length = "0x27C")]
	[Token(Token = "0x60006D3")]
	public virtual string ToString() { }

}

