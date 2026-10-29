using System;
using System.Collections.Generic;

namespace Imangi.Utilities
{
	[Serializable]
	public class ImangiABTestingRequirements : IImangiRequirements, IParsableJSONListElement
	{
		public const string LogChannel = "ImangiABTestingRequirements";

		private const string _TestGroupsKey = "V";

		public Dictionary<int, List<int>> _TestsGroups;

		public ImangiABTestingRequirements()
		{
		}

		public ImangiABTestingRequirements(string inJSONString)
		{
		}

		public void Clear()
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

		public string GetDescription()
		{
			return null;
		}

		public bool IsValid(Dictionary<int, int> inABTestGroups)
		{
			return false;
		}

		public bool IsDefault()
		{
			return false;
		}
	}
}
