using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

/// <summary>
/// Authored local host for the native-derived runner. Track scheduling, UI, input,
/// save storage and unavailable platform integrations are explicit replacements.
/// </summary>
public partial class TempleRunFlow : MonoBehaviour
{
    public enum Page { Home, Running, Paused, Finished, Store, Characters, Settings }
    public static TempleRunFlow Instance { get; private set; }
    public CharacterPlayer Runner { get; private set; }
    public Page CurrentPage { get; private set; }
    public bool DeveloperUnlocks;
    public bool IsPlaying => CurrentPage == Page.Running;
    public bool TestMode { get; private set; }
    public float Distance { get; private set; }
    public float Elapsed { get; private set; }
    public ProfileData Profile { get; private set; }
    public int CurrentTileIndex => tileIndex;
    public int SpawnedTiles => tiles.Count;
    public int CollectedPickups { get; private set; }
    public Camera GameCamera { get; private set; }
    private TempleRunCatalog catalog;
    private GameObject avatar;
    private GameObject waterPlane;
    private AudioSource music, effects;
    private string profilePath;
    private float distanceRemainder, saveClock, noticeUntil, turnBufferTime;
    private int reviveCount, bankedCoins, turnBuffer;
    private string notice = "", deathCaption = "";
    private Vector2 gestureStart;
    private bool gestureActive;
    private readonly List<GameObject> pursuers = new List<GameObject>();

    private void Awake()
    {
        if (Instance && Instance != this) { Destroy(gameObject); return; }
        Instance = this;
        string[] arguments = Environment.GetCommandLineArgs();
        int captureIndex = Array.IndexOf(arguments, "--capture-path");
        TestMode = Array.IndexOf(arguments, "--temple-test") >= 0 || captureIndex >= 0;
        profilePath = Path.Combine(Application.persistentDataPath, TestMode
            ? "test-profile-" + System.Diagnostics.Process.GetCurrentProcess().Id + ".json" : "profile.json");
        Profile = LoadProfile(profilePath);
        catalog = Resources.Load<TempleRunCatalog>("TempleRunCatalog");
        if (!catalog || catalog.characters == null || catalog.characters.Length == 0)
            throw new InvalidOperationException("Missing TempleRunCatalog. Run Temple Run > Prepare Project.");
        Application.targetFrameRate = 60;
        TempleRunEvents.Died += NotifyDeath;
        CreatePresentation();
        CreateRunner();
        BuildTrack(Environment.TickCount);
        Runner.Reset(); Runner.SetY(BaseHeight); Runner.Hold = true; Runner.PlayAnimation("Idle");
        SnapCamera();
        CurrentPage = Page.Home;
        if (captureIndex >= 0 && captureIndex + 1 < arguments.Length) StartCoroutine(TempleRunCapture.Run(this, arguments[captureIndex + 1]));
        else if (TestMode) StartCoroutine(TempleRunPlayerChecks.Run(this));
    }

    public void BeginRun(bool resume = false)
    {
        Time.timeScale = 1f;
        if (resume && Profile.hasRun && Profile.run != null && RestoreRun(Profile.run))
        {
            CurrentPage = Page.Running; Runner.Hold = false; return;
        }
        Distance = Elapsed = distanceRemainder = 0f;
        reviveCount = bankedCoins = CollectedPickups = 0;
        turnBuffer = 0; turnBufferTime = 0f;
        BuildTrack(Environment.TickCount);
        Runner.transform.SetPositionAndRotation(new Vector3(0, BaseHeight, -15), Quaternion.identity);
        Runner.Reset(); Runner.GroundHeight = BaseHeight; Runner.Hold = false;
        Runner.AngelWingsCount = Profile.wings;
        CurrentPage = Page.Running;
        SaveRun(); SnapCamera();
    }

    public void Pause()
    {
        if (!IsPlaying) return;
        SaveRun(); Runner.Hold = true; CurrentPage = Page.Paused; Time.timeScale = 0f;
    }
    public void Resume()
    {
        if (CurrentPage != Page.Paused) return;
        Runner.Hold = false; CurrentPage = Page.Running; Time.timeScale = 1f;
    }
    public void GoHome()
    {
        if (IsPlaying || CurrentPage == Page.Paused) SaveRun();
        Runner.Hold = true; Time.timeScale = 1f; CurrentPage = Page.Home;
    }

