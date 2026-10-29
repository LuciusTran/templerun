//Type is in global namespace

[Token(Token = "0x20000D1")]
public class PlayerConfigData : ConfigData
{
	[Token(Token = "0x400072D")]
	public const string PromoKeyword = "Runner"; //Field offset: 0x0
	[Token(Token = "0x400072E")]
	private const string _StartRunVelocityKey = "SRV"; //Field offset: 0x0
	[Token(Token = "0x400072F")]
	private const float _StartRunVelocityDefault = 100; //Field offset: 0x0
	[Token(Token = "0x4000731")]
	private const string _MaxRunVelocityKey = "MRV"; //Field offset: 0x0
	[Token(Token = "0x4000732")]
	private const float _MaxRunVelocityDefault = 210; //Field offset: 0x0
	[Token(Token = "0x4000734")]
	private const string _StumbleSlowDownPercentKey = "SSDP"; //Field offset: 0x0
	[Token(Token = "0x4000735")]
	private const float _StumbleSlowDownPercentDefault = 0.85; //Field offset: 0x0
	[Token(Token = "0x400073F")]
	private const string _AccCurveForcesKey = "ACCFCS"; //Field offset: 0x0
	[Token(Token = "0x4000737")]
	private const string _ResurrectionSlowDownPercentKey = "RSDP"; //Field offset: 0x0
	[Token(Token = "0x4000738")]
	private const float _ResurrectionSlowDownPercentDefault = 0.85; //Field offset: 0x0
	[Token(Token = "0x400073D")]
	private const string _AccCurveThresholdsKey = "ACCPTS"; //Field offset: 0x0
	[Token(Token = "0x400073A")]
	private const string _ResurrectionBoostDistanceKey = "RBD"; //Field offset: 0x0
	[Token(Token = "0x400073B")]
	private const int _ResurrectionBoostDistanceDefault = 150; //Field offset: 0x0
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000730")]
	public float StartRunVelocity; //Field offset: 0x28
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x4000733")]
	public float MaxRunVelocity; //Field offset: 0x2C
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000736")]
	public float StumbleSlowDownPercent; //Field offset: 0x30
	[FieldOffset(Offset = "0x34")]
	[Token(Token = "0x4000739")]
	public float ResurrectionSlowDownPercent; //Field offset: 0x34
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x400073C")]
	public int ResurrectionBoostDistance; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x400073E")]
	public List<Int32> AccCurveThresholds; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4000740")]
	public List<Int32> AccCurveForces; //Field offset: 0x48

	[Token(Token = "0x17000109")]
	public virtual int ErrorCode
	{
		[Address(RVA = "0x12C8034", Offset = "0x12C8034", Length = "0x8")]
		[Token(Token = "0x600064D")]
		 get { } //Length: 8
	}

	[Token(Token = "0x17000107")]
	public virtual int Index
	{
		[Address(RVA = "0x12C7FEC", Offset = "0x12C7FEC", Length = "0x8")]
		[Token(Token = "0x600064B")]
		 get { } //Length: 8
	}

	[Token(Token = "0x17000108")]
	public virtual string Keyword
	{
		[Address(RVA = "0x12C7FF4", Offset = "0x12C7FF4", Length = "0x40")]
		[Token(Token = "0x600064C")]
		 get { } //Length: 64
	}

	[Address(RVA = "0x12C8438", Offset = "0x12C8438", Length = "0x374")]
	[Token(Token = "0x6000650")]
	public PlayerConfigData() { }

	[Address(RVA = "0x12C8254", Offset = "0x12C8254", Length = "0x1E4")]
	[Token(Token = "0x600064F")]
	public virtual bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12C8034", Offset = "0x12C8034", Length = "0x8")]
	[Token(Token = "0x600064D")]
	public virtual int get_ErrorCode() { }

	[Address(RVA = "0x12C7FEC", Offset = "0x12C7FEC", Length = "0x8")]
	[Token(Token = "0x600064B")]
	public virtual int get_Index() { }

	[Address(RVA = "0x12C7FF4", Offset = "0x12C7FF4", Length = "0x40")]
	[Token(Token = "0x600064C")]
	public virtual string get_Keyword() { }

	[Address(RVA = "0x12C803C", Offset = "0x12C803C", Length = "0x218")]
	[Token(Token = "0x600064E")]
	public virtual Dictionary<String, Object> ToDict() { }

}

