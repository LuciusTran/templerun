using System;

public class AppInstallStatus
{
	private const string _PlayerPrefsSaveKey = "AppInstallStatusData";

	private const string _LogChannel = "AppInstallStatus";

	private bool _Initialized;

	private bool _IsFirstInstall;

	private bool _IsNewUpdate;

	private InstallTrackingData _PreviousInstallTrackingData;

	private bool _SetPreviousInstallTrackingData;

	private InstallTrackingData _CurrentLaunchInstallTrackingData;

	public bool IsInitialized => false;

	public InstallTrackingData PreviousLaunchInstallTrackingData => null;

	public InstallTrackingData CurrentLaunchInstallTrackingData => null;

	public bool Initialize(InstallTrackingData inPreviousInstallData, DateTimeOffset inLaunchTime, bool inIsNewInstall, bool inIsNewUpdate)
	{
		return false;
	}

	public bool SetPreviousInstallSaveData(InstallTrackingData inPreviousInstallData)
	{
		return false;
	}

	public bool UpdateInstallDataForThisLaunch(DateTimeOffset inLaunchTime)
	{
		return false;
	}
}
