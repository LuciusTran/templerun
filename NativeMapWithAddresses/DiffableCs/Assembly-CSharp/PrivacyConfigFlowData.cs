//Type is in global namespace

[Token(Token = "0x20000D3")]
public class PrivacyConfigFlowData : ConfigData
{
	[Token(Token = "0x4000743")]
	public const string PromoKeyword = "PrivacyConfigFlow"; //Field offset: 0x0
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000744")]
	public ImangiPrivacyConfigFlowInfo PrivacyConfigFlowInfo; //Field offset: 0x28

	[Token(Token = "0x1700010F")]
	public virtual int ErrorCode
	{
		[Address(RVA = "0x12C8A64", Offset = "0x12C8A64", Length = "0x8")]
		[Token(Token = "0x600065B")]
		 get { } //Length: 8
	}

	[Token(Token = "0x1700010D")]
	public virtual int Index
	{
		[Address(RVA = "0x12C8A1C", Offset = "0x12C8A1C", Length = "0x8")]
		[Token(Token = "0x6000659")]
		 get { } //Length: 8
	}

	[Token(Token = "0x1700010E")]
	public virtual string Keyword
	{
		[Address(RVA = "0x12C8A24", Offset = "0x12C8A24", Length = "0x40")]
		[Token(Token = "0x600065A")]
		 get { } //Length: 64
	}

	[Address(RVA = "0x12C88EC", Offset = "0x12C88EC", Length = "0x68")]
	[Token(Token = "0x6000657")]
	public PrivacyConfigFlowData() { }

	[Address(RVA = "0x12C8954", Offset = "0x12C8954", Length = "0xC8")]
	[Token(Token = "0x6000658")]
	public PrivacyConfigFlowData(string inJSONString) { }

	[Address(RVA = "0x12C8A88", Offset = "0x12C8A88", Length = "0x6C")]
	[Token(Token = "0x600065D")]
	public virtual bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12C8A64", Offset = "0x12C8A64", Length = "0x8")]
	[Token(Token = "0x600065B")]
	public virtual int get_ErrorCode() { }

	[Address(RVA = "0x12C8A1C", Offset = "0x12C8A1C", Length = "0x8")]
	[Token(Token = "0x6000659")]
	public virtual int get_Index() { }

	[Address(RVA = "0x12C8A24", Offset = "0x12C8A24", Length = "0x40")]
	[Token(Token = "0x600065A")]
	public virtual string get_Keyword() { }

	[Address(RVA = "0x12C8A6C", Offset = "0x12C8A6C", Length = "0x1C")]
	[Token(Token = "0x600065C")]
	public virtual Dictionary<String, Object> ToDict() { }

}

