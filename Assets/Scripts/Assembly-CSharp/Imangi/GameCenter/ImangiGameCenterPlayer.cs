using System.Collections.Generic;
using Imangi.Utilities;

namespace Imangi.GameCenter
{
	public class ImangiGameCenterPlayer : IParsableJSONListElement
	{
		public string PlayerID;

		public bool IsFriend;

		public string DisplayName;

		public string Alias;

		private ImangiGameCenterPlayer()
		{
		}

		public ImangiGameCenterPlayer(string inJSONString)
		{
		}

		public ImangiGameCenterPlayer(Dictionary<string, object> inDict)
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
