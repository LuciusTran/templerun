using System;
using System.Collections.Generic;
using Imangi.Utilities;

namespace Imangi.GameCenter
{
	public class ImangiGameCenterAchievement : IParsableJSONListElement
	{
		public string Identifier;

		public float PercentComplete;

		public bool Completed;

		public DateTime LastReportedDate;

		private ImangiGameCenterAchievement()
		{
		}

		public ImangiGameCenterAchievement(string inJSONString)
		{
		}

		public bool FromDict(Dictionary<string, object> inDict)
		{
			return false;
		}

		public Dictionary<string, object> ToDict()
		{
			return null;
		}
	}
}
