using System.Collections.Generic;

namespace Imangi.GooglePlayServices
{
	public class ImangiGooglePlayServicesScoreSubmissionDataResult
	{
		public string FormattedScore;

		public bool NewBest;

		public long RawScore;

		public string ScoreTag;

		public ImangiGooglePlayServicesLeaderboard.LeaderboardTimeSpan TimeSpanType;

		public static ImangiGooglePlayServicesScoreSubmissionDataResult BuildFromJsonStringNoNullReturn(string jsonStr)
		{
			return null;
		}

		public static ImangiGooglePlayServicesScoreSubmissionDataResult BuildFromDictionaryNoNullReturn(Dictionary<string, object> dict)
		{
			return null;
		}

		public static bool BuildFromDictionary(Dictionary<string, object> dict, out ImangiGooglePlayServicesScoreSubmissionDataResult outGpsScoreSubmissionDataResult)
		{
			outGpsScoreSubmissionDataResult = null;
			return false;
		}

		public override string ToString()
		{
			return null;
		}
	}
}
