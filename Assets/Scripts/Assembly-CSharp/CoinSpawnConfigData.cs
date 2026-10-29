using System.Collections.Generic;

public class CoinSpawnConfigData : ConfigData
{
	public const string PromoKeyword = "CoinSpawn";

	private const string _DoubleValueCoinSpawnLvlKey = "D";

	public List<int> DoubleValueCoinSpawnLvl;

	private const string _TripleValueCoinSpawnLvlKey = "T";

	public List<int> TripleValueCoinSpawnLvl;

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
