using System.Collections.Generic;
using UnityEngine;

public class CharacterPlayer : CommonPlayer
{
	public enum DeathTypes
	{
		kDeathTypeUnknown = 0,
		kDeathTypeFall = 1,
		kDeathTypeTree = 2,
		kDeathTypeSlide = 3,
		kDeathTypeLedge = 4,
		kDeathTypeBurnt = 5,
		kDeathTypeEaten = 6,
		kDeathTypeTangle = 7,
		kDeathTypeSceneryTree = 8,
		kDeathTypeSceneryRock = 9
	}

	public const float kPlayerBoostSlowdownDistance = 50f;

	public Shader CharacterShader;

	public Shader InvincibilityShader;

	public Texture InvincibilityTexture;

	public Animation AnimateObject;

	public GameObject CharacterModel;

	public Renderer[] RenderObject;

	public Renderer[] AttachmentsRenderObjects;

	public Transform ShadowSpot;

	public UISprite ShadowSPrite;

	public UISprite DustSprite;

	public bool IsDead;

	public float TimeSinceDeath;

	public DeathTypes DeathType;

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

	public bool DidStumble;

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

	public bool AreWingsPermanent;

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

	public GameGUI GameInterface;

	public EndGameUI GameOverInterface;

	public UISprite PickupEffect;

	public bool Hold;

	public AudioManager Audio;

	public List<GameObject> Characters;

	public List<Texture2D> Textures;

	public static CharacterPlayer Instance;

	public Color debugColor;

	public bool ColorDebugging;

	private void Start()
	{
	}

	public void SetAlpha(float a)
	{
	}

	public float GetAlpha()
	{
		return 0f;
	}

	public override void Update()
	{
	}

	public void SetGroundHeight(float groundHeight)
	{
	}

	public float GetRunVelocity()
	{
		return 0f;
	}

	public float GetMaxRunVelocity()
	{
		return 0f;
	}

	public override void Reset()
	{
	}

	public Vector2 GetPreviousPosition2D()
	{
		return default;
	}

	public void Stumble(float delay = 0f)
	{
	}

	public bool Jump(float delay = 0f)
	{
		return false;
	}

	public bool Slide()
	{
		return false;
	}

	public bool SlamDown()
	{
		return false;
	}

	public void Kill(DeathTypes deathType)
	{
	}

	public void StrafeLeft()
	{
	}

	public void StrafeRight()
	{
	}

	public void TurnLeft()
	{
	}

	public void TurnRight()
	{
	}

	public void AddScore(int score)
	{
	}

	public void AddCoins(int count)
	{
	}

	public void SetInvincibilityTexture()
	{
	}

	public void StartInvcibility(float duration)
	{
	}

	public void StartAngelWings(float duration, bool isPermanent = false)
	{
	}

	public void StartVacuum(float duration)
	{
	}

	public void StartCoinBonus(int value)
	{
	}

	public void StartBoost(float distance, bool isMega)
	{
	}

	public void StopAllAnimation()
	{
	}

	public void Resurrect()
	{
	}

	public override Bounds GetWorldSpaceBounds()
	{
		return default;
	}

	public void ApplyPlayerTexture()
	{
	}

	private void OnDrawGizmos()
	{
	}

	public override void SetVisibility(bool visible)
	{
	}

	public void SetupCharacter()
	{
	}

	public void PlayAnimation(string anim, bool queued = false)
	{
	}

	public void AdjustAnimationSpeed()
	{
	}

	public void PauseAnimation()
	{
	}

	public void UnpauseAnimation()
	{
	}
}
