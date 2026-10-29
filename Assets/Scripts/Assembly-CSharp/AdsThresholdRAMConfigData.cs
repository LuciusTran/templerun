using System.Collections.Generic;

public class AdsThresholdRAMConfigData : ConfigData
{
	public const string PromoKeyword = "AdsThresholdRAM";

	private const string _AdThresholdCheckEnabledKey = "E";

	private const string _MinimumRAM_Key = "MR";

	public bool AdThresholdCheckEnabled;

	public int MinimumRAM;

	public override int Index => 0;

	public override string Keyword => null;

	public override int ErrorCode => 0;

	public override Dictionary<string, object> ToDict()
	{
		return null;
	}

	public override bool FromDict(Dictionary<string, object> inDict)
	{
		return false;
	}
}
