//Type is in global namespace

[Token(Token = "0x20000C2")]
public class CMPConfigData : ConfigData
{
	[Token(Token = "0x40006B9")]
	public const string PromoKeyword = "CMP"; //Field offset: 0x0
	[Token(Token = "0x40006BA")]
	public static string CrossPromoLogChannel; //Field offset: 0x0
	[Token(Token = "0x40006BF")]
	private const string _IndexDictKey = "ID"; //Field offset: 0x0
	[Token(Token = "0x40006BB")]
	protected static readonly string GDPRConsentLocalesKey; //Field offset: 0x8
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40006BC")]
	public ImangiLocaleRequirements CMPLocales; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40006BD")]
	public bool IsEnabled; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x40006BE")]
	public List<String> DefaultPhoneIDs; //Field offset: 0x38

	[Token(Token = "0x170000E5")]
	public virtual int ErrorCode
	{
		[Address(RVA = "0x12C3560", Offset = "0x12C3560", Length = "0x8")]
		[Token(Token = "0x60005EB")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000E6")]
	public virtual int Index
	{
		[Address(RVA = "0x12C3568", Offset = "0x12C3568", Length = "0x8")]
		[Token(Token = "0x60005EC")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000E4")]
	public virtual string Keyword
	{
		[Address(RVA = "0x12C3520", Offset = "0x12C3520", Length = "0x40")]
		[Token(Token = "0x60005EA")]
		 get { } //Length: 64
	}

	[Address(RVA = "0x12C37E8", Offset = "0x12C37E8", Length = "0x8C")]
	[Token(Token = "0x60005F0")]
	private static CMPConfigData() { }

	[Address(RVA = "0x12BF5D0", Offset = "0x12BF5D0", Length = "0xD0")]
	[Token(Token = "0x60005EF")]
	public CMPConfigData() { }

	[Address(RVA = "0x12C36CC", Offset = "0x12C36CC", Length = "0x11C")]
	[Token(Token = "0x60005EE")]
	public virtual bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12C3560", Offset = "0x12C3560", Length = "0x8")]
	[Token(Token = "0x60005EB")]
	public virtual int get_ErrorCode() { }

	[Address(RVA = "0x12C3568", Offset = "0x12C3568", Length = "0x8")]
	[Token(Token = "0x60005EC")]
	public virtual int get_Index() { }

	[Address(RVA = "0x12C3520", Offset = "0x12C3520", Length = "0x40")]
	[Token(Token = "0x60005EA")]
	public virtual string get_Keyword() { }

	[Address(RVA = "0x12C3570", Offset = "0x12C3570", Length = "0x15C")]
	[Token(Token = "0x60005ED")]
	public virtual Dictionary<String, Object> ToDict() { }

}

