//Type is in global namespace

[Token(Token = "0x20000BD")]
public class BannerAdsConfigData : ConfigData
{
	[Token(Token = "0x400069E")]
	public const string PromoKeyword = "BannerAds"; //Field offset: 0x0
	[Token(Token = "0x400069F")]
	private const string _BannerAdsEnabledKey = "E"; //Field offset: 0x0
	[Token(Token = "0x40006A0")]
	private const string _TurnOffBannerAdsInTutorialKey = "T"; //Field offset: 0x0
	[Token(Token = "0x40006A1")]
	private const string _TurnOnBannerAdsAfterNoOfRunsKey = "TOBAABRK"; //Field offset: 0x0
	[Token(Token = "0x40006A5")]
	private const string _PlacementsKey = "P"; //Field offset: 0x0
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40006A2")]
	public bool BannerAdsEnabled; //Field offset: 0x28
	[FieldOffset(Offset = "0x29")]
	[Token(Token = "0x40006A3")]
	public bool TurnOffBannerAdsInTutorial; //Field offset: 0x29
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x40006A4")]
	public int TurnOnBannerAdsAfterNoOfRuns; //Field offset: 0x2C
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40006A6")]
	public Dictionary<String, Boolean> Placements; //Field offset: 0x30

	[Token(Token = "0x170000DD")]
	public virtual int ErrorCode
	{
		[Address(RVA = "0x12C2354", Offset = "0x12C2354", Length = "0x8")]
		[Token(Token = "0x60005CF")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000DB")]
	public virtual int Index
	{
		[Address(RVA = "0x12C230C", Offset = "0x12C230C", Length = "0x8")]
		[Token(Token = "0x60005CD")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000DC")]
	public virtual string Keyword
	{
		[Address(RVA = "0x12C2314", Offset = "0x12C2314", Length = "0x40")]
		[Token(Token = "0x60005CE")]
		 get { } //Length: 64
	}

	[Address(RVA = "0x12C2600", Offset = "0x12C2600", Length = "0x84")]
	[Token(Token = "0x60005D2")]
	public BannerAdsConfigData() { }

	[Address(RVA = "0x12C24AC", Offset = "0x12C24AC", Length = "0x154")]
	[Token(Token = "0x60005D1")]
	public virtual bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12C2354", Offset = "0x12C2354", Length = "0x8")]
	[Token(Token = "0x60005CF")]
	public virtual int get_ErrorCode() { }

	[Address(RVA = "0x12C230C", Offset = "0x12C230C", Length = "0x8")]
	[Token(Token = "0x60005CD")]
	public virtual int get_Index() { }

	[Address(RVA = "0x12C2314", Offset = "0x12C2314", Length = "0x40")]
	[Token(Token = "0x60005CE")]
	public virtual string get_Keyword() { }

	[Address(RVA = "0x12C235C", Offset = "0x12C235C", Length = "0x150")]
	[Token(Token = "0x60005D0")]
	public virtual Dictionary<String, Object> ToDict() { }

}

