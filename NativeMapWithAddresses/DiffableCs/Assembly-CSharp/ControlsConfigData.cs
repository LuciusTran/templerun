//Type is in global namespace

[Token(Token = "0x20000C5")]
public class ControlsConfigData : ConfigData
{
	[Token(Token = "0x40006C9")]
	public const string PromoKeyword = "Controls"; //Field offset: 0x0
	[Token(Token = "0x40006CA")]
	private const string _AllowFallOnCliffsKey = "FOC"; //Field offset: 0x0
	[Token(Token = "0x40006CC")]
	private const string _AllowFallOnNarrowsKey = "FON"; //Field offset: 0x0
	[Token(Token = "0x40006CE")]
	private const string _AllowSwipeStumbleDeathKey = "SSD"; //Field offset: 0x0
	[Token(Token = "0x40006D0")]
	private const string _AllowSwipeToStrafeKey = "STS"; //Field offset: 0x0
	[Token(Token = "0x40006D2")]
	private const string _AllowSwipeToSlamDownKey = "STSD"; //Field offset: 0x0
	[Token(Token = "0x40006D4")]
	private const string _AllowTiltToTurnKey = "TTT"; //Field offset: 0x0
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40006CB")]
	public bool AllowFallOnCliffs; //Field offset: 0x28
	[FieldOffset(Offset = "0x29")]
	[Token(Token = "0x40006CD")]
	public bool AllowFallOnNarrows; //Field offset: 0x29
	[FieldOffset(Offset = "0x2A")]
	[Token(Token = "0x40006CF")]
	public bool AllowSwipeStumbleDeath; //Field offset: 0x2A
	[FieldOffset(Offset = "0x2B")]
	[Token(Token = "0x40006D1")]
	public bool AllowSwipeToStrafe; //Field offset: 0x2B
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x40006D3")]
	public bool AllowSwipeToSlamDown; //Field offset: 0x2C
	[FieldOffset(Offset = "0x2D")]
	[Token(Token = "0x40006D5")]
	public bool AllowTiltToTurn; //Field offset: 0x2D

	[Token(Token = "0x170000F0")]
	public virtual int ErrorCode
	{
		[Address(RVA = "0x12C47A0", Offset = "0x12C47A0", Length = "0x8")]
		[Token(Token = "0x6000608")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000EE")]
	public virtual int Index
	{
		[Address(RVA = "0x12C4758", Offset = "0x12C4758", Length = "0x8")]
		[Token(Token = "0x6000606")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000EF")]
	public virtual string Keyword
	{
		[Address(RVA = "0x12C4760", Offset = "0x12C4760", Length = "0x40")]
		[Token(Token = "0x6000607")]
		 get { } //Length: 64
	}

	[Address(RVA = "0x12C4B14", Offset = "0x12C4B14", Length = "0x1C")]
	[Token(Token = "0x600060B")]
	public ControlsConfigData() { }

	[Address(RVA = "0x12C4984", Offset = "0x12C4984", Length = "0x190")]
	[Token(Token = "0x600060A")]
	public virtual bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12C47A0", Offset = "0x12C47A0", Length = "0x8")]
	[Token(Token = "0x6000608")]
	public virtual int get_ErrorCode() { }

	[Address(RVA = "0x12C4758", Offset = "0x12C4758", Length = "0x8")]
	[Token(Token = "0x6000606")]
	public virtual int get_Index() { }

	[Address(RVA = "0x12C4760", Offset = "0x12C4760", Length = "0x40")]
	[Token(Token = "0x6000607")]
	public virtual string get_Keyword() { }

	[Address(RVA = "0x12C47A8", Offset = "0x12C47A8", Length = "0x1DC")]
	[Token(Token = "0x6000609")]
	public virtual Dictionary<String, Object> ToDict() { }

}

