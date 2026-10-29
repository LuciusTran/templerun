using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

/// <summary>Bind original serialized panels to local runner/profile services.</summary>
public sealed partial class TempleRunUIPresenter : MonoBehaviour
{
    public static TempleRunUIPresenter Instance { get; private set; }
    public BasePanel VisiblePanel { get; private set; }
    private TempleRunFlow flow;
    private TempleRunCatalog catalog;
    private BasePanel[] panels;
    private Camera[] cameras;
    private GameObject mainMenuRows;
    private TempleRunFlow.Page previousPage = (TempleRunFlow.Page)(-1);
    private readonly Dictionary<string, string> strings = new Dictionary<string, string>();
    private GameGUI hud;
    private AlertView alert;
    private Action leftAction, rightAction;
    private bool showingAlert;

    private void Awake()
    {
        Instance = this; flow = TempleRunFlow.Instance;
        catalog = Resources.Load<TempleRunCatalog>("TempleRunCatalog");
        var english = JsonUtility.FromJson<TempleRunUIStrings>(Resources.Load<TextAsset>("TempleRunUIEnglish").text);
        foreach (var entry in english.entries) strings[entry.key] = entry.value;
        panels = GetComponentsInChildren<BasePanel>(true); cameras = GetComponentsInChildren<Camera>(true);
        hud = GetComponentInChildren<GameGUI>(true); alert = GetComponentInChildren<AlertView>(true);
        mainMenuRows = GetComponentInChildren<MainMenu>(true).MainMenuRowNew;
        foreach (Transform child in transform) if (child.GetComponent<UIPanel>()) child.gameObject.SetActive(false);
        foreach (var camera in cameras) { camera.enabled = true; camera.depth = camera.orthographic ? 10f : 11f; camera.clearFlags = CameraClearFlags.Depth; }
        flow.GameCamera.cullingMask &= ~((1 << 8) | (1 << 10));
        foreach (var panel in panels)
        {
            if (panel is CharacterSelectGUI characters) SetupScroll(characters.ScrollViewPanel, characters.ScrollContent);
            if (panel is StoreGUI store)
            {
                SetupScroll(store.ScrollViewPanel, store.ScrollContent);
                foreach (var disabled in store.Disabled) SetActive(disabled, false);
                SetActive(store.RewardedAdCoinsObject, false); SetActive(store.RewardedAdWingsObject, false);
            }
            if (panel is StatsGUI stats) SetupScroll(stats.ScrollViewPanel, stats.ScrollContent);
        }
        // Retain platform controls in source data without presenting disconnected services as working.
        foreach (var ad in GetComponentsInChildren<UINoAdsButton>(true)) ad.gameObject.SetActive(false);
        foreach (var panel in panels)
        {
            if (panel is MainMenu menu) { SetActive(menu.MainMenuRowOld, false); SetActive(menu.SaveMeDebugPanel, false); SetActive(menu.DebugBuildObject, false); SetActive(menu.GlobalChallengesButton, false); SetActive(menu.GlobalChallengesCTA, false); SetActive(menu.GlobalChallengesCTA_InputBlocker, false); }
            if (panel is PauseMenu pause) { SetActive(pause.DebugButton, false); SetActive(pause.DebugPanel, false); if (pause.NextObjectivePlate) SetActive(pause.NextObjectivePlate.gameObject, false); if (pause.NextObjectiveText) SetActive(pause.NextObjectiveText.gameObject, false); }
            if (panel is OptionsGUI options) { SetActive(options.ConsentSection, false); SetActive(options.PrivacyButton, false); SetActive(options.FriendMarkersToggle, false);
                var tutorial = options.GetComponentsInChildren<UISavedOption>(true).FirstOrDefault(o => o.keyName == "TR Tutorial"); if (tutorial) SetActive(tutorial.gameObject, false);
                var language = options.GetComponentsInChildren<UIButtonMessage2>(true).FirstOrDefault(m => m.EnableComponent == "LanguagesGUI"); if (language) foreach (var collider in language.GetComponents<Collider>()) collider.enabled = false;
                SetActive(options.transform.Find("Anchor Top/Offset/Header/Hash Label")?.gameObject, false); }
            if (panel is EndGameUI end)
            {
                SetActive(end.FreeCoinsButton, false); SetActive(end.TweetButton, false); SetActive(end.GCButton, false);
                SetActive(end.gcProgressObject, false);
                if (end.DoubleCoinsButton) end.DoubleCoinsButton.gameObject.SetActive(false);
            }
        }
        SetActive(hud.transform.Find("Top/Tutotiral Message")?.gameObject, false);
        SetActive(hud.transform.Find("Top/Message Board")?.gameObject, false);
        SetActive(hud.transform.Find("Count Down Timer")?.gameObject, false);
        SetActive(hud.transform.Find("Top Right/Angel Wings")?.gameObject, false);
        if (hud.TotemUI)
        {
            var totem = hud.TotemUI;
            foreach (var emblem in new[] { totem.TotemEmblem1, totem.TotemEmblem2, totem.TotemEmblem3, totem.TotemEmblem4, totem.FallingTotemEmblem1, totem.FallingTotemEmblem2, totem.FallingTotemEmblem3, totem.FallingTotemEmblem4 }) if (emblem) emblem.enabled = false;
            SetActive(totem.BonusObject, false);
        }
        ShowForPage();
    }
    private static void SetActive(GameObject target, bool active) { if (target) target.SetActive(active); }
    private void SetupScroll(UIPanel panel, Transform content)
    {
        if (!panel || !content) return;
        var clip = panel.GetComponent<TempleRunUIClip>(); if (!clip) return;
        clip.scrolls = true; clip.content = content; clip.originalContentPosition = content.localPosition;
        float minimum = 0f;
        foreach (var widget in content.GetComponentsInChildren<TempleRunUIWidget>(true))
            minimum = Mathf.Min(minimum, panel.transform.InverseTransformPoint(widget.transform.position).y - Mathf.Abs(widget.transform.lossyScale.y));
        clip.maximumScroll = Mathf.Max(0f, clip.rectangle.yMin - minimum);
    }
    private T Panel<T>() where T : BasePanel => panels.OfType<T>().FirstOrDefault();
    public void ShowPanel(BasePanel panel)
    {
        if (!panel) return;
        foreach (var other in panels) if (!(other is AlertView)) other.gameObject.SetActive(other == panel);
        SetActive(mainMenuRows, panel is MainMenu); VisiblePanel = panel;
        var page = panel is MainMenu ? TempleRunFlow.Page.Home : panel is GameGUI ? TempleRunFlow.Page.Running :
            panel is PauseMenu ? TempleRunFlow.Page.Paused : panel is EndGameUI ? TempleRunFlow.Page.Finished :
            panel is StoreGUI ? TempleRunFlow.Page.Store : panel is CharacterSelectGUI ? TempleRunFlow.Page.Characters :
            panel is OptionsGUI ? TempleRunFlow.Page.Settings : panel is StatsGUI ? TempleRunFlow.Page.Stats :
            panel is ObjectivesGUI ? TempleRunFlow.Page.Objectives : TempleRunFlow.Page.Coins;
        flow.OpenRecoveredPanel(page); previousPage = page;
        foreach (var anchor in panel.GetComponentsInChildren<UIAnchor>(true)) anchor.AnchorItem();
        foreach (var item in panel.GetComponentsInChildren<StoreItem>(true)) item.Configure();
        if (panel is OptionsGUI)
        {
            foreach (var slider in panel.GetComponentsInChildren<UISlider>(true))
            {
                slider.sliderValue = slider.functionName == "OnMusicVolumeSlider" ? flow.Profile.musicVolume : slider.functionName == "OnSoundVolumeSlider" ? flow.Profile.effectsVolume : flow.Profile.sensitivity;
                var filled = slider.foreground ? slider.foreground.GetComponent<UIFilledSprite>() : null; if (filled) filled.fillAmount = slider.sliderValue;
            }
        }
        if (panel is ObjectivesGUI objectives) PopulateObjectives(objectives);
        if (panel is EndGameUI ending) AssignDeathDetails(ending);
        if (panel is VCGUI coins)
        {
            SetActive(coins.FreeOffersSection, false); SetActive(coins.Status, true); if (coins.MessageLabel) coins.MessageLabel.gameObject.SetActive(true);
            Label(coins.MessageLabel, "Purchases are unavailable in this local build.");
            Label(coins.ComingSoon, ""); Label(coins.CoinsLabel, flow.Profile.coins);
        }
        RefreshNumbers();
    }
    public void HidePanel(BasePanel panel) { panel.gameObject.SetActive(false); if (panel is MainMenu) SetActive(mainMenuRows, false); }
    public void Home() { CloseAlert(); flow.GoHome(); ShowPanel(Panel<MainMenu>()); }
    private void ShowForPage()
    {
        BasePanel panel = flow.CurrentPage == TempleRunFlow.Page.Home ? Panel<MainMenu>() :
            flow.CurrentPage == TempleRunFlow.Page.Running ? Panel<GameGUI>() :
            flow.CurrentPage == TempleRunFlow.Page.Paused ? Panel<PauseMenu>() :
            flow.CurrentPage == TempleRunFlow.Page.Finished ? Panel<EndGameUI>() :
            flow.CurrentPage == TempleRunFlow.Page.Store ? Panel<StoreGUI>() :
            flow.CurrentPage == TempleRunFlow.Page.Characters ? Panel<CharacterSelectGUI>() :
            flow.CurrentPage == TempleRunFlow.Page.Settings ? Panel<OptionsGUI>() :
            flow.CurrentPage == TempleRunFlow.Page.Stats ? Panel<StatsGUI>() :
            flow.CurrentPage == TempleRunFlow.Page.Objectives ? Panel<ObjectivesGUI>() : Panel<VCGUI>();
        CloseAlert(); ShowPanel(panel);
    }
    private static void Label(UILabel label, object value) { if (label) label.text = Convert.ToString(value, System.Globalization.CultureInfo.InvariantCulture); }
    private void RefreshNumbers()
    {
        if (hud)
        {
            hud.SetScore(flow.Runner.Score); hud.SetCoins(flow.Runner.CoinCountTotal);
            SetActive(hud.transform.Find("Top Right/Angel Wings")?.gameObject, flow.Runner.HasAngelWings);
            if (hud.TotemUI)
            {
                // GameGUITotem.Update and SetBonusLevel native visibility/progress branches.
                hud.TotemUI.UpdateProgress(flow.Runner.CoinCountForBonus / (float)flow.Runner.CoinCountForBonusThreshold);
                var emblems = new[] { hud.TotemUI.TotemEmblem1, hud.TotemUI.TotemEmblem2, hud.TotemUI.TotemEmblem3, hud.TotemUI.TotemEmblem4 };
                for (int i = 0; i < emblems.Length; i++) if (emblems[i]) emblems[i].enabled = flow.Runner.BonusLevel > i + 1;
            }
            foreach (var button in hud.GetComponentsInChildren<HeadStartButton>(true))
                button.gameObject.SetActive(flow.Distance > 25f && flow.Distance < 100f && (button.MegaHeadStart ? flow.Profile.megaHeadStarts > 0 : flow.Profile.headStarts > 0));
            foreach (var button in hud.GetComponentsInChildren<PermaWingButton>(true)) button.gameObject.SetActive(false);
        }
        if (VisiblePanel is PauseMenu pause)
        {
            Label(pause.ScoreLabel, flow.Runner.Score); Label(pause.CoinsLabel, flow.Runner.CoinCountTotal);
            Label(pause.DistanceLabel, (int)flow.Distance); Label(pause.MultiplierLabel, flow.Runner.ScoreMultiplier);
        }
        if (VisiblePanel is EndGameUI end)
        {
            Label(end.ScoreLabel, flow.Runner.Score); Label(end.CoinsLabel, flow.Runner.CoinCountTotal);
            Label(end.DistanceLabel, (int)flow.Distance); Label(end.MultiplierLabel, flow.Runner.ScoreMultiplier);
        }
        if (VisiblePanel is StoreGUI store) Label(store.CoinLabel, flow.Profile.coins);
        if (VisiblePanel is CharacterSelectGUI characters) Label(characters.CoinLabel, flow.Profile.coins);
        if (VisiblePanel is StatsGUI stats)
        {
            Label(stats.HighestScore, flow.Profile.bestScore); Label(stats.LongestRun, (int)flow.Profile.bestDistance);
            Label(stats.Coins, flow.Profile.coins); Label(stats.Multiplier, flow.Runner.ScoreMultiplier);
            foreach (var label in new[] { stats.MostCoins, stats.SaveMeHighestScore, stats.SaveMeLongestRun, stats.SaveMeMostCoins, stats.TotalCoins, stats.TotalDistance, stats.TotalGames }) Label(label, "--");
            Label(stats.VersionInfo, "1.43.0");
        }
    }
    private void LateUpdate()
    {
        if (!flow) return;
        if (previousPage != flow.CurrentPage) ShowForPage();
        RefreshNumbers();
    }
    public string S(string key) => strings.TryGetValue(key, out var value) ? value : key;
    public void ConfirmHome() => Confirm(S("ExitGameTitle"), S("ExitGameDescription"), Home);
    public void ConfirmRestart() => Confirm(S("NewGameTitle"), S("NewGameDescription"), () => flow.BeginRun());
    public void Confirm(string title, string message, Action yes)
    {
        if (!alert) throw new InvalidOperationException("Original alert panel is missing.");
        alert.gameObject.SetActive(true); showingAlert = true;
        SetActive(alert.TextAlertObject, true); SetActive(alert.TextAlertLargeObject, false); SetActive(alert.ImagePopupAlertObject, false); SetActive(alert.DLImagePopupAlertObject, false);
        SetActive(alert.LeftButton, true); SetActive(alert.RightButton, true); SetActive(alert.CenterButton, false); SetActive(alert.InputBox, false); if (alert.TwitterSprite) alert.TwitterSprite.gameObject.SetActive(false);
        if (alert.TitleText) alert.TitleText.enabled = true; if (alert.DialogText) alert.DialogText.enabled = true;
        Label(alert.TitleText, title); Label(alert.DialogText, message); Label(alert.LeftButtonText, S("No")); Label(alert.RightButtonText, S("Yes"));
        leftAction = null; rightAction = yes;
        foreach (var anchor in alert.GetComponentsInChildren<UIAnchor>(true)) anchor.AnchorItem();
    }
    private void AlertClick(GameObject target)
    {
        if (target == alert.LeftButton || target.transform.IsChildOf(alert.LeftButton.transform)) { var action = leftAction; CloseAlert(); action?.Invoke(); }
        else if (target == alert.RightButton || target.transform.IsChildOf(alert.RightButton.transform)) { var action = rightAction; CloseAlert(); action?.Invoke(); }
    }
    private void CloseAlert() { showingAlert = false; if (alert) alert.gameObject.SetActive(false); leftAction = rightAction = null; }
    public void CheckboxChanged(UICheckbox checkbox)
    {
        if (checkbox.name.IndexOf("sound", StringComparison.OrdinalIgnoreCase) >= 0 || checkbox.functionName.IndexOf("sound", StringComparison.OrdinalIgnoreCase) >= 0)
            flow.SetRecoveredSound(checkbox.isChecked);
    }
    private void OnDestroy() { if (Instance == this) Instance = null; }
}
