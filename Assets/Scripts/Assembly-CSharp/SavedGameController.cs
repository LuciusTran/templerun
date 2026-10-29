using System;

[Serializable]
public class SavedGameController
{
	public SavedPathElement PathRoot;

	public PathElement.PathDirection PathRootOrigin;

	public string LastTurnPathPiece;

	public int TutorialID;

	public string NearestElement;

	public string LastNearestElement;

	public PathElement.PathLevel LastLevel;

	public float TimeSinceGameStart;

	public float TimeSinceLastPause;

	public float TimeSinceGameEnd;

	public bool IsPaused;

	public bool IsGameStarted;

	public bool IsGameOver;

	public bool IsGameOverFinished;

	public bool IsResurrecting;

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

	public int CoinMagnetMultiplier;

	public int CoinBonusValue;

	public float VacuumDuration;

	public float InvincibilityDuration;

	public float BoostDistance;

	public bool DidStumble;

	public int StumbleCount;

	public bool UsedPowers;

	public float HeadStartStartDistance;

	public float HeadStartEndDistance;

	public float HeadStartBoostDistance;

	public float HeadStartMegaBoostDistance;

	public bool HandelingEndGame;

	public int ScoreWhenFirstUsedPowers;

	public int NumMagnetBonusesPickedUp;

	public int NumBoostsPickedUp;

	public int NumInvisibilityBonusesPickedUp;

	public int NumMegaCoinsPickedUp;

	public bool UsedCheat;

	public float TimeSinceCheat;

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

	public SavedGameController()
	{
	}

	public SavedGameController(GameController gc)
	{
	}

	public void Apply(GameController gc)
	{
	}

	public void ProcessPathElement(PathElement element)
	{
	}
}
