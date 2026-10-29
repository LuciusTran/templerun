using System.Collections.Generic;
using Imangi.Utilities;

public class CMPConfigData : ConfigData
{
	public const string PromoKeyword = "CMP";

	public static string CrossPromoLogChannel;

	protected static readonly string GDPRConsentLocalesKey;

	public ImangiLocaleRequirements CMPLocales;

	public bool IsEnabled;

	public List<string> DefaultPhoneIDs;

	private const string _IndexDictKey = "ID";

	public override string Keyword => null;

	public override int ErrorCode => 0;

	public override int Index => 0;

	public override Dictionary<string, object> ToDict()
	{
		return null;
	}

	public override bool FromDict(Dictionary<string, object> inDict)
	{
		return false;
	}
}
