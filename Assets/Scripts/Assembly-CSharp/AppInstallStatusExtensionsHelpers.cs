using System;

public static class AppInstallStatusExtensionsHelpers
{
	private const string _PlayerPrefsSaveKey = "AppInstallStatusData";

	public static bool InitializeFromPlayerPrefsStorage(this AppInstallStatus inAppInstallStatus, DateTimeOffset inLaunchTime, bool inIsNewInstall, bool inIsNewUpdate)
	{
		return false;
	}

	public static bool SaveCurrentLaunchTrackingDatToPlayerPrefsStorage(this AppInstallStatus inAppInstallStatus)
	{
		return false;
	}
}
