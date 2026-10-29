using System.Collections.Generic;

public class SaveMeConfigData : ConfigData
{
	public const string PromoKeyword = "SMRV";

	public const string MaxSaveMesAllowedKey = "MSMA";

	public const string SaveMeTimeoutKey = "SMTO";

	public const string DisplaySkipButtonKey = "DSB";

	public const string TitleTextKey = "TT";

	public const string WatchAdSpriteNameKey = "WASN";

	public const string CancelDialogSpriteNameKey = "CDSN";

	public const int MaxSaveMesAllowedDefault = -1;

	public const float SaveMeTimeoutDefault = 3f;

	public const bool DisplaySkipButtonDefault = true;

	public int MaxSaveMesAllowed;

	public float SaveMeTimeout;

	public bool DisplaySkipButton;

	public string TitleText;

	public string WatchAdSpriteName;

	public string CancelDialogSpriteName;

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
