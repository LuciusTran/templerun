using System.Collections.Generic;

namespace Imangi.GooglePlayServices
{
	public class ImangiGooglePlayServicesScoreSubmissionData
	{
		public string LeaderboardId;

		public string PlayerId;

		public ImangiGooglePlayServicesScoreSubmissionDataResult ScoreResultTimeSpanDaily;

		public ImangiGooglePlayServicesScoreSubmissionDataResult ScoreResultTimeSpanWeekly;

		public ImangiGooglePlayServicesScoreSubmissionDataResult ScoreResultTimeSpawnAllTime;

		public static ImangiGooglePlayServicesScoreSubmissionData BuildFromJsonStringNoNullReturn(string jsonStr)
		{
			return null;
		}

		public static ImangiGooglePlayServicesScoreSubmissionData BuildFromDictionaryNoNullReturn(Dictionary<string, object> dict)
		{
			return null;
		}

		public static bool BuildFromDictionary(Dictionary<string, object> dict, out ImangiGooglePlayServicesScoreSubmissionData outGpsScoreSubmissionData)
		{
			outGpsScoreSubmissionData = null;
			return false;
		}

		public override string ToString()
		{
			return null;
		}
	}
}
