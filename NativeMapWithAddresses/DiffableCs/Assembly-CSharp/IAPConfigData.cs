//Type is in global namespace

[Token(Token = "0x20000D0")]
public class IAPConfigData : ConfigData
{
	[Token(Token = "0x400071A")]
	public const string PromoKeyword = "IAP"; //Field offset: 0x0
	[Token(Token = "0x400071B")]
	private const string _TempleCoinsProductAmountAKey = "CPA"; //Field offset: 0x0
	[Token(Token = "0x400071C")]
	private const int _TempleCoinsProductAmountADefault = 2500; //Field offset: 0x0
	[Token(Token = "0x400071E")]
	private const string _TempleCoinsProductAmountBKey = "CPB"; //Field offset: 0x0
	[Token(Token = "0x400071F")]
	private const int _TempleCoinsProductAmountBDefault = 25000; //Field offset: 0x0
	[Token(Token = "0x4000721")]
	private const string _TempleCoinsProductAmountCKey = "CPC"; //Field offset: 0x0
	[Token(Token = "0x4000722")]
	private const int _TempleCoinsProductAmountCDefault = 75000; //Field offset: 0x0
	[Token(Token = "0x400072B")]
	private const int _TWFollowUsAmountDefault = 250; //Field offset: 0x0
	[Token(Token = "0x4000724")]
	private const string _TempleCoinsProductAmountDKey = "CPD"; //Field offset: 0x0
	[Token(Token = "0x4000725")]
	private const int _TempleCoinsProductAmountDDefault = 200000; //Field offset: 0x0
	[Token(Token = "0x400072A")]
	private const string _TWFollowUsAmountKey = "TWFU"; //Field offset: 0x0
	[Token(Token = "0x4000727")]
	private const string _FBLikeUsAmountKey = "FBLU"; //Field offset: 0x0
	[Token(Token = "0x4000728")]
	private const int _FBLikeUsAmountDefault = 250; //Field offset: 0x0
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x400071D")]
	public int TempleCoinsProductAmountA; //Field offset: 0x28
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x4000720")]
	public int TempleCoinsProductAmountB; //Field offset: 0x2C
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000723")]
	public int TempleCoinsProductAmountC; //Field offset: 0x30
	[FieldOffset(Offset = "0x34")]
	[Token(Token = "0x4000726")]
	public int TempleCoinsProductAmountD; //Field offset: 0x34
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000729")]
	public int FBLikeUsAmount; //Field offset: 0x38
	[FieldOffset(Offset = "0x3C")]
	[Token(Token = "0x400072C")]
	public int TWFollowUsAmount; //Field offset: 0x3C

	[Token(Token = "0x17000106")]
	public virtual int ErrorCode
	{
		[Address(RVA = "0x12C7C5C", Offset = "0x12C7C5C", Length = "0x8")]
		[Token(Token = "0x6000647")]
		 get { } //Length: 8
	}

	[Token(Token = "0x17000104")]
	public virtual int Index
	{
		[Address(RVA = "0x12C7C14", Offset = "0x12C7C14", Length = "0x8")]
		[Token(Token = "0x6000645")]
		 get { } //Length: 8
	}

	[Token(Token = "0x17000105")]
	public virtual string Keyword
	{
		[Address(RVA = "0x12C7C1C", Offset = "0x12C7C1C", Length = "0x40")]
		[Token(Token = "0x6000646")]
		 get { } //Length: 64
	}

	[Address(RVA = "0x12C7FC8", Offset = "0x12C7FC8", Length = "0x24")]
	[Token(Token = "0x600064A")]
	public IAPConfigData() { }

	[Address(RVA = "0x12C7E44", Offset = "0x12C7E44", Length = "0x184")]
	[Token(Token = "0x6000649")]
	public virtual bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12C7C5C", Offset = "0x12C7C5C", Length = "0x8")]
	[Token(Token = "0x6000647")]
	public virtual int get_ErrorCode() { }

	[Address(RVA = "0x12C7C14", Offset = "0x12C7C14", Length = "0x8")]
	[Token(Token = "0x6000645")]
	public virtual int get_Index() { }

	[Address(RVA = "0x12C7C1C", Offset = "0x12C7C1C", Length = "0x40")]
	[Token(Token = "0x6000646")]
	public virtual string get_Keyword() { }

	[Address(RVA = "0x12C7C64", Offset = "0x12C7C64", Length = "0x1E0")]
	[Token(Token = "0x6000648")]
	public virtual Dictionary<String, Object> ToDict() { }

}