    public void NotifyDeath(CharacterPlayer.DeathTypes type)
    {
        if (!IsPlaying) return;
        deathCaption = type == CharacterPlayer.DeathTypes.kDeathTypeFall ? "Watch your step!" :
            type == CharacterPlayer.DeathTypes.kDeathTypeEaten ? "The guardians caught you!" :
            type == CharacterPlayer.DeathTypes.kDeathTypeSlide ? "Slide under the roots!" : "Watch the obstacles!";
        CurrentPage = Page.Finished; Time.timeScale = 1f;
        int earned = Mathf.Max(0, Runner.CoinCountTotal - bankedCoins);
        Profile.coins += earned; bankedCoins += earned;
        Profile.bestScore = Mathf.Max(Profile.bestScore, Runner.Score);
        Profile.bestDistance = Mathf.Max(Profile.bestDistance, Distance);
        Profile.hasRun = false; Profile.run = null;
        SaveProfile(); Sound("monkeyRoar");
    }

    public bool CanRevive => reviveCount == 0 && (Runner.HasAngelWings || Profile.wings > 0 || DeveloperUnlocks);
    public bool Revive()
    {
        if (CurrentPage != Page.Finished || !CanRevive) return false;
        if (!Runner.HasAngelWings && Profile.wings > 0) Profile.wings--;
        reviveCount++;
        int safe = Mathf.Max(0, tileIndex - 1);
        while (safe > 0 && (tiles[safe].type != 1 && tiles[safe].type != 2)) safe--;
        tileIndex = safe;
        var tile = tiles[safe];
        Runner.transform.SetPositionAndRotation(tile.center + Vector3.up * BaseHeight, Quaternion.LookRotation(Direction(tile.incoming)));
        Runner.GroundHeight = BaseHeight; Runner.Resurrect();
        Runner.Velocity = Runner.transform.forward * Mathf.Max(TempleRunRules.Config.Runner.SRV,
            Runner.DeathRunVelocity * TempleRunRules.Config.Runner.RSDP);
        Runner.StartBoost(TempleRunRules.Config.Runner.RBD, false);
        Runner.Hold = false; CurrentPage = Page.Running; Time.timeScale = 1f;
        SaveRun(); SnapCamera(); return true;
    }

