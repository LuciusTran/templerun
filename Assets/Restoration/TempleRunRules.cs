using System;
using UnityEngine;

/// <summary>Original shipped configuration and native-derived pacing equations.</summary>
public static class TempleRunRules
{
    [Serializable] public class RunnerData
    {
        public float SRV, MRV, SSDP, RSDP;
        public int RBD;
        public int[] ACCPTS, ACCFCS;
    }
    [Serializable] public class ControlsData { public bool FOC, FON, SSD, STS, STSD, TTT; }
    [Serializable] public class CoinData { public int[] D, T; }
    [Serializable] public class StoreData
    {
        public int[] MegaCoinLvl, MagnetLvl, InvLvl, BoostLvl, CoinValueLvl, Utilities, Characters, Wallpapers;
    }
    [Serializable] public class Configuration
    {
        public RunnerData Runner;
        public ControlsData Controls;
        public CoinData CoinSpawn;
        public StoreData Store;
    }
    private static Configuration config;
    public static Configuration Config
    {
        get
        {
            if (config == null)
            {
                var text = Resources.Load<TextAsset>("TempleRunNativeConfig");
                if (!text) throw new InvalidOperationException("Missing TempleRunNativeConfig resource.");
                config = JsonUtility.FromJson<Configuration>(text.text);
            }
            return config;
        }
    }

    public static float Acceleration(CharacterPlayer player)
    {
        // DecompiledNative/GameController/GameController_HandleControls_1293988.cpp
        // GetAccelerationCurve{Force,Threshold} divides shipped integers by 100.
        if (player.IsJumping || player.IsSliding) return 0f;
        float speed = player.GetRunVelocity(), maximum = player.GetMaxRunVelocity();
        if (speed >= maximum && (!player.HasBoost || player.BoostDistanceLeft > player.BoostSlowdownDistance)) return 0f;
        float ratio = maximum > 0f ? speed / maximum : 0f;
        int index = ratio < Config.Runner.ACCPTS[0] / 100f ? 0 : ratio <= Config.Runner.ACCPTS[1] / 100f ? 1 : ratio <= Config.Runner.ACCPTS[2] / 100f ? 2 : 3;
        float force = Config.Runner.ACCFCS[index] / 100f;
        if (player.HasBoost)
        {
            if (player.BoostDistanceLeft > player.BoostSlowdownDistance) force = 150f;
            else if (speed > player.VelocityBeforeBoost) force = -150f;
        }
        return force;
    }

    public static float DistanceIncrement(float horizontalDisplacement, float deltaTime)
    {
        // DecompiledNative/GameController/GameController_ComputeDistanceTraveled_129288c.cpp
        // The original uses squared speed scaled by 1/60, rather than raw distance.
        if (deltaTime <= 0f) return 0f;
        float scaledSpeed = horizontalDisplacement / deltaTime * (1f / 60f);
        return (deltaTime / (1f / 60f)) * scaledSpeed * scaledSpeed / 20f;
    }

    /// <summary>Native obstacle entry guards using the serialized world-height threshold.</summary>
    public static bool EntersObstacle(Obstacle obstacle, Region2D region, Vector2 previous, Vector2 current, float height, bool sliding)
    {
        // DecompiledNative/GameController/GameController_HandleCollisionWithObstacles_12959f4.cpp
        if (region.IsPointInside(previous)) return false;
        if (obstacle.MustJumpOver && height >= region.Height) return false;
        if (obstacle.MustSlideUnder && sliding) return false;
        return obstacle.DoesLineSegementIntersect(previous, current);
    }

    /// <summary>Native lethal obstacle classification for jump/slide hazards.</summary>
    public static CharacterPlayer.DeathTypes ObstacleDeath(Obstacle obstacle, PathElement.PathLevel level)
    {
        if (obstacle.MustJumpOver && obstacle.MustSlideUnder)
            return level == PathElement.PathLevel.kPathLevelPlank ? CharacterPlayer.DeathTypes.kDeathTypeTangle : CharacterPlayer.DeathTypes.kDeathTypeBurnt;
        return obstacle.MustSlideUnder ? CharacterPlayer.DeathTypes.kDeathTypeSlide : CharacterPlayer.DeathTypes.kDeathTypeTree;
    }

    /// <summary>Serialized-type sphere radii from the original pickup handler table.</summary>
    public static float PickupRadius(int type) => type == 1 || type == 5 || type == 6 ? 3f : 2.25f;

    /// <summary>Native coin attraction force within the 90-unit three-dimensional range.</summary>
    public static Vector3 MagnetForce(Vector3 displacement)
    {
        float squared = displacement.sqrMagnitude;
        return squared > 0f && squared <= 8100f ? displacement.normalized * (10000000f / squared) : Vector3.zero;
    }
}

/// <summary>Local replacement for the original end-game UI/platform dependency.</summary>
public static class TempleRunEvents
{
    public static event Action<CharacterPlayer.DeathTypes> Died;
    public static void NotifyDeath(CharacterPlayer.DeathTypes type) { Died?.Invoke(type); }
}
