using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Imangi.GameServices;
using UnityEngine;

namespace Imangi.GameCenter
{
	public class ImangiGameCenterManager : MonoBehaviour
	{
		public enum ViewControllerState
		{
			Default = -1,
			Leaderboards = 0,
			Achievements = 1,
			Challenges = 2
		}

		public static readonly string LogChannel;

		[CompilerGenerated]
		private static Action<ImangiGameCenterPlayer> m_LocalPlayerAuthenticateSuccessEvent;

		[CompilerGenerated]
		private static Action<string> m_LocalPlayerAuthenticateFailedEvent;

		[CompilerGenerated]
		private static Action m_LocalPlayerLoggedOutEvent;

		[CompilerGenerated]
		private static Action m_LocalPlayerChangedEvent;

		[CompilerGenerated]
		private static Action<List<ImangiGameCenterPlayer>> m_FriendsListReceivedEvent;

		[CompilerGenerated]
		private static Action<string> m_FriendsListFailedEvent;

		[CompilerGenerated]
		private static Action<ImangiGameCenterPlayer, string> m_LoadPlayerPhotoSucceededEvent;

		[CompilerGenerated]
		private static Action<string> m_LoadPlayerPhotoFailedEvent;

		[CompilerGenerated]
		private static Action<List<ImangiGameCenterLeaderboard>> m_LoadLeaderboardInfoSucceededEvent;

		[CompilerGenerated]
		private static Action<string> m_LoadLeaderboardInfoFailedEvent;

		[CompilerGenerated]
		private static Action<string> m_ReportScoreSucceededEvent;

		[CompilerGenerated]
		private static Action<string, string> m_ReportScoreFailedEvent;

		[CompilerGenerated]
		private static Action<string> m_ShowLeaderboardSucceededEvent;

		[CompilerGenerated]
		private static Action<string> m_ShowLeaderboardFailedEvent;

		[CompilerGenerated]
		private static Action<string> m_LeaderboardDismissedEvent;

		[CompilerGenerated]
		private static Action<List<ImangiGameCenterScore>> m_RetrieveScoresSucceededEvent;

		[CompilerGenerated]
		private static Action<string> m_RetrieveScoresFailedEvent;

		[CompilerGenerated]
		private static Action<string> m_ReportAchievementSucceededEvent;

		[CompilerGenerated]
		private static Action<string> m_ReportAchievementFailedEvent;

		[CompilerGenerated]
		private static Action<List<ImangiGameCenterAchievement>> m_LoadAchievementsSucceededEvent;

		[CompilerGenerated]
		private static Action<string> m_LoadAchievementsFailedEvent;

		[CompilerGenerated]
		private static Action<List<ImangiGameCenterAchievementDescription>> m_LoadAchievementDescriptionsSucceededEvent;

		[CompilerGenerated]
		private static Action<string> m_LoadAchievementDescriptionsFailedEvent;

		[CompilerGenerated]
		private static Action m_ResetAchievementsSucceededEvent;

		[CompilerGenerated]
		private static Action<string> m_ResetAchievementsFailedEvent;

		[CompilerGenerated]
		private static Action<string> m_ShowAchievementsSucceededEvent;

		[CompilerGenerated]
		private static Action<string> m_ShowAchievementsFailedEvent;

		[CompilerGenerated]
		private static Action<string> m_AchievementsDismissedEvent;

		[CompilerGenerated]
		private static Action<List<ImangiGameCenterChallenge>> m_GetChallengesSucceededEvent;

		[CompilerGenerated]
		private static Action<string> m_GetChallengesFailedEvent;

		[CompilerGenerated]
		private static Action<string> m_ShowChallengesSucceededEvent;

		[CompilerGenerated]
		private static Action<string> m_ShowChallengesFailedEvent;

		[CompilerGenerated]
		private static Action<string> m_ChallengesDismissedEvent;

		[CompilerGenerated]
		private static Action<bool> m_SendFriendsChallengeSucceededEvent;

