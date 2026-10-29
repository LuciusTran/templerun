using System;
using System.Collections.Generic;

public class CharacterGiveAwayConfigData : ConfigData
{
	public const string PromoKeyword = "CharacterGiveAway";

	private const string _CharacterGiveAwayEnabledKey = "E";

	private const string _CharcatersToGiveAwayKey = "CTGA";

	private const string _GiveAwayStartDateKey = "GASD";

	private const string _GiveAwayEndDateKey = "GAED";

	public DateTime GiveAwayStartDate;

	public DateTime GiveAwayEndDate;

	public bool Enabled;

	public static List<CharacterEnumConfigData> CharcatersToGiveAway;

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
