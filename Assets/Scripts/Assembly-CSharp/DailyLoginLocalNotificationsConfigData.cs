using System.Collections.Generic;

public class DailyLoginLocalNotificationsConfigData : ConfigData
{
	public const string LocalNotificationKeyWord = "DLLN";

	public const string _LocalNotificationMessageKey = "M";

	public const string _LocalNotificationPopupNuberOfRunKey = "LNRK";

	private int _Index;

	public string[] LocalNotificationMessage;

	public int LocalNotificationPopupNuberOfRun;

	public override int Index => 0;

	public override string Keyword => null;

	public override string RemoteConfigKey => null;

	public override int ErrorCode => 0;

	protected override bool Deserialize_Internal(string[] inWords)
	{
		return false;
	}

	public void SetIndex(int inIndex)
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
