//Type is in global namespace

[Extension]
[Token(Token = "0x20000A6")]
public static class AppInstallStatusExtensionsHelpers
{
	[Token(Token = "0x4000568")]
	private const string _PlayerPrefsSaveKey = "AppInstallStatusData"; //Field offset: 0x0

	[Address(RVA = "0x12BAA10", Offset = "0x12BAA10", Length = "0xC4")]
	[Extension]
	[Token(Token = "0x6000529")]
	public static bool InitializeFromPlayerPrefsStorage(AppInstallStatus inAppInstallStatus, DateTimeOffset inLaunchTime, bool inIsNewInstall, bool inIsNewUpdate) { }

	[Address(RVA = "0x12BAAD4", Offset = "0x12BAAD4", Length = "0x84")]
	[Extension]
	[Token(Token = "0x600052A")]
	public static bool SaveCurrentLaunchTrackingDatToPlayerPrefsStorage(AppInstallStatus inAppInstallStatus) { }

}

