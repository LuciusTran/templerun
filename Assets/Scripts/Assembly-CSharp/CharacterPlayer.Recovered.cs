using System;
using UnityEngine;

public partial class CharacterPlayer
{
    /// <summary>Native frame-state translation with an explicit host ground query.</summary>
    public void RecoveredStep(float deltaTime, Func<Vector3, float?> groundAt)
    {
        // DecompiledNative/CharacterPlayer/CharacterPlayer_Update_12bcdc4.cpp
        // UI, native material effects, and platform calls are handled by the host.
        if (IsDead || Hold || deltaTime <= 0f) return;
        PreviousLocation = transform.position;
        if (JumpAfterDelay && (JumpDelay -= deltaTime) <= 0f) Jump();
        if (StumbleAfterDelay && (StumbleDelay -= deltaTime) <= 0f) Stumble();
        if (IsDead) return;
        if (HasInvincibility && (!HasBoost || BoostDistanceLeft < 50f))
        {
            InvincibilityTimeLeft -= deltaTime;
            if (InvincibilityTimeLeft <= 0f) { HasInvincibility = false; HasBoost = false; IsMegaBoost = false; }
        }
        if (HasVacuum && (VacuumTimeLeft -= deltaTime) <= 0f) HasVacuum = false;
        if (HasAngelWings && !AreWingsPermanent && (AngelWingsTimeLeft -= deltaTime) <= 0f) HasAngelWings = false;
        AngelWingsRechargeTimeLeft = Mathf.Max(0f, AngelWingsRechargeTimeLeft - deltaTime);
        TimeSinceLastPowerup += deltaTime;
        ApplyForce(Vector3.down * 250f);
        RecoveredIntegrate(deltaTime);
        float? ground = groundAt(transform.position);
        IsOverGround = ground.HasValue;
        if (ground.HasValue) SetGroundHeight(ground.Value);
        bool landed = IsOverGround && transform.position.y <= GroundHeight &&
            (!IsFalling || transform.position.y >= GroundHeight - 6f);
        IsOnGround = landed;
        if (landed)
        {
            SetY(GroundHeight);
            Velocity.y = 0f;
            if (IsJumping) { IsJumping = false; PlayAnimation("Run"); }
            IsGroundHeightChangeHigher = false;
        }
        if (transform.position.y < GroundHeight)
        {
            if (!IsFalling) { IsFalling = true; TimeSinceFallStart = 0f; }
            TimeSinceFallStart += deltaTime;
        }
        else IsFalling = false;
        if (IsSliding && (TimeSinceSlideStart += deltaTime) > SlideDuration)
        {
            IsSliding = false; PlayAnimation("Run");
        }
        if (IsStumbling && (TimeSinceStumbleStart += deltaTime) > StumbleDuration)
        {
            IsStumbling = false; if (!IsSliding && !IsJumping) PlayAnimation("Run");
        }
        if (IsStrafing && (TimeSinceStrafeStart += deltaTime) > StrafeDuration) IsStrafing = false;
        StumbleKillTimer += deltaTime;
        if (transform.position.y < -35f) Kill(DeathTypes.kDeathTypeFall);
        AdjustAnimationSpeed();
    }
}
