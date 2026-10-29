//Type is in global namespace

[Token(Token = "0x20000BC")]
public class AnalyticsEventsConfigData : ConfigData
{
	[Token(Token = "0x4000699")]
	public const string PromoKeyword = "AnalyticEvents"; //Field offset: 0x0
	[Token(Token = "0x400069A")]
	private const string _EnabledListKey = "E"; //Field offset: 0x0
	[Token(Token = "0x400069C")]
	private const string _DisabledListKey = "D"; //Field offset: 0x0
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x400069B")]
	public List<String> EnabledList; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x400069D")]
	public List<String> DisabledList; //Field offset: 0x30

	[Token(Token = "0x170000DA")]
	public virtual int ErrorCode
	{
		[Address(RVA = "0x12C204C", Offset = "0x12C204C", Length = "0x8")]
		[Token(Token = "0x60005C9")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000D8")]
	public virtual int Index
	{
		[Address(RVA = "0x12C2004", Offset = "0x12C2004", Length = "0x8")]
		[Token(Token = "0x60005C7")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000D9")]
	public virtual string Keyword
	{
		[Address(RVA = "0x12C200C", Offset = "0x12C200C", Length = "0x40")]
		[Token(Token = "0x60005C8")]
		 get { } //Length: 64
	}

	[Address(RVA = "0x12C2270", Offset = "0x12C2270", Length = "0x9C")]
	[Token(Token = "0x60005CC")]
	public AnalyticsEventsConfigData() { }

	[Address(RVA = "0x12C2154", Offset = "0x12C2154", Length = "0x11C")]
	[Token(Token = "0x60005CB")]
	public virtual bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12C204C", Offset = "0x12C204C", Length = "0x8")]
	[Token(Token = "0x60005C9")]
	public virtual int get_ErrorCode() { }

	[Address(RVA = "0x12C2004", Offset = "0x12C2004", Length = "0x8")]
	[Token(Token = "0x60005C7")]
	public virtual int get_Index() { }

	[Address(RVA = "0x12C200C", Offset = "0x12C200C", Length = "0x40")]
	[Token(Token = "0x60005C8")]
	public virtual string get_Keyword() { }

	[Address(RVA = "0x12C2054", Offset = "0x12C2054", Length = "0x100")]
	[Token(Token = "0x60005CA")]
	public virtual Dictionary<String, Object> ToDict() { }

}

