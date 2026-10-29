//Type is in global namespace

[Token(Token = "0x2000097")]
public class RecordManager : MonoBehaviour
{
	[Token(Token = "0x200009B")]
	internal class cAchievement
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000499")]
		public string achievementId; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x400049A")]
		public string name; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x400049B")]
		public string preDescription; //Field offset: 0x20
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x400049C")]
		public string postDescription; //Field offset: 0x28
		[FieldOffset(Offset = "0x30")]
		[Token(Token = "0x400049D")]
		public bool hidden; //Field offset: 0x30

		[Address(RVA = "0x12B52AC", Offset = "0x12B52AC", Length = "0x8")]
		[Token(Token = "0x60004DA")]
		public cAchievement() { }

	}

	[Token(Token = "0x200009C")]
	internal class cAchievementRecord
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x400049E")]
		public int playerId; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x400049F")]
		public string achievementId; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x40004A0")]
		public float percentComplete; //Field offset: 0x20
		[FieldOffset(Offset = "0x24")]
		[Token(Token = "0x40004A1")]
		public bool updated; //Field offset: 0x24

		[Address(RVA = "0x12B52B4", Offset = "0x12B52B4", Length = "0x8")]
		[Token(Token = "0x60004DB")]
		public cAchievementRecord() { }

	}

	[Token(Token = "0x200009D")]
	internal class cGameCenterScore
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x40004A2")]
		public string playerId; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x40004A3")]
		public string playerName; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x40004A4")]
		public int value; //Field offset: 0x20
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x40004A5")]
		public string formattedValue; //Field offset: 0x28
		[FieldOffset(Offset = "0x30")]
		[Token(Token = "0x40004A6")]
		public string category; //Field offset: 0x30
		[FieldOffset(Offset = "0x38")]
		[Token(Token = "0x40004A7")]
		public int rank; //Field offset: 0x38
		[FieldOffset(Offset = "0x3C")]
		[Token(Token = "0x40004A8")]
		public bool shown; //Field offset: 0x3C

		[Address(RVA = "0x12B52BC", Offset = "0x12B52BC", Length = "0x8")]
		[Token(Token = "0x60004DC")]
		public cGameCenterScore() { }

	}

	[Token(Token = "0x200009A")]
	internal class cPlayerRecord
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000472")]
		public int playerId; //Field offset: 0x10
		[FieldOffset(Offset = "0x14")]
		[Token(Token = "0x4000473")]
		public int bestScore; //Field offset: 0x14
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000474")]
		public int bestCoinScore; //Field offset: 0x18
		[FieldOffset(Offset = "0x1C")]
		[Token(Token = "0x4000475")]
		public int bestDistanceScore; //Field offset: 0x1C
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000476")]
		public int SaveMeBestScore; //Field offset: 0x20
		[FieldOffset(Offset = "0x24")]
		[Token(Token = "0x4000477")]
		public int SaveMeBestCoinScore; //Field offset: 0x24
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x4000478")]
		public int SaveMeBestDistanceScore; //Field offset: 0x28
		[FieldOffset(Offset = "0x2C")]
		[Token(Token = "0x4000479")]
		public int lifetimePlays; //Field offset: 0x2C
		[FieldOffset(Offset = "0x30")]
		[Token(Token = "0x400047A")]
		public int lifetimeCoins; //Field offset: 0x30
		[FieldOffset(Offset = "0x34")]
		[Token(Token = "0x400047B")]
		public int lifetimeDistance; //Field offset: 0x34
		[FieldOffset(Offset = "0x38")]
		[Token(Token = "0x400047C")]
		public int coinCount; //Field offset: 0x38
		[FieldOffset(Offset = "0x3C")]
		[Token(Token = "0x400047D")]
		public int activePlayerCharacter; //Field offset: 0x3C
		[FieldOffset(Offset = "0x40")]
		[Token(Token = "0x400047E")]
		public Int32[] storeItemLevel; //Field offset: 0x40
		[FieldOffset(Offset = "0x48")]
		[Token(Token = "0x400047F")]
		public Int32[] flags; //Field offset: 0x48
		[FieldOffset(Offset = "0x50")]
		[Token(Token = "0x4000480")]
		public bool gameCenterNeedsUpdate; //Field offset: 0x50
		[FieldOffset(Offset = "0x54")]
		[Token(Token = "0x4000481")]
		public int abGroupID; //Field offset: 0x54
		[FieldOffset(Offset = "0x58")]
		[Token(Token = "0x4000482")]
		public bool groupIdCalculated; //Field offset: 0x58
		[FieldOffset(Offset = "0x60")]
		[Token(Token = "0x4000483")]
		public DateTime StoreItemRewardedAdCooledTime; //Field offset: 0x60
		[FieldOffset(Offset = "0x68")]
		[Token(Token = "0x4000484")]
		public bool NoAds; //Field offset: 0x68
		[FieldOffset(Offset = "0x6C")]
		[Token(Token = "0x4000485")]
		public int InterstitialAdsSeenCount; //Field offset: 0x6C
		[FieldOffset(Offset = "0x70")]
		[Token(Token = "0x4000486")]
		public int VideoAdsWatchedCount; //Field offset: 0x70
		[FieldOffset(Offset = "0x74")]
		[Token(Token = "0x4000487")]
		public float GlobalChallengesCurrentValue; //Field offset: 0x74
		[FieldOffset(Offset = "0x78")]
		[Token(Token = "0x4000488")]
		public int GlobalChallengesCurrentIndex; //Field offset: 0x78
		[FieldOffset(Offset = "0x80")]
		[Token(Token = "0x4000489")]
		public string GlobalChallengesStringPromo; //Field offset: 0x80
		[FieldOffset(Offset = "0x88")]
		[Token(Token = "0x400048A")]
		public bool GlobalChallengesStartLN_Status; //Field offset: 0x88
		[FieldOffset(Offset = "0x89")]
		[Token(Token = "0x400048B")]
		public bool GlobalChallengesMidLN_Status; //Field offset: 0x89
		[FieldOffset(Offset = "0x8A")]
		[Token(Token = "0x400048C")]
		public bool GlobalChallengesEndLN_Status; //Field offset: 0x8A
		[FieldOffset(Offset = "0x8C")]
		[Token(Token = "0x400048D")]
		public int GlobalChallengesMidLN_ID; //Field offset: 0x8C
		[FieldOffset(Offset = "0x90")]
		[Token(Token = "0x400048E")]
		public bool GlobalChallengesStartPromoShown; //Field offset: 0x90
		[FieldOffset(Offset = "0x91")]
		[Token(Token = "0x400048F")]
		public bool GlobalChallengeFTUE_Status; //Field offset: 0x91
		[FieldOffset(Offset = "0x94")]
		[Token(Token = "0x4000490")]
		public int GlobalChallengeRewardNoToGive; //Field offset: 0x94
		[FieldOffset(Offset = "0x98")]
		[Token(Token = "0x4000491")]
		public int GlobalChallengePreviousRewardNoGiven; //Field offset: 0x98
		[FieldOffset(Offset = "0x9C")]
		[Token(Token = "0x4000492")]
		public bool GlobalChallengeMilestoneAchievedInRun; //Field offset: 0x9C
		[FieldOffset(Offset = "0xA0")]
		[Token(Token = "0x4000493")]
		public DateTime BetaTesterPopupNextTimeToBeDisplayed; //Field offset: 0xA0
		[FieldOffset(Offset = "0xA8")]
		[Token(Token = "0x4000494")]
		public bool AllowNotificationPopupShown; //Field offset: 0xA8
		[FieldOffset(Offset = "0xA9")]
		[Token(Token = "0x4000495")]
		public bool ReactivationCampaignPrizeAwarded; //Field offset: 0xA9
		[FieldOffset(Offset = "0xB0")]
		[FormerlySerializedAs("ReactivationCampaignDeeplinkUrl")]
		[Token(Token = "0x4000496")]
		public string ReactivationCampaignReceivedDeeplinkUrl; //Field offset: 0xB0
		[FieldOffset(Offset = "0xB8")]
		[OptionalField(VersionAdded = 2)]
		[Token(Token = "0x4000497")]
		public string HashID; //Field offset: 0xB8
		[FieldOffset(Offset = "0xC0")]
		[OptionalField(VersionAdded = 2)]
		[Token(Token = "0x4000498")]
		public int Instruction; //Field offset: 0xC0

		[Address(RVA = "0x12B50A8", Offset = "0x12B50A8", Length = "0xA0")]
		[Token(Token = "0x60004D8")]
		public cPlayerRecord(int newPlayerId) { }

		[Address(RVA = "0x12B5148", Offset = "0x12B5148", Length = "0x164")]
		[Token(Token = "0x60004D9")]
		public void SetDefaults() { }

	}

	[Token(Token = "0x2000099")]
	internal enum RecordFlagType
	{
		kRecordFlagViewedStore = 0,
		kRecordFlagViewedStoreNag = 1,
		kRecordFlagViewedCoinStore = 2,
		kRecordFlagViewedCoinStoreNag = 3,
		kRecordFlagPurchasedCoins = 4,
		kRecordFlagScrolledDownInStore = 5,
		kRecordFlagVideoAdOfferAvailable = 10,
		kRecordFlagVideoAdPercentFlurry = 11,
		kRecordFlagVideoAdReward = 12,
		kRecordFlagVideoAdWatched = 13,
		kRecordFlagVideoAdFlurryAPIDisabled = 14,
		kRecordFlagVideoAdAdColonyAPIDisabled = 15,
		kRecordFlagFullScreenAdOfferAvailable = 20,
		kRecordFlagFullScreenAdPercentFaad = 21,
		kRecordFlagFullScreenAdReward = 22,
		kRecordFlagFullScreenAdEnabled = 23,
		kRecordFlagFullScreenAdDisableCost = 24,
		kRecordFlagFullScreenAdWatched = 25,
		kRecordFlagFullScreenAdFAADAPIDisabled = 26,
		kRecordFlagFullScreenAdFlurryAPIDisabled = 27,
		kRecordFlagFullScreenAdIncentivizedPercentage = 28,
		kRecordFlagFullScreenAdIncentivizedReward = 29,
		kRecordFlagFullScreenAdFrequency = 33,
		kRecordFlagFacebookOfferAvailable = 30,
		kRecordFlagFacebookOfferReward = 31,
		kRecordFlagFacebookOfferUsed = 32,
		kRecordFlagTwitterOfferAvailable = 34,
		kRecordFlagTwitterOfferUsed = 35,
		kRecordFlagCount = 36,
	}

	[Token(Token = "0x2000098")]
	internal enum StoreItemType
	{
		kStoreItemAngelWings = 0,
		kStoreItemHeadStart = 1,
		kStoreItemHeadStartMega = 2,
		kStoreItemPermaWings = 3,
		kStoreItemConsumable5 = 4,
		kStoreItemVacuum = 5,
		kStoreItemInvincibility = 6,
		kStoreItemCoinBonus = 7,
		kStoreItemCoinValue = 8,
		kStoreItemBoost = 9,
		kStoreItemPowerup6 = 10,
		kStoreItemPowerup7 = 11,
		kStoreItemPowerup8 = 12,
		kStoreItemPowerup9 = 13,
		kStoreItemPowerup10 = 14,
		kStoreItemPlayerGuy = 15,
		kStoreItemPlayerGirl = 16,
		kStoreItemPlayerBigB = 17,
		kStoreItemPlayerChina = 18,
		kStoreItemPlayerIndi = 19,
		kStoreItemPlayerConquistador = 20,
		kStoreItemDisableAds = 21,
		kStoreItemPlayerFootball = 22,
		kStoreItemWallpaperA = 23,
		kStoreItemWallpaperB = 24,
		kStoreItemWallpaperC = 25,
		kStoreItemWallpaperD = 26,
		kStoreItemWallpaperE = 27,
		kStoreItemPlayer_SimoneDavies = 28,
		kStoreItemPlayer_Skeleton = 29,
		kStoreItemPlayer_KaiXiangDragon = 30,
		kStoreItemPlayer_Carnifex = 31,
		kStoreItemPlayer_FrostPirate = 32,
		kStoreItemPlayer_WallyNut = 33,
		kStoreItemPlayer_DragonQueen = 34,
		kStoreItemPlayer_SigurChronos = 35,
		kStoreItemPlayer_NidhiNirmal = 36,
		kStoreItemCount = 37,
	}

	[Token(Token = "0x4000416")]
	public const string VirtualCurrencyCoin = "Coin"; //Field offset: 0x0
	[Token(Token = "0x4000417")]
	public const string VirtualCurrencyHeadStart = "HeadStart"; //Field offset: 0x0
	[Token(Token = "0x4000418")]
	public const string VirtualCurrencyHeadStartMega = "HeadStartMega"; //Field offset: 0x0
	[Token(Token = "0x4000419")]
	public const string VirtualCurrencyAngelWing = "AngelWing"; //Field offset: 0x0
	[Token(Token = "0x400041A")]
	public const string VirtualCurrencyAngelWingPerma = "AngelWingPerma"; //Field offset: 0x0
	[Token(Token = "0x4000425")]
	public static RecordManager Instance; //Field offset: 0x0
	[Token(Token = "0x400042C")]
	private static StoreConfigData StoreConfig; //Field offset: 0x8
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x400041B")]
	public PlayerManager PlayerManager; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x400041C")]
	public string OldSaveDataPath; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x400041D")]
	public string SaveDataPath; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x400041E")]
	public List<cPlayerRecord> PlayerRecords; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x400041F")]
	public List<cAchievementRecord> AchievementRecords; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4000420")]
	public List<cAchievement> TRAchievements; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000421")]
	public List<cGameCenterScore> FriendScores; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000422")]
	public bool IsBestScoreRecord; //Field offset: 0x58
	[FieldOffset(Offset = "0x59")]
	[Token(Token = "0x4000423")]
	public bool IsBestCoinScoreRecord; //Field offset: 0x59
	[FieldOffset(Offset = "0x5A")]
	[Token(Token = "0x4000424")]
	public bool IsBestDistanceScoreRecord; //Field offset: 0x5A
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000426")]
	public ApplicationVersionInfo AppVersion; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000427")]
	private string _RecordVersionPlayerPrefKey; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x4000428")]
	public AppInstallStatus AppInstSts; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4000429")]
	private bool _IsNewUpdate; //Field offset: 0x78
	[FieldOffset(Offset = "0x79")]
	[Token(Token = "0x400042A")]
	private bool _IsNewInstall; //Field offset: 0x79
	[FieldOffset(Offset = "0x7A")]
	[Token(Token = "0x400042B")]
	public bool IsInGameFirstTime; //Field offset: 0x7A

	[Token(Token = "0x170000B8")]
	public bool IsNewInstall
	{
		[Address(RVA = "0x12AECCC", Offset = "0x12AECCC", Length = "0x8")]
		[Token(Token = "0x6000476")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000B7")]
	public bool IsNewUpdate
	{
		[Address(RVA = "0x12AECC4", Offset = "0x12AECC4", Length = "0x8")]
		[Token(Token = "0x6000475")]
		 get { } //Length: 8
	}

	[Address(RVA = "0x12B5038", Offset = "0x12B5038", Length = "0x70")]
	[Token(Token = "0x60004D7")]
	private static RecordManager() { }

	[Address(RVA = "0x12B4EC8", Offset = "0x12B4EC8", Length = "0x170")]
	[Token(Token = "0x60004D6")]
	public RecordManager() { }

	[Address(RVA = "0x12B2524", Offset = "0x12B2524", Length = "0x11C")]
	[Token(Token = "0x6000485")]
	private void AddAchievement(string aId, string aName, string aPreDescription, string aPostDescription = null, bool aHidden = false) { }

	[Address(RVA = "0x12AF118", Offset = "0x12AF118", Length = "0x34")]
	[Token(Token = "0x600049C")]
	public void AddCoins(int playerId, int coins) { }

	[Address(RVA = "0x12B34B8", Offset = "0x12B34B8", Length = "0x17C")]
	[Token(Token = "0x6000494")]
	public void AdjustPlayerLevelForUpgradeType(int playerId, StoreItemType itemType, int adjustBy) { }

	[Address(RVA = "0x12AECF4", Offset = "0x12AECF4", Length = "0xD0")]
	[Token(Token = "0x6000478")]
	private void Awake() { }

	[Address(RVA = "0x12B45DC", Offset = "0x12B45DC", Length = "0xC4")]
	[Token(Token = "0x60004A4")]
	public int CharcterIDFromType(StoreItemType itemType) { }

	[Address(RVA = "0x12B1790", Offset = "0x12B1790", Length = "0x14")]
	[Token(Token = "0x600047E")]
	private void DeletePlaceholderFile() { }

	[Address(RVA = "0x12B1E94", Offset = "0x12B1E94", Length = "0x624")]
	[Token(Token = "0x6000481")]
	private void DeseralizeRecord(Byte[] originalData) { }

	[Address(RVA = "0x12B0934", Offset = "0x12B0934", Length = "0x67C")]
	[Token(Token = "0x6000482")]
	private void DeserializeRecordManager() { }

	[Address(RVA = "0x12B2640", Offset = "0x12B2640", Length = "0x15C")]
	[Token(Token = "0x6000487")]
	public cAchievement FindAchievement(string achievementId) { }

	[Address(RVA = "0x12B279C", Offset = "0x12B279C", Length = "0x174")]
	[Token(Token = "0x6000488")]
	public cAchievementRecord FindAchievementRecord(int playerId, string achievementId) { }

	[Address(RVA = "0x12B2AAC", Offset = "0x12B2AAC", Length = "0xE4")]
	[Token(Token = "0x6000495")]
	public cPlayerRecord FindOrCreatePlayerRecord(int playerId) { }

	[Address(RVA = "0x12B2DEC", Offset = "0x12B2DEC", Length = "0x158")]
	[Token(Token = "0x600048E")]
	private cPlayerRecord FindPlayerRecord(int playerID) { }

	[Address(RVA = "0x12AECCC", Offset = "0x12AECCC", Length = "0x8")]
	[Token(Token = "0x6000476")]
	public bool get_IsNewInstall() { }

	[Address(RVA = "0x12AECC4", Offset = "0x12AECC4", Length = "0x8")]
	[Token(Token = "0x6000475")]
	public bool get_IsNewUpdate() { }

	[Address(RVA = "0x12B2B90", Offset = "0x12B2B90", Length = "0xC0")]
	[Token(Token = "0x600048B")]
	public int GetAchievementCompletedCount() { }

	[Address(RVA = "0x12B45A0", Offset = "0x12B45A0", Length = "0x1C")]
	[Token(Token = "0x60004A2")]
	public int GetActiveCharacter(int playerId) { }

	[Address(RVA = "0x12B408C", Offset = "0x12B408C", Length = "0xC4")]
	[Token(Token = "0x6000499")]
	public int GetAffordableUpgradeTypeCount(int playerId) { }

	[Address(RVA = "0x12B4C3C", Offset = "0x12B4C3C", Length = "0x20")]
	[Token(Token = "0x60004CE")]
	public bool GetAllowNotificationPopupShown(int inPlayerID) { }

	[Address(RVA = "0x12B1224", Offset = "0x12B1224", Length = "0xBC")]
	[Token(Token = "0x600047B")]
	private string GetAltFileName() { }

	[Address(RVA = "0x12B46A0", Offset = "0x12B46A0", Length = "0x18")]
	[Token(Token = "0x60004A6")]
	public int GetBestSaveMeScore(int playerId) { }

	[Address(RVA = "0x12B46B8", Offset = "0x12B46B8", Length = "0x18")]
	[Token(Token = "0x60004A7")]
	public int GetBestScore(int playerId) { }

	[Address(RVA = "0x12B4BA0", Offset = "0x12B4BA0", Length = "0x7C")]
	[Token(Token = "0x60004CC")]
	public DateTime GetBetaTesterPopupNextTimeToBeDisplayed(int inPlayerID) { }

	[Address(RVA = "0x12B4150", Offset = "0x12B4150", Length = "0x18")]
	[Token(Token = "0x600049A")]
	public int GetCoinCount(int playerId) { }

	[Address(RVA = "0x12B12E0", Offset = "0x12B12E0", Length = "0xDC")]
	[Token(Token = "0x600047C")]
	private string GetDummyFileName() { }

	[Address(RVA = "0x12B1190", Offset = "0x12B1190", Length = "0x94")]
	[Token(Token = "0x600047A")]
	private string GetFileName() { }

	[Address(RVA = "0x12B3634", Offset = "0x12B3634", Length = "0x20")]
	[Token(Token = "0x6000496")]
	public int GetFullLevel(StoreItemType itemType) { }

	[Address(RVA = "0x12B49E8", Offset = "0x12B49E8", Length = "0x20")]
	[Token(Token = "0x60004BE")]
	public bool GetGlobalChallengeEndLN_Status(int inPlayerID) { }

	[Address(RVA = "0x12B4AA8", Offset = "0x12B4AA8", Length = "0x20")]
	[Token(Token = "0x60004C4")]
	public bool GetGlobalChallengeFTUE_Status(int inPlayerID) { }

	[Address(RVA = "0x12B49A4", Offset = "0x12B49A4", Length = "0x20")]
	[Token(Token = "0x60004BC")]
	public bool GetGlobalChallengeMidLN_Status(int inPlayerID) { }

	[Address(RVA = "0x12B4B5C", Offset = "0x12B4B5C", Length = "0x20")]
	[Token(Token = "0x60004CA")]
	public bool GetGlobalChallengeMilestoneAchievedInRun(int inPlayerID) { }

	[Address(RVA = "0x12B48A0", Offset = "0x12B48A0", Length = "0x18")]
	[Token(Token = "0x60004B6")]
	public int GetGlobalChallengesCurrentIndex(int inPlayerID) { }

	[Address(RVA = "0x12B4858", Offset = "0x12B4858", Length = "0x20")]
	[Token(Token = "0x60004B4")]
	public float GetGlobalChallengesCurrentValue(int inPlayerID) { }

	[Address(RVA = "0x12B4A2C", Offset = "0x12B4A2C", Length = "0x18")]
	[Token(Token = "0x60004C0")]
	public int GetGlobalChallengesMidLN_ID(int inPlayerID) { }

	[Address(RVA = "0x12B4B24", Offset = "0x12B4B24", Length = "0x18")]
	[Token(Token = "0x60004C8")]
	public int GetGlobalChallengesPreviousRewardNoGiven(int inPlayerID) { }

	[Address(RVA = "0x12B48D8", Offset = "0x12B48D8", Length = "0x68")]
	[Token(Token = "0x60004B8")]
	public string GetGlobalChallengesPromoString(int inPlayerID) { }

	[Address(RVA = "0x12B4AEC", Offset = "0x12B4AEC", Length = "0x18")]
	[Token(Token = "0x60004C6")]
	public int GetGlobalChallengesRewardNoToGive(int inPlayerID) { }

	[Address(RVA = "0x12B4960", Offset = "0x12B4960", Length = "0x20")]
	[Token(Token = "0x60004BA")]
	public bool GetGlobalChallengeStartLN_Status(int inPlayerID) { }

	[Address(RVA = "0x12B4A64", Offset = "0x12B4A64", Length = "0x20")]
	[Token(Token = "0x60004C2")]
	public bool GetGlobalChallengeStartPromoShown(int inPlayerID) { }

	[Address(RVA = "0x12B41E0", Offset = "0x12B41E0", Length = "0x68")]
	[Token(Token = "0x600049F")]
	public string GetHash(int playerId) { }

	[Address(RVA = "0x12B4188", Offset = "0x12B4188", Length = "0x1C")]
	[Token(Token = "0x600049D")]
	public int GetInstructionCount(int playerId) { }

	[Address(RVA = "0x12B47E0", Offset = "0x12B47E0", Length = "0x18")]
	[Token(Token = "0x60004B0")]
	public int GetInterstitialAdsSeenCount(int inPlayerID) { }

	[Address(RVA = "0x12B46D0", Offset = "0x12B46D0", Length = "0x18")]
	[Token(Token = "0x60004A9")]
	public int GetLifetimeCoins(int playerId) { }

	[Address(RVA = "0x12B46E8", Offset = "0x12B46E8", Length = "0x18")]
	[Token(Token = "0x60004AA")]
	public int GetLifetimeDistance(int playerId) { }

	[Address(RVA = "0x12B1178", Offset = "0x12B1178", Length = "0x18")]
	[Token(Token = "0x60004A8")]
	public int GetLifetimePlays(int playerId) { }

	[Address(RVA = "0x12B2C6C", Offset = "0x12B2C6C", Length = "0x180")]
	[Token(Token = "0x600048D")]
	public cAchievement GetNextAchievement(int playerId) { }

	[Address(RVA = "0x12B479C", Offset = "0x12B479C", Length = "0x20")]
	[Token(Token = "0x60004AE")]
	public bool GetNoAds(int inPlayerID) { }

	[Address(RVA = "0x12B2F44", Offset = "0x12B2F44", Length = "0x254")]
	[Token(Token = "0x600048F")]
	public int GetPlayerLevelForUpgradeType(int playerId, StoreItemType itemType) { }

	[Address(RVA = "0x12B459C", Offset = "0x12B459C", Length = "0x4")]
	[Token(Token = "0x60004A1")]
	public cPlayerRecord GetPlayerRecord(int playerId) { }

	[Address(RVA = "0x12B3654", Offset = "0x12B3654", Length = "0xA14")]
	[Token(Token = "0x6000497")]
	public int GetPriceForUpgradeType(StoreItemType itemType, int currentLevel) { }

	[Address(RVA = "0x12B2910", Offset = "0x12B2910", Length = "0x20")]
	[Token(Token = "0x6000489")]
	public float GetProgressForAchievement(int playerId, string achievementID) { }

	[Address(RVA = "0x12B4C80", Offset = "0x12B4C80", Length = "0x20")]
	[Token(Token = "0x60004D0")]
	public bool GetReactivationCampaignPrizeStatus(int inPlayerID) { }

	[Address(RVA = "0x12B4CC4", Offset = "0x12B4CC4", Length = "0x68")]
	[Token(Token = "0x60004D2")]
	public string GetReactivationDeepLinkUrl(int inPlayerID) { }

	[Address(RVA = "0x12B3354", Offset = "0x12B3354", Length = "0x4C")]
	[Token(Token = "0x6000490")]
	public int GetRecordFlagValue(int playerId, RecordFlagType flagType) { }

	[Address(RVA = "0x12B1164", Offset = "0x12B1164", Length = "0x14")]
	[Token(Token = "0x60004A5")]
	public int GetScoreMulitplier(int playerid) { }

	[Address(RVA = "0x12B4700", Offset = "0x12B4700", Length = "0x7C")]
	[Token(Token = "0x60004AB")]
	public DateTime GetStoreItemCooledTime(int playerId) { }

	[Address(RVA = "0x12B4068", Offset = "0x12B4068", Length = "0x24")]
	[Token(Token = "0x6000498")]
	public int GetStoreItemMaxLevel(StoreItemType itemType) { }

	[Address(RVA = "0x12B481C", Offset = "0x12B481C", Length = "0x18")]
	[Token(Token = "0x60004B2")]
	public int GetVideoAdsWatchedCount(int inPlayerID) { }

	[Address(RVA = "0x12B33E8", Offset = "0x12B33E8", Length = "0xD0")]
	[Token(Token = "0x6000492")]
	public bool HasPlayerUpgradeAnything(int playerId) { }

	[Address(RVA = "0x12B47F8", Offset = "0x12B47F8", Length = "0x24")]
	[Token(Token = "0x60004B1")]
	public void IncrimentInterstitialAdsSeenCount(int inPlayerID) { }

	[Address(RVA = "0x12B4834", Offset = "0x12B4834", Length = "0x24")]
	[Token(Token = "0x60004B3")]
	public void IncrimentVideoAdsWatchedCount(int inPlayerID) { }

	[Address(RVA = "0x12B4D4C", Offset = "0x12B4D4C", Length = "0xB8")]
	[Token(Token = "0x60004D4")]
	public static void InitializeConfig(PromoFile inPromoFile) { }

	[Address(RVA = "0x12AECD4", Offset = "0x12AECD4", Length = "0x20")]
	[Token(Token = "0x6000477")]
	public bool IsNewInstallOrUpdate() { }

	[Address(RVA = "0x12B2C50", Offset = "0x12B2C50", Length = "0x1C")]
	[Token(Token = "0x600048C")]
	public void MarkAchievementAsReported(int playerId, string achievementId) { }

	[Address(RVA = "0x12B4E04", Offset = "0x12B4E04", Length = "0xC4")]
	[Token(Token = "0x60004D5")]
	private static bool ProcessStoreConfigData(ConfigData inConfigData) { }

	[Address(RVA = "0x12B24B8", Offset = "0x12B24B8", Length = "0x6C")]
	[Token(Token = "0x6000483")]
	public void RemoveAllProgress() { }

	[Address(RVA = "0x12B3350", Offset = "0x12B3350", Length = "0x4")]
	[Token(Token = "0x60004AD")]
	public void SaveRecords() { }

	[Address(RVA = "0x12ADD1C", Offset = "0x12ADD1C", Length = "0x264")]
	[Token(Token = "0x600046D")]
	public void SendEarnVirtualCurrencyEvent(int inValue, string inVirtualCurrencyName, string inSource) { }

	[Address(RVA = "0x12AE9FC", Offset = "0x12AE9FC", Length = "0x164")]
	[Token(Token = "0x6000473")]
	public void SendIntersitialAdSeenMilestoneEvent(int inAdSeenCount) { }

	[Address(RVA = "0x12AE388", Offset = "0x12AE388", Length = "0x214")]
	[Token(Token = "0x6000470")]
	public void SendLevelUpEvent(string inCharacter, int inLevel) { }

	[Address(RVA = "0x12AE7A4", Offset = "0x12AE7A4", Length = "0x258")]
	[Token(Token = "0x6000472")]
	public void SendScoreMultiplierMilestoneEvent(int scoreMultiplier) { }

	[Address(RVA = "0x12AE59C", Offset = "0x12AE59C", Length = "0x208")]
	[Token(Token = "0x6000471")]
	public void SendSelectContentEvent(string inItemId, string inContentType) { }

	[Address(RVA = "0x12ADF80", Offset = "0x12ADF80", Length = "0x28C")]
	[Token(Token = "0x600046E")]
	public void SendSpendVirtualCurrencyEvent(int inValue, string inVirtualCurrencyName, string inItemName) { }

	[Address(RVA = "0x12AE20C", Offset = "0x12AE20C", Length = "0x17C")]
	[Token(Token = "0x600046F")]
	public void SendUnlockAchievementEvent(string inAchievementId) { }

	[Address(RVA = "0x12AEB60", Offset = "0x12AEB60", Length = "0x164")]
	[Token(Token = "0x6000474")]
	public void SendVideoAdsWatchedMilestoneEvent(int inAdSeenCount) { }

	[Address(RVA = "0x12B17A4", Offset = "0x12B17A4", Length = "0x6F0")]
	[Token(Token = "0x6000480")]
	private void SerializeRecordManager() { }

	[Address(RVA = "0x12B45BC", Offset = "0x12B45BC", Length = "0x20")]
	[Token(Token = "0x60004A3")]
	public void SetActiveCharacter(int playerId, int characterId) { }

	[Address(RVA = "0x12B4C5C", Offset = "0x12B4C5C", Length = "0x24")]
	[Token(Token = "0x60004CF")]
	public void SetAllowNotificationPopupShown(int inPlayerID, bool value) { }

	[Address(RVA = "0x12B4C1C", Offset = "0x12B4C1C", Length = "0x20")]
	[Token(Token = "0x60004CD")]
	public void SetBetaTesterPopupNextTimeToBeDisplayed(int inPlayerID, DateTime value) { }

	[Address(RVA = "0x12B4168", Offset = "0x12B4168", Length = "0x20")]
	[Token(Token = "0x600049B")]
	public void SetCoinCount(int playerId, int coins) { }

	[Address(RVA = "0x12B4A08", Offset = "0x12B4A08", Length = "0x24")]
	[Token(Token = "0x60004BF")]
	public void SetGlobalChallengeEndLN_Status(int inPlayerID, bool value) { }

	[Address(RVA = "0x12B4AC8", Offset = "0x12B4AC8", Length = "0x24")]
	[Token(Token = "0x60004C5")]
	public void SetGlobalChallengeFTUE_Status(int inPlayerID, bool value) { }

	[Address(RVA = "0x12B49C4", Offset = "0x12B49C4", Length = "0x24")]
	[Token(Token = "0x60004BD")]
	public void SetGlobalChallengeMidLN_Status(int inPlayerID, bool value) { }

	[Address(RVA = "0x12B4B7C", Offset = "0x12B4B7C", Length = "0x24")]
	[Token(Token = "0x60004CB")]
	public void SetGlobalChallengeMilestoneAchievedInRun(int inPlayerID, bool value) { }

	[Address(RVA = "0x12B48B8", Offset = "0x12B48B8", Length = "0x20")]
	[Token(Token = "0x60004B7")]
	public void SetGlobalChallengesCurrentIndex(int inPlayerID, int value) { }

	[Address(RVA = "0x12B4878", Offset = "0x12B4878", Length = "0x28")]
	[Token(Token = "0x60004B5")]
	public void SetGlobalChallengesCurrentValue(int inPlayerID, float value) { }

	[Address(RVA = "0x12B4A44", Offset = "0x12B4A44", Length = "0x20")]
	[Token(Token = "0x60004C1")]
	public void SetGlobalChallengesMidLN_ID(int inPlayerID, int value) { }

	[Address(RVA = "0x12B4B3C", Offset = "0x12B4B3C", Length = "0x20")]
	[Token(Token = "0x60004C9")]
	public void SetGlobalChallengesPreviousRewardNoGiven(int inPlayerID, int value) { }

	[Address(RVA = "0x12B4940", Offset = "0x12B4940", Length = "0x20")]
	[Token(Token = "0x60004B9")]
	public void SetGlobalChallengesPromoString(int inPlayerID, string value) { }

	[Address(RVA = "0x12B4B04", Offset = "0x12B4B04", Length = "0x20")]
	[Token(Token = "0x60004C7")]
	public void SetGlobalChallengesRewardNoToGive(int inPlayerID, int value) { }

	[Address(RVA = "0x12B4980", Offset = "0x12B4980", Length = "0x24")]
	[Token(Token = "0x60004BB")]
	public void SetGlobalChallengeStartLN_Status(int inPlayerID, bool value) { }

	[Address(RVA = "0x12B4A84", Offset = "0x12B4A84", Length = "0x24")]
	[Token(Token = "0x60004C3")]
	public void SetGlobalChallengeStartPromoShown(int inPlayerID, bool value) { }

	[Address(RVA = "0x12B41A4", Offset = "0x12B41A4", Length = "0x3C")]
	[Token(Token = "0x600049E")]
	public void SetInstructionCount(int playerId, int count) { }

	[Address(RVA = "0x12B47BC", Offset = "0x12B47BC", Length = "0x24")]
	[Token(Token = "0x60004AF")]
	public void SetNoAds(int inPlayerID, bool inNoAds) { }

	[Address(RVA = "0x12B3198", Offset = "0x12B3198", Length = "0x1B8")]
	[Token(Token = "0x6000493")]
	public void SetPlayerLevelForUpgradeType(int playerId, StoreItemType itemType, int level) { }

	[Address(RVA = "0x12B4D2C", Offset = "0x12B4D2C", Length = "0x20")]
	[Token(Token = "0x60004D3")]
	public void SetReactivationCampaignDeeplinkUrl(int inPlayerID, string value) { }

	[Address(RVA = "0x12B4CA0", Offset = "0x12B4CA0", Length = "0x24")]
	[Token(Token = "0x60004D1")]
	public void SetReactivationPrizeAsGiven(int inPlayerID, bool value) { }

	[Address(RVA = "0x12B33A0", Offset = "0x12B33A0", Length = "0x48")]
	[Token(Token = "0x6000491")]
	public void SetRecordFlagValue(int playerId, RecordFlagType flagType, int value) { }

	[Address(RVA = "0x12B477C", Offset = "0x12B477C", Length = "0x20")]
	[Token(Token = "0x60004AC")]
	public void SetStoreItemCooledTime(int playerId, DateTime inTime) { }

	[Address(RVA = "0x12AF14C", Offset = "0x12AF14C", Length = "0x17E8")]
	[Token(Token = "0x6000486")]
	private void SetupAchievements() { }

	[Address(RVA = "0x12AEDC4", Offset = "0x12AEDC4", Length = "0x354")]
	[Token(Token = "0x6000479")]
	private void Start() { }

	[Address(RVA = "0x12B2930", Offset = "0x12B2930", Length = "0x17C")]
	[Token(Token = "0x600048A")]
	public void UpdateAchievementRecord(int playerId, string achievementId, float percentComplete) { }

	[Address(RVA = "0x12B1074", Offset = "0x12B1074", Length = "0xF0")]
	[Token(Token = "0x6000484")]
	public AppInstallStatus UpdateAppInstallStatus() { }

	[Address(RVA = "0x12B0FB0", Offset = "0x12B0FB0", Length = "0xC4")]
	[Token(Token = "0x600047F")]
	private void UpdateAppVersion() { }

	[Address(RVA = "0x12B4248", Offset = "0x12B4248", Length = "0x354")]
	[Token(Token = "0x60004A0")]
	public void UpdateRecordsForSession(int playerId, int score, int coins, int distance, int preSaveMeScore, int preSaveMeCoins, int preSaveMeDistance, bool inSaveMeUsed) { }

	[Address(RVA = "0x12B13BC", Offset = "0x12B13BC", Length = "0x3D4")]
	[Token(Token = "0x600047D")]
	public void WritePlaceholderFile() { }

}

