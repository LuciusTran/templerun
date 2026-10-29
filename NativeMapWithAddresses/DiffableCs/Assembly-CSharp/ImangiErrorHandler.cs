//Type is in global namespace

[Token(Token = "0x2000012")]
public static class ImangiErrorHandler
{
	[Token(Token = "0x400003D")]
	private const string _LogChannel = "ErrorHandler"; //Field offset: 0x0
	[Token(Token = "0x4000058")]
	public const int NetworkGenericErrors = 5000; //Field offset: 0x0
	[Token(Token = "0x4000059")]
	public const int NetworkGenericNetworkUnavailableError = 5001; //Field offset: 0x0
	[Token(Token = "0x400005A")]
	public const int StoreErrors = 6000; //Field offset: 0x0
	[Token(Token = "0x400005B")]
	public const int StoreGenericErrors = 6000; //Field offset: 0x0
	[Token(Token = "0x400005C")]
	public const int StoreGenericLostConnectionError = 6001; //Field offset: 0x0
	[Token(Token = "0x400005D")]
	public const int StoreGenericUnhandledError = 6002; //Field offset: 0x0
	[Token(Token = "0x400005E")]
	public const int ReceiptValidationErrors = 6500; //Field offset: 0x0
	[Token(Token = "0x400005F")]
	public const int ReceiptValidationGenericErrors = 6500; //Field offset: 0x0
	[Token(Token = "0x4000060")]
	public const int SharingErrors = 9000; //Field offset: 0x0
	[Token(Token = "0x4000061")]
	public const int SharingGenericErrors = 9000; //Field offset: 0x0
	[Token(Token = "0x4000062")]
	public const int SharingNotSupported = 9001; //Field offset: 0x0
	[Token(Token = "0x4000063")]
	public const int SharingNoConsent = 9002; //Field offset: 0x0
	[Token(Token = "0x4000064")]
	public const int ShippedConfigErrors = 10000; //Field offset: 0x0
	[Token(Token = "0x4000065")]
	public const int ShippedConfigGenericErrors = 10000; //Field offset: 0x0
	[Token(Token = "0x4000066")]
	public const int ShippedConfigLoadFailedError = 10001; //Field offset: 0x0
	[Token(Token = "0x4000067")]
	public const int ShippedConfigWriteCacheUnhandledError = 10002; //Field offset: 0x0
	[Token(Token = "0x4000068")]
	public const int ShippedConfigCorruptError = 10003; //Field offset: 0x0
	[Token(Token = "0x4000069")]
	public const int ShippedConfigParseFailedError = 10004; //Field offset: 0x0
	[Token(Token = "0x400006A")]
	public const int ShippedConfigWriteCacheNotEnoughSpaceError = 10005; //Field offset: 0x0
	[Token(Token = "0x400006B")]
	public const int ShippedConfigWriteCachePermissionsError = 10006; //Field offset: 0x0
	[Token(Token = "0x400006C")]
	private static Dictionary<Int32, String> _ErrorCodeToString; //Field offset: 0x0
	[Token(Token = "0x4000057")]
	public const int NetworkErrors = 5000; //Field offset: 0x0
	[Token(Token = "0x4000055")]
	public const int GameServicesLeaderboardNotSupportedError = 3301; //Field offset: 0x0
	[Token(Token = "0x4000056")]
	public const int GameServicesLeaderboardsNoConsentError = 3302; //Field offset: 0x0
	[Token(Token = "0x4000048")]
	public const int BundleHUDDefaultLoadedAsNull = 2603; //Field offset: 0x0
	[Token(Token = "0x400003F")]
	public const int BundleGenericErrors = 2000; //Field offset: 0x0
	[Token(Token = "0x4000040")]
	public const int BundleGenericNotEnoughSpaceError = 2001; //Field offset: 0x0
	[Token(Token = "0x4000041")]
	public const int BundleGenericShippedCorruptError = 2002; //Field offset: 0x0
	[Token(Token = "0x4000042")]
	public const int BundleGenericDownloadCorruptError = 2003; //Field offset: 0x0
	[Token(Token = "0x4000043")]
	public const int BundleContentUpdateErrors = 2200; //Field offset: 0x0
	[Token(Token = "0x4000044")]
	public const int BundleContentUpdateDownloadFailedError = 2201; //Field offset: 0x0
	[Token(Token = "0x4000045")]
	public const int BundleHUDErrors = 2600; //Field offset: 0x0
	[Token(Token = "0x4000046")]
	public const int BundleHUDDefaultFailedToLoad = 2601; //Field offset: 0x0
	[Token(Token = "0x4000047")]
	public const int BundleHUDDefaultBundleInfoDoesNotExist = 2602; //Field offset: 0x0
	[Token(Token = "0x4000054")]
	public const int GameServicesLeaderboardErrors = 3300; //Field offset: 0x0
	[Token(Token = "0x4000049")]
	public const int GameServicesErrors = 3000; //Field offset: 0x0
	[Token(Token = "0x400004A")]
	public const int GameServicesGenericErrors = 3000; //Field offset: 0x0
	[Token(Token = "0x400004B")]
	public const int GameServicesGenericNotSupportedError = 3001; //Field offset: 0x0
	[Token(Token = "0x400004C")]
	public const int GameServicesGenericNotSignedInError = 3002; //Field offset: 0x0
	[Token(Token = "0x400004D")]
	public const int GameServicesNoConsentError = 3003; //Field offset: 0x0
	[Token(Token = "0x400004E")]
	public const int GameServicesFriendsErrors = 3100; //Field offset: 0x0
	[Token(Token = "0x400004F")]
	public const int GameServicesFriendsNotSupportedError = 3101; //Field offset: 0x0
	[Token(Token = "0x4000050")]
	public const int GameServicesFriendsNoConsentError = 3102; //Field offset: 0x0
	[Token(Token = "0x4000051")]
	public const int GameServicesAchievementsErrors = 3200; //Field offset: 0x0
	[Token(Token = "0x4000052")]
	public const int GameServicesAchievementsNotSupportedError = 3201; //Field offset: 0x0
	[Token(Token = "0x4000053")]
	public const int GameServicesAchievementsNoConsentError = 3202; //Field offset: 0x0
	[Token(Token = "0x400003E")]
	public const int BundleErrors = 2000; //Field offset: 0x0
	[Token(Token = "0x400006D")]
	private static string _ErrorCodesConfigName; //Field offset: 0x8
	[CompilerGenerated]
	[Token(Token = "0x400006E")]
	private static Action<Int32> ContinueErrorEvent; //Field offset: 0x10
	[CompilerGenerated]
	[Token(Token = "0x400006F")]
	private static Action<Int32> FatalErrorEvent; //Field offset: 0x18

