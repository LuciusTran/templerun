//Type is in global namespace

[Token(Token = "0x20000F9")]
public class SavedGameController
{
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x400084E")]
	public SavedPathElement PathRoot; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x400084F")]
	public PathDirection PathRootOrigin; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000850")]
	public string LastTurnPathPiece; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000851")]
	public int TutorialID; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000852")]
	public string NearestElement; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000853")]
	public string LastNearestElement; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000854")]
	public PathLevel LastLevel; //Field offset: 0x40
	[FieldOffset(Offset = "0x44")]
	[Token(Token = "0x4000855")]
	public float TimeSinceGameStart; //Field offset: 0x44
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4000856")]
	public float TimeSinceLastPause; //Field offset: 0x48
	[FieldOffset(Offset = "0x4C")]
	[Token(Token = "0x4000857")]
	public float TimeSinceGameEnd; //Field offset: 0x4C
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000858")]
	public bool IsPaused; //Field offset: 0x50
	[FieldOffset(Offset = "0x51")]
	[Token(Token = "0x4000859")]
	public bool IsGameStarted; //Field offset: 0x51
	[FieldOffset(Offset = "0x52")]
	[Token(Token = "0x400085A")]
	public bool IsGameOver; //Field offset: 0x52
	[FieldOffset(Offset = "0x53")]
	[Token(Token = "0x400085B")]
	public bool IsGameOverFinished; //Field offset: 0x53
	[FieldOffset(Offset = "0x54")]
	[Token(Token = "0x400085C")]
	public bool IsResurrecting; //Field offset: 0x54
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x400085D")]
	public float TimeSinceResurrectStart; //Field offset: 0x58
	[FieldOffset(Offset = "0x5C")]
	[Token(Token = "0x400085E")]
	public int UsedAngelWingsCount; //Field offset: 0x5C
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x400085F")]
	public int UsedAngelWingsPermaCount; //Field offset: 0x60
	[FieldOffset(Offset = "0x64")]
	[Token(Token = "0x4000860")]
	public int ResurrectionCount; //Field offset: 0x64
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000861")]
	public bool UsedHeadStart; //Field offset: 0x68
	[FieldOffset(Offset = "0x69")]
	[Token(Token = "0x4000862")]
	public bool UsedHeadStartMega; //Field offset: 0x69
	[FieldOffset(Offset = "0x6C")]
	[Token(Token = "0x4000863")]
	public float MaxDistanceWithoutCoins; //Field offset: 0x6C
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x4000864")]
	public bool IsNewHighScore; //Field offset: 0x70
	[FieldOffset(Offset = "0x74")]
	[Token(Token = "0x4000865")]
	public int HighScore; //Field offset: 0x74
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4000866")]
	public bool IsTutorialMode; //Field offset: 0x78
	[FieldOffset(Offset = "0x79")]
	[Token(Token = "0x4000867")]
	public bool ShowTutorialGuides; //Field offset: 0x79
	[FieldOffset(Offset = "0x7A")]
	[Token(Token = "0x4000868")]
	public bool IsIntroScene; //Field offset: 0x7A
	[FieldOffset(Offset = "0x7C")]
	[Token(Token = "0x4000869")]
	public float TutorialTextExtraDuration; //Field offset: 0x7C
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x400086A")]
	public float TimeSinceTutorialSectionEnded; //Field offset: 0x80
	[FieldOffset(Offset = "0x84")]
	[Token(Token = "0x400086B")]
	public int TutorialDeathCount; //Field offset: 0x84
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x400086C")]
	public float TimeSinceTutorialStart; //Field offset: 0x88
	[FieldOffset(Offset = "0x8C")]
	[Token(Token = "0x400086D")]
	public bool AutoRestart; //Field offset: 0x8C
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x400086E")]
	public float EndGameDelayTime; //Field offset: 0x90
	[FieldOffset(Offset = "0x94")]
	[Token(Token = "0x400086F")]
	public float DistanceRemainder; //Field offset: 0x94
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x4000870")]
	public float DistanceTraveled; //Field offset: 0x98
	[FieldOffset(Offset = "0x9C")]
	[Token(Token = "0x4000871")]
	public float DistanceToChangeAtTemple; //Field offset: 0x9C
	[FieldOffset(Offset = "0xA0")]
	[Token(Token = "0x4000872")]
	public float DistanceToChangeAtOther; //Field offset: 0xA0
	[FieldOffset(Offset = "0xA4")]
	[Token(Token = "0x4000873")]
	public float DistanceTraveledSinceLastLevelChange; //Field offset: 0xA4
	[FieldOffset(Offset = "0xA8")]
	[Token(Token = "0x4000874")]
	public float DistanceToTurnSection; //Field offset: 0xA8
	[FieldOffset(Offset = "0xAC")]
	[Token(Token = "0x4000875")]
	public float DistanceToTurnSectionEnd; //Field offset: 0xAC
	[FieldOffset(Offset = "0xB0")]
	[Token(Token = "0x4000876")]
	public float DistanceTraveledSinceLastTurnSection; //Field offset: 0xB0
	[FieldOffset(Offset = "0xB4")]
	[Token(Token = "0x4000877")]
	public float DistanceToChangeDoubleCoins; //Field offset: 0xB4
	[FieldOffset(Offset = "0xB8")]
	[Token(Token = "0x4000878")]
	public float DistanceToChangeTripleCoins; //Field offset: 0xB8
	[FieldOffset(Offset = "0xBC")]
	[Token(Token = "0x4000879")]
	public float AverageScorePerBlock; //Field offset: 0xBC
	[FieldOffset(Offset = "0xC0")]
	[Token(Token = "0x400087A")]
	public int LastBlockScore; //Field offset: 0xC0
	[FieldOffset(Offset = "0xC4")]
	[Token(Token = "0x400087B")]
	public int CoinMagnetMultiplier; //Field offset: 0xC4
	[FieldOffset(Offset = "0xC8")]
	[Token(Token = "0x400087C")]
	public int CoinBonusValue; //Field offset: 0xC8
	[FieldOffset(Offset = "0xCC")]
	[Token(Token = "0x400087D")]
	public float VacuumDuration; //Field offset: 0xCC
	[FieldOffset(Offset = "0xD0")]
	[Token(Token = "0x400087E")]
	public float InvincibilityDuration; //Field offset: 0xD0
	[FieldOffset(Offset = "0xD4")]
	[Token(Token = "0x400087F")]
	public float BoostDistance; //Field offset: 0xD4
	[FieldOffset(Offset = "0xD8")]
	[Token(Token = "0x4000880")]
	public bool DidStumble; //Field offset: 0xD8
	[FieldOffset(Offset = "0xDC")]
	[Token(Token = "0x4000881")]
	public int StumbleCount; //Field offset: 0xDC
	[FieldOffset(Offset = "0xE0")]
	[Token(Token = "0x4000882")]
	public bool UsedPowers; //Field offset: 0xE0
	[FieldOffset(Offset = "0xE4")]
	[Token(Token = "0x4000883")]
	public float HeadStartStartDistance; //Field offset: 0xE4
	[FieldOffset(Offset = "0xE8")]
	[Token(Token = "0x4000884")]
	public float HeadStartEndDistance; //Field offset: 0xE8
	[FieldOffset(Offset = "0xEC")]
	[Token(Token = "0x4000885")]
	public float HeadStartBoostDistance; //Field offset: 0xEC
	[FieldOffset(Offset = "0xF0")]
	[Token(Token = "0x4000886")]
	public float HeadStartMegaBoostDistance; //Field offset: 0xF0
	[FieldOffset(Offset = "0xF4")]
	[Token(Token = "0x4000887")]
	public bool HandelingEndGame; //Field offset: 0xF4
	[FieldOffset(Offset = "0xF8")]
	[Token(Token = "0x4000888")]
	public int ScoreWhenFirstUsedPowers; //Field offset: 0xF8
	[FieldOffset(Offset = "0xFC")]
	[Token(Token = "0x4000889")]
	public int NumMagnetBonusesPickedUp; //Field offset: 0xFC
	[FieldOffset(Offset = "0x100")]
	[Token(Token = "0x400088A")]
	public int NumBoostsPickedUp; //Field offset: 0x100
	[FieldOffset(Offset = "0x104")]
	[Token(Token = "0x400088B")]
	public int NumInvisibilityBonusesPickedUp; //Field offset: 0x104
	[FieldOffset(Offset = "0x108")]
	[Token(Token = "0x400088C")]
	public int NumMegaCoinsPickedUp; //Field offset: 0x108
	[FieldOffset(Offset = "0x10C")]
	[Token(Token = "0x400088D")]
	public bool UsedCheat; //Field offset: 0x10C
	[FieldOffset(Offset = "0x110")]
	[Token(Token = "0x400088E")]
	public float TimeSinceCheat; //Field offset: 0x110
	[FieldOffset(Offset = "0x114")]
	[Token(Token = "0x400088F")]
	public bool ShouldPromptForSaveMe; //Field offset: 0x114
	[FieldOffset(Offset = "0x115")]
	[Token(Token = "0x4000890")]
	public bool IsPromptingForSaveMe; //Field offset: 0x115
	[FieldOffset(Offset = "0x116")]
	[Token(Token = "0x4000891")]
	public bool IsShowingSaveMeVideo; //Field offset: 0x116
	[FieldOffset(Offset = "0x117")]
	[Token(Token = "0x4000892")]
	public bool SkippedSaveMeVideo; //Field offset: 0x117
	[FieldOffset(Offset = "0x118")]
	[Token(Token = "0x4000893")]
	public bool SaveMePromptTimedOut; //Field offset: 0x118
	[FieldOffset(Offset = "0x119")]
	[Token(Token = "0x4000894")]
	public bool ClosedSaveMeVideo; //Field offset: 0x119
	[FieldOffset(Offset = "0x11A")]
	[Token(Token = "0x4000895")]
	public bool WatchedSavedMeVideo; //Field offset: 0x11A
	[FieldOffset(Offset = "0x11B")]
	[Token(Token = "0x4000896")]
	public bool CancelledSaveMeVideo; //Field offset: 0x11B
	[FieldOffset(Offset = "0x11C")]
	[Token(Token = "0x4000897")]
	public int SaveMeUsedCount; //Field offset: 0x11C
	[FieldOffset(Offset = "0x120")]
	[Token(Token = "0x4000898")]
	public int MaxScoreBeforeFirstSaveMe; //Field offset: 0x120
	[FieldOffset(Offset = "0x124")]
	[Token(Token = "0x4000899")]
	public int MaxCoinsBeforeFirstSaveMe; //Field offset: 0x124
	[FieldOffset(Offset = "0x128")]
	[Token(Token = "0x400089A")]
	public int MaxDistBeforeFirstSaveMe; //Field offset: 0x128

	[Address(RVA = "0x12D8374", Offset = "0x12D8374", Length = "0x8")]
	[Token(Token = "0x6000754")]
	public SavedGameController() { }

	[Address(RVA = "0x12D837C", Offset = "0x12D837C", Length = "0x2E0")]
	[Token(Token = "0x6000755")]
	public SavedGameController(GameController gc) { }

	[Address(RVA = "0x12D865C", Offset = "0x12D865C", Length = "0x1BC")]
	[Token(Token = "0x6000756")]
	public void Apply(GameController gc) { }

	[Address(RVA = "0x12D8818", Offset = "0x12D8818", Length = "0x11C")]
	[Token(Token = "0x6000757")]
	public void ProcessPathElement(PathElement element) { }

}

