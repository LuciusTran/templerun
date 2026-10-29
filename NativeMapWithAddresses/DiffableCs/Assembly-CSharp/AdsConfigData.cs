//Type is in global namespace

[Token(Token = "0x20000B9")]
public class AdsConfigData : ConfigData
{
	[Token(Token = "0x4000685")]
	public const string PromoKeyword = "Ads"; //Field offset: 0x0
	[Token(Token = "0x4000686")]
	private const float DefaultCooldownTimeBetweenInterstitialAd = 10; //Field offset: 0x0
	[Token(Token = "0x4000687")]
	private const int DefaultNumberOfRunsForFirstInterstitial = 0; //Field offset: 0x0
	[Token(Token = "0x4000688")]
	private const string _InterstitialAdCoolDownTimerKey = "InterstitialAdCoolDownTimer"; //Field offset: 0x0
	[Token(Token = "0x400068A")]
	private const string _NumofRunsforFirstInterAdsKey = "NumberOfRunsForFirstInter"; //Field offset: 0x0
	[Token(Token = "0x400068C")]
	private const string _PrecacheAtRunEndKey = "PrecacheAtRunEnd"; //Field offset: 0x0
	[Token(Token = "0x400068D")]
	private const bool DefaultPrecacheAtRunEnd = True; //Field offset: 0x0
	[Token(Token = "0x400068F")]
	private const string _RecacheOnDismissKey = "RecacheOnDismiss"; //Field offset: 0x0
	[Token(Token = "0x4000690")]
	private const bool DefaultRecacheOnDismiss = True; //Field offset: 0x0
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000689")]
	public float InterstitialCoolDownTimer; //Field offset: 0x28
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x400068B")]
	public int NumberOfRunsForFirstInterstitial; //Field offset: 0x2C
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x400068E")]
	public bool PrecacheAtRunEnd; //Field offset: 0x30
	[FieldOffset(Offset = "0x31")]
	[Token(Token = "0x4000691")]
	public bool RecacheOnDismiss; //Field offset: 0x31

	[Token(Token = "0x170000D1")]
	public virtual int ErrorCode
	{
		[Address(RVA = "0x12C1A28", Offset = "0x12C1A28", Length = "0x8")]
		[Token(Token = "0x60005B7")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000CE")]
	public virtual int Index
	{
		[Address(RVA = "0x12C19A0", Offset = "0x12C19A0", Length = "0x8")]
		[Token(Token = "0x60005B4")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000CF")]
	public virtual string Keyword
	{
		[Address(RVA = "0x12C19A8", Offset = "0x12C19A8", Length = "0x40")]
		[Token(Token = "0x60005B5")]
		 get { } //Length: 64
	}

	[Token(Token = "0x170000D0")]
	public virtual string RemoteConfigKey
	{
		[Address(RVA = "0x12C19E8", Offset = "0x12C19E8", Length = "0x40")]
		[Token(Token = "0x60005B6")]
		 get { } //Length: 64
	}

	[Address(RVA = "0x12C1CC0", Offset = "0x12C1CC0", Length = "0x20")]
	[Token(Token = "0x60005BA")]
	public AdsConfigData() { }

	[Address(RVA = "0x12C1BA0", Offset = "0x12C1BA0", Length = "0x120")]
	[Token(Token = "0x60005B9")]
	public virtual bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12C1A28", Offset = "0x12C1A28", Length = "0x8")]
	[Token(Token = "0x60005B7")]
	public virtual int get_ErrorCode() { }

	[Address(RVA = "0x12C19A0", Offset = "0x12C19A0", Length = "0x8")]
	[Token(Token = "0x60005B4")]
	public virtual int get_Index() { }

	[Address(RVA = "0x12C19A8", Offset = "0x12C19A8", Length = "0x40")]
	[Token(Token = "0x60005B5")]
	public virtual string get_Keyword() { }

	[Address(RVA = "0x12C19E8", Offset = "0x12C19E8", Length = "0x40")]
	[Token(Token = "0x60005B6")]
	public virtual string get_RemoteConfigKey() { }

	[Address(RVA = "0x12C1A30", Offset = "0x12C1A30", Length = "0x170")]
	[Token(Token = "0x60005B8")]
	public virtual Dictionary<String, Object> ToDict() { }

}

