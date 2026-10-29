using System.Collections.Generic;
using Imangi.Privacy;

public class PrivacyConfigFlowData : ConfigData
{
	public const string PromoKeyword = "PrivacyConfigFlow";

	public ImangiPrivacyConfigFlowInfo PrivacyConfigFlowInfo;

	public override int Index => 0;

	public override string Keyword => null;

	public override int ErrorCode => 0;

	public PrivacyConfigFlowData()
	{
	}

	public PrivacyConfigFlowData(string inJSONString)
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
