using System.Collections.Generic;

public class AnalyticsEventsConfigData : ConfigData
{
	public const string PromoKeyword = "AnalyticEvents";

	private const string _EnabledListKey = "E";

	public List<string> EnabledList;

	private const string _DisabledListKey = "D";

	public List<string> DisabledList;

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
