using System.Collections.Generic;
using Imangi.Utilities;

namespace Imangi.Privacy
{
	public class ImangiPrivacyRegulationInfo : IParsableJSONListElement
	{
		protected static readonly string _ImangiPrivacyRegulationKey;

		public ImangiRegulationType Type;

		public bool InformReconsentEnabled;

		public ImangiPrivacyRegulationInfo()
		{
		}

		public ImangiPrivacyRegulationInfo(ImangiRegulationType inRegulationType = ImangiRegulationType.Unknown)
		{
		}

		public ImangiPrivacyRegulationInfo(Dictionary<string, object> inDict)
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
