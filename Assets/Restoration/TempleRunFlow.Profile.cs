using System;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public partial class TempleRunFlow
{
    private readonly List<Material> avatarMaterials = new List<Material>();
    [Serializable] public class RunData
    {
        public int stateVersion;
        public int seed, randomDraws, generatedCount, untilTurn, sinceObstacle, tileIndex, revives, bankedCoins;
        public float distance, elapsed, remainder;
        public Vector3 position, velocity;
        public Quaternion rotation;
        public int score, coins, bonusCoins, bonusLevel;
        public float invincibility, vacuum, boostDistance, velocityBeforeBoost;
        public bool boost, megaBoost, wings;
        public float wingsTime;
        public float wingsRecharge, timeSincePowerup, timeSinceFall, groundHeight;
        public int wingsCount, scoreMultiplier, bonusMaximum;
        public bool permanentWings, onGround, overGround, groundRaised;
        public bool jumping, falling, sliding, stumbling, strafing, jumpAfterDelay, stumbleAfterDelay;
        public float jumpDelay, stumbleDelay, slideTime, slideDuration, stumbleTime, stumbleDuration, stumbleKillTimer, strafeTime, laneOffset;
        public List<TrackTile> tiles;
    }
    [Serializable] public class ProfileData
    {
        public int version = 1;
        public int coins, bestScore, character, wings, headStarts, megaHeadStarts;
        public int biome = 2;
        public float bestDistance;
        public bool sound = true, hasRun;
        public int[] upgrades = new int[5];
        public List<int> ownedCharacters = new List<int> { 0 };
        public RunData run;
    }
    private static ProfileData LoadProfile(string path)
    {
        ProfileData data = null;
        if (File.Exists(path))
        {
            try { data = JsonUtility.FromJson<ProfileData>(File.ReadAllText(path)); }
            catch (Exception exception) when (exception is IOException || exception is ArgumentException)
            { Debug.LogWarning("Cannot read local profile: " + exception.Message); }
        }
        data = data ?? new ProfileData();
        if (data.upgrades == null || data.upgrades.Length != 5) data.upgrades = new int[5];
        data.ownedCharacters = data.ownedCharacters ?? new List<int> { 0 };
        if (!data.ownedCharacters.Contains(0)) data.ownedCharacters.Add(0);
        data.biome = Mathf.Clamp(data.biome, 1, 3);
        return data;
    }
    public void SaveProfile()
    {
        Directory.CreateDirectory(Path.GetDirectoryName(profilePath));
        string temporary = profilePath + ".tmp";
        File.WriteAllText(temporary, JsonUtility.ToJson(Profile, true));
        if (File.Exists(profilePath)) File.Replace(temporary, profilePath, null);
        else File.Move(temporary, profilePath);
    }
    public void SaveRun()
    {
        if (!Runner || Runner.IsDead || tiles.Count == 0) return;
        Profile.hasRun = true;
        Profile.run = new RunData {
            stateVersion = 2,
            seed = seed, randomDraws = randomDraws, generatedCount = generatedCount,
            untilTurn = untilTurn, sinceObstacle = sinceObstacle, tileIndex = tileIndex,
            revives = reviveCount, bankedCoins = bankedCoins,
            distance = Distance, elapsed = Elapsed, remainder = distanceRemainder,
            position = Runner.transform.position, rotation = Runner.transform.rotation, velocity = Runner.Velocity,
            score = Runner.Score, coins = Runner.CoinCountTotal, bonusCoins = Runner.CoinCountForBonus, bonusLevel = Runner.BonusLevel,
            invincibility = Runner.HasInvincibility ? Runner.InvincibilityTimeLeft : 0f,
            vacuum = Runner.HasVacuum ? Runner.VacuumTimeLeft : 0f,
            boost = Runner.HasBoost, megaBoost = Runner.IsMegaBoost, boostDistance = Runner.BoostDistanceLeft,
            velocityBeforeBoost = Runner.VelocityBeforeBoost, wings = Runner.HasAngelWings, wingsTime = Runner.AngelWingsTimeLeft,
            wingsRecharge = Runner.AngelWingsRechargeTimeLeft, wingsCount = Runner.AngelWingsCount, permanentWings = Runner.AreWingsPermanent,
            timeSincePowerup = Runner.TimeSinceLastPowerup, timeSinceFall = Runner.TimeSinceFallStart, groundHeight = Runner.GroundHeight,
            onGround = Runner.IsOnGround, overGround = Runner.IsOverGround, groundRaised = Runner.IsGroundHeightChangeHigher,
            scoreMultiplier = Runner.ScoreMultiplier, bonusMaximum = Runner.BonusLevelMax,
            jumping = Runner.IsJumping, falling = Runner.IsFalling, sliding = Runner.IsSliding, stumbling = Runner.IsStumbling,
            strafing = Runner.IsStrafing, jumpAfterDelay = Runner.JumpAfterDelay, stumbleAfterDelay = Runner.StumbleAfterDelay,
            jumpDelay = Runner.JumpDelay, stumbleDelay = Runner.StumbleDelay, slideTime = Runner.TimeSinceSlideStart, slideDuration = Runner.SlideDuration,
            stumbleTime = Runner.TimeSinceStumbleStart, stumbleDuration = Runner.StumbleDuration, stumbleKillTimer = Runner.StumbleKillTimer,
            strafeTime = Runner.TimeSinceStrafeStart, laneOffset = Runner.PlayerXOffset,
            tiles = new List<TrackTile>(tiles)
        };
        SaveProfile();
    }
    private bool RestoreRun(RunData data)
    {
        if (data.tiles == null || data.tiles.Count == 0 || data.tileIndex < 0 || data.tileIndex >= data.tiles.Count) return false;
        ClearTrack();
        seed = data.seed; planner = new System.Random(seed); randomDraws = Mathf.Clamp(data.randomDraws, 0, 1000000);
        for (int i = 0; i < randomDraws; i++) planner.NextDouble();
        generatedCount = data.generatedCount; untilTurn = data.untilTurn; sinceObstacle = data.sinceObstacle;
        foreach (var tile in data.tiles) { tiles.Add(tile); MaterializeTile(tile); }
        for (int i = 1; i < tiles.Count; i++) Link(tiles[i - 1], tiles[i]);
        tileIndex = data.tileIndex; reviveCount = data.revives; bankedCoins = data.bankedCoins;
        Distance = data.distance; Elapsed = data.elapsed; distanceRemainder = data.remainder;
        Runner.transform.SetPositionAndRotation(data.position, data.rotation); Runner.Reset();
        Runner.Velocity = data.velocity; Runner.GroundHeight = BaseHeight;
        Runner.Score = data.score; Runner.CoinCountTotal = data.coins; Runner.CoinCountForBonus = data.bonusCoins; Runner.BonusLevel = data.bonusLevel;
        Runner.HasInvincibility = data.invincibility > 0f; Runner.InvincibilityTimeLeft = data.invincibility;
        Runner.HasVacuum = data.vacuum > 0f; Runner.VacuumTimeLeft = data.vacuum;
        Runner.HasBoost = data.boost; Runner.IsMegaBoost = data.megaBoost; Runner.BoostDistanceLeft = data.boostDistance; Runner.VelocityBeforeBoost = data.velocityBeforeBoost;
        Runner.HasAngelWings = data.wings; Runner.AngelWingsTimeLeft = data.wingsTime;
        Runner.AngelWingsCount = Profile.wings;
        if (data.stateVersion >= 2)
        {
            Runner.AngelWingsRechargeTimeLeft = data.wingsRecharge; Runner.AngelWingsCount = data.wingsCount; Runner.AreWingsPermanent = data.permanentWings;
            Runner.TimeSinceLastPowerup = data.timeSincePowerup; Runner.TimeSinceFallStart = data.timeSinceFall; Runner.GroundHeight = data.groundHeight;
            Runner.IsOnGround = data.onGround; Runner.IsOverGround = data.overGround; Runner.IsGroundHeightChangeHigher = data.groundRaised;
            Runner.ScoreMultiplier = data.scoreMultiplier; Runner.BonusLevelMax = data.bonusMaximum;
        }
        Runner.IsJumping = data.jumping; Runner.IsFalling = data.falling; Runner.IsSliding = data.sliding; Runner.IsStumbling = data.stumbling;
        Runner.IsStrafing = data.strafing; Runner.JumpAfterDelay = data.jumpAfterDelay; Runner.StumbleAfterDelay = data.stumbleAfterDelay;
        Runner.JumpDelay = data.jumpDelay; Runner.StumbleDelay = data.stumbleDelay;
        Runner.TimeSinceSlideStart = data.slideTime; Runner.SlideDuration = data.slideDuration;
        Runner.TimeSinceStumbleStart = data.stumbleTime; Runner.StumbleDuration = data.stumbleDuration; Runner.StumbleKillTimer = data.stumbleKillTimer;
        Runner.TimeSinceStrafeStart = data.strafeTime; Runner.PlayerXOffset = data.laneOffset;
        Runner.Hold = false; SnapCamera(); return true;
    }
    public string ReadSavedProfile() => File.ReadAllText(profilePath);
    public void ReloadProfile() { Profile = LoadProfile(profilePath); }

    public bool BuyUpgrade(int category)
    {
        if (category < 0 || category > 4) return false;
        int level = Profile.upgrades[category];
        int[][] prices = { TempleRunRules.Config.Store.MegaCoinLvl, TempleRunRules.Config.Store.MagnetLvl,
            TempleRunRules.Config.Store.InvLvl, TempleRunRules.Config.Store.BoostLvl, TempleRunRules.Config.Store.CoinValueLvl };
        if (level >= prices[category].Length) return false;
        int cost = prices[category][level];
        if (!DeveloperUnlocks && Profile.coins < cost) { Notice("Not enough coins."); return false; }
        if (!DeveloperUnlocks) Profile.coins -= cost;
        Profile.upgrades[category]++; SaveProfile(); Sound("cashRegister"); return true;
    }
    public bool BuyUtility(int kind)
    {
        int index = kind == 0 ? 0 : kind == 1 ? 2 : 3;
        int cost = TempleRunRules.Config.Store.Utilities[index];
        if (!DeveloperUnlocks && Profile.coins < cost) { Notice("Not enough coins."); return false; }
        if (!DeveloperUnlocks) Profile.coins -= cost;
        if (kind == 0) Profile.wings++; else if (kind == 1) Profile.headStarts++; else Profile.megaHeadStarts++;
        SaveProfile(); return true;
    }
    public bool SelectCharacter(int index)
    {
        if (index < 0 || index >= catalog.characters.Length) return false;
        if (!CharacterOwned(index) && !DeveloperUnlocks)
        {
            int priceIndex = catalog.originalCharacterIndices[index] - 1;
            if (priceIndex < 0 || priceIndex >= TempleRunRules.Config.Store.Characters.Length) { Notice("This extracted variant is available in developer mode."); return false; }
            int cost = TempleRunRules.Config.Store.Characters[priceIndex];
            if (Profile.coins < cost) { Notice("Not enough coins."); return false; }
            Profile.coins -= cost; Profile.ownedCharacters.Add(index);
        }
        Profile.character = index; CreateRunner(); Runner.Reset(); Runner.SetY(BaseHeight); Runner.Hold = true;
        SnapCamera(); SaveProfile(); return true;
    }
    private bool CharacterOwned(int index)
    {
        if (Profile.ownedCharacters.Contains(index)) return true;
        int original = catalog.originalCharacterIndices[index];
        if (original < 0) return false;
        foreach (int owned in Profile.ownedCharacters)
            if (owned >= 0 && owned < catalog.originalCharacterIndices.Length && catalog.originalCharacterIndices[owned] == original) return true;
        return original == 0;
    }
    public bool UseWings()
    {
        if (!IsPlaying || Runner.IsDead || Runner.IsFalling || Runner.HasAngelWings || Runner.AngelWingsRechargeTimeLeft != 0f || (!DeveloperUnlocks && Profile.wings <= 0)) return false;
        if (!DeveloperUnlocks) Profile.wings--;
        Runner.AngelWingsCount = Profile.wings + 1; Runner.StartAngelWings(30f);
        SaveProfile(); Sound("angelWings"); return true;
    }
    public bool UseHeadStart(bool mega)
    {
        if (!IsPlaying || Runner.IsDead || Runner.IsFalling || (!DeveloperUnlocks && (Distance <= 25f || Distance >= 100f))) return false;
        if (!DeveloperUnlocks)
        {
            if (mega ? Profile.megaHeadStarts <= 0 : Profile.headStarts <= 0) return false;
            if (mega) Profile.megaHeadStarts--; else Profile.headStarts--;
        }
        // UseHeadStart{Mega} subtracts distance already traveled and passes
        // isMega=false for both utility types in this APK. StartBoost adds 50.
        Runner.StartBoost((mega ? 2350f : 950f) - Distance, false); SaveProfile(); return true;
    }

    private void CreatePresentation()
    {
        var cameraObject = new GameObject("Temple Run Camera");
        GameCamera = cameraObject.AddComponent<Camera>(); cameraObject.AddComponent<AudioListener>();
        GameCamera.fieldOfView = 60f; GameCamera.nearClipPlane = .3f; GameCamera.farClipPlane = 900f;
        GameCamera.backgroundColor = new Color(.18f, .27f, .23f); GameCamera.clearFlags = CameraClearFlags.SolidColor;
        var sunlight = new GameObject("Sun").AddComponent<Light>(); sunlight.type = LightType.Directional;
        sunlight.transform.rotation = Quaternion.Euler(45, -30, 0); sunlight.intensity = 1.1f;
        RenderSettings.ambientLight = new Color(.75f, .8f, .73f);
        RenderSettings.fog = true; RenderSettings.fogMode = FogMode.Linear; RenderSettings.fogStartDistance = 250f; RenderSettings.fogEndDistance = 700f;
        RenderSettings.fogColor = GameCamera.backgroundColor;
        var waterPrefab = Resources.Load<GameObject>("TempleRunWater");
        if (waterPrefab) waterPlane = Instantiate(waterPrefab);
        music = gameObject.AddComponent<AudioSource>(); music.loop = true; music.volume = .25f;
        music.clip = Resources.Load<AudioClip>("music/BackgroundMusic");
        effects = gameObject.AddComponent<AudioSource>();
        if (Profile.sound && music.clip) music.Play();
    }
    private void CreateRunner()
    {
        Vector3 position = Runner ? Runner.transform.position : new Vector3(0, BaseHeight, -15);
        Quaternion rotation = Runner ? Runner.transform.rotation : Quaternion.identity;
        if (Runner) { Runner.gameObject.SetActive(false); Destroy(Runner.gameObject); }
        var actor = new GameObject("Native-derived CharacterPlayer"); actor.transform.SetPositionAndRotation(position, rotation);
        Runner = actor.AddComponent<CharacterPlayer>();
        int index = Mathf.Clamp(Profile.character, 0, catalog.characters.Length - 1);
        Profile.character = index;
        avatar = Instantiate(catalog.characters[index], actor.transform, false);
        avatar.transform.localPosition = Vector3.zero; avatar.transform.localRotation = Quaternion.identity;
        Runner.CharacterModel = avatar; Runner.AnimateObject = avatar.GetComponentInChildren<Animation>();
        Runner.RenderObject = avatar.GetComponentsInChildren<Renderer>();
        Runner.AttachmentsRenderObjects = Array.Empty<Renderer>();
        foreach (var material in avatarMaterials) if (material) Destroy(material);
        avatarMaterials.Clear();
        if (catalog.characterTextures != null && index < catalog.characterTextures.Length && catalog.characterTextures[index])
        {
            foreach (var renderer in Runner.RenderObject)
            {
                Material[] materials = renderer.sharedMaterials;
                for (int i = 0; i < materials.Length; i++)
                {
                    if (!materials[i]) continue;
                    materials[i] = new Material(materials[i]) { mainTexture = catalog.characterTextures[index] };
                    avatarMaterials.Add(materials[i]);
                }
                renderer.sharedMaterials = materials;
            }
        }
        foreach (var animation in avatar.GetComponentsInChildren<Animation>()) animation.cullingType = AnimationCullingType.AlwaysAnimate;
        foreach (var monster in pursuers) if (monster) Destroy(monster);
        pursuers.Clear();
        for (int i = 0; i < 2; i++)
        {
            var monster = SpawnVisual("prefabs/temple/characters/monster_prefab", null);
            if (!monster) continue;
            monster.transform.position = position - Vector3.forward * 25f;
            var animation = monster.GetComponentInChildren<Animation>();
            if (animation) foreach (AnimationState state in animation) if (state.name.IndexOf("Run", StringComparison.OrdinalIgnoreCase) >= 0) { animation.Play(state.name); break; }
            pursuers.Add(monster);
        }
    }
    private static GameObject SpawnVisual(string resource, Transform parent)
    {
        var prefab = Resources.Load<GameObject>(resource);
        if (!prefab) return null;
        var result = Instantiate(prefab, parent, false);
        result.transform.localPosition = Vector3.zero; result.transform.localRotation = Quaternion.identity;
        return result;
    }
}