    public bool RequestJump()
    {
        if (!IsPlaying) return false;
        bool result = Runner.Jump(); if (result) Sound("gruntJump"); return result;
    }
    public bool RequestSlide()
    {
        if (!IsPlaying) return false;
        bool result = Runner.IsJumping && TempleRunRules.Config.Controls.STSD ? Runner.SlamDown() : Runner.Slide();
        if (result) Sound("slide"); return result;
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape) || Input.GetKeyDown(KeyCode.P))
        {
            if (IsPlaying) Pause(); else if (CurrentPage == Page.Paused) Resume();
        }
        if (!IsPlaying) return;
        if (Input.GetKeyDown(KeyCode.Space) || Input.GetKeyDown(KeyCode.UpArrow) || Input.GetKeyDown(KeyCode.W)) RequestJump();
        if (Input.GetKeyDown(KeyCode.DownArrow) || Input.GetKeyDown(KeyCode.S)) RequestSlide();
        if (Input.GetKeyDown(KeyCode.LeftArrow) || Input.GetKeyDown(KeyCode.Q)) RequestTurn(-1);
        if (Input.GetKeyDown(KeyCode.RightArrow) || Input.GetKeyDown(KeyCode.E)) RequestTurn(1);
        if (Input.GetKeyDown(KeyCode.F)) UseWings();
        HandleGestures();
        // Native timers/forces use smoothDeltaTime. Only movement displacement
        // is capped to 1/15 second inside MovingObject.RecoveredIntegrate.
        Tick(Time.smoothDeltaTime);
    }

    private void HandleGestures()
    {
        if (Input.GetMouseButtonDown(0)) { gestureStart = Input.mousePosition; gestureActive = true; }
        if (!Input.GetMouseButtonUp(0) || !gestureActive) return;
        gestureActive = false;
        Vector2 delta = (Vector2)Input.mousePosition - gestureStart;
        if (delta.magnitude < Mathf.Max(24, Screen.height * .035f)) return;
        if (Mathf.Abs(delta.x) > Mathf.Abs(delta.y)) RequestTurn(delta.x < 0 ? -1 : 1);
        else if (delta.y > 0) RequestJump(); else RequestSlide();
    }

    public void Tick(float deltaTime)
    {
        if (!IsPlaying || Runner.IsDead || deltaTime <= 0f) return;
        ProcessTurnBuffer(deltaTime);
        float tilt = Input.GetKey(KeyCode.A) ? 1f : Input.GetKey(KeyCode.D) ? -1f :
            Application.isMobilePlatform ? -Mathf.Clamp(Input.acceleration.x * 2f, -1f, 1f) : 0f;
        if (!Runner.IsStrafing) Runner.PlayerXOffset = Mathf.MoveTowards(Runner.PlayerXOffset, tilt * 7f, deltaTime * 18f);
        var tile = tiles[tileIndex];
        Vector3 right = Vector3.Cross(Vector3.up, Runner.transform.forward);
        float lateral = Vector3.Dot(Runner.transform.position - tile.center, right);
        Runner.transform.position += right * Mathf.Clamp(-Runner.PlayerXOffset - lateral, -18f * deltaTime, 18f * deltaTime);
        Vector3 before = Runner.transform.position;
        Runner.ApplyForce(Runner.transform.forward * TempleRunRules.Acceleration(Runner));
        Runner.RecoveredStep(deltaTime, GroundAt);
        if (!IsPlaying) return;
        float displacement = Vector2.Distance(new Vector2(before.x, before.z), new Vector2(Runner.transform.position.x, Runner.transform.position.z));
        if (!Runner.IsFalling)
        {
            float increment = TempleRunRules.DistanceIncrement(displacement, deltaTime);
            Distance += increment; distanceRemainder += increment;
            int score = (int)distanceRemainder; distanceRemainder -= score; Runner.AddScore(score);
            if (Runner.HasBoost) Runner.BoostDistanceLeft -= increment;
        }
        Elapsed += deltaTime;
        CheckTrackInteractions(before, deltaTime);
        AdvanceTrack();
        saveClock += deltaTime;
        if (saveClock >= 2f) { saveClock = 0f; SaveRun(); }
    }

    private void LateUpdate()
    {
        if (!Runner || !GameCamera) return;
        Vector3 position = Runner.transform.position;
        float height = Mathf.Max(position.y, BaseHeight);
        Vector3 target = new Vector3(position.x, height, position.z) - Runner.transform.forward * 50f + Vector3.up * 35f;
        GameCamera.transform.position = Vector3.Lerp(GameCamera.transform.position, target, 1f - Mathf.Exp(-7f * Time.unscaledDeltaTime));
        Quaternion rotation = Quaternion.LookRotation(new Vector3(position.x, height + 20f, position.z) - GameCamera.transform.position);
        GameCamera.transform.rotation = Quaternion.Slerp(GameCamera.transform.rotation, rotation, 1f - Mathf.Exp(-10f * Time.unscaledDeltaTime));
        if (waterPlane)
        {
            // DecompiledNative/GameCamera/GameCamera_UpdateWater_12d8070.cpp
            Vector3 camera = GameCamera.transform.position;
            waterPlane.transform.position = new Vector3((int)(camera.x / 200f) * 200f, -30.5f, (int)(camera.z / 200f) * 200f);
        }
        for (int i = 0; i < pursuers.Count; i++)
        {
            if (!pursuers[i]) continue;
            float chase = Runner.StumbleKillTimer < 10f ? 9f : 28f;
            Vector3 targetPos = new Vector3(position.x, BaseHeight, position.z) - Runner.transform.forward * (chase + i * 4f) + Runner.transform.right * (i == 0 ? -3f : 3f);
            pursuers[i].transform.position = Vector3.Lerp(pursuers[i].transform.position, targetPos, 1f - Mathf.Exp(-8f * Time.unscaledDeltaTime));
            pursuers[i].transform.rotation = Runner.transform.rotation;
        }
    }

    private void SnapCamera()
    {
        if (!Runner || !GameCamera) return;
        GameCamera.transform.position = Runner.transform.position - Runner.transform.forward * 50f + Vector3.up * 35f;
        GameCamera.transform.LookAt(Runner.transform.position + Vector3.up * 20f);
    }
    private void Sound(string name)
    {
        if (!Profile.sound || !effects) return;
        var clip = Resources.Load<AudioClip>("sound/" + name); if (clip) effects.PlayOneShot(clip, .6f);
    }
    private void Notice(string message) { notice = message; noticeUntil = Time.unscaledTime + 3f; }
    private void OnApplicationPause(bool paused) { if (paused && IsPlaying) Pause(); }
    private void OnApplicationQuit() { if (Runner && (IsPlaying || CurrentPage == Page.Paused)) SaveRun(); Time.timeScale = 1f; }
    private void OnDestroy()
    {
        TempleRunEvents.Died -= NotifyDeath;
        foreach (var material in avatarMaterials) if (material) Destroy(material);
        if (Instance == this) Instance = null;
        Time.timeScale = 1f;
    }
}
