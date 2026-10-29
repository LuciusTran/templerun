using System.Collections.Generic;

namespace Imangi.GooglePlayServices
{
	public class ImangiGooglePlayServicesAchievement
	{
		public enum AchievementStateEnum
		{
			Uninitialized = -1,
			Unlocked = 0,
			Revealed = 1,
			Hidden = 2
		}

		public enum AchievementTypeEnum
		{
			Uninitialized = -1,
			Standard = 0,
			Incremental = 1
		}

		public string AchievementId;

		public int CurrentSteps;

		public string FormattedCurrentStepsString;

		public string Description;

		public long LastUpdatedTimestamp;

		public string AchievementName;

		public AchievementStateEnum AchievementState;

		public AchievementTypeEnum AchievementType;

		public int TotalSteps;

		public string FormattedTotalStepsString;

		public long XpValue;

		public static List<ImangiGooglePlayServicesAchievement> BuildAchievementListFromList(List<object> inList)
		{
			return null;
		}

		public static ImangiGooglePlayServicesAchievement BuildFromJsonStringNoNullReturn(string jsonStr)
		{
			return null;
		}

		public static ImangiGooglePlayServicesAchievement BuildFromDictionaryNoNullReturn(Dictionary<string, object> dict)
		{
			return null;
		}

		public static bool BuildFromDictionary(Dictionary<string, object> dict, out ImangiGooglePlayServicesAchievement outAchievement)
		{
			outAchievement = null;
			return false;
		}

		public override string ToString()
		{
			return null;
		}
	}
}
