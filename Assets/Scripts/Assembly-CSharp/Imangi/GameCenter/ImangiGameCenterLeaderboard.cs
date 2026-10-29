using System.Collections.Generic;
using Imangi.Utilities;

namespace Imangi.GameCenter
{
	public class ImangiGameCenterLeaderboard : IParsableJSONListElement
	{
		public string LeaderboardID;

		public string LeaderboardTitle;

		private ImangiGameCenterLeaderboard()
		{
		}

		public ImangiGameCenterLeaderboard(string inJSONString)
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
