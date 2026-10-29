using System;
using System.Collections.Generic;

namespace Imangi.Utilities
{
	[Serializable]
	public class ImangiRequirements : IImangiRequirements, IParsableJSONListElement
	{
		public const string LogChannel = "ImangiRequirements";

		private const string _SystemRequirementsKey = "SR";

		private const string _LocaleRequirementsKey = "LR";

		private const string _DateRequirementsKey = "DR";

		private const string _ABTestingRequirementsKey = "ABR";

		private ImangiSystemRequirements _SystemRequirements;

		private ImangiLocaleRequirements _LocaleRequirements;

		private ImangiDateRequirements _DateRequirements;

		private ImangiABTestingRequirements _ABTestingRequirements;

		public bool SystemRequirementsExist => false;

		public bool LocaleRequirementsExist => false;

		public bool DateRequirementsExist => false;

		public bool ABTestingRequirementsExist => false;

		public ImangiSystemRequirements SystemRequirements => null;

		public ImangiLocaleRequirements LocaleRequirements => null;

		public ImangiDateRequirements DateRequirements => null;

		public ImangiABTestingRequirements ABTestingRequirements => null;

		public ImangiRequirements()
		{
		}

		public ImangiRequirements(string inJSONString)
		{
		}

		public virtual void Clear()
		{
		}

		public virtual string GetDescription()
		{
			return null;
		}

		public Dictionary<string, object> ToDict()
		{
			return null;
		}

		public bool FromDict(Dictionary<string, object> inDict)
		{
			return false;
		}

		public virtual bool HasRequirements()
		{
			return false;
		}

		public virtual bool IsValid(ApplicationVersionInfo inAppVersion, ImangiLocaleInfo inCheckLocale, DateTime inCheckTime, Dictionary<int, int> inABTestGroups)
		{
			return false;
		}

		public virtual bool IsDefault()
		{
			return false;
		}
	}
}
