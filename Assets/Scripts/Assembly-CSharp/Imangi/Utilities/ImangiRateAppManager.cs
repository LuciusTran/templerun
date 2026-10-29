using UnityEngine;

namespace Imangi.Utilities
{
	public class ImangiRateAppManager : MonoBehaviour
	{
		protected static ImangiRateAppManager Instance;

		protected static GameObject RateAppGameObj;

		public static ImangiRateAppManager GetInstance()
		{
			return null;
		}

		public static void AskForReviewNow(string inTitle, string inMessage, string inAppID, string inRateMessage, string inDeclineMessage, string inRemindLaterMessage, RatePlatformStore inPlatformStore = RatePlatformStore.Default)
		{
		}

		public static void AskForReview(int inCheckCount, int inHoursBetween, string inTitle, string inMessage, string inAppID, string inRateMessage, string inDeclineMessage, string inRemindLaterMessage, RatePlatformStore inPlatformStore = RatePlatformStore.Default)
		{
		}

		protected virtual void AskForReviewNow_Internal(string inTitle, string inMessage, string inAppID, string inRateMessage, string inDeclineMessage, string inRemindLaterMessage, RatePlatformStore inPlatformStore)
		{
		}

		protected virtual void AskForReview_Internal(int inCheckCount, int inHoursBetween, string inTitle, string inMessage, string inAppID, string inRateMessage, string inDeclineMessage, string inRemindLaterMessage, RatePlatformStore inPlatformStore)
		{
		}
	}
}
