using UnityEngine;

namespace Imangi.Utilities
{
	public class ImangiRateAppManager_Android : ImangiRateAppManager
	{
		private AndroidJavaClass ImangiRateAppManagerClass;

		private const string ImangiRateAppManagerClassPath = "com.imangi.imangiutilities.ImangiAndroidRateApp";

		protected override void AskForReviewNow_Internal(string inTitle, string inMessage, string inRateMessage, string inDeclineMessage, string inRemindLaterMessage, string inAppID, RatePlatformStore inRatePlatform)
		{
		}

		protected override void AskForReview_Internal(int inCheckCount, int inHoursBetween, string inTitle, string inMessage, string inRateMessage, string inDeclineMessage, string inRemindLaterMessage, string inAppID, RatePlatformStore inRatePlatform)
		{
		}
	}
}
