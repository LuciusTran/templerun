using System.Collections.Generic;

public class CharacterSelectConfigData : ConfigData
{
	public const string PromoKeyword = "CharacterSelect";

	private const string _CharacterSelectEnabledKey = "E";

	private const string _DisplayOrderKey = "DO";

	public bool Enabled;

	public List<int> DisplayOrder;

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
