using System;
using UnityEngine;

public partial class TempleRunFlow
{
    private void Start()
    {
        var prefab = Resources.Load<GameObject>("TempleRunOriginalUI");
        if (!prefab) throw new InvalidOperationException("Missing recovered UI. Run Temple Run > Prepare Project.");
        var originalUI = Instantiate(prefab); originalUI.SetActive(true);
    }
    public void OpenRecoveredPanel(Page page) { CurrentPage = page; }
    public bool IsRecoveredCharacterOwned(int index) => CharacterOwned(index);
    private void RecoveredHostShortcuts()
    {
        if (CurrentPage == Page.Home && Input.GetKeyDown(KeyCode.C)) BeginRun(true);
        if (CurrentPage == Page.Finished && Input.GetKeyDown(KeyCode.R)) Revive();
        if (CurrentPage != Page.Home && CurrentPage != Page.Settings) return;
        int biome = Input.GetKeyDown(KeyCode.Alpha1) ? 1 : Input.GetKeyDown(KeyCode.Alpha2) ? 2 : Input.GetKeyDown(KeyCode.Alpha3) ? 3 : 0;
        if (biome == 0) return;
        Profile.biome = biome; Profile.hasRun = false; Profile.run = null; SaveProfile();
        BuildTrack(Environment.TickCount); Runner.SetY(BaseHeight); SnapCamera();
    }
    public void ApplyRecoveredSetting(string name, float value, bool save)
    {
        if (name == "OnMusicVolumeSlider") { Profile.sound = true; Profile.musicVolume = value; music.volume = .25f * value; if (value > 0f && !music.isPlaying && music.clip) music.Play(); }
        else if (name == "OnSoundVolumeSlider") { Profile.sound = true; Profile.effectsVolume = value; }
        else if (name == "OnSensitivitySlider") Profile.sensitivity = value;
        if (save) SaveProfile();
    }
    public void ResetRecoveredProfile()
    {
        Profile = new ProfileData(); SaveProfile(); music.volume = .25f; if (music.clip) music.Play();
        BuildTrack(Environment.TickCount); CreateRunner(); Runner.Reset(); Runner.SetY(BaseHeight); Runner.Hold = true; SnapCamera();
    }
    public void SetRecoveredSound(bool enabled)
    {
        Profile.sound = enabled; if (enabled) music.Play(); else music.Stop(); SaveProfile();
    }
}
