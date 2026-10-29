using System;
using System.IO;
using UnityEditor;
using UnityEngine;

/// <summary>Editor verification of native-derived rules and extracted region geometry.</summary>
public static class TempleRunCoreVerification
{
    [Serializable] private class Report
    {
        public bool passed;
        public string unityVersion;
        public int nativeGoldenCases;
        public bool originalGroundRegionVerified;
    }

    public static void Run()
    {
        int cases = TempleRunGoldenChecks.Run();
        var source = Resources.Load<GameObject>("prefabs/temple/walls/templeStraightVert_prefab");
        if (!source) throw new InvalidOperationException("Missing original temple road prefab.");
        var road = UnityEngine.Object.Instantiate(source, Vector3.zero, Quaternion.identity);
        try
        {
            var region = road.GetComponentInChildren<Region2D>();
            if (!region || !region.IsPointInside(Vector3.zero) || region.IsPointInside(new Vector3(100, 0, 0)))
                throw new InvalidOperationException("Original region containment failed.");
            road.transform.SetPositionAndRotation(new Vector3(120, 0, 60), Quaternion.Euler(0, 90, 0));
            if (!region.IsPointInside(new Vector3(120, 0, 60)) || region.IsPointInside(Vector3.zero))
                throw new InvalidOperationException("Transformed region containment failed.");
        }
        finally { UnityEngine.Object.DestroyImmediate(road); }
        var report = new Report { passed = true, unityVersion = Application.unityVersion, nativeGoldenCases = cases, originalGroundRegionVerified = true };
        Directory.CreateDirectory("Evidence");
        File.WriteAllText("Evidence/unity-native-core-verification.json", JsonUtility.ToJson(report, true));
        Debug.Log("TEMPLE_RUN_NATIVE_CORE_PASS: " + cases + " native golden cases and original transformed ground region.");
    }
}
