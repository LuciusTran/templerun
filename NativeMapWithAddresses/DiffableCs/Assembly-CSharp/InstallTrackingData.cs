//Type is in global namespace

[Token(Token = "0x20000A4")]
public class InstallTrackingData : IParsableJSONListElement
{
	[Token(Token = "0x4000555")]
	private const string _LogChannel = "InstallTrackingData"; //Field offset: 0x0
	[Token(Token = "0x4000556")]
	public const int CurrentFormatVersion = 1; //Field offset: 0x0
	[Token(Token = "0x4000557")]
	public const string VersionKey = "V"; //Field offset: 0x0
	[Token(Token = "0x4000558")]
	public const string IsFirstInstallTimestampValidKey = "ISFITV"; //Field offset: 0x0
	[Token(Token = "0x4000559")]
	public const string FirstInstallTimestampKey = "FIT"; //Field offset: 0x0
	[Token(Token = "0x400055A")]
	public const string LastPlayedTimestampKey = "LPT"; //Field offset: 0x0
	[Token(Token = "0x400055B")]
	public const string LastUpgradeTimestampKey = "LUT"; //Field offset: 0x0
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x400055C")]
	public bool IsFirstInstallTimestampValid; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x400055D")]
	public DateTimeOffset FirstInstallTimestamp; //Field offset: 0x18
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x400055E")]
	public DateTimeOffset LastPlayedTimestamp; //Field offset: 0x28
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x400055F")]
	public DateTimeOffset LastUpgradeTimestamp; //Field offset: 0x38

	[Address(RVA = "0x12BA064", Offset = "0x12BA064", Length = "0x8")]
	[Token(Token = "0x600051A")]
	public InstallTrackingData() { }

	[Address(RVA = "0x12BA06C", Offset = "0x12BA06C", Length = "0x44")]
	[Token(Token = "0x600051B")]
	public InstallTrackingData(DateTimeOffset inInstallTimestamp, bool inIsFirstInstallValid = true) { }

	[Address(RVA = "0x12BA0B0", Offset = "0x12BA0B0", Length = "0x4C")]
	[Token(Token = "0x600051C")]
	public InstallTrackingData(InstallTrackingData inToCopy) { }

	[Address(RVA = "0x12BA0FC", Offset = "0x12BA0FC", Length = "0xC8")]
	[Token(Token = "0x600051D")]
	private static void AddRoundTripDateTimeOffset(ref Dictionary<String, Object>& inDict, string inKey, in DateTimeOffset inValue) { }

	[Address(RVA = "0x12BA564", Offset = "0x12BA564", Length = "0x9C")]
	[Token(Token = "0x6000521")]
	public static InstallTrackingData CreateTrackingDataFromJsonString(string inDataString) { }

	[Address(RVA = "0x12BA294", Offset = "0x12BA294", Length = "0x158")]
	[Token(Token = "0x600051F")]
	public override bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12BA1C4", Offset = "0x12BA1C4", Length = "0xD0")]
	[Token(Token = "0x600051E")]
	private static bool ReadRoundTripDateTimeOffset(Dictionary<String, Object> inDict, string inKey, ref DateTimeOffset refValue) { }

	[Address(RVA = "0x12BA3EC", Offset = "0x12BA3EC", Length = "0x178")]
	[Token(Token = "0x6000520")]
	public override Dictionary<String, Object> ToDict() { }

}

