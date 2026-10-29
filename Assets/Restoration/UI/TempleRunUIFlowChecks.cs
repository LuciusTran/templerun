using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEngine;

/// <summary>Exercise original colliders/camera projection/callbacks through the pointer adapter.</summary>
public static class TempleRunUIFlowChecks
{
    [Serializable] private class Check { public string name, detail; public bool passed; }
    [Serializable] private class Report { public bool passed; public string scope = "Original UI collider raycasts and callback dispatch, using scripted pointer events; no Android runtime comparison."; public List<Check> checks = new List<Check>(); public List<string> images = new List<string>(); public int pointerClicks; }
    private static Report report;
    private static TempleRunUIPresenter ui;
    private static string folder;
    private static void Assert(string name, bool passed, string detail = "") { report.checks.Add(new Check { name = name, passed = passed, detail = detail }); if (!passed) Debug.LogError("UI CHECK FAILED: " + name + ": " + detail); }
    private static IEnumerator Image(string name)
    {
        yield return null; yield return null; yield return new WaitForEndOfFrame();
        string path = Path.Combine(folder, name + ".png"); ScreenCapture.CaptureScreenshot(path); report.images.Add(path);
        yield return null; yield return null;
    }
    private static GameObject Callback(string name, Type targetType)
    {
        foreach (var message in ui.GetComponentsInChildren<UIButtonMessage>())
            if (message.functionName == name && message.target && message.target.GetComponent(targetType)) return message.gameObject;
        foreach (var message in ui.GetComponentsInChildren<UIButtonMessage2>())
            if (message.functionName == name && message.target && message.target.GetComponent(targetType)) return message.gameObject;
        return null;
    }
    private static IEnumerator Click(GameObject target, string name)
    {
        Physics.SyncTransforms();
        if (!target) { Assert(name, false, "Missing active source button"); yield break; }
        Vector2 point = ui.ScreenPoint(target); var actual = ui.Hit(point);
        Assert(name + " collider", actual == target, "expected=" + target.name + "; actual=" + (actual ? actual.name : "none") + "; point=" + point);
        ui.PointerDown(point); yield return null; ui.PointerUp(point); yield return null; yield return null;
    }
    public static IEnumerator Run(TempleRunFlow flow, string destination)
    {
        report = new Report(); folder = Path.GetFullPath(destination); Directory.CreateDirectory(folder);
        yield return null; yield return null; ui = TempleRunUIPresenter.Instance;
        Assert("recovered UI loaded", ui && ui.VisiblePanel is MainMenu);
        if (!ui) { Application.Quit(1); yield break; }
        Assert("original widget inventory", ui.GetComponentsInChildren<TempleRunUIWidget>(true).Length == 1173);
        yield return Image("home");
        yield return Click(Callback("Show", typeof(ObjectivesGUI)), "objectives navigation");
        Assert("native objective definitions", ui.VisiblePanel.GetComponentsInChildren<ObjectiveItem>().Length == 56, ui.VisiblePanel.GetComponentsInChildren<ObjectiveItem>().Length.ToString());
        yield return Image("objectives");
        yield return Click(Callback("MainMenuClicked", typeof(ObjectivesGUI)), "objectives home");
        yield return Click(Callback("Show", typeof(StatsGUI)), "stats navigation");
        Assert("stats panel", ui.VisiblePanel is StatsGUI); yield return Image("stats");
        yield return Click(Callback("BackClicked", typeof(StatsGUI)), "stats back");
        yield return Click(Callback("Show", typeof(VCGUI)), "shop navigation");
        Assert("offline shop panel", ui.VisiblePanel is VCGUI); yield return Image("shop");
        yield return Click(Callback("BackButtonClicked", typeof(VCGUI)), "shop back");
        yield return Click(Callback("Show", typeof(OptionsGUI)), "options navigation");
        Assert("options panel", flow.CurrentPage == TempleRunFlow.Page.Settings); yield return Image("options");
        var music = ui.VisiblePanel.GetComponentsInChildren<UISlider>().First(s => s.functionName == "OnMusicVolumeSlider");
        Vector2 sliderPoint = ui.ScreenPoint(music.gameObject);
        ui.PointerDown(sliderPoint); ui.PointerMove(sliderPoint); ui.PointerUp(sliderPoint);
        Assert("music slider binds local profile", flow.Profile.musicVolume > .4f && flow.Profile.musicVolume < .6f, flow.Profile.musicVolume.ToString());
        yield return Click(Callback("BackButtonClicked", typeof(OptionsGUI)), "options back");
        Assert("options returns home", flow.CurrentPage == TempleRunFlow.Page.Home);
        yield return Click(Callback("Show", typeof(StoreGUI)), "upgrades navigation");
        Assert("store panel", flow.CurrentPage == TempleRunFlow.Page.Store); yield return Image("store");
        flow.Profile.coins = 100000;
        var upgrade = ui.VisiblePanel.GetComponentsInChildren<StoreItem>().First(i => (int)i.Type == 7);
        int before = flow.Profile.upgrades[0]; yield return Click(upgrade.gameObject, "original upgrade row");
        Assert("upgrade purchase", flow.Profile.upgrades[0] == before + 1);
        yield return Click(Callback("BackClicked", typeof(StoreGUI)), "store back");
        yield return Click(Callback("Show", typeof(CharacterSelectGUI)), "characters navigation");
        Assert("character panel", flow.CurrentPage == TempleRunFlow.Page.Characters);
        Assert("all native character descriptions bound", ui.VisiblePanel.GetComponentsInChildren<StoreItem>().All(item => item.DescriptionLabel && !item.DescriptionLabel.text.Contains("N/A")));
        yield return Image("characters");
        var coinLabel = ((CharacterSelectGUI)ui.VisiblePanel).CoinLabel;
        var coinOffset = ui.VisiblePanel.GetComponentsInChildren<OffsetOnWidth>().First(o => o.Label == coinLabel && !o.OffsetToRight);
        var coinIcon = coinOffset.GetComponentInChildren<TempleRunUIWidget>();
        Assert("currency icon clears wider amount label", coinIcon.Output.bounds.max.x < coinLabel.GetComponent<TempleRunUIWidget>().Output.bounds.min.x);
        var character = ui.VisiblePanel.GetComponentsInChildren<StoreItem>().First(i => (int)i.Type == 16);
        yield return Click(character.gameObject, "original character row");
        Assert("character selected", Resources.Load<TempleRunCatalog>("TempleRunCatalog").originalCharacterIndices[flow.Profile.character] == 1);
        var selector = ui.VisiblePanel as CharacterSelectGUI; var clip = selector.ScrollViewPanel.GetComponent<TempleRunUIClip>();
        Vector2 dragStart = ui.ScreenPoint(character.gameObject); float oldY = selector.ScrollContent.localPosition.y;
        ui.PointerDown(dragStart); ui.PointerMove(dragStart + Vector2.up * 150f); ui.PointerUp(dragStart + Vector2.up * 150f);
        Assert("character list scrolls", selector.ScrollContent.localPosition.y > oldY);
        yield return Image("characters-scrolled");
        yield return Click(Callback("BackClicked", typeof(CharacterSelectGUI)), "characters back");
        yield return Click(Callback("OnPlayClicked", typeof(MainMenu)), "play idol");
        Assert("play starts runner", flow.IsPlaying); yield return new WaitForSeconds(.3f); yield return Image("hud");
        yield return Click(Callback("PauseClicked", typeof(GameGUI)), "pause button");
        Assert("pause freezes game", flow.CurrentPage == TempleRunFlow.Page.Paused && Time.timeScale == 0f); yield return Image("pause");
        var pause = ui.VisiblePanel as PauseMenu;
        Assert("pause score is live", pause && pause.ScoreLabel.text == flow.Runner.Score.ToString());
        yield return Click(Callback("ResumeClicked", typeof(PauseMenu)), "resume button");
        Assert("resume runs game", flow.IsPlaying && Time.timeScale == 1f);
        flow.NotifyDeath(CharacterPlayer.DeathTypes.kDeathTypeFall); yield return null; yield return null;
        Assert("death opens end screen", ui.VisiblePanel is EndGameUI);
        var end = ui.VisiblePanel as EndGameUI;
        Assert("native death catalog parsed", end && end.DeathDetails != null && end.DeathDetails.Count == 10);
        Assert("death illustration selected", end && end.DeathIllustration.GetComponent<TempleRunUIWidget>().texture);
        Assert("death caption localized", end && !end.DeathCaption.text.StartsWith("DeathCaption")); yield return Image("end");
        yield return Click(Callback("StoreClick", typeof(EndGameUI)), "end upgrades button");
        Assert("end to store", ui.VisiblePanel is StoreGUI);
        yield return Click(Callback("BackClicked", typeof(StoreGUI)), "store returns to end");
        Assert("return panel retained", ui.VisiblePanel is EndGameUI);
        yield return Click(Callback("RunAgainClicked", typeof(EndGameUI)), "run again");
        Assert("retry starts fresh", flow.IsPlaying);
        yield return Click(Callback("PauseClicked", typeof(GameGUI)), "pause for confirmation");
        yield return Click(Callback("MainMenuClicked", typeof(PauseMenu)), "main menu confirmation"); yield return Image("confirmation");
        var alert = ui.GetComponentInChildren<AlertView>(); Assert("original confirmation panel", alert);
        Assert("confirmation text enabled", alert && alert.TitleText.enabled && alert.DialogText.enabled && alert.TitleText.text == "Exit Game");
        Assert("social prompt hidden", alert && (!alert.TwitterSprite || !alert.TwitterSprite.gameObject.activeSelf));
        yield return Click(alert ? alert.RightButton : null, "confirm return home");
        Assert("confirmed home", flow.CurrentPage == TempleRunFlow.Page.Home && Time.timeScale == 1f);
        yield return Click(Callback("Show", typeof(OptionsGUI)), "options for reset");
        yield return Click(Callback("ResetProgressButtonClicked", typeof(OptionsGUI)), "reset confirmation");
        alert = ui.GetComponentInChildren<AlertView>();
        yield return Click(alert ? alert.RightButton : null, "confirm local reset");
        Assert("confirmed reset clears local progression", flow.Profile.coins == 0 && flow.Profile.character == 0 && flow.Profile.upgrades.All(level => level == 0) && flow.CurrentPage == TempleRunFlow.Page.Home);
        report.pointerClicks = ui.DispatchedClicks; report.passed = report.checks.All(c => c.passed);
        File.WriteAllText(Path.Combine(folder, "ui-flow.json"), JsonUtility.ToJson(report, true));
        Debug.Log("TEMPLE_UI_FLOW_RESULT: " + report.passed + "; checks=" + report.checks.Count + "; pointerClicks=" + report.pointerClicks);
        Application.Quit(report.passed ? 0 : 1);
    }
}
