using System.Collections.Generic;
using Imangi.Utilities;

public class ReactivationRewardData : IParsableJSONListElement
{
	private const string _RewardAfterDaysKey = "RADK";

	private const string _RewardTypesKey = "RTK";

	private const string _RewardCoinsAmountKey = "RCAK";

	private const string _MessageKey = "MK";

	public int rewardAfterDays;

	public RewardTypes rewardType;

	public int rewardCoinsAmount;

	public string message;

	public bool FromDict(Dictionary<string, object> inDict)
	{
		return false;
	}

	public Dictionary<string, object> ToDict()
	{
		return null;
	}
}
