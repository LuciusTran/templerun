using UnityEngine;

namespace Imangi.GooglePlayServices
{
	public class ImangiGooglePlayServicesManager_Android : ImangiGooglePlayServicesManager
	{
		private AndroidJavaClass GooglePlayServicesBridgeClass;

		private const string ImangiGooglePlayServicesBridgeClassPath = "com.imangi.googleplayservices.UnityGooglePlayServicesBridge";

		protected override void SetVerboseLogging_Internal(bool inVerboseLogging)
		{
		}

		protected override bool GetVerboseLogging_Internal()
		{
			return false;
		}

		protected override void Init_Internal(bool inAutoAuthenticate)
		{
		}

		protected override void AttemptAutomaticAuthentication_Internal()
		{
		}

		protected override void Authenticate_Internal()
		{
		}

		protected override void SignOut_Internal()
		{
		}

		protected override bool IsSignedIn_Internal()
		{
			return false;
		}

		protected override bool IsGooglePlayServicesAvailable_Internal()
		{
			return false;
		}

		protected override ImangiGooglePlayServicesPlayer GetLocalPlayerInfo_Internal()
		{
			return null;
		}

		protected override void ShowAchievements_Internal()
		{
		}

		protected override void UnlockAchievement_Internal(string achievementId)
		{
		}

		protected override void LoadAllAchievements_Internal(bool forceReloadFromServer, bool onlyLoadCompletedAchievements = false)
		{
		}

		protected override void ShowLeaderboards_Internal()
		{
		}

		protected override void SubmitScore_Internal(string leaderboardId, long newScore)
		{
		}

		protected override void UnleaseSendMessages_Internal()
		{
		}

		protected override void SnapshotListShow_Internal(bool allowAddButton, bool allowDeleteButton, int maxSnapshotsToShow)
		{
		}

		protected override void SnapshotWrite_Internal(string snapshotName, bool createIfNotFound, string description, byte[] data, SnapshotConflictResolutionPolicy resolutionPolicy)
		{
		}

		protected override void SnapshotRead_Internal(string snapshotName, SnapshotConflictResolutionPolicy resolutionPolicy)
		{
		}

		protected override void SnapshotDelete_Internal(string snapshotName)
		{
		}
	}
}
