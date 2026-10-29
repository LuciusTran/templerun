namespace Imangi.Ad;

[Token(Token = "0x20002AA")]
public class AdServiceInitInfo
{
	[Token(Token = "0x40013FB")]
	protected static string _DefaultServiceInitInfoName; //Field offset: 0x0
	[Token(Token = "0x40013FC")]
	protected static string _ServiceInitInfoName; //Field offset: 0x8
	[Token(Token = "0x40013FD")]
	protected static string _ServiceInitInfoFilename; //Field offset: 0x10
	[Token(Token = "0x40013FE")]
	protected static string _ServiceInitInfoAssetPath; //Field offset: 0x18
	[Token(Token = "0x40013FF")]
	protected static string _ServiceInitInfoFullPath; //Field offset: 0x20
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x4001400")]
	private Dictionary<AdServicePlatform, AdPlatformInitializationInfo> PlatformInfo; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x4001401")]
	public List<String> AdSpaceNames; //Field offset: 0x18

	[Token(Token = "0x17000246")]
	protected static string ServiceInitInfoAssetPath
	{
		[Address(RVA = "0x127F970", Offset = "0x127F970", Length = "0x9C")]
		[Token(Token = "0x60014B2")]
		 get { } //Length: 156
	}

	[Token(Token = "0x17000245")]
	protected static string ServiceInitInfoFilename
	{
		[Address(RVA = "0x127F8B4", Offset = "0x127F8B4", Length = "0xBC")]
		[Token(Token = "0x60014B1")]
		 get { } //Length: 188
	}

	[Token(Token = "0x17000247")]
	protected static string ServiceInitInfoFullPath
	{
		[Address(RVA = "0x127FA0C", Offset = "0x127FA0C", Length = "0xBC")]
		[Token(Token = "0x60014B3")]
		 get { } //Length: 188
	}

	[Token(Token = "0x17000244")]
	public static string ServiceInitInfoName
	{
		[Address(RVA = "0x127F7B0", Offset = "0x127F7B0", Length = "0xA8")]
		[Token(Token = "0x60014AF")]
		 get { } //Length: 168
		[Address(RVA = "0x127F858", Offset = "0x127F858", Length = "0x5C")]
		[Token(Token = "0x60014B0")]
		 set { } //Length: 92
	}

	[Address(RVA = "0x128085C", Offset = "0x128085C", Length = "0x118")]
	[Token(Token = "0x60014BC")]
	private static AdServiceInitInfo() { }

	[Address(RVA = "0x127BD8C", Offset = "0x127BD8C", Length = "0xCC")]
	[Token(Token = "0x60014B4")]
	public AdServiceInitInfo() { }

	[Address(RVA = "0x127FCFC", Offset = "0x127FCFC", Length = "0xD4")]
	[Token(Token = "0x60014B5")]
	public AdServiceInitInfo(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12805B4", Offset = "0x12805B4", Length = "0x2A8")]
	[Token(Token = "0x60014BB")]
	public void Dump(string inIndentString, StringBuilder inDumpSB) { }

	[Address(RVA = "0x127FDD0", Offset = "0x127FDD0", Length = "0x568")]
	[Token(Token = "0x60014B8")]
	public void FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x127F970", Offset = "0x127F970", Length = "0x9C")]
	[Token(Token = "0x60014B2")]
	protected static string get_ServiceInitInfoAssetPath() { }

	[Address(RVA = "0x127F8B4", Offset = "0x127F8B4", Length = "0xBC")]
	[Token(Token = "0x60014B1")]
	protected static string get_ServiceInitInfoFilename() { }

	[Address(RVA = "0x127FA0C", Offset = "0x127FA0C", Length = "0xBC")]
	[Token(Token = "0x60014B3")]
	protected static string get_ServiceInitInfoFullPath() { }

	[Address(RVA = "0x127F7B0", Offset = "0x127F7B0", Length = "0xA8")]
	[Token(Token = "0x60014AF")]
	public static string get_ServiceInitInfoName() { }

	[Address(RVA = "0x127BA10", Offset = "0x127BA10", Length = "0x124")]
	[Token(Token = "0x60014B6")]
	public AdPlatformInitializationInfo GetInitInfoForPlatform(AdServicePlatform inPlatform, bool inCreateIfNotFound = false) { }

	[Address(RVA = "0x127FAC8", Offset = "0x127FAC8", Length = "0x234")]
	[Token(Token = "0x60014BA")]
	public bool LoadFromFile() { }

	[Address(RVA = "0x12805AC", Offset = "0x12805AC", Length = "0x8")]
	[Token(Token = "0x60014B9")]
	public bool SaveToFile() { }

	[Address(RVA = "0x127F858", Offset = "0x127F858", Length = "0x5C")]
	[Token(Token = "0x60014B0")]
	public static void set_ServiceInitInfoName(string value) { }

	[Address(RVA = "0x1280338", Offset = "0x1280338", Length = "0x274")]
	[Token(Token = "0x60014B7")]
	public Dictionary<String, Object> ToDict() { }

}

