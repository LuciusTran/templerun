using System;
using System.Collections.Generic;

namespace Imangi.Utilities
{
	[Serializable]
	public class ImangiGameRequirements : ImangiRequirements, IParsableJSONListElement
	{
		public override string GetDescription()
		{
			return null;
		}

		public virtual void ClearGameRequirements()
		{
		}

		public override void Clear()
		{
		}

		public virtual bool HasGameRequirements()
		{
			return false;
		}

		public override bool HasRequirements()
		{
			return false;
		}

		public override bool IsValid(ApplicationVersionInfo inAppVersion, ImangiLocaleInfo inCheckLocale, DateTime inCheckTime, Dictionary<int, int> inABTestGroups)
		{
			return false;
		}

		protected void WriteMinMaxIntPairToDictionary(ref Dictionary<string, object> refDict, string inKeyName, ImangiRequirementsMinMaxIntPair inIntPair)
		{
		}

		protected bool ReadMinMaxIntPairFromDictionary(Dictionary<string, object> inDict, string inKeyName, ref ImangiRequirementsMinMaxIntPair refIntPair, ref Dictionary<string, object> refTempDict)
		{
			return false;
		}

		public new Dictionary<string, object> ToDict()
		{
			return null;
		}

		public new bool FromDict(Dictionary<string, object> inDict)
		{
			return false;
		}
	}
}
