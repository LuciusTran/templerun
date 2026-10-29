using System.Collections.Generic;

public class ABTestSystemConfigData : ConfigData
{
	public const string PromoKeyword = "ABTestsConfig";

	private const string _EnabledKey = "E";

	public bool IsEnabled;

	private const string _ForceUserIdKey = "FU";

	public int ForceUserId;

	public override int Index => 0;

	public override string Keyword => null;

	public override int ErrorCode => 0;

	public ABTestSystemConfigData()
	{
	}

	public ABTestSystemConfigData(string inJSONString)
	{
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
