using System;
using System.Collections.Generic;
using Imangi.Privacy;
using Imangi.Utilities;

public class PrivacyRegulationInfoData : ConfigData
{
	public const string PromoKeyword = "PrivacyRegulationData";

	public ImangiPrivacyRegulationInfo PrivacyRegulationInfo;

	public override int Index => 0;

	public override string Keyword => null;

	public override int ErrorCode => 0;

	public bool IsValidForDevice(ImangiOfflineLocaleRequirements inConsentType)
	{
		return false;
	}

	public ImangiRegulationType GetRegulationType(ImangiOfflineLocaleRequirements inConsentType)
	{
		return ImangiRegulationType.GDPR;
	}

	public static bool IsDeviceTimeBetween(TimeSpan startOffset, TimeSpan endOffset)
	{
		return false;
	}

	public override Dictionary<string, object> ToDict()
	{
		return null;
	}

	public override bool FromDict(Dictionary<string, object> inDict)
	{
		return false;
	}
}
