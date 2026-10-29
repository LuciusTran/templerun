using System.Collections.Generic;
using Imangi.Utilities;

public class CharacterEnumConfigData : IParsableJSONListElement
{
	public RecordManager.StoreItemType Character;

	private const string _CharacterKey = "REK";

	public bool FromDict(Dictionary<string, object> inDict)
	{
		return false;
	}

	public Dictionary<string, object> ToDict()
	{
		return null;
	}
}
