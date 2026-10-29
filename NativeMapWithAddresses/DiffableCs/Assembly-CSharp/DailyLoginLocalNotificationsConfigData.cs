//Type is in global namespace

[Token(Token = "0x20000C6")]
public class DailyLoginLocalNotificationsConfigData : ConfigData
{
	[Token(Token = "0x40006D6")]
	public const string LocalNotificationKeyWord = "DLLN"; //Field offset: 0x0
	[Token(Token = "0x40006D7")]
	public const string _LocalNotificationMessageKey = "M"; //Field offset: 0x0
	[Token(Token = "0x40006D8")]
	public const string _LocalNotificationPopupNuberOfRunKey = "LNRK"; //Field offset: 0x0
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40006D9")]
	private int _Index; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40006DA")]
	public String[] LocalNotificationMessage; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x40006DB")]
	public int LocalNotificationPopupNuberOfRun; //Field offset: 0x38

	[Token(Token = "0x170000F4")]
	public virtual int ErrorCode
	{
		[Address(RVA = "0x12C4B84", Offset = "0x12C4B84", Length = "0x8")]
		[Token(Token = "0x600060F")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000F1")]
	public virtual int Index
	{
		[Address(RVA = "0x12C4B30", Offset = "0x12C4B30", Length = "0x8")]
		[Token(Token = "0x600060C")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000F2")]
	public virtual string Keyword
	{
		[Address(RVA = "0x12C4B38", Offset = "0x12C4B38", Length = "0x40")]
		[Token(Token = "0x600060D")]
		 get { } //Length: 64
	}

	[Token(Token = "0x170000F3")]
	public virtual string RemoteConfigKey
	{
		[Address(RVA = "0x12C4B78", Offset = "0x12C4B78", Length = "0xC")]
		[Token(Token = "0x600060E")]
		 get { } //Length: 12
	}

	[Address(RVA = "0x12C4EE8", Offset = "0x12C4EE8", Length = "0x70")]
	[Token(Token = "0x6000614")]
	public DailyLoginLocalNotificationsConfigData() { }

	[Address(RVA = "0x12C4B8C", Offset = "0x12C4B8C", Length = "0x40")]
	[Token(Token = "0x6000610")]
	protected virtual bool Deserialize_Internal(String[] inWords) { }

	[Address(RVA = "0x12C4DBC", Offset = "0x12C4DBC", Length = "0x12C")]
	[Token(Token = "0x6000613")]
	public virtual bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12C4B84", Offset = "0x12C4B84", Length = "0x8")]
	[Token(Token = "0x600060F")]
	public virtual int get_ErrorCode() { }

	[Address(RVA = "0x12C4B30", Offset = "0x12C4B30", Length = "0x8")]
	[Token(Token = "0x600060C")]
	public virtual int get_Index() { }

	[Address(RVA = "0x12C4B38", Offset = "0x12C4B38", Length = "0x40")]
	[Token(Token = "0x600060D")]
	public virtual string get_Keyword() { }

	[Address(RVA = "0x12C4B78", Offset = "0x12C4B78", Length = "0xC")]
	[Token(Token = "0x600060E")]
	public virtual string get_RemoteConfigKey() { }

	[Address(RVA = "0x12C4BCC", Offset = "0x12C4BCC", Length = "0x8")]
	[Token(Token = "0x6000611")]
	public void SetIndex(int inIndex) { }

	[Address(RVA = "0x12C4BD4", Offset = "0x12C4BD4", Length = "0x1E8")]
	[Token(Token = "0x6000612")]
	public virtual Dictionary<String, Object> ToDict() { }

}

