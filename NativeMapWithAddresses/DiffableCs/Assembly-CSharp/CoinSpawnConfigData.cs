//Type is in global namespace

[Token(Token = "0x20000C3")]
public class CoinSpawnConfigData : ConfigData
{
	[Token(Token = "0x40006C0")]
	public const string PromoKeyword = "CoinSpawn"; //Field offset: 0x0
	[Token(Token = "0x40006C1")]
	private const string _DoubleValueCoinSpawnLvlKey = "D"; //Field offset: 0x0
	[Token(Token = "0x40006C3")]
	private const string _TripleValueCoinSpawnLvlKey = "T"; //Field offset: 0x0
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40006C2")]
	public List<Int32> DoubleValueCoinSpawnLvl; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40006C4")]
	public List<Int32> TripleValueCoinSpawnLvl; //Field offset: 0x30

	[Token(Token = "0x170000E9")]
	public virtual int ErrorCode
	{
		[Address(RVA = "0x12C38BC", Offset = "0x12C38BC", Length = "0x8")]
		[Token(Token = "0x60005F3")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000E7")]
	public virtual int Index
	{
		[Address(RVA = "0x12C3874", Offset = "0x12C3874", Length = "0x8")]
		[Token(Token = "0x60005F1")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000E8")]
	public virtual string Keyword
	{
		[Address(RVA = "0x12C387C", Offset = "0x12C387C", Length = "0x40")]
		[Token(Token = "0x60005F2")]
		 get { } //Length: 64
	}

	[Address(RVA = "0x12C3AA8", Offset = "0x12C3AA8", Length = "0x564")]
	[Token(Token = "0x60005F6")]
	public CoinSpawnConfigData() { }

	[Address(RVA = "0x12C39BC", Offset = "0x12C39BC", Length = "0xEC")]
	[Token(Token = "0x60005F5")]
	public virtual bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12C38BC", Offset = "0x12C38BC", Length = "0x8")]
	[Token(Token = "0x60005F3")]
	public virtual int get_ErrorCode() { }

	[Address(RVA = "0x12C3874", Offset = "0x12C3874", Length = "0x8")]
	[Token(Token = "0x60005F1")]
	public virtual int get_Index() { }

	[Address(RVA = "0x12C387C", Offset = "0x12C387C", Length = "0x40")]
	[Token(Token = "0x60005F2")]
	public virtual string get_Keyword() { }

	[Address(RVA = "0x12C38C4", Offset = "0x12C38C4", Length = "0xF8")]
	[Token(Token = "0x60005F4")]
	public virtual Dictionary<String, Object> ToDict() { }

}

