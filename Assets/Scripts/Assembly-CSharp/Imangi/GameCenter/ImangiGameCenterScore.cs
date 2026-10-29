using System;
using System.Collections.Generic;
using Imangi.Utilities;

namespace Imangi.GameCenter
{
	public class ImangiGameCenterScore : IParsableJSONListElement
	{
		public ulong Context;

		public DateTime Date;

		public string FormattedValue;

		public string PlayerID;

		public ImangiGameCenterPlayer Player;

		public string DisplayName;

		public int Rank;

		public long Value;

		public bool Shown;

		public ImangiGameCenterScore()
		{
		}

		public ImangiGameCenterScore(string inJSONString)
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
