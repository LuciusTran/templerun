using System.Collections.Generic;

public class DeepLinkingRewardsUrlPair_ConfigData : ConfigData
{
	public const string DeepLinkingRewardsUrlPairKeyWord = "DeepLinkingRewardsUrlPair";

	private int _Index;

	public string Parameter;

	public List<RewardData_ConfigData> Rewards;

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
