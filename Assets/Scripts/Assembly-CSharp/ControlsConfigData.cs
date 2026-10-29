using System.Collections.Generic;

public class ControlsConfigData : ConfigData
{
	public const string PromoKeyword = "Controls";

	private const string _AllowFallOnCliffsKey = "FOC";

	public bool AllowFallOnCliffs;

	private const string _AllowFallOnNarrowsKey = "FON";

	public bool AllowFallOnNarrows;

	private const string _AllowSwipeStumbleDeathKey = "SSD";

	public bool AllowSwipeStumbleDeath;

	private const string _AllowSwipeToStrafeKey = "STS";

	public bool AllowSwipeToStrafe;

	private const string _AllowSwipeToSlamDownKey = "STSD";

	public bool AllowSwipeToSlamDown;

	private const string _AllowTiltToTurnKey = "TTT";

	public bool AllowTiltToTurn;

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
