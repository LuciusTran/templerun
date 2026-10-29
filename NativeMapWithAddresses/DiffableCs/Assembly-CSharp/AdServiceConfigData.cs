//Type is in global namespace

[Token(Token = "0x20000BA")]
public class AdServiceConfigData : ConfigData
{
	[Token(Token = "0x4000692")]
	public const string PromoKeyword = "AdService"; //Field offset: 0x0
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000693")]
	public ImangiAdServiceInfo AdServiceInfo; //Field offset: 0x28

	[Token(Token = "0x170000D4")]
	public virtual int ErrorCode
	{
		[Address(RVA = "0x12C1D28", Offset = "0x12C1D28", Length = "0x8")]
		[Token(Token = "0x60005BD")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000D2")]
	public virtual int Index
	{
		[Address(RVA = "0x12C1CE0", Offset = "0x12C1CE0", Length = "0x8")]
		[Token(Token = "0x60005BB")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000D3")]
	public virtual string Keyword
	{
		[Address(RVA = "0x12C1CE8", Offset = "0x12C1CE8", Length = "0x40")]
		[Token(Token = "0x60005BC")]
		 get { } //Length: 64
	}

	[Address(RVA = "0x12C1D70", Offset = "0x12C1D70", Length = "0x68")]
	[Token(Token = "0x60005C0")]
	public AdServiceConfigData() { }

	[Address(RVA = "0x12C1D4C", Offset = "0x12C1D4C", Length = "0x24")]
	[Token(Token = "0x60005BF")]
	public virtual bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12C1D28", Offset = "0x12C1D28", Length = "0x8")]
	[Token(Token = "0x60005BD")]
	public virtual int get_ErrorCode() { }

	[Address(RVA = "0x12C1CE0", Offset = "0x12C1CE0", Length = "0x8")]
	[Token(Token = "0x60005BB")]
	public virtual int get_Index() { }

	[Address(RVA = "0x12C1CE8", Offset = "0x12C1CE8", Length = "0x40")]
	[Token(Token = "0x60005BC")]
	public virtual string get_Keyword() { }

	[Address(RVA = "0x12C1D30", Offset = "0x12C1D30", Length = "0x1C")]
	[Token(Token = "0x60005BE")]
	public virtual Dictionary<String, Object> ToDict() { }

}

