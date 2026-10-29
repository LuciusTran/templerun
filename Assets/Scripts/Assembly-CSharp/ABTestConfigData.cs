using System.Collections.Generic;

public class ABTestConfigData : ConfigData
{
	public const string PromoKeyword = "ABTest";

	private const string _GroupsKey = "G";

	public List<ABTestGroupConfigData> GroupDefinitions;

	private const string _ConversionEventsKey = "CE";

	public List<string> ConversionEvents;

	private const string _IDKey = "ID";

	public int TestID;

	private const string _EnabledKey = "E";

	public bool Enabled;

	private const string _DescriptionKey = "D";

	public string Description;

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

	public bool IsEventAConversionEvent(string inEventName)
	{
		return false;
	}

	public bool IsIDInTest(int inUserID)
	{
		return false;
	}

	public bool IsIDInTestGroup(int inUserID, int inGroupID)
	{
		return false;
	}

	public int GetTestGroupIDForUserID(int inUserID)
	{
		return 0;
	}

	public ABTestGroupConfigData GetTestGroupDefinitionForUserID(int inUserID)
	{
		return null;
	}

	public ABTestGroupConfigData GetTestGroupDefinition(int inGroupId)
	{
		return null;
	}

	public List<ABTestGroupConfigData> GetAllTestGroups()
	{
		return null;
	}
}
