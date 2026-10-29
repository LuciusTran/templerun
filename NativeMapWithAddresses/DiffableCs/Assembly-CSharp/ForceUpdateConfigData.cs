//Type is in global namespace

[Token(Token = "0x20000CB")]
public class ForceUpdateConfigData : ConfigData
{
	[Token(Token = "0x40006F3")]
	public const string PromoKeyword = "ForceUpdate"; //Field offset: 0x0
	[Token(Token = "0x4000703")]
	private const string _iOSAppURLDictKey = "IURL"; //Field offset: 0x0
	[Token(Token = "0x4000701")]
	private const string _AndroidAppURLDictKey = "AURL"; //Field offset: 0x0
	[Token(Token = "0x40006FF")]
	private const string _DescriptionDictKey = "D"; //Field offset: 0x0
	[Token(Token = "0x40006FD")]
	private const string _TitleDictKey = "T"; //Field offset: 0x0
	[Token(Token = "0x40006FA")]
	private const string _Localize = "LOK"; //Field offset: 0x0
	[Token(Token = "0x4000705")]
	private const string _UseSystemAlertDictKey = "USA"; //Field offset: 0x0
	[Token(Token = "0x40006F8")]
	private const string _DefaultAndroidAppURL = "https://play.google.com/store/apps/details?id=com.imangi.templerun"; //Field offset: 0x0
	[Token(Token = "0x40006F5")]
	private const string _EnableKey = "E"; //Field offset: 0x0
	[Token(Token = "0x40006F9")]
	private const string _DefaultiOSAppURL = "https://apps.apple.com/us/app/temple-run/id420009108"; //Field offset: 0x0
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40006F4")]
	public bool isEnabled; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40006F6")]
	private string _DefaultTitle; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x40006F7")]
	private string _DefaultDescription; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x40006FB")]
	public bool Localize; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x40006FC")]
	public string Title; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x40006FE")]
	public string Description; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000700")]
	public string AndroidAppURL; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000702")]
	public string iOSAppURL; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000704")]
	public bool UseSystemAlert; //Field offset: 0x68

	[Token(Token = "0x170000FF")]
	public virtual int ErrorCode
	{
		[Address(RVA = "0x12C5F74", Offset = "0x12C5F74", Length = "0x8")]
		[Token(Token = "0x6000631")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000FD")]
	public virtual int Index
	{
		[Address(RVA = "0x12C5F2C", Offset = "0x12C5F2C", Length = "0x8")]
		[Token(Token = "0x600062F")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000FE")]
	public virtual string Keyword
	{
		[Address(RVA = "0x12C5F34", Offset = "0x12C5F34", Length = "0x40")]
		[Token(Token = "0x6000630")]
		 get { } //Length: 64
	}

	[Address(RVA = "0x12C63F0", Offset = "0x12C63F0", Length = "0xB4")]
	[Token(Token = "0x6000634")]
	public ForceUpdateConfigData() { }

	[Address(RVA = "0x12C5F7C", Offset = "0x12C5F7C", Length = "0x238")]
	[Token(Token = "0x6000632")]
	public virtual bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12C5F74", Offset = "0x12C5F74", Length = "0x8")]
	[Token(Token = "0x6000631")]
	public virtual int get_ErrorCode() { }

	[Address(RVA = "0x12C5F2C", Offset = "0x12C5F2C", Length = "0x8")]
	[Token(Token = "0x600062F")]
	public virtual int get_Index() { }

	[Address(RVA = "0x12C5F34", Offset = "0x12C5F34", Length = "0x40")]
	[Token(Token = "0x6000630")]
	public virtual string get_Keyword() { }

	[Address(RVA = "0x12C61B4", Offset = "0x12C61B4", Length = "0x23C")]
	[Token(Token = "0x6000633")]
	public virtual Dictionary<String, Object> ToDict() { }

}

