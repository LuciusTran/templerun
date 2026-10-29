using System.Collections.Generic;

public class RewardData_ConfigData : ConfigData
{
	public const string RewardDataKeyWord = "RewardData";

	private int _Index;

	public RewardTypes RewardType;

	public int RewardValue;

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
