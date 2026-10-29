//Type is in global namespace

[Token(Token = "0x20000C0")]
public class CharacterGiveAwayConfigData : ConfigData
{
	[Token(Token = "0x40006AE")]
	public const string PromoKeyword = "CharacterGiveAway"; //Field offset: 0x0
	[Token(Token = "0x40006AF")]
	private const string _CharacterGiveAwayEnabledKey = "E"; //Field offset: 0x0
	[Token(Token = "0x40006B0")]
	private const string _CharcatersToGiveAwayKey = "CTGA"; //Field offset: 0x0
	[Token(Token = "0x40006B1")]
	private const string _GiveAwayStartDateKey = "GASD"; //Field offset: 0x0
	[Token(Token = "0x40006B2")]
	private const string _GiveAwayEndDateKey = "GAED"; //Field offset: 0x0
	[Token(Token = "0x40006B6")]
	public static List<CharacterEnumConfigData> CharcatersToGiveAway; //Field offset: 0x0
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40006B3")]
	public DateTime GiveAwayStartDate; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40006B4")]
	public DateTime GiveAwayEndDate; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x40006B5")]
	public bool Enabled; //Field offset: 0x38

	[Token(Token = "0x170000E3")]
	public virtual int ErrorCode
	{
		[Address(RVA = "0x12C2F8C", Offset = "0x12C2F8C", Length = "0x8")]
		[Token(Token = "0x60005E2")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000E1")]
	public virtual int Index
	{
		[Address(RVA = "0x12C2F44", Offset = "0x12C2F44", Length = "0x8")]
		[Token(Token = "0x60005E0")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000E2")]
	public virtual string Keyword
	{
		[Address(RVA = "0x12C2F4C", Offset = "0x12C2F4C", Length = "0x40")]
		[Token(Token = "0x60005E1")]
		 get { } //Length: 64
	}

	[Address(RVA = "0x12C32D0", Offset = "0x12C32D0", Length = "0x8C")]
	[Token(Token = "0x60005E6")]
	private static CharacterGiveAwayConfigData() { }

	[Address(RVA = "0x12C2C98", Offset = "0x12C2C98", Length = "0x7C")]
	[Token(Token = "0x60005E5")]
	public CharacterGiveAwayConfigData() { }

	[Address(RVA = "0x12C3138", Offset = "0x12C3138", Length = "0x198")]
	[Token(Token = "0x60005E4")]
	public virtual bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12C2F8C", Offset = "0x12C2F8C", Length = "0x8")]
	[Token(Token = "0x60005E2")]
	public virtual int get_ErrorCode() { }

	[Address(RVA = "0x12C2F44", Offset = "0x12C2F44", Length = "0x8")]
	[Token(Token = "0x60005E0")]
	public virtual int get_Index() { }

	[Address(RVA = "0x12C2F4C", Offset = "0x12C2F4C", Length = "0x40")]
	[Token(Token = "0x60005E1")]
	public virtual string get_Keyword() { }

	[Address(RVA = "0x12C2F94", Offset = "0x12C2F94", Length = "0x1A4")]
	[Token(Token = "0x60005E3")]
	public virtual Dictionary<String, Object> ToDict() { }

}

