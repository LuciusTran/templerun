using System;
using System.Collections.Generic;
using Imangi.Utilities;

public class InstallTrackingData : IParsableJSONListElement
{
	private const string _LogChannel = "InstallTrackingData";

	public const int CurrentFormatVersion = 1;

	public const string VersionKey = "V";

	public const string IsFirstInstallTimestampValidKey = "ISFITV";

	public const string FirstInstallTimestampKey = "FIT";

	public const string LastPlayedTimestampKey = "LPT";

	public const string LastUpgradeTimestampKey = "LUT";

	public bool IsFirstInstallTimestampValid;

	public DateTimeOffset FirstInstallTimestamp;

	public DateTimeOffset LastPlayedTimestamp;

	public DateTimeOffset LastUpgradeTimestamp;

	public InstallTrackingData()
	{
	}

	public InstallTrackingData(DateTimeOffset inInstallTimestamp, bool inIsFirstInstallValid = true)
	{
	}

	public InstallTrackingData(InstallTrackingData inToCopy)
	{
	}

	private static void AddRoundTripDateTimeOffset(ref Dictionary<string, object> inDict, string inKey, in DateTimeOffset inValue)
	{
	}

	private static bool ReadRoundTripDateTimeOffset(Dictionary<string, object> inDict, string inKey, ref DateTimeOffset refValue)
	{
		return false;
	}

	public bool FromDict(Dictionary<string, object> inDict)
	{
		return false;
	}

	public Dictionary<string, object> ToDict()
	{
		return null;
	}

	public static InstallTrackingData CreateTrackingDataFromJsonString(string inDataString)
	{
		return null;
	}
}
