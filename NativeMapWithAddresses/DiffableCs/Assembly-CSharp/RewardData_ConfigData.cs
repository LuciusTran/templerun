//Type is in global namespace

[Token(Token = "0x2000188")]
public class RewardData_ConfigData : ConfigData
{
	[Token(Token = "0x4000E12")]
	public const string RewardDataKeyWord = "RewardData"; //Field offset: 0x0
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000E13")]
	private int _Index; //Field offset: 0x28
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x4000E14")]
	public RewardTypes RewardType; //Field offset: 0x2C
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000E15")]
	public int RewardValue; //Field offset: 0x30

	[Token(Token = "0x1700018B")]
	public virtual int ErrorCode
	{
		[Address(RVA = "0x131F9D0", Offset = "0x131F9D0", Length = "0x8")]
		[Token(Token = "0x6000B8C")]
		 get { } //Length: 8
	}

	[Token(Token = "0x17000189")]
	public virtual int Index
	{
		[Address(RVA = "0x131F988", Offset = "0x131F988", Length = "0x8")]
		[Token(Token = "0x6000B8A")]
		 get { } //Length: 8
	}

	[Token(Token = "0x1700018A")]
	public virtual string Keyword
	{
		[Address(RVA = "0x131F990", Offset = "0x131F990", Length = "0x40")]
		[Token(Token = "0x6000B8B")]
		 get { } //Length: 64
	}

	[Address(RVA = "0x131FBC4", Offset = "0x131FBC4", Length = "0x10")]
	[Token(Token = "0x6000B8F")]
	public RewardData_ConfigData() { }

	[Address(RVA = "0x131FAF4", Offset = "0x131FAF4", Length = "0xD0")]
	[Token(Token = "0x6000B8E")]
	public virtual bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x131F9D0", Offset = "0x131F9D0", Length = "0x8")]
	[Token(Token = "0x6000B8C")]
	public virtual int get_ErrorCode() { }

	[Address(RVA = "0x131F988", Offset = "0x131F988", Length = "0x8")]
	[Token(Token = "0x6000B8A")]
	public virtual int get_Index() { }

	[Address(RVA = "0x131F990", Offset = "0x131F990", Length = "0x40")]
	[Token(Token = "0x6000B8B")]
	public virtual string get_Keyword() { }

	[Address(RVA = "0x131F9D8", Offset = "0x131F9D8", Length = "0x11C")]
	[Token(Token = "0x6000B8D")]
	public virtual Dictionary<String, Object> ToDict() { }

}

