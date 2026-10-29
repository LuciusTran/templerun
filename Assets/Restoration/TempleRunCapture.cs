using System;
using System.Collections;
using System.IO;
using UnityEngine;
using UnityEngine.Rendering;

/// <summary>Opt-in graphical scene capture with a separate temporary player profile.</summary>
public static class TempleRunCapture
{
    [Serializable] private class Report
    {
        public bool passed;
        public string unityVersion, graphicsDevice;
        public int width, height, characterRenderers, characterRenderersInFrustum, characterRenderersWithTextures;
        public string uiPanel, uiScore, uiDistance; public int uiWidgets;
        public string[] images;
    }
    private static IEnumerator Image(string path)
    {
        yield return null; yield return null;
        yield return new WaitForEndOfFrame();
        ScreenCapture.CaptureScreenshot(path);
        for (int i = 0; i < 6; i++) yield return new WaitForEndOfFrame();
    }
    public static IEnumerator Run(TempleRunFlow flow, string prefix)
    {
        if (SystemInfo.graphicsDeviceType == GraphicsDeviceType.Null)
        {
            Debug.LogError("Temple Run capture requires graphics; omit -nographics."); Application.Quit(1); yield break;
        }
        prefix = Path.GetFullPath(prefix); Directory.CreateDirectory(Path.GetDirectoryName(prefix));
        string[] paths = { prefix + "-home.png", prefix + "-run.png", prefix + "-pause.png", prefix + "-jump.png" };
        yield return new WaitForSecondsRealtime(.8f);
        yield return Image(paths[0]);
        flow.BeginRun(); yield return new WaitForSeconds(.6f);
        yield return Image(paths[1]);
        flow.Pause(); yield return Image(paths[2]);
        flow.Resume(); flow.RequestJump(); yield return new WaitForSeconds(.2f);
        yield return Image(paths[3]);
        var report = new Report { passed = true, unityVersion = Application.unityVersion,
            graphicsDevice = SystemInfo.graphicsDeviceName, width = Screen.width, height = Screen.height,
            characterRenderers = flow.Runner.RenderObject.Length, images = paths };
        var ui = TempleRunUIPresenter.Instance;
        report.uiPanel = ui && ui.VisiblePanel ? ui.VisiblePanel.GetType().Name : "missing";
        report.uiWidgets = ui ? ui.GetComponentsInChildren<TempleRunUIWidget>().Length : 0;
        var pause = ui ? ui.GetComponentInChildren<PauseMenu>(true) : null;
        report.uiScore = pause && pause.ScoreLabel ? pause.ScoreLabel.text : "missing";
        report.uiDistance = pause && pause.DistanceLabel ? pause.DistanceLabel.text : "missing";
        Plane[] frustum = GeometryUtility.CalculateFrustumPlanes(flow.GameCamera);
        foreach (var renderer in flow.Runner.RenderObject)
        {
            if (GeometryUtility.TestPlanesAABB(frustum, renderer.bounds)) report.characterRenderersInFrustum++;
            foreach (var material in renderer.sharedMaterials) if (material && material.mainTexture) { report.characterRenderersWithTextures++; break; }
        }
        foreach (string path in paths) if (!File.Exists(path) || new FileInfo(path).Length == 0) report.passed = false;
        report.passed &= report.characterRenderersInFrustum > 0 && report.characterRenderersWithTextures > 0;
        File.WriteAllText(prefix + "-capture.json", JsonUtility.ToJson(report, true));
        Debug.Log("TEMPLE_CAPTURE_RESULT: " + JsonUtility.ToJson(report));
        Application.Quit(report.passed ? 0 : 1);
    }
}