		[CompilerGenerated]
		private static Action<string> m_SendFriendsChallengeFailedEvent;

		[CompilerGenerated]
		private static Action m_LocalPlayerDidSelectChallengeEvent;

		protected static ImangiGameCenterManager Instance;

		protected static GameObject GameCenterGameObj;

		public static bool GameCenterVerboseLogging;

		protected ImangiGameCenterPlayer CurrentLocalPlayer;

		public static event Action<ImangiGameCenterPlayer> LocalPlayerAuthenticateSuccessEvent
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

		public static event Action<string> LocalPlayerAuthenticateFailedEvent
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

		public static event Action LocalPlayerLoggedOutEvent
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

		public static event Action LocalPlayerChangedEvent
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

		public static event Action<List<ImangiGameCenterPlayer>> FriendsListReceivedEvent
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

		public static event Action<string> FriendsListFailedEvent
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

		public static event Action<ImangiGameCenterPlayer, string> LoadPlayerPhotoSucceededEvent
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

		public static event Action<string> LoadPlayerPhotoFailedEvent
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

		public static event Action<List<ImangiGameCenterLeaderboard>> LoadLeaderboardInfoSucceededEvent
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

		public static event Action<string> LoadLeaderboardInfoFailedEvent
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

		public static event Action<string> ReportScoreSucceededEvent
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

		public static event Action<string, string> ReportScoreFailedEvent
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

		public static event Action<string> ShowLeaderboardSucceededEvent
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

		public static event Action<string> ShowLeaderboardFailedEvent
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

		public static event Action<string> LeaderboardDismissedEvent
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

		public static event Action<List<ImangiGameCenterScore>> RetrieveScoresSucceededEvent
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

		public static event Action<string> RetrieveScoresFailedEvent
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

		public static event Action<string> ReportAchievementSucceededEvent
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

		public static event Action<string> ReportAchievementFailedEvent
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

		public static event Action<List<ImangiGameCenterAchievement>> LoadAchievementsSucceededEvent
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

		public static event Action<string> LoadAchievementsFailedEvent
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

		public static event Action<List<ImangiGameCenterAchievementDescription>> LoadAchievementDescriptionsSucceededEvent
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

		public static event Action<string> LoadAchievementDescriptionsFailedEvent
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

		public static event Action ResetAchievementsSucceededEvent
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

		public static event Action<string> ResetAchievementsFailedEvent
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

		public static event Action<string> ShowAchievementsSucceededEvent
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

		public static event Action<string> ShowAchievementsFailedEvent
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

		public static event Action<string> AchievementsDismissedEvent
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

		public static event Action<List<ImangiGameCenterChallenge>> GetChallengesSucceededEvent
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

		public static event Action<string> GetChallengesFailedEvent
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

		public static event Action<string> ShowChallengesSucceededEvent
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

		public static event Action<string> ShowChallengesFailedEvent
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

		public static event Action<string> ChallengesDismissedEvent
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

		public static event Action<bool> SendFriendsChallengeSucceededEvent
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

		public static event Action<string> SendFriendsChallengeFailedEvent
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

		public static event Action LocalPlayerDidSelectChallengeEvent
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

		public static void GameCenterLogMessage(string inMessage, params object[] inParamList)
		{
		}

		public static void GameCenterLogMessageForced(string inMessage, params object[] inParamList)
		{
		}

		public static ImangiGameCenterManager GetInstance()
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

		public static void OnPause(bool inPause)
		{
		}

		public static bool IsGameCenterAvailable()
		{
			return false;
		}

		public static bool IsGameCenterChallengeSystemAvailable()
		{
			return false;
		}

		public static bool IsPlayerAuthenticated()
		{
			return false;
		}

		public static void AuthenticateLocalPlayer()
		{
		}

		public static void LoadLocalPlayerProfilePhoto(bool inUseLargeImage)
		{
		}

		public static ImangiGameCenterPlayer GetLocalPlayerInfo()
		{
			return null;
		}

