//Type is in global namespace

[Token(Token = "0x200009F")]
public class TRAnalytics
{
	[Token(Token = "0x400050B")]
	public static string LogChannel; //Field offset: 0x0
	[Token(Token = "0x400050C")]
	private const string UserIDKeyForAnalytics = "deviceID"; //Field offset: 0x0
	[Token(Token = "0x4000512")]
	public const int TestUserIdRangeMin = 0; //Field offset: 0x0
	[Token(Token = "0x4000513")]
	public const int TestUserIdRangeMax = 999; //Field offset: 0x0
	[Token(Token = "0x400050D")]
	protected static bool VerboseLogging; //Field offset: 0x8
	[Token(Token = "0x400050E")]
	protected static bool _CanTrack; //Field offset: 0x9
	[Token(Token = "0x400050F")]
	protected static bool InitializedAnalytics; //Field offset: 0xA
	[Token(Token = "0x4000510")]
	public static TRUserAttributes User; //Field offset: 0x10
	[Token(Token = "0x4000511")]
	protected static List<Int32> _UserABTestIds; //Field offset: 0x18
	[Token(Token = "0x4000514")]
	private static ABTestSystemConfigData _ABTestsConfig; //Field offset: 0x20
	[Token(Token = "0x4000515")]
	private static Dictionary<Int32, ABTestConfigData> _ABTests; //Field offset: 0x28

	[Token(Token = "0x170000BB")]
	public static ABTestSystemConfigData ABTestsConfig
	{
		[Address(RVA = "0x12B81AC", Offset = "0x12B81AC", Length = "0x58")]
		[Token(Token = "0x60004F7")]
		 get { } //Length: 88
	}

	[Token(Token = "0x170000B9")]
	public static bool Enabled
	{
		[Address(RVA = "0x12B6684", Offset = "0x12B6684", Length = "0x58")]
		[Token(Token = "0x60004E1")]
		 get { } //Length: 88
	}

	[Token(Token = "0x170000BA")]
	public static int UserABTestId
	{
		[Address(RVA = "0x12B751C", Offset = "0x12B751C", Length = "0x318")]
		[Token(Token = "0x60004F0")]
		 get { } //Length: 792
	}

	[Address(RVA = "0x12B8794", Offset = "0x12B8794", Length = "0x18C")]
	[Token(Token = "0x60004FD")]
	private static TRAnalytics() { }

	[Address(RVA = "0x12B878C", Offset = "0x12B878C", Length = "0x8")]
	[Token(Token = "0x60004FC")]
	public TRAnalytics() { }

	[Address(RVA = "0x12B6CE0", Offset = "0x12B6CE0", Length = "0xC0")]
	[Token(Token = "0x60004E5")]
	private static void CheckServiceEnabled() { }

	[Address(RVA = "0x12B7834", Offset = "0x12B7834", Length = "0x40")]
	[Token(Token = "0x60004F6")]
	public static int GenerateUserABGroupID() { }

	[Address(RVA = "0x12B81AC", Offset = "0x12B81AC", Length = "0x58")]
	[Token(Token = "0x60004F7")]
	public static ABTestSystemConfigData get_ABTestsConfig() { }

	[Address(RVA = "0x12B6684", Offset = "0x12B6684", Length = "0x58")]
	[Token(Token = "0x60004E1")]
	public static bool get_Enabled() { }

	[Address(RVA = "0x12B751C", Offset = "0x12B751C", Length = "0x318")]
	[Token(Token = "0x60004F0")]
	public static int get_UserABTestId() { }

	[Address(RVA = "0x12B6A68", Offset = "0x12B6A68", Length = "0x8")]
	[Token(Token = "0x60004E6")]
	public static string GetID() { }

	[Address(RVA = "0x12B7D94", Offset = "0x12B7D94", Length = "0x1D0")]
	[Token(Token = "0x60004F4")]
	public static Dictionary<Int32, Int32> GetTestAndGroupIDsForUser() { }

	[Address(RVA = "0x12B7D48", Offset = "0x12B7D48", Length = "0x4C")]
	[Token(Token = "0x60004F2")]
	public static int GetUserABTestId() { }

