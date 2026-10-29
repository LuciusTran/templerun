using System.Collections.Generic;
using Imangi.Utilities;

public abstract class ConfigData : IParsableJSONListElement
{
	public const string LogChannel = "ConfigData";

	private bool _VerboseLogging;

	public ApplicationVersionInfo MinAppVersion;

	public ImangiRequirements Requirements;

	public abstract int Index { get; }

	public abstract string Keyword { get; }

	public abstract int ErrorCode { get; }

	public virtual string RemoteConfigKey => null;

	public string Serialize()
	{
		return null;
	}

	public bool Deserialize(string[] inWords)
	{
		return false;
	}

	public bool OverrideFromRemoteConfig()
	{
		return false;
	}

	protected virtual string Serialize_Internal()
	{
		return null;
	}

	protected virtual bool Deserialize_Internal(string[] inWords)
	{
		return false;
	}

	public string GetRemoteConfigKey()
	{
		return null;
	}

	public bool CheckRequirements()
	{
		return false;
	}

	private void SetPromoLineRequirementsFromConfigLineHeader(string inHeader)
	{
	}

	public abstract Dictionary<string, object> ToDict();

	public abstract bool FromDict(Dictionary<string, object> inDict);
}
