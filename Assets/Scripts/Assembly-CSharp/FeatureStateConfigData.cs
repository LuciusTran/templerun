using System.Collections.Generic;
using Imangi.Utilities;

public class FeatureStateConfigData : ConfigData
{
	public const string PromoKeyword = "FeatureState";

	private const string _FeatureNameKey = "FN";

	public string FeatureName;

	private const string _EnabledRequirementsKey = "ER";

	public ImangiRequirements EnabledRequirements;

	private const string _DisabledRequirementsKey = "DR";

	public ImangiRequirements DisabledRequirements;

	public override int Index => 0;

	public override string Keyword => null;

	public override string RemoteConfigKey => null;

	public override int ErrorCode => 0;

	public override Dictionary<string, object> ToDict()
	{
		return null;
	}

	public override bool FromDict(Dictionary<string, object> inDict)
	{
		return false;
	}

	public bool IsEnabled()
	{
		return false;
	}
}