	[Address(RVA = "0x12B66DC", Offset = "0x12B66DC", Length = "0x198")]
	[Token(Token = "0x60004E2")]
	public static void Initialize() { }

	[Address(RVA = "0x12B8204", Offset = "0x12B8204", Length = "0x218")]
	[Token(Token = "0x60004F8")]
	public static void InitializeConfig(PromoFile inPromoFile) { }

	[Address(RVA = "0x12B7C3C", Offset = "0x12B7C3C", Length = "0xEC")]
	[Token(Token = "0x60004F3")]
	public static bool IsABTestsEnabled() { }

	[Address(RVA = "0x12B6E24", Offset = "0x12B6E24", Length = "0x54")]
	[Token(Token = "0x60004EE")]
	public static bool IsEventEnabled(string inEventId) { }

	[Address(RVA = "0x12B7F64", Offset = "0x12B7F64", Length = "0x218")]
	[Token(Token = "0x60004F5")]
	public static bool IsUserInABTestGroup(int inTestID, int inGroupID) { }

	[Address(RVA = "0x12B6E78", Offset = "0x12B6E78", Length = "0x60")]
	[Token(Token = "0x60004ED")]
	private static void LogDynamicAttributes() { }

	[Address(RVA = "0x12B6DA0", Offset = "0x12B6DA0", Length = "0x84")]
	[Token(Token = "0x60004E7")]
	public static void LogEvent(string inName) { }

	[Address(RVA = "0x12B7164", Offset = "0x12B7164", Length = "0x98")]
	[Token(Token = "0x60004EC")]
	public static void LogEvent(string inName, EventParameter[] inEventParameters) { }

	[Address(RVA = "0x12B70C4", Offset = "0x12B70C4", Length = "0xA0")]
	[Token(Token = "0x60004EB")]
	public static void LogEvent(string inName, string inParameterName, int inParameterValue) { }

	[Address(RVA = "0x12B7024", Offset = "0x12B7024", Length = "0xA0")]
	[Token(Token = "0x60004EA")]
	public static void LogEvent(string inName, string inParameterName, long inParameterValue) { }

	[Address(RVA = "0x12B6F78", Offset = "0x12B6F78", Length = "0xAC")]
	[Token(Token = "0x60004E9")]
	public static void LogEvent(string inName, string inParameterName, double inParameterValue) { }

	[Address(RVA = "0x12B6ED8", Offset = "0x12B6ED8", Length = "0xA0")]
	[Token(Token = "0x60004E8")]
	public static void LogEvent(string inName, string inParameterName, string inParameterValue) { }

	[Address(RVA = "0x12B7874", Offset = "0x12B7874", Length = "0x3C8")]
	[Token(Token = "0x60004F1")]
	public static void LogUserABTests() { }

	[Address(RVA = "0x12B6BDC", Offset = "0x12B6BDC", Length = "0x104")]
	[Token(Token = "0x60004E4")]
	public static void OnPromoLoadComplete() { }

	[Address(RVA = "0x12B84E0", Offset = "0x12B84E0", Length = "0x1DC")]
	[Token(Token = "0x60004FA")]
	public static bool ProcessABTestConfigData(ConfigData inConfigData) { }

	[Address(RVA = "0x12B841C", Offset = "0x12B841C", Length = "0xC4")]
	[Token(Token = "0x60004F9")]
	public static bool ProcessABTestsGlobalConfigData(ConfigData inConfigData) { }

	[Address(RVA = "0x12B86D4", Offset = "0x12B86D4", Length = "0xB8")]
	[Token(Token = "0x60004FB")]
	public static bool ProcessAnaylticEventsConfigData(ConfigData inConfigData) { }

	[Address(RVA = "0x12B7448", Offset = "0x12B7448", Length = "0xD4")]
	[Token(Token = "0x60004EF")]
	private static void SetEventsState(List<String> inEventList, bool inEnabledState) { }

	[Address(RVA = "0x12B6A70", Offset = "0x12B6A70", Length = "0xE0")]
	[Token(Token = "0x60004E3")]
	private static void SetUserAttributes(ImangiLocaleInfo inLocale) { }

}

