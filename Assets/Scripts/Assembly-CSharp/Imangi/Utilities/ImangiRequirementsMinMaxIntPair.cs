using System.Collections.Generic;

namespace Imangi.Utilities
{
	public class ImangiRequirementsMinMaxIntPair : IParsableJSONListElement
	{
		public int DisableValue;

		public int Min;

		public int Max;

		public ImangiRequirementsMinMaxIntPair(int inDisableValue = -1)
		{
		}

		public ImangiRequirementsMinMaxIntPair(int inMin, int inMax, int inDisableValue)
		{
		}

		public bool IsEnabled()
		{
			return false;
		}

		public bool IsValid(int inValue)
		{
			return false;
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
	}
}
