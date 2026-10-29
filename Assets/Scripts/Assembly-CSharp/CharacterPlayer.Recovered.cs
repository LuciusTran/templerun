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
        if (StumbleAfterDelay && (StumbleDelay -= deltaTime) <= 0f) Stumble();
        if (JumpAfterDelay && (JumpDelay -= deltaTime) <= 0f) Jump();
        if (IsDead) return;
        if (HasInvincibility)
        {
            if (!HasBoost || BoostDistanceLeft < 50f) InvincibilityTimeLeft -= deltaTime;
            if (InvincibilityTimeLeft <= 0f) { HasInvincibility = false; HasBoost = false; IsMegaBoost = false; }
        }
        if (HasVacuum && (VacuumTimeLeft -= deltaTime) <= 0f) HasVacuum = false;
        if (HasAngelWings && !AreWingsPermanent && (AngelWingsTimeLeft -= deltaTime) <= 0f)
        { HasAngelWings = false; AreWingsPermanent = false; }
        if ((!HasAngelWings || !AreWingsPermanent) && AngelWingsRechargeTimeLeft > 0f)
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
            float height = transform.position.y;
            if (IsFalling && height < GroundHeight - 2f && !HasInvincibility) Stumble();
            // These are independent native branches: both can stumble in the
            // same frame, making a falling raised-ground landing lethal.
            if (IsGroundHeightChangeHigher && height >= GroundHeight - 6f && height < GroundHeight - 2f && !HasInvincibility) Stumble();
            SetY(GroundHeight);
            Velocity.y = 0f;
            if (IsJumping) { IsJumping = false; PlayAnimation("Run"); }
            IsGroundHeightChangeHigher = false;
        }
        if (transform.position.y < GroundHeight)
        {
            if (!IsFalling) { IsFalling = true; TimeSinceFallStart = 0f; }
            else TimeSinceFallStart += deltaTime;
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
