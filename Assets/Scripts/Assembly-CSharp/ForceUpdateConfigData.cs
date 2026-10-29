using System.Collections.Generic;

public class ForceUpdateConfigData : ConfigData
{
	public const string PromoKeyword = "ForceUpdate";

	public bool isEnabled;

	private const string _EnableKey = "E";

	private string _DefaultTitle;

	private string _DefaultDescription;

	private const string _DefaultAndroidAppURL = "https://play.google.com/store/apps/details?id=com.imangi.templerun";

	private const string _DefaultiOSAppURL = "https://apps.apple.com/us/app/temple-run/id420009108";

	private const string _Localize = "LOK";

	public bool Localize;

	public string Title;

	private const string _TitleDictKey = "T";

	public string Description;

	private const string _DescriptionDictKey = "D";

	public string AndroidAppURL;

	private const string _AndroidAppURLDictKey = "AURL";

	public string iOSAppURL;

	private const string _iOSAppURLDictKey = "IURL";

	public bool UseSystemAlert;

	private const string _UseSystemAlertDictKey = "USA";

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
