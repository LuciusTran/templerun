//Type is in global namespace

[Token(Token = "0x20000C8")]
public class DeviceConfigData : ConfigData
{
	[Token(Token = "0x20000C9")]
	internal class SafeAreaData : IParsableJSONListElement
	{
		[Token(Token = "0x40006E4")]
		private const string _LeftMarginKey = "L"; //Field offset: 0x0
		[Token(Token = "0x40006E6")]
		private const string _RightMarginKey = "R"; //Field offset: 0x0
		[Token(Token = "0x40006E8")]
		private const string _TopMarginKey = "T"; //Field offset: 0x0
		[Token(Token = "0x40006EA")]
		private const string _BottomMarginKey = "B"; //Field offset: 0x0
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x40006E5")]
		public int LeftMargin; //Field offset: 0x10
		[FieldOffset(Offset = "0x14")]
		[Token(Token = "0x40006E7")]
		public int RightMargin; //Field offset: 0x14
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x40006E9")]
		public int TopMargin; //Field offset: 0x18
		[FieldOffset(Offset = "0x1C")]
		[Token(Token = "0x40006EB")]
		public int BottomMargin; //Field offset: 0x1C

		[Address(RVA = "0x12C5130", Offset = "0x12C5130", Length = "0x8")]
		[Token(Token = "0x6000626")]
		public SafeAreaData() { }

		[Address(RVA = "0x12C57A4", Offset = "0x12C57A4", Length = "0xC8")]
		[Token(Token = "0x6000622")]
		public virtual bool Equals(object inObject) { }

		[Address(RVA = "0x12C53D4", Offset = "0x12C53D4", Length = "0x11C")]
		[Token(Token = "0x6000620")]
		public override bool FromDict(Dictionary<String, Object> inDict) { }

		[Address(RVA = "0x12C586C", Offset = "0x12C586C", Length = "0x1C")]
		[Token(Token = "0x6000623")]
		public virtual int GetHashCode() { }

		[Address(RVA = "0x12C5888", Offset = "0x12C5888", Length = "0x64")]
		[Token(Token = "0x6000624")]
		public static bool op_Equality(SafeAreaData inLeftSafeAreaData, SafeAreaData inRightSafeAreaData) { }

		[Address(RVA = "0x12C58EC", Offset = "0x12C58EC", Length = "0x18")]
		[Token(Token = "0x6000625")]
		public static bool op_Inequality(SafeAreaData inLeftSafeAreaData, SafeAreaData inRightSafeAreaData) { }

		[Address(RVA = "0x12C5634", Offset = "0x12C5634", Length = "0x170")]
		[Token(Token = "0x6000621")]
		public override Dictionary<String, Object> ToDict() { }

	}

	[Token(Token = "0x40006DD")]
	public const string PromoKeyword = "DeviceConfig"; //Field offset: 0x0
	[Token(Token = "0x40006DE")]
	private const string _ConfigurationNameKey = "CN"; //Field offset: 0x0
	[Token(Token = "0x40006E0")]
	private const string _SafeAreaKey = "SA"; //Field offset: 0x0
	[Token(Token = "0x40006E2")]
	private const string _UpsideDownSafeAreaKey = "UDSA"; //Field offset: 0x0
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40006DF")]
	public string ConfigurationName; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40006E1")]
	public SafeAreaData SafeArea; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x40006E3")]
	public SafeAreaData UpsideDownSafeArea; //Field offset: 0x38

	[Token(Token = "0x170000F8")]
	public virtual int ErrorCode
	{
		[Address(RVA = "0x12C520C", Offset = "0x12C520C", Length = "0x8")]
		[Token(Token = "0x600061D")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000F5")]
	public virtual int Index
	{
		[Address(RVA = "0x12C51BC", Offset = "0x12C51BC", Length = "0x8")]
		[Token(Token = "0x600061A")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000F6")]
	public virtual string Keyword
	{
		[Address(RVA = "0x12C51C4", Offset = "0x12C51C4", Length = "0x40")]
		[Token(Token = "0x600061B")]
		 get { } //Length: 64
	}

	[Token(Token = "0x170000F7")]
	public virtual string RemoteConfigKey
	{
		[Address(RVA = "0x12C5204", Offset = "0x12C5204", Length = "0x8")]
		[Token(Token = "0x600061C")]
		 get { } //Length: 8
	}

	[Address(RVA = "0x12C50C8", Offset = "0x12C50C8", Length = "0x68")]
	[Token(Token = "0x6000618")]
	public DeviceConfigData() { }

	[Address(RVA = "0x12C5138", Offset = "0x12C5138", Length = "0x84")]
	[Token(Token = "0x6000619")]
	public DeviceConfigData(string inJSONString) { }

	[Address(RVA = "0x12C5214", Offset = "0x12C5214", Length = "0x1C0")]
	[Token(Token = "0x600061E")]
	public virtual bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12C520C", Offset = "0x12C520C", Length = "0x8")]
	[Token(Token = "0x600061D")]
	public virtual int get_ErrorCode() { }

	[Address(RVA = "0x12C51BC", Offset = "0x12C51BC", Length = "0x8")]
	[Token(Token = "0x600061A")]
	public virtual int get_Index() { }

	[Address(RVA = "0x12C51C4", Offset = "0x12C51C4", Length = "0x40")]
	[Token(Token = "0x600061B")]
	public virtual string get_Keyword() { }

	[Address(RVA = "0x12C5204", Offset = "0x12C5204", Length = "0x8")]
	[Token(Token = "0x600061C")]
	public virtual string get_RemoteConfigKey() { }

	[Address(RVA = "0x12C54F0", Offset = "0x12C54F0", Length = "0x144")]
	[Token(Token = "0x600061F")]
	public virtual Dictionary<String, Object> ToDict() { }

}

