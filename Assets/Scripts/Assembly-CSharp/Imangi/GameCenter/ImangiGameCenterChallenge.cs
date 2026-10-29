using System;
using System.Collections.Generic;
using Imangi.Utilities;

namespace Imangi.GameCenter
{
	public class ImangiGameCenterChallenge : IParsableJSONListElement
	{
		public enum ChallengeState
		{
			Invalid = 0,
			Pending = 1,
			Completed = 2,
			Declined = 3
		}

		public DateTime IssueDate;

		public string IssuingPlayerID;

		public string ReceivingPlayerID;

		public ImangiGameCenterPlayer IssuingPlayer;

		public ImangiGameCenterPlayer ReceivingPlayer;

		public string Message;

		public ChallengeState State;

		public DateTime CompletionDate;

		public ImangiGameCenterScore Score;

		public ImangiGameCenterAchievement Achievement;

		private ImangiGameCenterChallenge()
		{
		}

		public ImangiGameCenterChallenge(string inJSONString)
		{
		}

		public virtual bool FromDict(Dictionary<string, object> inDict)
		{
			return false;
		}

		public virtual Dictionary<string, object> ToDict()
		{
			return null;
		}
	}
}
