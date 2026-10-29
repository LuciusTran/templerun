//Type is in global namespace

[Token(Token = "0x20000D4")]
public class PrivacyLanguageConfigData : ConfigData
{
	[Token(Token = "0x4000745")]
	public const string PromoKeyword = "PrivacyLanguage"; //Field offset: 0x0
	[Token(Token = "0x4000746")]
	public const string VersionKey = "V"; //Field offset: 0x0
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000747")]
	public int Version; //Field offset: 0x28

	[Token(Token = "0x17000112")]
	public virtual int ErrorCode
	{
		[Address(RVA = "0x12C8B3C", Offset = "0x12C8B3C", Length = "0x8")]
		[Token(Token = "0x6000660")]
		 get { } //Length: 8
	}

	[Token(Token = "0x17000110")]
	public virtual int Index
	{
		[Address(RVA = "0x12C8AF4", Offset = "0x12C8AF4", Length = "0x8")]
		[Token(Token = "0x600065E")]
		 get { } //Length: 8
	}

	[Token(Token = "0x17000111")]
	public virtual string Keyword
	{
		[Address(RVA = "0x12C8AFC", Offset = "0x12C8AFC", Length = "0x40")]
		[Token(Token = "0x600065F")]
		 get { } //Length: 64
	}

	[Address(RVA = "0x12C8CAC", Offset = "0x12C8CAC", Length = "0x10")]
	[Token(Token = "0x6000663")]
	public PrivacyLanguageConfigData() { }

	[Address(RVA = "0x12C8B44", Offset = "0x12C8B44", Length = "0x90")]
	[Token(Token = "0x6000661")]
	public virtual bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12C8B3C", Offset = "0x12C8B3C", Length = "0x8")]
	[Token(Token = "0x6000660")]
	public virtual int get_ErrorCode() { }

	[Address(RVA = "0x12C8AF4", Offset = "0x12C8AF4", Length = "0x8")]
	[Token(Token = "0x600065E")]
	public virtual int get_Index() { }

	[Address(RVA = "0x12C8AFC", Offset = "0x12C8AFC", Length = "0x40")]
	[Token(Token = "0x600065F")]
	public virtual string get_Keyword() { }

	[Address(RVA = "0x12C8BD4", Offset = "0x12C8BD4", Length = "0xD8")]
	[Token(Token = "0x6000662")]
	public virtual Dictionary<String, Object> ToDict() { }

}

