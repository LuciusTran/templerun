using System.Collections.Generic;
using Imangi.Utilities;

namespace Imangi.GameCenter
{
	public class ImangiGameCenterAchievementDescription : IParsableJSONListElement
	{
		public string Identifier;

		public string Title;

		public string UnachievedDescription;

		public string AchievedDescription;

		public int MaximumPoints;

		public bool Hidden;

		public bool Replayable;

		public string GroupIdentifier;

		private ImangiGameCenterAchievementDescription()
		{
		}

		public ImangiGameCenterAchievementDescription(string inJSONString)
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
