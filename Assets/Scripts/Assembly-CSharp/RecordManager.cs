using System;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Imangi.Utilities;
using UnityEngine;
using UnityEngine.Serialization;

public class RecordManager : MonoBehaviour
{
	public enum StoreItemType
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
		kStoreItemCount = 37
	}

	public enum RecordFlagType
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
		kRecordFlagCount = 36
	}

	[Serializable]
	public class cPlayerRecord
	{
		public int playerId;

		public int bestScore;

		public int bestCoinScore;

		public int bestDistanceScore;

		public int SaveMeBestScore;

		public int SaveMeBestCoinScore;

		public int SaveMeBestDistanceScore;

		public int lifetimePlays;

		public int lifetimeCoins;

		public int lifetimeDistance;

		public int coinCount;

		public int activePlayerCharacter;

		public int[] storeItemLevel;

		public int[] flags;

		public bool gameCenterNeedsUpdate;

		public int abGroupID;

		public bool groupIdCalculated;

		public DateTime StoreItemRewardedAdCooledTime;

		public bool NoAds;

		public int InterstitialAdsSeenCount;

		public int VideoAdsWatchedCount;

		public float GlobalChallengesCurrentValue;

		public int GlobalChallengesCurrentIndex;

		public string GlobalChallengesStringPromo;

		public bool GlobalChallengesStartLN_Status;

		public bool GlobalChallengesMidLN_Status;

		public bool GlobalChallengesEndLN_Status;

		public int GlobalChallengesMidLN_ID;

		public bool GlobalChallengesStartPromoShown;

		public bool GlobalChallengeFTUE_Status;

		public int GlobalChallengeRewardNoToGive;

		public int GlobalChallengePreviousRewardNoGiven;

		public bool GlobalChallengeMilestoneAchievedInRun;

		public DateTime BetaTesterPopupNextTimeToBeDisplayed;

		public bool AllowNotificationPopupShown;

		public bool ReactivationCampaignPrizeAwarded;

		[FormerlySerializedAs("ReactivationCampaignDeeplinkUrl")]
		public string ReactivationCampaignReceivedDeeplinkUrl;

		[OptionalField(VersionAdded = 2)]
		public string HashID;

		[OptionalField(VersionAdded = 2)]
		public int Instruction;

		public cPlayerRecord(int newPlayerId)
		{
		}

		public void SetDefaults()
		{
		}
	}

	[Serializable]
	public class cAchievement
	{
		public string achievementId;

		public string name;

		public string preDescription;

		public string postDescription;

		public bool hidden;
	}

	[Serializable]
	public class cAchievementRecord
	{
		public int playerId;

		public string achievementId;

		public float percentComplete;

		public bool updated;
	}

	[Serializable]
	public class cGameCenterScore
	{
		public string playerId;

		public string playerName;

		public int value;

		public string formattedValue;

		public string category;

		public int rank;

		public bool shown;
	}

	public const string VirtualCurrencyCoin = "Coin";

	public const string VirtualCurrencyHeadStart = "HeadStart";

	public const string VirtualCurrencyHeadStartMega = "HeadStartMega";

	public const string VirtualCurrencyAngelWing = "AngelWing";

	public const string VirtualCurrencyAngelWingPerma = "AngelWingPerma";

	public PlayerManager PlayerManager;

	public string OldSaveDataPath;

	public string SaveDataPath;

	public List<cPlayerRecord> PlayerRecords;

	public List<cAchievementRecord> AchievementRecords;

	public List<cAchievement> TRAchievements;

	public List<cGameCenterScore> FriendScores;

	public bool IsBestScoreRecord;

	public bool IsBestCoinScoreRecord;

	public bool IsBestDistanceScoreRecord;

	public static RecordManager Instance;

	public ApplicationVersionInfo AppVersion;

	private string _RecordVersionPlayerPrefKey;

	public AppInstallStatus AppInstSts;

	private bool _IsNewUpdate;

	private bool _IsNewInstall;

	public bool IsInGameFirstTime;

	private static StoreConfigData StoreConfig;

	public bool IsNewUpdate => false;

	public bool IsNewInstall => false;

	public void SendEarnVirtualCurrencyEvent(int inValue, string inVirtualCurrencyName, string inSource)
	{
	}

	public void SendSpendVirtualCurrencyEvent(int inValue, string inVirtualCurrencyName, string inItemName)
	{
	}

	public void SendUnlockAchievementEvent(string inAchievementId)
	{
	}

	public void SendLevelUpEvent(string inCharacter, int inLevel)
	{
	}

	public void SendSelectContentEvent(string inItemId, string inContentType)
	{
	}

	public void SendScoreMultiplierMilestoneEvent(int scoreMultiplier)
	{
	}

	public void SendIntersitialAdSeenMilestoneEvent(int inAdSeenCount)
	{
	}

	public void SendVideoAdsWatchedMilestoneEvent(int inAdSeenCount)
	{
	}

	public bool IsNewInstallOrUpdate()
	{
		return false;
	}

	private void Awake()
	{
	}

	private void Start()
	{
	}

	private string GetFileName()
	{
		return null;
	}

	private string GetAltFileName()
	{
		return null;
	}

	private string GetDummyFileName()
	{
		return null;
	}

	public void WritePlaceholderFile()
	{
	}

	private void DeletePlaceholderFile()
	{
	}

	private void UpdateAppVersion()
	{
	}

	private void SerializeRecordManager()
	{
	}

	private void DeseralizeRecord(byte[] originalData)
	{
	}

	private void DeserializeRecordManager()
	{
	}

	public void RemoveAllProgress()
	{
	}

	public AppInstallStatus UpdateAppInstallStatus()
	{
		return null;
	}

	private void AddAchievement(string aId, string aName, string aPreDescription, string aPostDescription = null, bool aHidden = false)
	{
		// Native-derived record construction; see Evidence/ui-csharp-restoration.json.
		TRAchievements.Add(new cAchievement { achievementId = aId, name = aName, preDescription = aPreDescription, postDescription = aPostDescription ?? aPreDescription, hidden = aHidden });
	}

	private void SetupAchievements()
	{
		// Native registration order and literal keys recovered through ELF relocations; see Evidence/ui-csharp-restoration.json.
		TRAchievements = new List<cAchievement>();
		AddAchievement("distance500", "ACH_NAME_NOVICE_RUNNER", "ACH_PRE_NOVICE_RUNNER", "ACH_POST_NOVICE_RUNNER");
		AddAchievement("coins100", "ACH_NAME_POCKET_CHANGE", "ACH_PRE_POCKET_CHANGE", "ACH_POST_POCKET_CHANGE");
		AddAchievement("score25000", "ACH_NAME_ADVENTURER", "ACH_PRE_ADVENTURER", "ACH_POST_ADVENTURER");
		AddAchievement("distance1000", "ACH_NAME_SPRINTER", "ACH_PRE_SPRINTER", "ACH_POST_SPRINTER");
		AddAchievement("distance500NoCoins", "ACH_NAME_MISER_RUN", "ACH_PRE_MISER_RUN", "ACH_POST_MISER_RUN");
		AddAchievement("coins250", "ACH_NAME_PIGGY_BANK", "ACH_PRE_PIGGY_BANK", "ACH_POST_PIGGY_BANK");
		AddAchievement("score50000", "ACH_NAME_TREASURE_HUNTER", "ACH_PRE_TREASURE_HUNTER", "ACH_POST_TREASURE_HUNTER");
		AddAchievement("totemFull", "ACH_NAME_MEGA_BONUS", "ACH_PRE_MEGA_BONUS", "ACH_POST_MEGA_BONUS");
		AddAchievement("distance2500", "ACH_NAME_ATHLETE", "ACH_PRE_ATHLETE", "ACH_POST_ATHLETE");
		AddAchievement("coins500", "ACH_NAME_LUMP_SUM", "ACH_PRE_LUMP_SUM", "ACH_POST_LUMP_SUM");
		AddAchievement("resurrection", "ACH_NAME_RESURRECTION", "ACH_PRE_RESURRECTION", "ACH_POST_RESURRECTION");
		AddAchievement("upgrade1", "ACH_NAME_BASIC_POWERS", "ACH_PRE_BASIC_POWERS", "ACH_POST_BASIC_POWERS");
		AddAchievement("score100000", "ACH_NAME_HIGH_ROLLER", "ACH_PRE_HIGH_ROLLER", "ACH_POST_HIGH_ROLLER");
		AddAchievement("coins750", "ACH_NAME_PAYDAY", "ACH_PRE_PAYDAY", "ACH_POST_PAYDAY");
		AddAchievement("headstart", "ACH_NAME_HEAD_START", "ACH_PRE_HEAD_START", "ACH_POST_HEAD_START");
		AddAchievement("notrip2500", "ACH_NAME_STEADY_FEET", "ACH_PRE_STEADY_FEET", "ACH_POST_STEADY_FEET");
		AddAchievement("distance1000NoCoins", "ACH_NAME_ALLERGIC_TO_GOLD", "ACH_PRE_ALLERGIC_TO_GOLD", "ACH_POST_ALLERGIC_TO_GOLD");
		AddAchievement("distance5000", "ACH_NAME_5K_RUNNER", "ACH_PRE_5K_RUNNER", "ACH_POST_5K_RUNNER");
		AddAchievement("notrip5000", "ACH_NAME_NO.TRIP.RUNNER", "ACH_PRE_NO.TRIP.RUNNER", "ACH_POST_NO.TRIP.RUNNER");
		AddAchievement("score250000", "ACH_NAME_QUARTER_MILLION_CLUB", "ACH_PRE_QUARTER_MILLION_CLUB", "ACH_POST_QUARTER_MILLION_CLUB");
		AddAchievement("resurrection2", "ACH_NAME_DOUBLE_RESURRECTION", "ACH_PRE_DOUBLE_RESURRECTION", "ACH_POST_DOUBLE_RESURRECTION");
		AddAchievement("coins1000", "ACH_NAME_MONEY_BAGS", "ACH_PRE_MONEY_BAGS", "ACH_POST_MONEY_BAGS");
		AddAchievement("score500000", "ACH_NAME_HALF_MILLION_CLUB", "ACH_PRE_HALF_MILLION_CLUB", "ACH_POST_HALF_MILLION_CLUB");
		AddAchievement("upgrade5", "ACH_NAME_SUPER_POWERS", "ACH_PRE_SUPER_POWERS", "ACH_POST_SUPER_POWERS");
		AddAchievement("character2", "ACH_NAME_DYNAMIC_DUO", "ACH_PRE_DYNAMIC_DUO", "ACH_POST_DYNAMIC_DUO");
		AddAchievement("score1000000", "ACH_NAME_MILLION_CLUB", "ACH_PRE_MILLION_CLUB", "ACH_POST_MILLION_CLUB");
		AddAchievement("coins2500", "ACH_NAME_MONEY_BIN", "ACH_PRE_MONEY_BIN", "ACH_POST_MONEY_BIN");
		AddAchievement("character4", "ACH_NAME_FANTASTIC_FOUR", "ACH_PRE_FANTASTIC_FOUR", "ACH_POST_FANTASTIC_FOUR");
		AddAchievement("character6", "ACH_NAME_SEXY_SIX", "ACH_PRE_SEXY_SIX", "ACH_POST_SEXY_SIX");
		AddAchievement("distance10000", "ACH_NAME_10K_RUNNER", "ACH_PRE_10K_RUNNER", "ACH_POST_10K_RUNNER");
		AddAchievement("coins5000", "ACH_NAME_FORT_KNOX", "ACH_PRE_FORT_KNOX", "ACH_POST_FORT_KNOX");
		AddAchievement("score2500000", "ACH_NAME_2.5_MILLION_CLUB", "ACH_PRE_2.5_MILLION_CLUB", "ACH_POST_2.5_MILLION_CLUB");
		AddAchievement("score5000000", "ACH_NAME_5_MILLION_CLUB", "ACH_PRE_5_MILLION_CLUB", "ACH_POST_5_MILLION_CLUB");
		AddAchievement("score1000000nopowers", "ACH_NAME_THE_SPARTAN", "ACH_PRE_THE_SPARTAN", "ACH_POST_THE_SPARTAN");
		AddAchievement("score10000000", "ACH_NAME_10_MILLION_CLUB", "ACH_PRE_10_MILLION_CLUB", "ACH_POST_10_MILLION_CLUB");
		AddAchievement("lifetimeGames1000", "ACH_NAME_TEMPLE_RUNNER", "ACH_PRE_TEMPLE_RUNNER", "ACH_POST_TEMPLE_RUNNER");
		AddAchievement("lifetimeCoins100000", "ACH_NAME_MINOR_MINER", "ACH_PRE_MINOR_MINER", "ACH_POST_MINOR_MINER");
		AddAchievement("lifetimeMeters100000", "ACH_NAME_MARATHONER", "ACH_PRE_MARATHONER", "ACH_POST_MARATHONER");
		AddAchievement("lifetimeGames5000", "ACH_NAME_PRO_TEMPLE_RUNNER", "ACH_PRE_PRO_TEMPLE_RUNNER", "ACH_POST_PRO_TEMPLE_RUNNER");
		AddAchievement("lifetimeCoins500000", "ACH_NAME_GOLD_MINER", "ACH_PRE_GOLD_MINER", "ACH_POST_GOLD_MINER");
		AddAchievement("lifetimeMeters1000000", "ACH_NAME_CIRCUMNAVIGATOR", "ACH_PRE_CIRCUMNAVIGATOR", "ACH_POST_CIRCUMNAVIGATOR");
		AddAchievement("magnets5", "ACH_NAME_MAGNET_MINER", "ACH_PRE_MAGNET_MINER", "ACH_POST_MAGNET_MINER");
		AddAchievement("coinBonuses5", "ACH_NAME_COIN_JUMPER", "ACH_PRE_COIN_JUMPER", "ACH_POST_COIN_JUMPER");
		AddAchievement("invisibilityBonuses5", "ACH_NAME_INVISIBLE", "ACH_PRE_INVISIBLE", "ACH_POST_INVISIBLE");
		AddAchievement("boosts5", "ACH_NAME_BOOSTER_SHOT", "ACH_PRE_BOOSTER_SHOT", "ACH_POST_BOOSTER_SHOT");
		AddAchievement("magnets10", "ACH_NAME_MAGNETIC_PERSONALITY", "ACH_PRE_MAGNETIC_PERSONALITY", "ACH_POST_MAGNETIC_PERSONALITY");
		AddAchievement("coinBonuses10", "ACH_NAME_GOLD_EXPLOSION", "ACH_PRE_GOLD_EXPLOSION", "ACH_POST_GOLD_EXPLOSION");
		AddAchievement("invisibilityBonuses10", "ACH_NAME_UNBREAKABLE", "ACH_PRE_UNBREAKABLE", "ACH_POST_UNBREAKABLE");
		AddAchievement("boosts10", "ACH_NAME_SPEED_DEMON", "ACH_PRE_SPEED_DEMON", "ACH_POST_SPEED_DEMON");
		AddAchievement("magnets20", "ACH_NAME_THE_ATTRACTOR", "ACH_PRE_THE_ATTRACTOR", "ACH_POST_THE_ATTRACTOR");
		AddAchievement("coinBonuses20", "ACH_NAME_GOLDEN_GOD", "ACH_PRE_GOLDEN_GOD", "ACH_POST_GOLDEN_GOD");
		AddAchievement("invisibilityBonuses20", "ACH_NAME_INVINCIBLE", "ACH_PRE_INVINCIBLE", "ACH_POST_INVINCIBLE");
		AddAchievement("boosts20", "ACH_NAME_THE_ROCKET", "ACH_PRE_THE_ROCKET", "ACH_POST_THE_ROCKET");
		AddAchievement("lifetimeGames10000", "ACH_NAME_MEGA_RUNNER", "ACH_PRE_MEGA_RUNNER", "ACH_POST_MEGA_RUNNER");
		AddAchievement("lifetimeCoins1000000", "ACH_NAME_MIDAS_TOUCH", "ACH_PRE_MIDAS_TOUCH", "ACH_POST_MIDAS_TOUCH");
		AddAchievement("lifetimeMeters10000000", "ACH_NAME_INFINIRUNNER", "ACH_PRE_INFINIRUNNER", "ACH_POST_INFINIRUNNER");
	}

	public cAchievement FindAchievement(string achievementId)
	{
		return null;
	}

	public cAchievementRecord FindAchievementRecord(int playerId, string achievementId)
	{
		return null;
	}

	public float GetProgressForAchievement(int playerId, string achievementID)
	{
		return 0f;
	}

	public void UpdateAchievementRecord(int playerId, string achievementId, float percentComplete)
	{
	}

	public int GetAchievementCompletedCount()
	{
		return 0;
	}

	public void MarkAchievementAsReported(int playerId, string achievementId)
	{
	}

	public cAchievement GetNextAchievement(int playerId)
	{
		return null;
	}

	private cPlayerRecord FindPlayerRecord(int playerID)
	{
		return null;
	}

	public int GetPlayerLevelForUpgradeType(int playerId, StoreItemType itemType)
	{
		return 0;
	}

	public int GetRecordFlagValue(int playerId, RecordFlagType flagType)
	{
		return 0;
	}

	public void SetRecordFlagValue(int playerId, RecordFlagType flagType, int value)
	{
	}

	public bool HasPlayerUpgradeAnything(int playerId)
	{
		return false;
	}

	public void SetPlayerLevelForUpgradeType(int playerId, StoreItemType itemType, int level)
	{
	}

	public void AdjustPlayerLevelForUpgradeType(int playerId, StoreItemType itemType, int adjustBy)
	{
	}

	public cPlayerRecord FindOrCreatePlayerRecord(int playerId)
	{
		return null;
	}

	public int GetFullLevel(StoreItemType itemType)
	{
		return 0;
	}

	public int GetPriceForUpgradeType(StoreItemType itemType, int currentLevel)
	{
		return 0;
	}

	public int GetStoreItemMaxLevel(StoreItemType itemType)
	{
		return 0;
	}

	public int GetAffordableUpgradeTypeCount(int playerId)
	{
		return 0;
	}

	public int GetCoinCount(int playerId)
	{
		return 0;
	}

	public void SetCoinCount(int playerId, int coins)
	{
	}

	public void AddCoins(int playerId, int coins)
	{
	}

	public int GetInstructionCount(int playerId)
	{
		return 0;
	}

	public void SetInstructionCount(int playerId, int count)
	{
	}

	public string GetHash(int playerId)
	{
		return null;
	}

	public void UpdateRecordsForSession(int playerId, int score, int coins, int distance, int preSaveMeScore, int preSaveMeCoins, int preSaveMeDistance, bool inSaveMeUsed)
	{
	}

	public cPlayerRecord GetPlayerRecord(int playerId)
	{
		return null;
	}

	public int GetActiveCharacter(int playerId)
	{
		return 0;
	}

	public void SetActiveCharacter(int playerId, int characterId)
	{
	}

	public int CharcterIDFromType(StoreItemType itemType)
	{
		return 0;
	}

	public int GetScoreMulitplier(int playerid)
	{
		return 0;
	}

	public int GetBestSaveMeScore(int playerId)
	{
		return 0;
	}

	public int GetBestScore(int playerId)
	{
		return 0;
	}

	public int GetLifetimePlays(int playerId)
	{
		return 0;
	}

	public int GetLifetimeCoins(int playerId)
	{
		return 0;
	}

	public int GetLifetimeDistance(int playerId)
	{
		return 0;
	}

	public DateTime GetStoreItemCooledTime(int playerId)
	{
		return default;
	}

	public void SetStoreItemCooledTime(int playerId, DateTime inTime)
	{
	}

	public void SaveRecords()
	{
	}

	public bool GetNoAds(int inPlayerID)
	{
		return false;
	}

	public void SetNoAds(int inPlayerID, bool inNoAds)
	{
	}

	public int GetInterstitialAdsSeenCount(int inPlayerID)
	{
		return 0;
	}

	public void IncrimentInterstitialAdsSeenCount(int inPlayerID)
	{
	}

	public int GetVideoAdsWatchedCount(int inPlayerID)
	{
		return 0;
	}

	public void IncrimentVideoAdsWatchedCount(int inPlayerID)
	{
	}

	public float GetGlobalChallengesCurrentValue(int inPlayerID)
	{
		return 0f;
	}

	public void SetGlobalChallengesCurrentValue(int inPlayerID, float value)
	{
	}

	public int GetGlobalChallengesCurrentIndex(int inPlayerID)
	{
		return 0;
	}

	public void SetGlobalChallengesCurrentIndex(int inPlayerID, int value)
	{
	}

	public string GetGlobalChallengesPromoString(int inPlayerID)
	{
		return null;
	}

	public void SetGlobalChallengesPromoString(int inPlayerID, string value)
	{
	}

	public bool GetGlobalChallengeStartLN_Status(int inPlayerID)
	{
		return false;
	}

	public void SetGlobalChallengeStartLN_Status(int inPlayerID, bool value)
	{
	}

	public bool GetGlobalChallengeMidLN_Status(int inPlayerID)
	{
		return false;
	}

	public void SetGlobalChallengeMidLN_Status(int inPlayerID, bool value)
	{
	}

	public bool GetGlobalChallengeEndLN_Status(int inPlayerID)
	{
		return false;
	}

	public void SetGlobalChallengeEndLN_Status(int inPlayerID, bool value)
	{
	}

	public int GetGlobalChallengesMidLN_ID(int inPlayerID)
	{
		return 0;
	}

	public void SetGlobalChallengesMidLN_ID(int inPlayerID, int value)
	{
	}

	public bool GetGlobalChallengeStartPromoShown(int inPlayerID)
	{
		return false;
	}

	public void SetGlobalChallengeStartPromoShown(int inPlayerID, bool value)
	{
	}

	public bool GetGlobalChallengeFTUE_Status(int inPlayerID)
	{
		return false;
	}

	public void SetGlobalChallengeFTUE_Status(int inPlayerID, bool value)
	{
	}

	public int GetGlobalChallengesRewardNoToGive(int inPlayerID)
	{
		return 0;
	}

	public void SetGlobalChallengesRewardNoToGive(int inPlayerID, int value)
	{
	}

	public int GetGlobalChallengesPreviousRewardNoGiven(int inPlayerID)
	{
		return 0;
	}

	public void SetGlobalChallengesPreviousRewardNoGiven(int inPlayerID, int value)
	{
	}

	public bool GetGlobalChallengeMilestoneAchievedInRun(int inPlayerID)
	{
		return false;
	}

	public void SetGlobalChallengeMilestoneAchievedInRun(int inPlayerID, bool value)
	{
	}

	public DateTime GetBetaTesterPopupNextTimeToBeDisplayed(int inPlayerID)
	{
		return default;
	}

	public void SetBetaTesterPopupNextTimeToBeDisplayed(int inPlayerID, DateTime value)
	{
	}

	public bool GetAllowNotificationPopupShown(int inPlayerID)
	{
		return false;
	}

	public void SetAllowNotificationPopupShown(int inPlayerID, bool value)
	{
	}

	public bool GetReactivationCampaignPrizeStatus(int inPlayerID)
	{
		return false;
	}

	public void SetReactivationPrizeAsGiven(int inPlayerID, bool value)
	{
	}

	public string GetReactivationDeepLinkUrl(int inPlayerID)
	{
		return null;
	}

	public void SetReactivationCampaignDeeplinkUrl(int inPlayerID, string value)
	{
	}

	public static void InitializeConfig(PromoFile inPromoFile)
	{
	}

	private static bool ProcessStoreConfigData(ConfigData inConfigData)
	{
		return false;
	}
}
