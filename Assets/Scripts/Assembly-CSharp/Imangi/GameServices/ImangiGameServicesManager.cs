using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace Imangi.GameServices
{
	public class ImangiGameServicesManager : MonoBehaviour
	{
		public enum LeaderboardTimeScope
		{
			Today = 0,
			Week = 1,
			AllTime = 2
		}

		public delegate GameObject CustomGameServiceManagerDelegate();

		public static readonly string LogChannel;

		[CompilerGenerated]
		private static Action<string> m_ReportScoreSucceededEvent;

		[CompilerGenerated]
		private static Action<string, string> m_ReportScoreFailedEvent;

		[CompilerGenerated]
		private static Action<string> m_ShowLeaderboardSucceededEvent;

		[CompilerGenerated]
		private static Action<string> m_ShowLeaderboardFailedEvent;

		[CompilerGenerated]
		private static Action<string> m_RetrieveFriendScoresFailedEvent;

		[CompilerGenerated]
		private static Action<string, bool> m_ReportAchievementSuccessEvent;

		[CompilerGenerated]
		private static Action<string, string> m_ReportAchievementFailureEvent;

		[CompilerGenerated]
		private static Action<string> m_ShowAchievementsSucceededEvent;

		[CompilerGenerated]
		private static Action<string> m_ShowAchievementsFailedEvent;

		[CompilerGenerated]
		private static Action<List<string>> m_GetCompletedAchievementsSucceededEvent;

		[CompilerGenerated]
		private static Action<string> m_GetCompletedAchievementsFailedEvent;

		[CompilerGenerated]
		private static Action<List<string>> m_GetAllAchievementsSucceededEvent;

		[CompilerGenerated]
		private static Action<string> m_GetAllAchievementsFailedEvent;

		[CompilerGenerated]
		private static Action<string> m_AuthenticationSuccessEvent;

		[CompilerGenerated]
		private static Action<string> m_AuthenticationFailureEvent;

		[CompilerGenerated]
		private static Action m_SignedOutEvent;

		protected static ImangiGameServicesManager Instance;

		protected static GameObject GameServicesGameObj;

		public static CustomGameServiceManagerDelegate CustomGameServiceManagerCallback;

		public static bool ImangiGameServices_VerboseLogging;

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

		public static event Action<string> RetrieveFriendScoresFailedEvent
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

		public static event Action<string, bool> ReportAchievementSuccessEvent
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

		public static event Action<string, string> ReportAchievementFailureEvent
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

		public static event Action<List<string>> GetCompletedAchievementsSucceededEvent
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

		public static event Action<string> GetCompletedAchievementsFailedEvent
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

		public static event Action<List<string>> GetAllAchievementsSucceededEvent
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

		public static event Action<string> GetAllAchievementsFailedEvent
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

		public static event Action SignedOutEvent
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

		public static void ImangiGameServices_LogMessage(string inMessage, params object[] paramList)
		{
		}

		public static void ImangiGameServices_LogMessageForced(string inMessage, params object[] paramList)
		{
		}

		public static ImangiGameServicesManager GetInstance()
		{
			return null;
		}

		public static bool IsGameServiceAvailable()
		{
			return false;
		}

		public static bool AreGameChallengesAvailable()
		{
			return false;
		}

		public static bool AreGameChallengesSupported()
		{
			return false;
		}

		public static void Authenticate(bool isSilent = false)
		{
		}

		public static bool IsSignedIn()
		{
			return false;
		}

		public static void SignOut()
		{
		}

		public static string AssignSignInLogo()
		{
			return null;
		}

		public static void ReportScore(long inScore, string inLeaderboardID, ulong inContext = 0uL)
		{
		}

		public static void ShowLeaderboard(string inLeaderboardID = "", LeaderboardTimeScope inTimeScope = LeaderboardTimeScope.AllTime)
		{
		}

		public static bool AreLeaderboardsSupported()
		{
			return false;
		}

		protected virtual bool AreLeaderboardsSupported_Internal()
		{
			return false;
		}

		public static void RetrieveFriendScores(string inLeaderboardID = "", LeaderboardTimeScope inTimeScope = LeaderboardTimeScope.AllTime)
		{
		}

		public static void ReportAchievement(string inAchievementID, float inPercentage = 0f)
		{
		}

		public static void ShowAchievements()
		{
		}

		public static void GetAllAchievements()
		{
		}

		public static void GetCompletedAchievements()
		{
		}

		protected virtual bool IsGameServiceAvailable_Internal()
		{
			return false;
		}

		protected virtual void ReportScore_Internal(long inScore, string inLeaderboardID, ulong inContext = 0uL)
		{
		}

		protected virtual void Authenticate_Internal(bool isSilent = false)
		{
		}

		protected virtual bool IsSignedIn_Internal()
		{
			return false;
		}

		protected virtual void SignOut_Internal()
		{
		}

		protected virtual void ReportAchievement_Internal(string inAchievementID, float inPercentage = 0f)
		{
		}

		protected virtual void ShowLeaderboard_Internal(string inLeaderboardID, LeaderboardTimeScope inTimeScope)
		{
		}

		protected virtual void RetrieveFriendScores_Internal(string inLeaderboardID, LeaderboardTimeScope inTimeScope)
		{
		}

		protected virtual void ShowAchievements_Internal()
		{
		}

		protected virtual void LoadAllAchievements_Internal()
		{
		}

		protected virtual void LoadCompletedAchievements_Internal()
		{
		}

		protected virtual string AssignSignInLogo_Internal()
		{
			return null;
		}

		public void ReportAuthenticationFailed(string inError)
		{
		}

		public void ReportAuthenticationSucceeded(string inString)
		{
		}

		public void ReportScoreSucceeded(string inString)
		{
		}

		public void ReportScoreFailed(string inLeaderboardID, string inError)
		{
		}

		public void ShowLeaderboardSucceeded(string inMessage)
		{
		}

		public void ShowLeaderboardFailed(string inError)
		{
		}

		public void ShowRetrieveFriendScoresFailed(string inError)
		{
		}

		public void ReportAchievementSucceeded(string inString, bool isNewAchievement = false)
		{
		}

		public void ReportAchievementFailed(string inError, string inAchievementID = "")
		{
		}

		public void UserSignedOut()
		{
		}

		public void ShowAchievementsSucceeded(string inString)
		{
		}

		public void ShowAchievementsFailed(string inError)
		{
		}

		public void GetAllAchievementsSucceeded(List<string> inStringList)
		{
		}

		public void GetAllAchievementsFailed(string inError)
		{
		}

		public void GetAllCompletedAchievementsSucceeded(List<string> inStringList)
		{
		}

		public void GetAllCompletedAchievementsFailed(string inError)
		{
		}

		protected virtual bool AreGameChallengesAvailable_Internal()
		{
			return false;
		}

		protected virtual bool AreGameChallengesSupported_Internal()
		{
			return false;
		}
	}
}
