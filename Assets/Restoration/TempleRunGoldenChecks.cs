using System;
using UnityEngine;

/// <summary>Compare C# behavior against outputs captured from original ARM64 execution.</summary>
public static class TempleRunGoldenChecks
{
    [Serializable] private class Vector { public string name; public int[] before, after; }
    [Serializable] private class Report { public bool passed; public int caseCount; public Vector[] vectors; }

    public static int Run()
    {
        var source = Resources.Load<TextAsset>("TempleRunNativeGolden");
        if (!source) throw new InvalidOperationException("Missing native golden vectors.");
        var report = JsonUtility.FromJson<Report>(source.text);
        if (!report.passed || report.caseCount != report.vectors.Length) throw new InvalidOperationException("Invalid native golden report.");
        var obj = new GameObject("Native golden checks");
        try
        {
            var player = obj.AddComponent<CharacterPlayer>();
            var path = obj.AddComponent<PathElement>();
            var bonus = obj.AddComponent<BonusItem>();
            foreach (var vector in report.vectors)
            {
                int[] a = vector.before, actual;
                switch (vector.name)
                {
                    case "AddScore":
                        player.Score = a[0]; player.ScoreMultiplier = a[1]; player.AddScore(a[2]);
                        actual = new[] { player.Score }; break;
                    case "AddCoins":
                        player.CoinCountTotal = a[0]; player.CoinCountForBonus = a[1]; player.CoinCountForBonusThreshold = a[2];
                        player.BonusLevel = a[3]; player.BonusLevelMax = a[4]; player.ScoreMultiplier = a[5]; player.Score = a[6];
                        player.AddCoins(a[7]);
                        actual = new[] { player.CoinCountTotal, player.CoinCountForBonus, player.BonusLevel, player.BonusLevelMax, player.Score }; break;
                    case "GetMaxRunVelocity":
                        player.MaxRunVelocity = a[0]; player.HasBoost = a[1] != 0; player.IsMegaBoost = a[2] != 0;
                        actual = new[] { (int)player.GetMaxRunVelocity() }; break;
                    case "SlamDown":
                        player.IsJumping = a[0] != 0; player.IsFalling = a[1] != 0; player.Velocity = new Vector3(0, a[2], 0);
                        bool slammed = player.SlamDown(); actual = new[] { slammed ? 1 : 0, (int)player.Velocity.y }; break;
                    case "IsACoin":
                        bonus.BonusType = (BonusItem.BonusItemType)a[0]; actual = new[] { bonus.IsACoin() ? 1 : 0 }; break;
                    default:
                        path.Type = (PathElement.PathType)a[0];
                        bool result;
                        switch (vector.name)
                        {
                            case "IsPathTypeHole": result = PathElement.IsPathTypeHole(path.Type); break;
                            case "IsPathTypeLevelChange": result = PathElement.IsPathTypeLevelChange(path.Type); break;
                            case "IsPathTypeNarrow": result = PathElement.IsPathTypeNarrow(path.Type); break;
                            case "IsPathTypeObstacle": result = PathElement.IsPathTypeObstacle(path.Type); break;
                            case "IsPathTypeTurn": result = PathElement.IsPathTypeTurn(path.Type); break;
                            case "IsPathTypeStraightVert": result = PathElement.IsPathTypeStraightVert(path.Type); break;
                            case "IsPathTypeStraightHorz": result = PathElement.IsPathTypeStraightHorz(path.Type); break;
                            case "CanTurnLeft": result = path.CanTurnLeft((PathElement.PathDirection)a[1]); break;
                            case "CanTurnRight": result = path.CanTurnRight((PathElement.PathDirection)a[1]); break;
                            default: throw new InvalidOperationException("Unknown native vector: " + vector.name);
                        }
                        actual = new[] { result ? 1 : 0 }; break;
                }
                if (actual.Length != vector.after.Length) throw new InvalidOperationException("Native vector shape mismatch: " + vector.name);
                for (int i = 0; i < actual.Length; i++)
                    if (actual[i] != vector.after[i]) throw new InvalidOperationException("Native/C# mismatch: " + vector.name + " [" + string.Join(",", a) + "]");
            }
            return report.caseCount;
        }
        finally { UnityEngine.Object.DestroyImmediate(obj); }
    }
}
