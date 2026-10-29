//Type is in global namespace

[Token(Token = "0x20000B7")]
public class ABTestSystemConfigData : ConfigData
{
	[Token(Token = "0x4000669")]
	public const string PromoKeyword = "ABTestsConfig"; //Field offset: 0x0
	[Token(Token = "0x400066A")]
	private const string _EnabledKey = "E"; //Field offset: 0x0
	[Token(Token = "0x400066C")]
	private const string _ForceUserIdKey = "FU"; //Field offset: 0x0
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x400066B")]
	public bool IsEnabled; //Field offset: 0x28
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x400066D")]
	public int ForceUserId; //Field offset: 0x2C

	[Token(Token = "0x170000C9")]
	public virtual int ErrorCode
	{
		[Address(RVA = "0x12C0CF0", Offset = "0x12C0CF0", Length = "0x8")]
		[Token(Token = "0x60005A9")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000C7")]
	public virtual int Index
	{
		[Address(RVA = "0x12C0CA8", Offset = "0x12C0CA8", Length = "0x8")]
		[Token(Token = "0x60005A7")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000C8")]
	public virtual string Keyword
	{
		[Address(RVA = "0x12C0CB0", Offset = "0x12C0CB0", Length = "0x40")]
		[Token(Token = "0x60005A8")]
		 get { } //Length: 64
	}

	[Address(RVA = "0x12B8920", Offset = "0x12B8920", Length = "0x18")]
	[Token(Token = "0x60005A5")]
	public ABTestSystemConfigData() { }

	[Address(RVA = "0x12C0C68", Offset = "0x12C0C68", Length = "0x40")]
	[Token(Token = "0x60005A6")]
	public ABTestSystemConfigData(string inJSONString) { }

	[Address(RVA = "0x12C0E04", Offset = "0x12C0E04", Length = "0xC0")]
	[Token(Token = "0x60005AB")]
	public virtual bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12C0CF0", Offset = "0x12C0CF0", Length = "0x8")]
	[Token(Token = "0x60005A9")]
	public virtual int get_ErrorCode() { }

	[Address(RVA = "0x12C0CA8", Offset = "0x12C0CA8", Length = "0x8")]
	[Token(Token = "0x60005A7")]
	public virtual int get_Index() { }

	[Address(RVA = "0x12C0CB0", Offset = "0x12C0CB0", Length = "0x40")]
	[Token(Token = "0x60005A8")]
	public virtual string get_Keyword() { }

	[Address(RVA = "0x12C0CF8", Offset = "0x12C0CF8", Length = "0x10C")]
	[Token(Token = "0x60005AA")]
	public virtual Dictionary<String, Object> ToDict() { }

}

