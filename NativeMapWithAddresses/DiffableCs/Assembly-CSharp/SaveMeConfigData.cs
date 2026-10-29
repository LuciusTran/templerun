//Type is in global namespace

[Token(Token = "0x20000E5")]
public class SaveMeConfigData : ConfigData
{
	[Token(Token = "0x40007BF")]
	public const string PromoKeyword = "SMRV"; //Field offset: 0x0
	[Token(Token = "0x40007C0")]
	public const string MaxSaveMesAllowedKey = "MSMA"; //Field offset: 0x0
	[Token(Token = "0x40007C1")]
	public const string SaveMeTimeoutKey = "SMTO"; //Field offset: 0x0
	[Token(Token = "0x40007C2")]
	public const string DisplaySkipButtonKey = "DSB"; //Field offset: 0x0
	[Token(Token = "0x40007C3")]
	public const string TitleTextKey = "TT"; //Field offset: 0x0
	[Token(Token = "0x40007C4")]
	public const string WatchAdSpriteNameKey = "WASN"; //Field offset: 0x0
	[Token(Token = "0x40007C5")]
	public const string CancelDialogSpriteNameKey = "CDSN"; //Field offset: 0x0
	[Token(Token = "0x40007C6")]
	public const int MaxSaveMesAllowedDefault = -1; //Field offset: 0x0
	[Token(Token = "0x40007C7")]
	public const float SaveMeTimeoutDefault = 3; //Field offset: 0x0
	[Token(Token = "0x40007C8")]
	public const bool DisplaySkipButtonDefault = True; //Field offset: 0x0
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40007C9")]
	public int MaxSaveMesAllowed; //Field offset: 0x28
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x40007CA")]
	public float SaveMeTimeout; //Field offset: 0x2C
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40007CB")]
	public bool DisplaySkipButton; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x40007CC")]
	public string TitleText; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x40007CD")]
	public string WatchAdSpriteName; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x40007CE")]
	public string CancelDialogSpriteName; //Field offset: 0x48

	[Token(Token = "0x1700012D")]
	public virtual int ErrorCode
	{
		[Address(RVA = "0x12D0C98", Offset = "0x12D0C98", Length = "0x8")]
		[Token(Token = "0x60006DE")]
		 get { } //Length: 8
	}

	[Token(Token = "0x1700012B")]
	public virtual int Index
	{
		[Address(RVA = "0x12D0C50", Offset = "0x12D0C50", Length = "0x8")]
		[Token(Token = "0x60006DC")]
		 get { } //Length: 8
	}

	[Token(Token = "0x1700012C")]
	public virtual string Keyword
	{
		[Address(RVA = "0x12D0C58", Offset = "0x12D0C58", Length = "0x40")]
		[Token(Token = "0x60006DD")]
		 get { } //Length: 64
	}

	[Address(RVA = "0x12D0FF8", Offset = "0x12D0FF8", Length = "0x70")]
	[Token(Token = "0x60006E1")]
	public SaveMeConfigData() { }

	[Address(RVA = "0x12D0CA0", Offset = "0x12D0CA0", Length = "0x180")]
	[Token(Token = "0x60006DF")]
	public virtual bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12D0C98", Offset = "0x12D0C98", Length = "0x8")]
	[Token(Token = "0x60006DE")]
	public virtual int get_ErrorCode() { }

	[Address(RVA = "0x12D0C50", Offset = "0x12D0C50", Length = "0x8")]
	[Token(Token = "0x60006DC")]
	public virtual int get_Index() { }

	[Address(RVA = "0x12D0C58", Offset = "0x12D0C58", Length = "0x40")]
	[Token(Token = "0x60006DD")]
	public virtual string get_Keyword() { }

	[Address(RVA = "0x12D0E20", Offset = "0x12D0E20", Length = "0x1D8")]
	[Token(Token = "0x60006E0")]
	public virtual Dictionary<String, Object> ToDict() { }

}

