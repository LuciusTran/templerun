using System;

[Serializable]
public class SavedCharacterPlayer : SavedCommonPlayer
{
	public bool IsDead;

	public float TimeSinceDeath;

	public CharacterPlayer.DeathTypes DeathType;

	public float StartRunVelocity;

	public float DeathRunVelocity;

	public float MaxRunVelocity;

	public bool IsFalling;

	public float TimeSinceFallStart;

	public bool IsJumping;

	public bool JumpAfterDelay;

	public float JumpDelay;

	public bool IsSliding;

	public float TimeSinceSlideStart;

	public float SlideDuration;

	public bool IsStumbling;

	public bool StumbleAfterDelay;

	public float StumbleDelay;

	public float TimeSinceStumbleStart;

	public float StumbleDuration;

	public float StumbleKillTimer;

	public float StumbleKillVelocityPercent;

	public bool IsStrafing;

	public float TimeSinceStrafeStart;

	public float StrafeDuration;

	public bool IsOnGround;

	public bool IsOverGround;

	public bool IsGroundHeightChangeHigher;

	public float GroundHeight;

	public int Score;

	public int ScoreMultiplier;

	public int BonusLevel;

	public int BonusLevelMax;

	public int CoinCountTotal;

	public int CoinCountForBonus;

	public int CoinCountForBonusThreshold;

	public bool HasInvincibility;

	public float InvincibilityTimeLeft;

	public int AngelWingsCount;

	public bool HasAngelWings;

	public float AngelWingsTimeLeft;

	public float AngelWingsRechargeTimeLeft;

	public bool HasVacuum;

	public float VacuumTimeLeft;

	public bool HasBoost;

	public bool IsMegaBoost;

	public float BoostDistanceLeft;

	public float VelocityBeforeBoost;

	public float BoostSlowdownDistance;

	public float TimeSinceLastPowerup;

	public int ActiveCharacterId;

	public float BaseAnimationFPS;

	public float PlayerXOffset;

	public bool Hold;

	public bool AreWingsPermanent;

	public SavedCharacterPlayer()
	{
	}

	public SavedCharacterPlayer(CharacterPlayer p)
	{
	}

	public void Apply(CharacterPlayer p)
	{
	}
}
