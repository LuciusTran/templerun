//Type is in global namespace

[Token(Token = "0x20000A0")]
public class TRAnalyticsHelper
{
	[Token(Token = "0x4000516")]
	public const string AdNetworkKeyName = "Network"; //Field offset: 0x0
	[Token(Token = "0x400052C")]
	private const string _ScoreMultiplier31To40Bin = "31-40x"; //Field offset: 0x0
	[Token(Token = "0x400052D")]
	private const string _ScoreMultiplier41To50Bin = "41-50x"; //Field offset: 0x0
	[Token(Token = "0x400052E")]
	private const string _ScoreMultiplier51To60Bin = "51-60x"; //Field offset: 0x0
	[Token(Token = "0x400052F")]
	private const string _ScoreMultiplier61To65Bin = "61-65x"; //Field offset: 0x0
	[Token(Token = "0x4000530")]
	private const string _ScoreMultiplier66To67Bin = "66-67x"; //Field offset: 0x0
	[Token(Token = "0x4000531")]
	private const string _ScoreMultiplier68PlusBin = "68x+"; //Field offset: 0x0
	[Token(Token = "0x4000532")]
	private const string _LifetimeRunsInvalidBin = "x"; //Field offset: 0x0
	[Token(Token = "0x400052B")]
	private const string _ScoreMultiplier21To30Bin = "21-30x"; //Field offset: 0x0
	[Token(Token = "0x4000533")]
	private const string _LifetimeRuns0to9Bin = "0-9"; //Field offset: 0x0
	[Token(Token = "0x4000535")]
	private const string _LifetimeRuns25to49Bin = "25-49"; //Field offset: 0x0
	[Token(Token = "0x4000536")]
	private const string _LifetimeRuns50to99Bin = "50-99"; //Field offset: 0x0
	[Token(Token = "0x4000537")]
	private const string _LifetimeRuns100to249Bin = "100-249"; //Field offset: 0x0
	[Token(Token = "0x4000538")]
	private const string _LifetimeRuns250to499Bin = "250-499"; //Field offset: 0x0
	[Token(Token = "0x4000539")]
	private const string _LifetimeRuns500to999Bin = "500-999"; //Field offset: 0x0
	[Token(Token = "0x400053A")]
	private const string _LifetimeRuns1000to2499Bin = "1000-2499"; //Field offset: 0x0
	[Token(Token = "0x400053B")]
	private const string _LifetimeRuns2500to4999Bin = "2500-4999"; //Field offset: 0x0
	[Token(Token = "0x4000534")]
	private const string _LifetimeRuns10to24Bin = "10-24"; //Field offset: 0x0
	[Token(Token = "0x400052A")]
	private const string _ScoreMultiplier16To20Bin = "16-20x"; //Field offset: 0x0
	[Token(Token = "0x4000529")]
	private const string _ScoreMultiplier13To15Bin = "13-15x"; //Field offset: 0x0
	[Token(Token = "0x4000528")]
	private const string _ScoreMultiplier11To12Bin = "11-12x"; //Field offset: 0x0
	[Token(Token = "0x4000517")]
	public const string LocationKeyName = "Location"; //Field offset: 0x0
	[Token(Token = "0x4000518")]
	public const string NetworkStatusKeyName = "NetworkStatus"; //Field offset: 0x0
	[Token(Token = "0x4000519")]
	public const string ErrorKeyName = "Error"; //Field offset: 0x0
	[Token(Token = "0x400051A")]
	private const string TrueString = "True"; //Field offset: 0x0
	[Token(Token = "0x400051B")]
	private const string FalseString = "False"; //Field offset: 0x0
	[Token(Token = "0x400051C")]
	public const int MaxAttribLength = 100; //Field offset: 0x0
	[Token(Token = "0x400051D")]
	private const string _DayInvalidBin = "dxx"; //Field offset: 0x0
	[Token(Token = "0x400051E")]
	private const string _Day0Bin = "d00"; //Field offset: 0x0
	[Token(Token = "0x400051F")]
	private const string _Day1To2Bin = "d01-d02"; //Field offset: 0x0
	[Token(Token = "0x4000520")]
	private const string _Day3To7Bin = "d03-d07"; //Field offset: 0x0
	[Token(Token = "0x4000521")]
	private const string _Day8To14Bin = "d08-d14"; //Field offset: 0x0
	[Token(Token = "0x4000522")]
	private const string _Day15To30Bin = "d15-d30"; //Field offset: 0x0
	[Token(Token = "0x4000523")]
	private const string _Day31To60Bin = "d31-d60"; //Field offset: 0x0
	[Token(Token = "0x4000524")]
	private const string _Day61To90Bin = "d61-d90"; //Field offset: 0x0
	[Token(Token = "0x4000525")]
	private const string _Day91PlusBin = "d91+"; //Field offset: 0x0
	[Token(Token = "0x4000526")]
	private const string _ScoreMultiplierInvalidBin = "xx"; //Field offset: 0x0
	[Token(Token = "0x4000527")]
	private const string _ScoreMultiplier10Bin = "10x"; //Field offset: 0x0
	[Token(Token = "0x400053C")]
	private const string _LifetimeRuns5000to9999Bin = "5000-9999"; //Field offset: 0x0
	[Token(Token = "0x400053D")]
	private const string _LifetimeRuns10000PlusBin = "10000+"; //Field offset: 0x0