	[Token(Token = "0x14000001")]
	public static event Action<Int32> ContinueErrorEvent
	{
		[Address(RVA = "0x11ECCA4", Offset = "0x11ECCA4", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x600003C")]
		 add { } //Length: 244
		[Address(RVA = "0x11ECD98", Offset = "0x11ECD98", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x600003D")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000002")]
	public static event Action<Int32> FatalErrorEvent
	{
		[Address(RVA = "0x11ECE8C", Offset = "0x11ECE8C", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x600003E")]
		 add { } //Length: 244
		[Address(RVA = "0x11ECF80", Offset = "0x11ECF80", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x600003F")]
		 remove { } //Length: 244
	}

	[Address(RVA = "0x11EE164", Offset = "0x11EE164", Length = "0xB0")]
	[Token(Token = "0x6000046")]
	private static ImangiErrorHandler() { }

	[Address(RVA = "0x11ECCA4", Offset = "0x11ECCA4", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x600003C")]
	public static void add_ContinueErrorEvent(Action<Int32> value) { }

	[Address(RVA = "0x11ECE8C", Offset = "0x11ECE8C", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x600003E")]
	public static void add_FatalErrorEvent(Action<Int32> value) { }

	[Address(RVA = "0x11EDA00", Offset = "0x11EDA00", Length = "0x28C")]
	[Token(Token = "0x6000043")]
	public static void ContinueError(int inCode) { }

	[Address(RVA = "0x11EDC8C", Offset = "0x11EDC8C", Length = "0x29C")]
	[Token(Token = "0x6000044")]
	public static void ContinueError(int inCode, string inStringArg) { }

	[Address(RVA = "0x11EDF28", Offset = "0x11EDF28", Length = "0x23C")]
	[Token(Token = "0x6000045")]
	public static void FatalError(int inCode) { }

	[Address(RVA = "0x11ED5B0", Offset = "0x11ED5B0", Length = "0x450")]
	[Token(Token = "0x6000042")]
	private static string GetErrorString(int inCode, List<Int32> inUsedCodes = null) { }

	[Address(RVA = "0x11ED4A0", Offset = "0x11ED4A0", Length = "0x110")]
	[Token(Token = "0x6000041")]
	private static string GetTitleString(int inCode) { }

	[Address(RVA = "0x11ED074", Offset = "0x11ED074", Length = "0x42C")]
	[Token(Token = "0x6000040")]
	public static void Initialize() { }

	[Address(RVA = "0x11ECD98", Offset = "0x11ECD98", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x600003D")]
	public static void remove_ContinueErrorEvent(Action<Int32> value) { }

	[Address(RVA = "0x11ECF80", Offset = "0x11ECF80", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x600003F")]
	public static void remove_FatalErrorEvent(Action<Int32> value) { }

}