		public static void GetFriendsList(bool inLoadProfileImages, bool inLoadLargeProfileImages)
		{
		}

		public static void LoadLeaderboardInfo()
		{
		}

		public static void ReportScore(long inScore, string inLeaderboardID)
		{
		}

		public static void ReportScore(long inScore, ulong inContext, string inLeaderboardID)
		{
		}

		public static void ShowLeaderboard(string inLeaderboardID, ImangiGameServicesManager.LeaderboardTimeScope inTimeScope)
		{
		}

		public static void RetrieveScores(string inLeaderboardID, bool inFriendsOnly, ImangiGameServicesManager.LeaderboardTimeScope inTimeScope, uint inRangeLow, uint inRangeHigh)
		{
		}

		public static bool GetShowAchievementCompletionBanners()
		{
			return false;
		}

		public static void SetShowAchievementCompletionBanners(bool inShowCompletionBanners)
		{
		}

		protected virtual bool GetShowBannerForLocallyReceivedChallenge()
		{
			return false;
		}

		protected virtual void SetShowBannerForLocallyReceivedChallenge(bool inShowBannerForLocallyReceivedChallenge)
		{
		}

		protected virtual bool GetShowBannerForLocallyCompletedChallenge()
		{
			return false;
		}

		protected virtual void SetShowBannerForLocallyCompletedChallenge(bool inShowBannerForLocallyCompletedChallenge)
		{
		}

		protected virtual bool GetShowBannerForRemotelyCompletedChallenge()
		{
			return false;
		}

		protected virtual void SetShowBannerForRemotelyCompletedChallenge(bool inShowBannerForRemotelyCompletedChallenge)
		{
		}

		public static void ReportAchievement(string inAchievementID, float inPercentage)
		{
		}

		public static void LoadAchievements()
		{
		}

		public static void LoadAchievementDescriptions()
		{
		}

		public static void ResetAchievements()
		{
		}

		public static void ShowAchievements()
		{
		}

		public static void GetChallenges(bool inScoreChallenges, bool inAchievementChallenges)
		{
		}

		public static void ShowChallenges()
		{
		}

		public static void ShowFriendsChallengeSendDialogForLeaderboardScore(long inScore, string inLeaderboardId, string inOptionalMsg = null)
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

		protected virtual bool IsGameCenterAvailable_Internal()
		{
			return false;
		}

		protected virtual bool IsGameCenterChallengeSystemAvailable_Internal()
		{
			return false;
		}

		protected virtual bool IsPlayerAuthenticated_Internal()
		{
			return false;
		}

		protected virtual void AuthenticateLocalPlayer_Internal()
		{
		}

		protected virtual void LoadLocalPlayerProfilePhoto_Internal(bool inUseLargeImage)
		{
		}

		protected virtual void GetFriendsList_Internal(bool inLoadProfileImages, bool inLoadLargeProfileImages)
		{
		}

		protected virtual void LoadLeaderboardInfo_Internal()
		{
		}

		protected virtual void ReportScore_Internal(long inScore, string inLeaderboardID)
		{
		}

		protected virtual void ReportScore_Internal(long inScore, ulong inContext, string inLeaderboardID)
		{
		}

		protected virtual void ShowLeaderboard_Internal(string inLeaderboardID, ImangiGameServicesManager.LeaderboardTimeScope inTimeScope)
		{
		}

		protected virtual void RetrieveScores_Internal(string inLeaderboardID, bool inFriendsOnly, ImangiGameServicesManager.LeaderboardTimeScope inTimeScope, uint inRangeLow, uint inRangeHigh)
		{
		}

		protected virtual bool GetShowAchievementCompletionBanners_Internal()
		{
			return false;
		}

		protected virtual void SetShowAchievementCompletionBanners_Internal(bool inShowCompletionBanners)
		{
		}

		protected virtual bool GetShowBannerForLocallyReceivedChallenge_Internal()
		{
			return false;
		}

