using System.Collections.Generic;

public class DeepLinkingRewards_ConfigData : ConfigData
{
	public const string DeepLinkingRewardKeyWord = "DeepLinkingRewards";

	private int _Index;

	public List<DeepLinkingRewardsUrlPair_ConfigData> RewardUrlPairList;

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
