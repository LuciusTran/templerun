using System.Collections.Generic;

public class GlobalChallengesConfigData : ConfigData
{
	public class Tiers
	{
		public int milestoneVal;

		public RewardTypes rewardVal;

		public int amountToGive;

		public Tiers()
		{
		}

		public Tiers(int inMilestoneVal, RewardTypes inRewardVal, int inAmountToGive)
		{
		}
	}

	public class GC_Notifications
	{
		public string notificationText;

		public GC_Notifications()
		{
		}

		public GC_Notifications(string inText)
		{
		}
	}

	public const string GlobalChallengesKeyword = "GC";

	public const string _TierConditionsRewardsPairKey = "TCRP";

	public const string _StartDateKey = "SD";

	public const string _EndDateKey = "ED";

	public const string _FeatureEnabledKey = "FE";

	public const string _LocalizeLocalNotifications = "LLNOK";

	private int _Index;

	public bool FeatureEnabled;

	public bool LocalizeLocalNotifications;

	public GCTiers tierConditionsRewardPair;

	public List<Tiers> tiersList;

	public List<GC_Notifications> gc_NotificationsStart;

	public List<GC_Notifications> gc_NotificationsMid;

	public List<GC_Notifications> gc_NotificationEnd;

	public override int Index => 0;

	public override string Keyword => null;

	public override string RemoteConfigKey => null;

	public override int ErrorCode => 0;

	protected override bool Deserialize_Internal(string[] inWords)
	{
		return false;
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
