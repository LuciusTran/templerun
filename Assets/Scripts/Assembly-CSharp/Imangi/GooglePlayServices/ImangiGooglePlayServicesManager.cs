using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace Imangi.GooglePlayServices
{
	public class ImangiGooglePlayServicesManager : MonoBehaviour
	{
		public enum SnapshotConflictResolutionPolicy
		{
			Manual = -1,
			LongestPlayTime = 1,
			LastKnownGood = 2,
			MostRecentlyModified = 3,
			HighestProgress = 4
		}

		public static readonly string LogChannel;

		[CompilerGenerated]
		private static Action<string> m_AuthenticationSuccessEvent;

		[CompilerGenerated]
		private static Action<string> m_AuthenticationFailureEvent;

		[CompilerGenerated]
		private static Action m_UserSignedOutEvent;

		[CompilerGenerated]
		private static Action<string, bool> m_AchievementUnlockSuccessEvent;

		[CompilerGenerated]
		private static Action<string, string> m_AchievementUnlockFailureEvent;

		[CompilerGenerated]
		private static Action<List<ImangiGooglePlayServicesAchievement>> m_AchievementLoadAllSuccessEvent;

		[CompilerGenerated]
		private static Action<string> m_AchievementLoadAllFailureEvent;

		[CompilerGenerated]
		private static Action<List<ImangiGooglePlayServicesAchievement>> m_AchievementLoadAllCompletedSuccessEvent;

		[CompilerGenerated]
		private static Action<string> m_AchievementLoadAllCompletedFailureEvent;

		[CompilerGenerated]
		private static Action<string, ImangiGooglePlayServicesScoreSubmissionData> m_LeaderboardSubmitScoreSuccessEvent;

		[CompilerGenerated]
		private static Action<string, string> m_LeaderboardSubmitScoreFailureEvent;

		[CompilerGenerated]
		private static Action<ImangiGooglePlayServicesSnapshotMetadata> m_SnapshotListSelectedSnapshotEvent;

		[CompilerGenerated]
		private static Action m_SnapshotListCreateNewSnapshotEvent;

		[CompilerGenerated]
		private static Action m_SnapshotListCanceledEvent;

		[CompilerGenerated]
		private static Action<string> m_SnapshotWriteSuccessEvent;

		[CompilerGenerated]
		private static Action<string, string> m_SnapshotWriteFailureEvent;

		[CompilerGenerated]
		private static Action<string, bool, ImangiGooglePlayServicesSnapshot> m_SnapshotReadSuccessEvent;

		[CompilerGenerated]
		private static Action<string, string> m_SnapshotReadFailureEvent;

		[CompilerGenerated]
		private static Action<string, bool> m_SnapshotDeleteSuccessEvent;

		[CompilerGenerated]
		private static Action<string, string> m_SnapshotDeleteFailureEvent;

		protected static ImangiGooglePlayServicesManager Instance;

		protected static GameObject GooglePlayServicesGameObj;

		public static bool GooglePlayServicesVerboseLogging;

		public static event Action<string> AuthenticationSuccessEvent
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public static event Action<string> AuthenticationFailureEvent
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public static event Action UserSignedOutEvent
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public static event Action<string, bool> AchievementUnlockSuccessEvent
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public static event Action<string, string> AchievementUnlockFailureEvent
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public static event Action<List<ImangiGooglePlayServicesAchievement>> AchievementLoadAllSuccessEvent
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public static event Action<string> AchievementLoadAllFailureEvent
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public static event Action<List<ImangiGooglePlayServicesAchievement>> AchievementLoadAllCompletedSuccessEvent
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public static event Action<string> AchievementLoadAllCompletedFailureEvent
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public static event Action<string, ImangiGooglePlayServicesScoreSubmissionData> LeaderboardSubmitScoreSuccessEvent
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public static event Action<string, string> LeaderboardSubmitScoreFailureEvent
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public static event Action<ImangiGooglePlayServicesSnapshotMetadata> SnapshotListSelectedSnapshotEvent
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public static event Action SnapshotListCreateNewSnapshotEvent
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public static event Action SnapshotListCanceledEvent
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public static event Action<string> SnapshotWriteSuccessEvent
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public static event Action<string, string> SnapshotWriteFailureEvent
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public static event Action<string, bool, ImangiGooglePlayServicesSnapshot> SnapshotReadSuccessEvent
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public static event Action<string, string> SnapshotReadFailureEvent
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public static event Action<string, bool> SnapshotDeleteSuccessEvent
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public static event Action<string, string> SnapshotDeleteFailureEvent
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public static void GooglePlayServicesLogMessage(string inMessage, params object[] paramList)
		{
		}

		public static void GooglePlayServices_LogMessageForced(string inMessage, params object[] paramList)
		{
		}

		public static ImangiGooglePlayServicesManager GetInstance()
		{
			return null;
		}

		public static void SetVerboseLogging(bool inVerboseLogging)
		{
		}

		public static bool GetVerboseLogging()
		{
			return false;
		}

		public static void Init(bool inAutoAuthenticate)
		{
		}

		public static void AttemptAutomaticAuthentication()
		{
		}

		public static void Authenticate()
		{
		}

		public static void SignOut()
		{
		}

		public static bool IsSignedIn()
		{
			return false;
		}

		public static bool IsGooglePlayServicesAvailable()
		{
			return false;
		}

		public static ImangiGooglePlayServicesPlayer GetLocalPlayerInfo()
		{
			return null;
		}

		public static void OnPause(bool inPause)
		{
		}

		public static void ShowAchievements()
		{
		}

		public static void UnlockAchievement(string achievementId)
		{
		}

		public static void LoadAllAchievements(bool forceReloadFromServer = false, bool onlyLoadCompletedAchievements = false)
		{
		}

		public static void ShowLeaderboards()
		{
		}

		public static void UnleaseSendMessages()
		{
		}

		public static void SubmitScore(string leaderboardId, long newScore)
		{
		}

		public static void SnapshotListShow(bool allowAddButton, bool allowDeleteButton, int maxSnapshotsToShow)
		{
		}

		public static void SnapshotWrite(string snapshotName, bool createIfNotFound, string description, byte[] data, SnapshotConflictResolutionPolicy resolutionPolicy = SnapshotConflictResolutionPolicy.MostRecentlyModified)
		{
		}

		public static void SnapshotRead(string snapshotName, SnapshotConflictResolutionPolicy resolutionPolicy = SnapshotConflictResolutionPolicy.MostRecentlyModified)
		{
		}

		public static void SnapshotDelete(string snapshotName)
		{
		}

		protected virtual void SetVerboseLogging_Internal(bool inVerboseLogging)
		{
		}

		protected virtual bool GetVerboseLogging_Internal()
		{
			return false;
		}

		protected virtual void OnPause_Internal(bool inPause)
		{
		}

		protected virtual void Init_Internal(bool inAutoAuthenticate)
		{
		}

		protected virtual void AttemptAutomaticAuthentication_Internal()
		{
		}

		protected virtual void Authenticate_Internal()
		{
		}

		protected virtual void SignOut_Internal()
		{
		}

		protected virtual bool IsSignedIn_Internal()
		{
			return false;
		}

		protected virtual bool IsGooglePlayServicesAvailable_Internal()
		{
			return false;
		}

		protected virtual ImangiGooglePlayServicesPlayer GetLocalPlayerInfo_Internal()
		{
			return null;
		}

		protected virtual void ShowAchievements_Internal()
		{
		}

		protected virtual void UnlockAchievement_Internal(string achievementId)
		{
		}

		protected virtual void LoadAllAchievements_Internal(bool forceReloadFromServer, bool onlyLoadCompletedAchievements = false)
		{
		}

		protected virtual void ShowLeaderboards_Internal()
		{
		}

		protected virtual void SubmitScore_Internal(string leaderboardId, long newScore)
		{
		}

		protected virtual void UnleaseSendMessages_Internal()
		{
		}

		protected virtual void SnapshotListShow_Internal(bool allowAddButton, bool allowDeleteButton, int maxSnapshotsToShow)
		{
		}

		protected virtual void SnapshotWrite_Internal(string snapshotName, bool createIfNotFound, string description, byte[] data, SnapshotConflictResolutionPolicy resolutionPolicy)
		{
		}

		protected virtual void SnapshotRead_Internal(string snapshotName, SnapshotConflictResolutionPolicy resolutionPolicy)
		{
		}

		protected virtual void SnapshotDelete_Internal(string snapshotName)
		{
		}

		protected void FireZeroParamCallback(string inTitle, Action inEventFunction)
		{
		}

		protected void FireOneParamCallback<T1>(string inTitle, Action<T1> inEventFunction, T1 p1)
		{
		}

		protected void FireTwoParamCallback<T1, T2>(string inTitle, Action<T1, T2> inEventFunction, T1 p1, T2 p2)
		{
		}

		protected void FireThreeParamCallback<T1, T2, T3>(string inTitle, Action<T1, T2, T3> inEventFunction, T1 p1, T2 p2, T3 p3)
		{
		}

		private void OnSignInSucceeded(string resultJson)
		{
		}

		private void OnSignInFailed(string resultJson)
		{
		}

		private void OnSignedOut(string empty)
		{
		}

		private void OnAchievementUnlockSuccess(string resultJson)
		{
		}

		private void OnAchievementUnlockFailure(string resultJson)
		{
		}

		private void OnAchievementLoadAllSuccess(string resultJson)
		{
		}

		private void OnAchievementLoadAllFailure(string resultJson)
		{
		}

		private void OnAchievementLoadAllCompletedSuccess(string resultJson)
		{
		}

		private void OnAchievementLoadAllCompletedFailure(string resultJson)
		{
		}

		private void OnLeaderboardSubmitScoreSuccess(string resultJson)
		{
		}

		private void OnLeaderboardSubmitScoreFailure(string resultJson)
		{
		}

		private void OnSnapshotListSelectedSnapshot(string resultJson)
		{
		}

		private void OnSnapshotListCreateNewSnapshot(string emptyStr)
		{
		}

		private void OnSnapshotListCanceled(string emptyStr)
		{
		}

		private void OnSnapshotWriteSuccess(string resultJson)
		{
		}

		private void OnSnapshotWriteFailure(string resultJson)
		{
		}

		private void OnSnapshotReadSuccess(string resultJson)
		{
		}

		private void OnSnapshotReadFailure(string resultJson)
		{
		}

		private void OnSnapshotDeleteSuccess(string resultJson)
		{
		}

		private void OnSnapshotDeleteFailure(string resultJson)
		{
		}
	}
}