		protected virtual void SetShowBannerForLocallyReceivedChallenge_Internal(bool inShowBannerForLocallyReceivedChallenge)
		{
		}

		protected virtual bool GetShowBannerForLocallyCompletedChallenge_Internal()
		{
			return false;
		}

		protected virtual void SetShowBannerForLocallyCompletedChallenge_Internal(bool inShowBannerForLocallyCompletedChallenge)
		{
		}

		protected virtual bool GetShowBannerForRemotelyCompletedChallenge_Internal()
		{
			return false;
		}

		protected virtual void SetShowBannerForRemotelyCompletedChallenge_Internal(bool inShowBannerForRemotelyCompletedChallenge)
		{
		}

		protected virtual void ReportAchievement_Internal(string inAchievementID, float inPercentage)
		{
		}

		protected virtual void LoadAchievements_Internal()
		{
		}

		protected virtual void LoadAchievementDescriptions_Internal()
		{
		}

		protected virtual void ResetAchievements_Internal()
		{
		}

		protected virtual void ShowAchievements_Internal()
		{
		}

		protected virtual void GetChallenges_Internal(bool inScoreChallenges, bool inAchievementChallenges)
		{
		}

		protected virtual void ShowChallenges_Internal()
		{
		}

		protected virtual void ShowFriendsChallengeSendDialogForLeaderboardScore_Internal(long inScore, string inLeaderboardId, string inOptionalMsg)
		{
		}

		protected void HandleSingleStringCallback(string inTitle, Action<string> inEventFunction, string inString)
		{
		}

		public void LocalPlayerAuthenticateSuccess(string inMessage)
		{
		}

		public void LocalPlayerAuthenticateFailed(string inError)
		{
		}

		public void FriendsListReceived(string inString)
		{
		}

		public void FriendsListFailed(string inError)
		{
		}

		public void LoadPlayerPhotoSucceeded(string inString)
		{
		}

		public void LoadPlayerPhotoFailed(string inError)
		{
		}

		public void LoadLeaderboardInfoSucceeded(string inString)
		{
		}

		public void LoadLeaderboardInfoFailed(string inError)
		{
		}

		public void ReportScoreSucceeded(string inString)
		{
		}

		public void ReportScoreFailed(string inError)
		{
		}

		public void ShowLeaderboardSucceeded(string inString)
		{
		}

		public void ShowLeaderboardFailed(string inError)
		{
		}

		public void LeaderboardDismissed(string inString)
		{
		}

		public void RetrieveScoresSucceeded(string inString)
		{
		}

		public void RetrieveScoresFailed(string inError)
		{
		}

		public void ReportAchievementSucceeded(string inString)
		{
		}

		public void ReportAchievementFailed(string inError)
		{
		}

		public void LoadAchievementsSucceeded(string inString)
		{
		}

		public void LoadAchievementsFailed(string inError)
		{
		}

		public void LoadAchievementDescriptionsSucceeded(string inString)
		{
		}

		public void LoadAchievementDescriptionsFailed(string inError)
		{
		}

		public void ResetAchievementsSucceeded()
		{
		}

		public void ResetAchievementsFailed(string inError)
		{
		}

		public void ShowAchievementsSucceeded(string inString)
		{
		}

		public void ShowAchievementsFailed(string inError)
		{
		}

		public void AchievementsDismissed(string inString)
		{
		}

		public void GetChallengesSucceeded(string inString)
		{
		}

		public void GetChallengesFailed(string inError)
		{
		}

		public void ShowChallengesSucceeded(string inString)
		{
		}

		public void ShowChallengesFailed(string inError)
		{
		}

		public void ChallengesDismissed(string inString)
		{
		}

		public void SendFriendsChallengeFailed(string inError)
		{
		}

		public void SendFriendsChallengeSucceeded(string inString)
		{
		}

		public void LocalPlayerDidSelectChallenge(string inString)
		{
		}
	}
}
