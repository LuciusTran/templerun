using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Globalization;
using System.Runtime.CompilerServices;
using AdjustSdk;
using Imangi.Ad;
using Imangi.Analytics;
using Imangi.GameCenter;
using Imangi.Privacy;
using Imangi.Utilities;
using UnityEngine;

public class GameController : MonoBehaviour
{
	public enum FeatureToggleStatus
	{
		FeatureNotAvailable = 0,
		FeatureNotAvailable_ConsentDenied = 1,
		FeatureAvailable = 2
	}

	[CompilerGenerated]
	private sealed class _003CInitalizeAdjust_003Ed__236 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public GameController _003C_003E4__this;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CInitalizeAdjust_003Ed__236(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	[CompilerGenerated]
	private sealed class _003CLogAdInitOutcome_003Ed__55 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public GameController _003C_003E4__this;

		public float secondsSinceLaunch;

		public string trigger;

		public bool releaseRetryGuard;

		private float _003Celapsed_003E5__2;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CLogAdInitOutcome_003Ed__55(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	[CompilerGenerated]
	private sealed class _003CLogRetryResult_003Ed__227 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public float secondsSinceLaunch;

		public GameController _003C_003E4__this;

		public string trigger;

		private float _003Celapsed_003E5__2;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CLogRetryResult_003Ed__227(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	[CompilerGenerated]
	private sealed class _003CLogStartupAdInitAttemptDeferred_003Ed__53 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public float secondsSinceLaunch;

		public GameController _003C_003E4__this;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CLogStartupAdInitAttemptDeferred_003Ed__53(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	[CompilerGenerated]
	private sealed class _003CWaitAndWarmResources_003Ed__240 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public GameController _003C_003E4__this;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CWaitAndWarmResources_003Ed__240(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	public const string FeatureNameGameServices = "TRGameServices";

	public const string FeatureNameIapStore = "TRIapStore";

	public const string FeatureNameSharing = "TRSharing";

	private bool _privacyFlowInProgress;

	private bool _adServiceRetryInFlight;

	private int _appLovinRetryCount;

	private bool _switchedToAdMob;

	private bool _adInitOutcomeLogged;

	private bool _adInitHeldForRegulation;

	private const string _LogChannel = "GameController";

	public const string Pref_TutorialKey = "TR Tutorial";

	public const string Pref_CurrentLanguageKey = "TR Current Language";

	public const string Pref_FriendMarkerKey = "TR Friend Marker";

	public ShaderVariantCollection AllShaderVariants;

	public PathElement PathRoot;

	public PathElement.PathDirection PathRootOrigin;

	public PathElement LastTurnPathPiece;

	public Region2D SafetyNetRegion;

	public int TutorialID;

	public GameCamera MainCamera;

	public MovingObject MainCameraFocusPoint;

	public SceneryManager Scenery;

	public CommonPlayer Player;

	public CharacterPlayer GamePlayer;

	public GameInput GameInput;

	public UISprite Countdown;

	public PathElement NearestElement;

	public PathElement LastNearestElement;

	public PathElement.PathLevel LastLevel;

	public GameGUI GameInterface;

	public AwardedObjectives GameOverInterface;

	public RecordManager RecordManager;

	public PlayerManager PlayerManager;

	public GameObject TutorialUIGameObjects;

	public GameObject CurrentTutorialUIGameObject;

	[Header("State Variables")]
	public float TimeSinceGameStart;

	public float TimeSinceLastPause;

	public float TimeSinceGameEnd;

	public bool IsPaused;

	public bool IsGameStarted;

	public bool IsGameOver;

	public bool IsGameOverFinished;

	public bool IsResurrecting;

	private float _LaunchTime;

	private int _AdInitRetryCount;

	private bool _WasRecoveredByRetry;

	private bool _needsPrivacyFlowAfterGame;

	private Action _OnGameOverForAdInit;

	public float TimeSinceResurrectStart;

	public int UsedAngelWingsCount;

	public int UsedAngelWingsPermaCount;

	public int ResurrectionCount;

	public bool UsedHeadStart;

	public bool UsedHeadStartMega;

	public float MaxDistanceWithoutCoins;

	public bool IsNewHighScore;

	public int HighScore;

	public bool IsTutorialMode;

	public bool ShowTutorialGuides;

	public bool IsIntroScene;

	public float TutorialTextExtraDuration;

	public float TimeSinceTutorialSectionEnded;

	public int TutorialDeathCount;

	public float TimeSinceTutorialStart;

	public bool AutoRestart;

	public float EndGameDelayTime;

	public float DistanceRemainder;

	public float DistanceTraveled;

	public float DistanceToChangeAtTemple;

	public float DistanceToChangeAtOther;

	public float DistanceTraveledSinceLastLevelChange;

	public float DistanceToTurnSection;

	public float DistanceToTurnSectionEnd;

	public float DistanceTraveledSinceLastTurnSection;

	public float DistanceToChangeDoubleCoins;

	public float DistanceToChangeTripleCoins;

	public float AverageScorePerBlock;

	public int LastBlockScore;

	[Header("Powerups")]
	public int CoinMagnetMultiplier;

	public int CoinBonusValue;

	public float VacuumDuration;

	public float InvincibilityDuration;

	public float BoostDistance;

	public bool DidStumble;

	public int StumbleCount;

	public bool UsedPowers;

	public int ScoreWhenFirstUsedPowers;

	[Header("Pickups")]
	public int NumMagnetBonusesPickedUp;

	public int NumBoostsPickedUp;

	public int NumInvisibilityBonusesPickedUp;

	public int NumMegaCoinsPickedUp;

	public bool UsedCheat;

	public float TimeSinceCheat;

	[Header("Head Start")]
	public float HeadStartStartDistance;

	public float HeadStartEndDistance;

	public float HeadStartBoostDistance;

	public float HeadStartMegaBoostDistance;

	public bool HandelingEndGame;

	[Header("Friend Markers")]
	public GameObject FriendMarkerPrefab;

	private bool UseFriendMarkers;

	private List<FriendMarker> FriendMarkers;

	private int FriendScoresCount;

	private List<ImangiGameCenterScore> FriendScores;

	private string _CurrentPlayerId;

	private readonly string[] _LeaderBoardNames;

	private int _CurrentLeaderboardIdx;

	[Header("Save Me")]
	public bool ShouldPromptForSaveMe;

	public bool IsPromptingForSaveMe;

	public bool IsShowingSaveMeVideo;

	public bool SkippedSaveMeVideo;

	public bool SaveMePromptTimedOut;

	public bool ClosedSaveMeVideo;

	public bool WatchedSavedMeVideo;

	public bool CancelledSaveMeVideo;

	public int SaveMeUsedCount;

	public int MaxScoreBeforeFirstSaveMe;

	public int MaxCoinsBeforeFirstSaveMe;

	public int MaxDistBeforeFirstSaveMe;

	private bool _VideoAdEventsHooked;

	private const string _VideoAdSpaceName = "SaveMe";

	private const string _AdPlacement = "SaveMe";

	private bool _IsVideoAvailable;

	private bool _IsVideoAvailableFirstCheck;

	[Header("Count down")]
	public bool IsInCountdown;

	public float TimeSinceCountdownStarted;

	public bool IsStartOfCountDown;

	public bool Has3SoundPlayed;

	public bool Has2SoundPlayed;

	public bool Has1SoundPlayed;

	[Header("Count down")]
	public int EnemyCount;

	private List<Enemy> Enemies;

	public float EnemySpreadLeftRight;

	public float EnemySpreadFrontBack;

	public float EnemyFollowDistance;

	public GameObject EnemyPrefab;

	[Header("Controls")]
	public Vector3 AccForceVector;

	public bool IsSwiping;

	public Vector2 LastSwipePoint;

	public float LastSwipeTime;

	[Header("Sounds")]
	public int RunCycleLength;

	public float TimeSinceLastCoin;

	public GameObject SafteyNetPrefab;

	public AudioManager Audio;

	public static GameController SharedInstance;

	public PauseMenu PauseGameGUI;

	public List<string> AwardedAchievements;

	[Header("Timed Celebration Events")]
	public List<TimedCelebrationEvents.Entry> TimedCelebrationEntries;

	[Header("Loading Screen")]
	public GameObject UiRoot;

	public GameObject LoadingScreenPrefab;

	[HideInInspector]
	public UiLoadingSplashScreen LoadingScreenComponent;

	public bool SkipFrame;

	public bool GodMode;

	protected ImangiLocaleInfo _CurrentLocale;

	private CultureInfo currentCultureInfo;

	public static RemoteConfigManager RCManager;

	private static bool _RemoteConfigReady;

	protected bool _InitializedAdManager;

	private ImangiLocaleInfo inImangiLocaleInfo;

	public bool DebugHyperCoins;

	private static CoinSpawnConfigData CoinSpawnConfig;

	private static ControlsConfigData ControlsConfig;

	private static PlayerConfigData PlayerConfig;

	public bool IsAdInitHeldForRegulation => false;

	public bool NeedsPrivacyFlowAfterGame => false;

	public bool IsPostGamePrivacyFlowActive => false;

	public string DeeplinkUrl { get; private set; }

	public ImangiLocaleInfo CurrentLocale => null;

	public static CultureInfo CurrentCultureInfo => null;

	public static bool RemoteConfigReady
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public static bool AllowFallOnCliffs => false;

	public static bool AllowFallOnNarrows => false;

	public static bool AllowSwipeStumbleDeath => false;

	public static bool AllowSwipeToStrafe => false;

	public static bool AllowSwipeToSlamDown => false;

	public static bool AllowTiltToTurn => false;

	public static float StartRunVelocity => 0f;

	public static float MaxRunVelocity => 0f;

	public static float StumbleSlowDownPercent => 0f;

	public static float ResurrectionSlowDownPercent => 0f;

	public static int ResurrectionBoostDistance => 0;

	public void SendRunStartEvent()
	{
	}

	public void SendRunEndEvent()
	{
	}

	public void SendTutorialStartEvent()
	{
	}

	public void SendTutorialEndEvent()
	{
	}

	public void SendTutorialDeathEvent()
	{
	}

	public void SendTutorialStumbleEvent()
	{
	}

	public void SendTutorialExitedEvent()
	{
	}

	public void SendTutorialSectionCompleteEvent()
	{
	}

	public void SendScoreMilestoneEvent(int score)
	{
	}

	public void SendLifetimeRunsMilestoneEvent(int lifetimeRuns)
	{
	}

	public void SetFeature(string inFeatureName)
	{
	}

	public void SetFeature(string inFeatureName, bool inState)
	{
	}

	public static FeatureToggleStatus CheckFeatureState(string inFeatureName)
	{
		return FeatureToggleStatus.FeatureNotAvailable;
	}

	public static bool AreGameServicesAvailable()
	{
		return false;
	}

	public void InitializeGameCenter()
	{
	}

	private void LocalPlayerAuthenticated(ImangiGameCenterPlayer inPlayer)
	{
	}

	private void LoadedAchievements(List<ImangiGameCenterAchievement> inAchievements)
	{
	}

	private void RetrievedScoresFromGameCenter(List<ImangiGameCenterScore> inScores)
	{
	}

	private void RetrievingScoresFailed(string inError)
	{
	}

	public bool ShouldRetryAdInitNow()
	{
		return false;
	}

	private static string CurrentNetworkState()
	{
		return null;
	}

	private static EventParameter AgeRestrictedParam()
	{
		return null;
	}

	private static EventParameter RegulationBranchParam()
	{
		return null;
	}

	private static bool MaxSdkInitialized()
	{
		return false;
	}

	private EventParameter[] AdServiceStateParams()
	{
		return null;
	}

	private static string RcReachableParamValue()
	{
		return null;
	}

	private static string RcAgeSecondsParamValue()
	{
		return null;
	}

	private void RefreshRcReachability(string inReason)
	{
	}

	private static EventParameter[] Concat(EventParameter[] inFirst, EventParameter[] inSecond)
	{
		return null;
	}

	private static int EffectiveMaxAppLovinRetries()
	{
		return 0;
	}

	public void PostGamePrivacyFlow(Action onComplete)
	{
	}

	public void EndOfRunAdInitRetryGate()
	{
	}

	private static ImangiRegulationType CurrentRegulationType()
	{
		return ImangiRegulationType.GDPR;
	}

	public bool ShouldHoldAdInitForUnresolvedRegulation()
	{
		return false;
	}

	private void ReleaseHeldAdInit(string inTrigger)
	{
	}

	private void RetryAdServiceInit()
	{
	}

	public void LogStartupAdInitAttempt()
	{
	}

	[IteratorStateMachine(typeof(_003CLogStartupAdInitAttemptDeferred_003Ed__53))]
	private IEnumerator LogStartupAdInitAttemptDeferred(float secondsSinceLaunch)
	{
		return null;
	}

	private void SwitchToAdMob(AdManager mgr)
	{
	}

	[IteratorStateMachine(typeof(_003CLogAdInitOutcome_003Ed__55))]
	private IEnumerator LogAdInitOutcome(float secondsSinceLaunch, string trigger, bool releaseRetryGuard)
	{
		return null;
	}

	private void EmitAdInitRetryResult(float secondsSinceLaunch, string trigger)
	{
	}

	public void LogBootConsentAttempt()
	{
	}

	public void LogBootConsentOutcome(string inOutcome)
	{
	}

	public void InitAdServices()
	{
	}

	public void InitializeAdManager()
	{
	}

	private void OnNetworkChangedForAdInit(NetworkReachability oldState, NetworkReachability newState)
	{
	}

	private void TriggerPrivacyFlowForAdInit()
	{
	}

	private void OnRCFetchCompleteForAdInit(bool success)
	{
	}

	private void ExecutePrivacyFlowForAdInit()
	{
	}

	private void OnPrivacyFlowCompleteForAdInit()
	{
	}

	private void OnPostGamePrivacyFlow()
	{
	}

	[IteratorStateMachine(typeof(_003CLogRetryResult_003Ed__227))]
	private IEnumerator LogRetryResult(float secondsSinceLaunch, string trigger)
	{
		return null;
	}

	public void LogRetryFirstImpression()
	{
	}

	public static AdManager GetAdManager()
	{
		return null;
	}

	public static bool IsVideoAdAvailable()
	{
		return false;
	}

	public static void ResetIsVideoAvailableFirstCheck()
	{
	}

	private void CreateRemoteConfigManager()
	{
	}

	private void OnRemoteConfigManagerInitializeFetchComplete(bool inSuccess)
	{
	}

	private void Awake()
	{
	}

	private void Start()
	{
	}

	[IteratorStateMachine(typeof(_003CInitalizeAdjust_003Ed__236))]
	private IEnumerator InitalizeAdjust()
	{
		return null;
	}

	public static void AttributionChangedCallback(AdjustAttribution attributionData)
	{
	}

	private void OnApplicationPause(bool paused)
	{
	}

	private void OnApplicationFocus(bool focus)
	{
	}

	[IteratorStateMachine(typeof(_003CWaitAndWarmResources_003Ed__240))]
	private IEnumerator WaitAndWarmResources()
	{
		return null;
	}

	public void DestroyLoadingScreen()
	{
	}

	private void StartGame()
	{
	}

	private void OnApplicationQuit()
	{
	}

	public void GameStart()
	{
	}

	public void SnapMainMenu()
	{
	}

	public void ResetTutorial()
	{
	}

	public void RestartGame()
	{
	}

	public void SetMainMenuAnimation()
	{
	}

	private void SetPathElementVisibility()
	{
	}

	protected void GameController_OnAdClicked(AdService inService, AdType inAdType, string inAdSpaceName)
	{
	}

	protected void GameController_OnAdOpened(AdService inService, AdType inAdType, string inAdSpaceName)
	{
	}

	protected void GameController_OnAdFailed(AdService inService, AdType inAdType, string inAdSpaceName, string inError)
	{
	}

	protected void GameController_OnDidReceiveAd(AdService inService, AdType inAdType, string inAdSpaceName)
	{
	}

	protected void GameController_OnFailedToReceiveAd(AdService inService, AdType inAdType, string inAdSpaceName)
	{
	}

	protected void GameController_OnAdWillLeaveApplication(AdService inService, AdType inAdType, string inAdSpaceName)
	{
	}

	protected void GameController_OnAdDismissed(AdService inService, AdType inAdType, string inAdSpaceName, bool inCompleted)
	{
	}

	protected void HookAdEvents(AdManager inAdMngr)
	{
	}

	protected void UnhookAdEvents()
	{
	}

	public void SaveMeVideo_Watch()
	{
	}

	public void SaveMeVideo_TimedOut()
	{
	}

	public void SaveMeVideo_Skip()
	{
	}

	private void Update()
	{
	}

	private void SimulateWorldElements()
	{
	}

	private List<ImangiGameCenterScore> GetFriendScoresInRange(float inMin, float inMax)
	{
		return null;
	}

	private void ResetFriendScores()
	{
	}

	private FriendMarker GetUnusedFriendMarker()
	{
		return null;
	}

	private void HandleFriendMarkers()
	{
	}

	private void EndGame(float delayTime, bool autoRestart)
	{
	}

	private bool ResurrectPlayer(bool isSaveMe = false)
	{
		return false;
	}

	private void Prune()
	{
	}

	private void HandleResurrecting()
	{
	}

	private void HandleCountDown()
	{
	}

	private void DisableIntroScene()
	{
	}

	private void HandleDelayedJumping()
	{
	}

	private void HandleDelayedSliding()
	{
	}

	private void HandleDelayedTurning()
	{
	}

	private void HandleInvincibility()
	{
	}

	private void HandleTutorialMode()
	{
	}

	private void MakeSureDidntRunPastTurn(Vector3 oldPlayerPosition, Vector3 newPlayerPosition)
	{
	}

	private void CheckHittingScenery()
	{
	}

	public void HandleBonusItemPickup(PathElement pathElement, PathElement.PathDirection origin, bool isRootNode, int bailOut = 3)
	{
	}

	public void BoostPlayer(float distance, bool isMega = false)
	{
	}

	private void HandleCollisionWithObstacles()
	{
	}

	private void ComputeDistanceTraveled()
	{
	}

	private GUIParticle HintSprite(string name, Vector3 start, Vector3 motion, bool startAnimation = true, bool ContainsText = false, string text = null)
	{
		return null;
	}

	private void HandleTutorialHints()
	{
	}

	private void ChangeLevel()
	{
	}

	private void HandlePacing()
	{
	}

	private void HandleControls()
	{
	}

	public void SimulateEnemies()
	{
	}

	public void DeleteAnyExistingPath()
	{
	}

	public void LoadLevelInformation()
	{
	}

	public void SetupEnemy()
	{
	}

	private void UpdateAndSaveRecords()
	{
	}

	private void HandleEndGame()
	{
	}

	public void UseAngelWings()
	{
	}

	public void UsePermaWings()
	{
	}

	public void UseHeadStart()
	{
	}

	public void UseHeadStartMega()
	{
	}

	public void Pause()
	{
	}

	public void Unpause()
	{
	}

	private void UpdateAchievementRecords()
	{
	}

	public void AdjustCultureinfoForLanguageSetting(string languageName)
	{
	}

	public void SetLocalizationSystemLanguage(string newLanguage, bool updateRecordManager)
	{
	}

	private void SetupDeeplinkTracker()
	{
	}

	public void OnDeeplinkFound(string url, string source = "unknown")
	{
	}

	public static void InitializeConfig(PromoFile inPromoFile)
	{
	}

	private static bool ProcessCoinSpawnConfigData(ConfigData inConfigData)
	{
		return false;
	}

	private static bool ProcessControlsConfigData(ConfigData inConfigData)
	{
		return false;
	}

	private static bool ProcessPlayerConfigData(ConfigData inConfigData)
	{
		return false;
	}

	public static int GetDoubleValueCoinSpawnDistanceForUpgradeLvl(int lvl)
	{
		return 0;
	}

	public static int GetTripleValueCoinSpawnDistanceForUpgradeLvl(int lvl)
	{
		return 0;
	}

	public static float GetAccelerationCurveThreshold(int index)
	{
		return 0f;
	}

	public static float GetAccelerationCurveForce(int index)
	{
		return 0f;
	}
}
