using System.Collections.Generic;

public class PlayerConfigData : ConfigData
{
	public const string PromoKeyword = "Runner";

	private const string _StartRunVelocityKey = "SRV";

	private const float _StartRunVelocityDefault = 100f;

	public float StartRunVelocity;

	private const string _MaxRunVelocityKey = "MRV";

	private const float _MaxRunVelocityDefault = 210f;

	public float MaxRunVelocity;

	private const string _StumbleSlowDownPercentKey = "SSDP";

	private const float _StumbleSlowDownPercentDefault = 0.85f;

	public float StumbleSlowDownPercent;

	private const string _ResurrectionSlowDownPercentKey = "RSDP";

	private const float _ResurrectionSlowDownPercentDefault = 0.85f;

	public float ResurrectionSlowDownPercent;

	private const string _ResurrectionBoostDistanceKey = "RBD";

	private const int _ResurrectionBoostDistanceDefault = 150;

	public int ResurrectionBoostDistance;

	private const string _AccCurveThresholdsKey = "ACCPTS";

	public List<int> AccCurveThresholds;

	private const string _AccCurveForcesKey = "ACCFCS";

	public List<int> AccCurveForces;

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
