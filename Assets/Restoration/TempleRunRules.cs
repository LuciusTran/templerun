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
        if (speed >= maximum && (!player.HasBoost || player.BoostDistanceLeft > 50f)) return 0f;
        if (player.HasBoost) return player.BoostDistanceLeft > 50f ? 150f : speed > player.VelocityBeforeBoost ? -150f : 0f;
        float ratio = maximum > 0f ? speed / maximum : 0f;
        int index = ratio < Config.Runner.ACCPTS[0] / 100f ? 0 : ratio <= Config.Runner.ACCPTS[1] / 100f ? 1 : ratio <= Config.Runner.ACCPTS[2] / 100f ? 2 : 3;
        return Config.Runner.ACCFCS[index] / 100f;
    }

    public static float DistanceIncrement(float horizontalDisplacement, float deltaTime)
    {
        // DecompiledNative/GameController/GameController_ComputeDistanceTraveled_129288c.cpp
        // The original uses squared speed scaled by 1/60, rather than raw distance.
        if (deltaTime <= 0f) return 0f;
        float scaledSpeed = horizontalDisplacement / deltaTime * (1f / 60f);
        return (deltaTime / (1f / 60f)) * scaledSpeed * scaledSpeed / 20f;
    }
}

/// <summary>Local replacement for the original end-game UI/platform dependency.</summary>
public static class TempleRunEvents
{
    public static event Action<CharacterPlayer.DeathTypes> Died;
    public static void NotifyDeath(CharacterPlayer.DeathTypes type) { Died?.Invoke(type); }
}
