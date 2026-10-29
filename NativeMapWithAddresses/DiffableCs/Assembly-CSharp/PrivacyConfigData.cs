//Type is in global namespace

[Token(Token = "0x20000D2")]
public class PrivacyConfigData : ConfigData
{
	[Token(Token = "0x4000741")]
	public const string PromoKeyword = "PrivacyConfig"; //Field offset: 0x0
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000742")]
	public ImangiPrivacyConfigInfo PrivacyConfigInfo; //Field offset: 0x28

	[Token(Token = "0x1700010C")]
	public virtual int ErrorCode
	{
		[Address(RVA = "0x12C87F4", Offset = "0x12C87F4", Length = "0x8")]
		[Token(Token = "0x6000653")]
		 get { } //Length: 8
	}

	[Token(Token = "0x1700010A")]
	public virtual int Index
	{
		[Address(RVA = "0x12C87AC", Offset = "0x12C87AC", Length = "0x8")]
		[Token(Token = "0x6000651")]
		 get { } //Length: 8
	}

	[Token(Token = "0x1700010B")]
	public virtual string Keyword
	{
		[Address(RVA = "0x12C87B4", Offset = "0x12C87B4", Length = "0x40")]
		[Token(Token = "0x6000652")]
		 get { } //Length: 64
	}

	[Address(RVA = "0x12C8884", Offset = "0x12C8884", Length = "0x68")]
	[Token(Token = "0x6000656")]
	public PrivacyConfigData() { }

	[Address(RVA = "0x12C8818", Offset = "0x12C8818", Length = "0x6C")]
	[Token(Token = "0x6000655")]
	public virtual bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12C87F4", Offset = "0x12C87F4", Length = "0x8")]
	[Token(Token = "0x6000653")]
	public virtual int get_ErrorCode() { }

	[Address(RVA = "0x12C87AC", Offset = "0x12C87AC", Length = "0x8")]
	[Token(Token = "0x6000651")]
	public virtual int get_Index() { }

	[Address(RVA = "0x12C87B4", Offset = "0x12C87B4", Length = "0x40")]
	[Token(Token = "0x6000652")]
	public virtual string get_Keyword() { }

	[Address(RVA = "0x12C87FC", Offset = "0x12C87FC", Length = "0x1C")]
	[Token(Token = "0x6000654")]
	public virtual Dictionary<String, Object> ToDict() { }

}