	[Address(RVA = "0x12B9CF0", Offset = "0x12B9CF0", Length = "0x8")]
	[Token(Token = "0x6000511")]
	public TRAnalyticsHelper() { }

	[Address(RVA = "0x12B8938", Offset = "0x12B8938", Length = "0x68")]
	[Token(Token = "0x60004FE")]
	public static string BoolAsString(bool inBool) { }

	[Address(RVA = "0x12B90E8", Offset = "0x12B90E8", Length = "0xEC")]
	[Token(Token = "0x6000506")]
	public static string GetCharacterName(int inCharacterId) { }

	[Address(RVA = "0x12B89A0", Offset = "0x12B89A0", Length = "0x138")]
	[Token(Token = "0x60004FF")]
	public static string GetDaysSinceInstallBinned(int inDays) { }

	[Address(RVA = "0x12B8EB0", Offset = "0x12B8EB0", Length = "0xCC")]
	[Token(Token = "0x6000503")]
	public static string GetDeathTypeName(DeathTypes inDeathType) { }

	[Address(RVA = "0x12B8C74", Offset = "0x12B8C74", Length = "0x1A4")]
	[Token(Token = "0x6000501")]
	public static string GetLifetimeRunsBinned(int inLifetimeRuns) { }

	[Address(RVA = "0x12B91D4", Offset = "0x12B91D4", Length = "0x58")]
	[Token(Token = "0x6000507")]
	public static string GetNetworkStatus() { }

	[Address(RVA = "0x12B8F7C", Offset = "0x12B8F7C", Length = "0x8C")]
	[Token(Token = "0x6000504")]
	public static string GetPathLevelName(PathLevel inPathLevel) { }

	[Address(RVA = "0x12B9008", Offset = "0x12B9008", Length = "0xE0")]
	[Token(Token = "0x6000505")]
	public static string GetPathTypeName(PathType inPathType) { }

	[Address(RVA = "0x12B8AD8", Offset = "0x12B8AD8", Length = "0x19C")]
	[Token(Token = "0x6000500")]
	public static string GetScoreMultiplierBinned(int inScoreMultiplier) { }

	[Address(RVA = "0x12B8E18", Offset = "0x12B8E18", Length = "0x98")]
	[Token(Token = "0x6000502")]
	public static string GetTutorialSectionName(int inTutorialId) { }

	[Address(RVA = "0x12B970C", Offset = "0x12B970C", Length = "0x270")]
	[Token(Token = "0x600050A")]
	public static void LogBannerAd(AdService inService, string inEventName, string inLocation, string inError = "") { }

	[Address(RVA = "0x12B922C", Offset = "0x12B922C", Length = "0x270")]
	[Token(Token = "0x6000508")]
	public static void LogInterstitialAd(AdService inService, string inEventName, string inLocation, string inError = "") { }

	[Address(RVA = "0x12B949C", Offset = "0x12B949C", Length = "0x270")]
	[Token(Token = "0x6000509")]
	public static void LogVideoAd(AdService inService, string inEventName, string inLocation, string inError = "") { }

	[Address(RVA = "0x12B9C14", Offset = "0x12B9C14", Length = "0x54")]
	[Token(Token = "0x600050F")]
	public static void MarkPurchasedIAPAsTrue() { }

	[Address(RVA = "0x12B997C", Offset = "0x12B997C", Length = "0x34")]
	[Token(Token = "0x600050B")]
	public static string SanitizeEventAttributeLength(string inParameter) { }

	[Address(RVA = "0x12B99B0", Offset = "0x12B99B0", Length = "0x12C")]
	[Token(Token = "0x600050C")]
	public static void UpdateDaysSinceInstall(AppInstallStatus inAppInstallStatus) { }

	[Address(RVA = "0x12B9C68", Offset = "0x12B9C68", Length = "0x88")]
	[Token(Token = "0x6000510")]
	public static void UpdateImangiABTestID() { }

	[Address(RVA = "0x12B9B78", Offset = "0x12B9B78", Length = "0x9C")]
	[Token(Token = "0x600050E")]
	public static void UpdateLifetimeRuns(int inLifetimeRuns) { }

	[Address(RVA = "0x12B9ADC", Offset = "0x12B9ADC", Length = "0x9C")]
	[Token(Token = "0x600050D")]
	public static void UpdateScoreMultiplier(int inScoreMultiplier) { }

}

