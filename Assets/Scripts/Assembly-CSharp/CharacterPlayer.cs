using System.Collections.Generic;
using UnityEngine;

public partial class CharacterPlayer : CommonPlayer
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
        // Native evidence: DecompiledNative/CharacterPlayer/CharacterPlayer_Start_12bc9dc.cpp
        Instance = this;
        BaseAnimationFPS = 24f;
        StartRunVelocity = TempleRunRules.Config.Runner.SRV;
        MaxRunVelocity = TempleRunRules.Config.Runner.MRV;
        CoinCountForBonusThreshold = 100;
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
        // Native evidence: DecompiledNative/CharacterPlayer/CharacterPlayer_SetGroundHeight_12bde90.cpp
        IsGroundHeightChangeHigher = groundHeight > GroundHeight; GroundHeight = groundHeight;
	}

	public float GetRunVelocity()
	{
        // Native evidence: DecompiledNative/CharacterPlayer/CharacterPlayer_GetRunVelocity_12bdeac.cpp
        return Mathf.Sqrt(Velocity.x * Velocity.x + Velocity.z * Velocity.z);
	}

	public float GetMaxRunVelocity()
	{
        // Native evidence: DecompiledNative/CharacterPlayer/CharacterPlayer_GetMaxRunVelocity_12bdf10.cpp
        return HasBoost ? MaxRunVelocity * (IsMegaBoost ? 2.5f : 2f) : MaxRunVelocity;
	}

	public override void Reset()
	{
        // Native evidence: DecompiledNative/CharacterPlayer/CharacterPlayer_Reset_12bdf40.cpp
        StartRunVelocity = TempleRunRules.Config.Runner.SRV; MaxRunVelocity = TempleRunRules.Config.Runner.MRV;
        PlayerXOffset = 0f; IsDead = false; TimeSinceDeath = 0f; DeathType = DeathTypes.kDeathTypeUnknown;
        IsFalling = false; IsJumping = false; JumpAfterDelay = false; IsSliding = false; TimeSinceSlideStart = 0f;
        IsOnGround = false; IsOverGround = false; IsStumbling = false; StumbleAfterDelay = false;
        DidStumble = false; IsStrafing = false; Hold = true; StrafeDuration = .4f;
        Score = 0; ScoreMultiplier = 10; BonusLevel = 1; CoinCountTotal = 0; CoinCountForBonus = 0;
        CoinCountForBonusThreshold = 100; IsGroundHeightChangeHigher = false; GroundHeight = 0f;
        HasInvincibility = false; HasVacuum = false; HasBoost = false; IsMegaBoost = false;
        InvincibilityTimeLeft = VacuumTimeLeft = BoostDistanceLeft = VelocityBeforeBoost = TimeSinceLastPowerup = 0f;
        AngelWingsCount = 0; AreWingsPermanent = false; HasAngelWings = false;
        AngelWingsTimeLeft = AngelWingsRechargeTimeLeft = 0f; StumbleKillTimer = 7f; DeathRunVelocity = 0f;
        Velocity = transform.forward * StartRunVelocity; PreviousLocation = transform.position; ResetForce();
        PlayAnimation("Run");
	}

	public Vector2 GetPreviousPosition2D()
	{
        // Native evidence: DecompiledNative/CharacterPlayer/CharacterPlayer_GetPreviousPosition2D_12be330.cpp
        return new Vector2(PreviousLocation.x, PreviousLocation.z);
	}

	public void Stumble(float delay = 0f)
	{
        // Native evidence: DecompiledNative/CharacterPlayer/CharacterPlayer_Stumble_12bd5ac.cpp
        if (delay > 0f) { StumbleAfterDelay = true; StumbleDelay = delay; return; }
        DidStumble = true; StumbleAfterDelay = false;
        if (StumbleKillTimer < 10f) { Kill(DeathTypes.kDeathTypeEaten); return; }
        Velocity *= TempleRunRules.Config.Runner.SSDP;
        IsStumbling = true; TimeSinceStumbleStart = 0f;
        BonusLevel = 1; CoinCountForBonus = 0;
        StumbleDuration = Mathf.Min(GetRunVelocity() * .005f, .5f);
        StumbleKillTimer = 0f;
        PlayAnimation("Stumble");
	}

	public bool Jump(float delay = 0f)
	{
        // Native evidence: DecompiledNative/CharacterPlayer/CharacterPlayer_Jump_12bd754.cpp
        if (IsJumping || IsStumbling || IsFalling) return false;
        if (delay > 0f) { JumpAfterDelay = true; JumpDelay = delay; return true; }
        Velocity.y = Mathf.Clamp(GetRunVelocity(), 80f, 100f);
        IsJumping = true; JumpAfterDelay = false; IsSliding = false;
        PlayAnimation("Jump");
        return true;
	}

	public bool Slide()
	{
        // Native evidence: DecompiledNative/CharacterPlayer/CharacterPlayer_Slide_12be33c.cpp
        if (IsSliding || IsJumping || IsFalling) return false;
        IsSliding = true; TimeSinceSlideStart = 0f;
        SlideDuration = Mathf.Min(GetRunVelocity() * .007f, .75f);
        PlayAnimation("Slide Start");
        return true;
	}

	public bool SlamDown()
	{
        // Native evidence: DecompiledNative/CharacterPlayer/CharacterPlayer_SlamDown_12be420.cpp
        if (!IsJumping || IsFalling) return false;
        Velocity.y = -60f;
        return true;
	}

	public void Kill(DeathTypes deathType)
	{
        // Native evidence: DecompiledNative/CharacterPlayer/CharacterPlayer_Kill_12bda84.cpp
        if (IsDead) return;
        DeathRunVelocity = GetRunVelocity(); IsDead = true; DeathType = deathType; TimeSinceDeath = 0f;
        IsSliding = false; IsJumping = false; Velocity = Vector3.zero;
        PlayAnimation("Stumble");
        TempleRunEvents.NotifyDeath(deathType);
	}

	public void StrafeLeft()
	{
        // Native evidence: DecompiledNative/CharacterPlayer/CharacterPlayer_StrafeLeft_12be448.cpp
        IsStrafing = true; TimeSinceStrafeStart = 0f;
        PlayerXOffset = ((GroundHeight >= 7.5f && !TempleRunRules.Config.Controls.FOC) ? 6f : 7f);
	}

	public void StrafeRight()
	{
        // Native evidence: DecompiledNative/CharacterPlayer/CharacterPlayer_StrafeRight_12be4dc.cpp
        IsStrafing = true; TimeSinceStrafeStart = 0f;
        PlayerXOffset = -((GroundHeight >= 7.5f && !TempleRunRules.Config.Controls.FOC) ? 6f : 7f);
	}

	public void TurnLeft()
	{
        // Native evidence: DecompiledNative/CharacterPlayer/CharacterPlayer_TurnLeft_12be570.cpp
        transform.Rotate(0f, -90f, 0f);
        Velocity = new Vector3(-Velocity.z, Velocity.y, Velocity.x);
        ResetForce();
        Facing = TravelingDirection();
	}

	public void TurnRight()
	{
        // Native evidence: DecompiledNative/CharacterPlayer/CharacterPlayer_TurnRight_12be5e8.cpp
        transform.Rotate(0f, 90f, 0f);
        Velocity = new Vector3(Velocity.z, Velocity.y, -Velocity.x);
        ResetForce();
        Facing = TravelingDirection();
	}

	public void AddScore(int score)
	{
        // Native evidence: DecompiledNative/CharacterPlayer/CharacterPlayer_AddScore_12be660.cpp
        if (score > 0) Score = unchecked(Score + ScoreMultiplier * score);
	}

	public void AddCoins(int count)
	{
        // Native evidence: DecompiledNative/CharacterPlayer/CharacterPlayer_AddCoins_12be67c.cpp
        if (count <= 0) return;
        CoinCountTotal += count;
        CoinCountForBonus += count;
        if (CoinCountForBonus >= CoinCountForBonusThreshold)
        {
            Score = unchecked(Score + ScoreMultiplier * 500);
            BonusLevel++;
            BonusLevelMax = Mathf.Max(BonusLevelMax, BonusLevel);
            CoinCountForBonus -= CoinCountForBonusThreshold;
        }
	}

	public void SetInvincibilityTexture()
	{
	}

	public void StartInvcibility(float duration)
	{
        // Native evidence: DecompiledNative/CharacterPlayer/CharacterPlayer_StartInvcibility_12be7f8.cpp
        InvincibilityTimeLeft = duration; HasInvincibility = true; TimeSinceLastPowerup = 0f;
	}

	public void StartAngelWings(float duration, bool isPermanent = false)
	{
        // Native evidence: DecompiledNative/CharacterPlayer/CharacterPlayer_StartAngelWings_12be840.cpp
        HasAngelWings = true; AreWingsPermanent = isPermanent; AngelWingsTimeLeft = duration;
        if (!isPermanent) { AngelWingsRechargeTimeLeft = 45f; AngelWingsCount--; }
	}

	public void StartVacuum(float duration)
	{
        // Native evidence: DecompiledNative/CharacterPlayer/CharacterPlayer_StartVacuum_12be870.cpp
        VacuumTimeLeft = duration; HasVacuum = true; TimeSinceLastPowerup = 0f;
	}

	public void StartCoinBonus(int value)
	{
        // Native evidence: DecompiledNative/CharacterPlayer/CharacterPlayer_StartCoinBonus_12be884.cpp
        AddCoins(value); TimeSinceLastPowerup = 0f;
	}

	public void StartBoost(float distance, bool isMega)
	{
        // Native evidence: DecompiledNative/CharacterPlayer/CharacterPlayer_StartBoost_12be89c.cpp
        bool hadBoost = HasBoost;
        HasBoost = true; IsMegaBoost = isMega;
        if (!hadBoost) { VelocityBeforeBoost = isMega ? MaxRunVelocity : GetRunVelocity(); StartInvcibility(4f); }
        BoostDistanceLeft = distance + 50f;
        TimeSinceLastPowerup = 0f; StumbleKillTimer += 10f;
	}

	public void StopAllAnimation()
	{
        // Native evidence: DecompiledNative/CharacterPlayer/CharacterPlayer_StopAllAnimation_12be918.cpp
        if (AnimateObject) AnimateObject.Stop();
	}

	public void Resurrect()
	{
        // Native evidence: DecompiledNative/CharacterPlayer/CharacterPlayer_Resurrect_12be934.cpp
        SetY(GroundHeight); IsDead = false; TimeSinceDeath = 0f; DeathType = DeathTypes.kDeathTypeUnknown;
        IsFalling = false; IsJumping = false; JumpAfterDelay = false; IsSliding = false; TimeSinceSlideStart = 0f;
        IsStumbling = false; StumbleAfterDelay = false; DidStumble = false; IsStrafing = false;
        IsGroundHeightChangeHigher = false; HasInvincibility = false; InvincibilityTimeLeft = 0f;
        AreWingsPermanent = false; HasAngelWings = false; HasVacuum = false; VacuumTimeLeft = 0f;
        HasBoost = false; BoostDistanceLeft = 0f; VelocityBeforeBoost = 0f; IsOnGround = true;
        StumbleKillTimer = 10f; BonusLevel = 1; CoinCountForBonus = 0; PlayAnimation("Run");
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
        // Native evidence: DecompiledNative/CharacterPlayer/CharacterPlayer_PlayAnimation_12bda58.cpp
        if (!AnimateObject) return;
        string selected = anim;
        if (!AnimateObject.GetClip(selected) && anim == "Run" && AnimateObject.GetClip("Run01")) selected = "Run01";
        if (!AnimateObject.GetClip(selected)) return;
        if (queued) AnimateObject.PlayQueued(selected); else if (!AnimateObject.IsPlaying(selected)) AnimateObject.CrossFade(selected, .08f);
	}

	public void AdjustAnimationSpeed()
	{
        // Native evidence: DecompiledNative/CharacterPlayer/CharacterPlayer_AdjustAnimationSpeed_12bdb3c.cpp
        if (AnimateObject) foreach (AnimationState state in AnimateObject) state.speed = Velocity.magnitude / 100f * .65f;
	}

	public void PauseAnimation()
	{
        // Native evidence: DecompiledNative/CharacterPlayer/CharacterPlayer_PauseAnimation_12bebbc.cpp
        if (AnimateObject) foreach (AnimationState state in AnimateObject) state.speed = 0f;
	}

	public void UnpauseAnimation()
	{
        // Native evidence: DecompiledNative/CharacterPlayer/CharacterPlayer_UnpauseAnimation_12bee84.cpp
        AdjustAnimationSpeed();
	}
}
