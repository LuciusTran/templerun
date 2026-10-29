using System.Collections.Generic;

public class ReactivationLocalNotificationsConfigData : ConfigData
{
	public const string LocalNotificationKeyWord = "RLN";

	public const string _ReactivationNotificationRewardsKey = "RRK";

	private int _Index;

	public static int amountOfRewards;

	public RewardTypes[] rewardTypes;

	public int[] rewardAfterDays;

	public int[] rewardCoinsAmounts;

	public string[] messages;

	public List<ReactivationRewardData> rewardsList;

	public override int Index => 0;

	public override string Keyword => null;

	public int AmountOfRewards => 0;

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
