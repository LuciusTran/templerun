using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

/// <summary>Opt-in player integration checks using the real scene, models and native-derived rules.</summary>
public static class TempleRunPlayerChecks
{
    [Serializable] private class Report
    {
        public bool passed;
        public string unityVersion, error;
        public List<string> checks = new List<string>();
    }
    private static Report report;
    private static void Check(bool result, string name)
    {
        if (!result) throw new InvalidOperationException(name);
        report.checks.Add(name); Debug.Log("TEMPLE_CHECK_PASS: " + name);
    }
    public static IEnumerator Run(TempleRunFlow flow)
    {
        report = new Report { unityVersion = Application.unityVersion, error = "" };
        var checks = Checks(flow);
        while (true)
        {
            bool moved;
            try { moved = checks.MoveNext(); }
            catch (Exception exception) { report.error = exception.ToString(); break; }
            if (!moved) { report.passed = true; break; }
            yield return checks.Current;
        }
        flow.enabled = true; Time.timeScale = 1f;
        string path = Path.Combine(Application.persistentDataPath, "player-verification.json");
        string[] args = Environment.GetCommandLineArgs(); int index = Array.IndexOf(args, "--report");
        if (index >= 0 && index + 1 < args.Length) path = args[index + 1];
        path = Path.GetFullPath(path); Directory.CreateDirectory(Path.GetDirectoryName(path));
        File.WriteAllText(path, JsonUtility.ToJson(report, true));
        Debug.Log("TEMPLE_PLAYER_CHECKS_RESULT: " + JsonUtility.ToJson(report));
        if (Array.IndexOf(args, "--keep-open") < 0) Application.Quit(report.passed ? 0 : 1);
    }
    private static IEnumerator Checks(TempleRunFlow flow)
    {
        yield return null;
        Check(TempleRunGoldenChecks.Run() == 876, "876 C# golden cases match original ARM64 outputs");
        Check(flow.CurrentPage == TempleRunFlow.Page.Home, "Playable scene starts at the home menu");
        flow.BeginRun();
        Vector3 start = flow.Runner.transform.position;
        yield return new WaitForSeconds(.3f);
        Check(flow.IsPlaying && flow.Runner.transform.position.z > start.z + 5f, "Normal Unity Update advances the runner after starting");
        Check(flow.Runner.RenderObject.Length > 0 && flow.Runner.RenderObject[0], "Actual extracted character mesh is instantiated");
        Check(flow.Runner.AnimateObject && flow.Runner.AnimateObject.isPlaying, "Original legacy character animation is playing");
        Check(flow.SpawnedTiles >= 16 && flow.Runner.IsOnGround, "Original track prefabs and polygon ground support the runner");
        flow.enabled = false;
        var runner = flow.Runner;
        Check(flow.RequestJump(), "Native jump guard accepts a grounded jump");
        flow.Tick(.02f);
        Check(runner.IsJumping && runner.transform.position.y > 0f, "Native jump impulse and gravity move the real actor upward");
        Check(!flow.RequestJump(), "Native jump guard prevents a second jump while airborne");
        flow.SaveRun(); int savedScore = runner.Score; Vector3 savedPosition = runner.transform.position;
        flow.Pause(); Check(flow.CurrentPage == TempleRunFlow.Page.Paused && Time.timeScale == 0f, "Pause stops game time and preserves a run");
        flow.GoHome(); runner.Score = 999999;
        flow.ReloadProfile(); flow.BeginRun(true);
        Check(runner.Score == savedScore && Vector3.Distance(runner.transform.position, savedPosition) < .001f && runner.IsJumping,
            "Persisted continue restores position, score and airborne state");
        for (int i = 0; i < 60; i++) flow.Tick(.02f);
        Check(!runner.IsJumping && runner.IsOnGround, "Jump lands on the original ground polygon");
        Check(flow.RequestSlide(), "Native slide starts from running state");
        float duration = Mathf.Min(runner.GetRunVelocity() * .007f, .75f);
        Check(Mathf.Abs(runner.SlideDuration - duration) < .0001f, "Slide duration uses the recovered native speed equation");
        for (int i = 0; i < 45; i++) flow.Tick(.02f);
        Check(!runner.IsSliding, "Slide returns to running after its native duration");
        flow.BeginRun();
        flow.SpawnTestPickup(1); flow.Tick(.001f);
        Check(runner.CoinCountTotal == 1 && flow.CollectedPickups == 1, "An actual extracted coin pickup updates native coin state");
        flow.SpawnTestPickup(5); flow.Tick(.001f); Check(runner.HasInvincibility, "Invincibility pickup starts the native timer");
        flow.SpawnTestPickup(6); flow.Tick(.001f); Check(runner.HasVacuum, "Magnet pickup starts the native vacuum timer");
        flow.SpawnTestPickup(7); flow.Tick(.001f); Check(runner.HasBoost && runner.BoostDistanceLeft > 250f, "Boost pickup includes the native 50-unit slowdown tail");
        flow.Profile.coins = 1000; flow.DeveloperUnlocks = false;
        Check(flow.BuyUpgrade(0) && flow.Profile.coins == 750 && flow.Profile.upgrades[0] == 1, "Store charges the original shipped upgrade price");
        flow.Profile.coins = 0;
        Check(!flow.BuyUpgrade(1) && flow.Profile.upgrades[1] == 0, "Store rejects purchases without enough coins");
        flow.Profile.coins = 321; flow.SaveProfile(); flow.Profile.coins = 0; flow.ReloadProfile();
        Check(flow.Profile.coins == 321, "Local profile writes and reloads currency");
        flow.BeginRun(); runner.StumbleKillTimer = 11f; runner.Stumble();
        Check(!runner.IsDead && runner.IsStumbling && runner.StumbleKillTimer == 0f, "First native stumble slows the player and resets the chase timer");
        runner.Stumble();
        Check(runner.IsDead && flow.CurrentPage == TempleRunFlow.Page.Finished, "Second stumble within the native window reaches game over");
        int wallet = flow.Profile.coins; runner.Kill(CharacterPlayer.DeathTypes.kDeathTypeTree);
        Check(flow.Profile.coins == wallet, "Repeated death notification does not award the same run twice");
        flow.DeveloperUnlocks = true;
        Check(flow.Revive() && flow.IsPlaying && !runner.IsDead && runner.HasBoost, "Revive restores a safe track position and the native resurrection boost");
        flow.BeginRun(); Check(runner.Score == 0 && runner.CoinCountTotal == 0, "Retry clears run score and coins");
        flow.Profile.wings = 1;
        Check(flow.UseWings() && runner.HasAngelWings && Mathf.Abs(runner.AngelWingsTimeLeft - 30f) < .01f, "Wings activate the recovered native state and duration");
        // Keep the route fixture separate from developer-unlocked random powers,
        // whose native pickups intentionally replace invincibility durations.
        flow.DeveloperUnlocks = false;
        runner.HasBoost = false; runner.HasInvincibility = false; runner.IsDead = false; runner.Hold = false;
        runner.StartInvcibility(240f);
        int turns = 0;
        for (int step = 0; step < 3600; step++)
        {
            if (flow.TestTurnReady())
            {
                Vector3 beforeTurn = runner.transform.forward;
                flow.RequestTurn(flow.TestTurnSign());
                Check(Vector3.Dot(beforeTurn, runner.transform.forward) < .1f, "Native 90-degree turn connects original corner geometry " + (++turns));
            }
            flow.Tick(1f / 60f);
            if (step % 120 == 0) yield return null;
            if (!flow.IsPlaying) throw new InvalidOperationException("Endless route stopped: death=" + runner.DeathType + "; position=" + runner.transform.position +
                "; invincible=" + runner.HasInvincibility + "; time=" + runner.InvincibilityTimeLeft + "; generated=" + flow.TotalGeneratedTiles);
        }
        Check(turns >= 2 && flow.TotalGeneratedTiles > 60 && flow.SpawnedTiles <= 46, "Endless track appends connected tiles and releases old world objects");
        foreach (int biome in new[] { 1, 2, 3 })
        {
            flow.Profile.biome = biome; flow.BeginRun(); flow.Tick(.01f);
            float expectedHeight = biome == 1 ? -15f : biome == 3 ? 15f : 0f;
            Check(runner.IsOnGround && Mathf.Abs(runner.GroundHeight - expectedHeight) < .01f, "Original biome ground geometry and height " + biome);
        }
        flow.Profile.biome = 2; flow.BeginRun();
        flow.Pause(); flow.Resume(); Check(flow.IsPlaying && Time.timeScale == 1f, "Resume restarts a paused run");
        flow.GoHome(); Check(flow.CurrentPage == TempleRunFlow.Page.Home && flow.Profile.hasRun, "Returning home preserves a continuable run");
    }
}
