//Type is in global namespace

[Token(Token = "0x20000BF")]
public class CharacterSelectConfigData : ConfigData
{
	[Token(Token = "0x40006A9")]
	public const string PromoKeyword = "CharacterSelect"; //Field offset: 0x0
	[Token(Token = "0x40006AA")]
	private const string _CharacterSelectEnabledKey = "E"; //Field offset: 0x0
	[Token(Token = "0x40006AB")]
	private const string _DisplayOrderKey = "DO"; //Field offset: 0x0
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40006AC")]
	public bool Enabled; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40006AD")]
	public List<Int32> DisplayOrder; //Field offset: 0x30

	[Token(Token = "0x170000E0")]
	public virtual int ErrorCode
	{
		[Address(RVA = "0x12C2D5C", Offset = "0x12C2D5C", Length = "0x8")]
		[Token(Token = "0x60005DC")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000DE")]
	public virtual int Index
	{
		[Address(RVA = "0x12C2D14", Offset = "0x12C2D14", Length = "0x8")]
		[Token(Token = "0x60005DA")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000DF")]
	public virtual string Keyword
	{
		[Address(RVA = "0x12C2D1C", Offset = "0x12C2D1C", Length = "0x40")]
		[Token(Token = "0x60005DB")]
		 get { } //Length: 64
	}

	[Address(RVA = "0x12C2C14", Offset = "0x12C2C14", Length = "0x84")]
	[Token(Token = "0x60005DF")]
	public CharacterSelectConfigData() { }

	[Address(RVA = "0x12C2E68", Offset = "0x12C2E68", Length = "0xDC")]
	[Token(Token = "0x60005DE")]
	public virtual bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12C2D5C", Offset = "0x12C2D5C", Length = "0x8")]
	[Token(Token = "0x60005DC")]
	public virtual int get_ErrorCode() { }

	[Address(RVA = "0x12C2D14", Offset = "0x12C2D14", Length = "0x8")]
	[Token(Token = "0x60005DA")]
	public virtual int get_Index() { }

	[Address(RVA = "0x12C2D1C", Offset = "0x12C2D1C", Length = "0x40")]
	[Token(Token = "0x60005DB")]
	public virtual string get_Keyword() { }

	[Address(RVA = "0x12C2D64", Offset = "0x12C2D64", Length = "0x104")]
	[Token(Token = "0x60005DD")]
	public virtual Dictionary<String, Object> ToDict() { }

}

