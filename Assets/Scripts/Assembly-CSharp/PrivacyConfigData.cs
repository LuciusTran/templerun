using System.Collections.Generic;
using Imangi.Privacy;

public class PrivacyConfigData : ConfigData
{
	public const string PromoKeyword = "PrivacyConfig";

	public ImangiPrivacyConfigInfo PrivacyConfigInfo;

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
