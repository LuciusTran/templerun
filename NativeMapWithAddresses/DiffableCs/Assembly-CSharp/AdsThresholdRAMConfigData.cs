//Type is in global namespace

[Token(Token = "0x20000BB")]
public class AdsThresholdRAMConfigData : ConfigData
{
	[Token(Token = "0x4000694")]
	public const string PromoKeyword = "AdsThresholdRAM"; //Field offset: 0x0
	[Token(Token = "0x4000695")]
	private const string _AdThresholdCheckEnabledKey = "E"; //Field offset: 0x0
	[Token(Token = "0x4000696")]
	private const string _MinimumRAM_Key = "MR"; //Field offset: 0x0
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000697")]
	public bool AdThresholdCheckEnabled; //Field offset: 0x28
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x4000698")]
	public int MinimumRAM; //Field offset: 0x2C

	[Token(Token = "0x170000D7")]
	public virtual int ErrorCode
	{
		[Address(RVA = "0x12C1E20", Offset = "0x12C1E20", Length = "0x8")]
		[Token(Token = "0x60005C3")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000D5")]
	public virtual int Index
	{
		[Address(RVA = "0x12C1DD8", Offset = "0x12C1DD8", Length = "0x8")]
		[Token(Token = "0x60005C1")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000D6")]
	public virtual string Keyword
	{
		[Address(RVA = "0x12C1DE0", Offset = "0x12C1DE0", Length = "0x40")]
		[Token(Token = "0x60005C2")]
		 get { } //Length: 64
	}

	[Address(RVA = "0x12C1FF4", Offset = "0x12C1FF4", Length = "0x10")]
	[Token(Token = "0x60005C6")]
	public AdsThresholdRAMConfigData() { }

	[Address(RVA = "0x12C1F34", Offset = "0x12C1F34", Length = "0xC0")]
	[Token(Token = "0x60005C5")]
	public virtual bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12C1E20", Offset = "0x12C1E20", Length = "0x8")]
	[Token(Token = "0x60005C3")]
	public virtual int get_ErrorCode() { }

	[Address(RVA = "0x12C1DD8", Offset = "0x12C1DD8", Length = "0x8")]
	[Token(Token = "0x60005C1")]
	public virtual int get_Index() { }

	[Address(RVA = "0x12C1DE0", Offset = "0x12C1DE0", Length = "0x40")]
	[Token(Token = "0x60005C2")]
	public virtual string get_Keyword() { }

	[Address(RVA = "0x12C1E28", Offset = "0x12C1E28", Length = "0x10C")]
	[Token(Token = "0x60005C4")]
	public virtual Dictionary<String, Object> ToDict() { }

}

