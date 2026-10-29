using System;
using System.Collections.Generic;
using Imangi.Utilities;

[Serializable]
public class ABTestGroupConfigData : IParsableJSONListElement
{
	private const char _RangeSplitChar = '-';

	private const string _UserTestIDRangesKey = "U";

	public List<string> UserTestIDRanges;

	private const string _IDKey = "ID";

	public int GroupID;

	private const string _DescriptionKey = "D";

	public string Description;

	private List<int> _UserTestIDs;

	public ABTestGroupConfigData()
	{
	}

	public ABTestGroupConfigData(string inJSONString)
	{
	}

	public Dictionary<string, object> ToDict()
	{
		return null;
	}

	public bool FromDict(Dictionary<string, object> inDict)
	{
		return false;
	}

	private void SetUserTestIDsFromRanges()
	{
	}

	private void ParseUserTestIDs(string inUserTestIDs)
	{
	}

	public bool IsIDInTestGroup(int inID)
	{
		return false;
	}

	public List<string> GetUserTestIDRanges()
	{
		return null;
	}

	public void SetUserTestIDRanges(List<string> inUserIDTestRanges)
	{
	}
}
