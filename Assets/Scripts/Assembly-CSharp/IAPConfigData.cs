using System.Collections.Generic;

public class IAPConfigData : ConfigData
{
	public const string PromoKeyword = "IAP";

	private const string _TempleCoinsProductAmountAKey = "CPA";

	private const int _TempleCoinsProductAmountADefault = 2500;

	public int TempleCoinsProductAmountA;

	private const string _TempleCoinsProductAmountBKey = "CPB";

	private const int _TempleCoinsProductAmountBDefault = 25000;

	public int TempleCoinsProductAmountB;

	private const string _TempleCoinsProductAmountCKey = "CPC";

	private const int _TempleCoinsProductAmountCDefault = 75000;

	public int TempleCoinsProductAmountC;

	private const string _TempleCoinsProductAmountDKey = "CPD";

	private const int _TempleCoinsProductAmountDDefault = 200000;

	public int TempleCoinsProductAmountD;

	private const string _FBLikeUsAmountKey = "FBLU";

	private const int _FBLikeUsAmountDefault = 250;

	public int FBLikeUsAmount;

	private const string _TWFollowUsAmountKey = "TWFU";

	private const int _TWFollowUsAmountDefault = 250;

	public int TWFollowUsAmount;

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
