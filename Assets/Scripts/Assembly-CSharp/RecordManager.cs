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
	}

	private void SetupAchievements()
	{
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
