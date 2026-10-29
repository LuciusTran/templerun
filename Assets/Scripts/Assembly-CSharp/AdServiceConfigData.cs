using System.Collections.Generic;
using Imangi.Ad;

public class AdServiceConfigData : ConfigData
{
	public const string PromoKeyword = "AdService";

	public ImangiAdServiceInfo AdServiceInfo;

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
