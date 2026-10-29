using System.Collections.Generic;

public class PrivacyLanguageConfigData : ConfigData
{
	public const string PromoKeyword = "PrivacyLanguage";

	public const string VersionKey = "V";

	public int Version;

	public override int Index => 0;

	public override string Keyword => null;

	public override int ErrorCode => 0;

	public override bool FromDict(Dictionary<string, object> inDict)
	{
		return false;
	}

	public override Dictionary<string, object> ToDict()
	{
		return null;
	}
}
