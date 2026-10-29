//Type is in global namespace

[Token(Token = "0x20000DC")]
public class PromoPopupConfigData : ConfigData
{
	[Token(Token = "0x400076B")]
	public const string PromoKeyword = "PROMO"; //Field offset: 0x0
	[Token(Token = "0x400077A")]
	private const string _ImageDescH2Key = "IDH2K"; //Field offset: 0x0
	[Token(Token = "0x4000779")]
	private const string _ImageDescH1Key = "IDH1K"; //Field offset: 0x0
	[Token(Token = "0x4000778")]
	private const string _IsImageTextLocalizedKey = "ISIMTLOCK"; //Field offset: 0x0
	[Token(Token = "0x4000777")]
	private const string _IsLocalizedKey = "ISLOCK"; //Field offset: 0x0
	[Token(Token = "0x4000776")]
	private const string _ImangeNameKey = "INK"; //Field offset: 0x0
	[Token(Token = "0x4000775")]
	private const string _PromoCoinRewardKey = "CR"; //Field offset: 0x0
	[Token(Token = "0x4000774")]
	private const string _PromoURLKey = "URL"; //Field offset: 0x0
	[Token(Token = "0x400077B")]
	private const string _ImageDescH3Key = "IDH3K"; //Field offset: 0x0
	[Token(Token = "0x4000772")]
	private const string _PromoActionButtonTextKey = "AT"; //Field offset: 0x0
	[Token(Token = "0x4000771")]
	private const string _PromoLongDescKey = "LD"; //Field offset: 0x0
	[Token(Token = "0x4000770")]
	private const string _PromoShortDescKey = "SD"; //Field offset: 0x0
	[Token(Token = "0x400076F")]
	private const string _IsImagePopupKey = "IIPK"; //Field offset: 0x0
	[Token(Token = "0x400076E")]
	private const string _DelayForRepetitivePopupKey = "IRFPK"; //Field offset: 0x0
	[Token(Token = "0x400076D")]
	private const string _IsRepetitivePopupKey = "IRPK"; //Field offset: 0x0
	[Token(Token = "0x400076C")]
	private const string _PromoReadyKey = "E"; //Field offset: 0x0
	[Token(Token = "0x4000773")]
	private const string _PromoDismissButtonTextKey = "DT"; //Field offset: 0x0
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x400077C")]
	private int _Index; //Field offset: 0x28
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x400077D")]
	public bool PromoReady; //Field offset: 0x2C
	[FieldOffset(Offset = "0x2D")]
	[Token(Token = "0x400077E")]
	public bool IsImagePopup; //Field offset: 0x2D
	[FieldOffset(Offset = "0x2E")]
	[Token(Token = "0x400077F")]
	public bool IsRepetitivePopup; //Field offset: 0x2E
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000780")]
	public int DelayForRepetitivePopup; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000781")]
	public string PromoShortDesc; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000782")]
	public string PromoLongDesc; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4000783")]
	public string PromoActionButtonText; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000784")]
	public string PromoDismissButtonText; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000785")]
	public string PromoURL; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000786")]
	public string ImageName; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000787")]
	public int PromoCoinReward; //Field offset: 0x68
	[FieldOffset(Offset = "0x6C")]
	[Token(Token = "0x4000788")]
	public bool IsLocalized; //Field offset: 0x6C
	[FieldOffset(Offset = "0x6D")]
	[Token(Token = "0x4000789")]
	public bool IsImageTextLocalized; //Field offset: 0x6D
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x400078A")]
	public string ImageDescH1; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x400078B")]
	public string ImageDescH2; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x400078C")]
	public string ImageDescH3; //Field offset: 0x80

	[Token(Token = "0x17000122")]
	public virtual int ErrorCode
	{
		[Address(RVA = "0x12CBFCC", Offset = "0x12CBFCC", Length = "0x8")]
		[Token(Token = "0x60006AC")]
		 get { } //Length: 8
	}

	[Token(Token = "0x1700011F")]
	public virtual int Index
	{
		[Address(RVA = "0x12CBF78", Offset = "0x12CBF78", Length = "0x8")]
		[Token(Token = "0x60006A9")]
		 get { } //Length: 8
	}

	[Token(Token = "0x17000120")]
	public virtual string Keyword
	{
		[Address(RVA = "0x12CBF80", Offset = "0x12CBF80", Length = "0x40")]
		[Token(Token = "0x60006AA")]
		 get { } //Length: 64
	}

	[Token(Token = "0x17000121")]
	public virtual string RemoteConfigKey
	{
		[Address(RVA = "0x12CBFC0", Offset = "0x12CBFC0", Length = "0xC")]
		[Token(Token = "0x60006AB")]
		 get { } //Length: 12
	}

	[Address(RVA = "0x12CC954", Offset = "0x12CC954", Length = "0x10")]
	[Token(Token = "0x60006B1")]
	public PromoPopupConfigData() { }

	[Address(RVA = "0x12CBFD4", Offset = "0x12CBFD4", Length = "0x44")]
	[Token(Token = "0x60006AD")]
	protected virtual bool Deserialize_Internal(String[] inWords) { }

	[Address(RVA = "0x12CC428", Offset = "0x12CC428", Length = "0x52C")]
	[Token(Token = "0x60006B0")]
	public virtual bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12CBFCC", Offset = "0x12CBFCC", Length = "0x8")]
	[Token(Token = "0x60006AC")]
	public virtual int get_ErrorCode() { }

	[Address(RVA = "0x12CBF78", Offset = "0x12CBF78", Length = "0x8")]
	[Token(Token = "0x60006A9")]
	public virtual int get_Index() { }

	[Address(RVA = "0x12CBF80", Offset = "0x12CBF80", Length = "0x40")]
	[Token(Token = "0x60006AA")]
	public virtual string get_Keyword() { }

	[Address(RVA = "0x12CBFC0", Offset = "0x12CBFC0", Length = "0xC")]
	[Token(Token = "0x60006AB")]
	public virtual string get_RemoteConfigKey() { }

	[Address(RVA = "0x12CC018", Offset = "0x12CC018", Length = "0x8")]
	[Token(Token = "0x60006AE")]
	public void SetIndex(int inIndex) { }

	[Address(RVA = "0x12CC020", Offset = "0x12CC020", Length = "0x408")]
	[Token(Token = "0x60006AF")]
	public virtual Dictionary<String, Object> ToDict() { }

}

