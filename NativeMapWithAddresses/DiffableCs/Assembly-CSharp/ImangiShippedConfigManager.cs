//Type is in global namespace

[Token(Token = "0x2000014")]
public static class ImangiShippedConfigManager
{
	[Token(Token = "0x4000070")]
	public const string LogChannel = "ImangiShippedConfigManager"; //Field offset: 0x0
	[Token(Token = "0x4000071")]
	private static Action _OnConfigUnpackComplete; //Field offset: 0x0
	[Token(Token = "0x4000072")]
	private static int _ErrorCode; //Field offset: 0x8

	[Token(Token = "0x17000002")]
	public static bool ErrorOccurred
	{
		[Address(RVA = "0x11EE474", Offset = "0x11EE474", Length = "0x50")]
		[Token(Token = "0x600004B")]
		 get { } //Length: 80
	}

	[Address(RVA = "0x11EF0C8", Offset = "0x11EF0C8", Length = "0xA4")]
	[Token(Token = "0x6000057")]
	public static void CheckForErrors() { }

	[Address(RVA = "0x11EE474", Offset = "0x11EE474", Length = "0x50")]
	[Token(Token = "0x600004B")]
	public static bool get_ErrorOccurred() { }

	[Address(RVA = "0x11EE950", Offset = "0x11EE950", Length = "0x9C")]
	[Token(Token = "0x6000052")]
	public static string GetApplicationPersistentDataPath(bool inForceInternalPath = false) { }

	[Address(RVA = "0x11EE544", Offset = "0x11EE544", Length = "0x118")]
	[Token(Token = "0x600004D")]
	public static string GetAssetPath() { }

	[Address(RVA = "0x11EE9EC", Offset = "0x11EE9EC", Length = "0x7C")]
	[Token(Token = "0x6000053")]
	private static string GetCacheDirectory() { }

	[Address(RVA = "0x11EE65C", Offset = "0x11EE65C", Length = "0xB8")]
	[Token(Token = "0x600004E")]
	public static string GetFilePath() { }

	[Address(RVA = "0x11EE898", Offset = "0x11EE898", Length = "0xB8")]
	[Token(Token = "0x6000051")]
	public static string GetFilePathForGameConfig() { }

	[Address(RVA = "0x11EE780", Offset = "0x11EE780", Length = "0x118")]
	[Token(Token = "0x6000050")]
	public static string GetGameConfigAssetPath() { }

	[Address(RVA = "0x11EE4C4", Offset = "0x11EE4C4", Length = "0x80")]
	[Token(Token = "0x600004C")]
	public static string GetResourcePath() { }

	[Address(RVA = "0x11EE714", Offset = "0x11EE714", Length = "0x6C")]
	[Token(Token = "0x600004F")]
	public static string GetResourcePathForGameConfig() { }

	[Address(RVA = "0x11EEF9C", Offset = "0x11EEF9C", Length = "0x12C")]
	[Token(Token = "0x6000056")]
	public static string LoadConfigFile(string inFileName) { }

	[Address(RVA = "0x11EEC58", Offset = "0x11EEC58", Length = "0x344")]
	[Token(Token = "0x6000055")]
	private static void OnConfigParseComplete(List<String> inConfigs) { }

	[Address(RVA = "0x11EEA68", Offset = "0x11EEA68", Length = "0x1F0")]
	[Token(Token = "0x6000054")]
	public static void UnpackConfigFiles(Action inOnConfigUnpackComplete) { }

}

