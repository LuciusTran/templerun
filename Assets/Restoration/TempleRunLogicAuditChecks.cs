using System;
using UnityEngine;

/// <summary>Regression cases reviewed against native frame/control/collision branches.</summary>
public static class TempleRunLogicAuditChecks
{
    public static int Run()
    {
        int count = 0;
        Action<bool, string> check = (passed, name) => {
            if (!passed) throw new InvalidOperationException("Native logic regression: " + name);
            count++; Debug.Log("TEMPLE_LOGIC_AUDIT_PASS: " + name);
        };
        var obj = new GameObject("Native frame audit");
        try
        {
            var player = obj.AddComponent<CharacterPlayer>();
            Action reset = () => {
                player.transform.SetPositionAndRotation(Vector3.zero, Quaternion.identity);
                player.Reset(); player.Hold = false; player.StumbleKillTimer = 11f;
            };
            // CharacterPlayer.Update landing branches: the two-unit threshold
            // is strict, and a falling actor more than six units below misses.
            foreach (float height in new[] { -6.1f, -6f, -3f, -2f, 0f })
            {
                reset(); player.IsFalling = true; player.SetY(height);
                player.Velocity = new Vector3(0f, .25f, 100f);
                player.RecoveredStep(.001f, p => 0f);
                check(player.IsOnGround == (height >= -6f) && player.DidStumble == (height >= -6f && height < -2f),
                    "Falling landing and stumble threshold at Y=" + height);
            }
            reset(); player.SetGroundHeight(3f); player.SetGroundHeight(3f);
            player.Velocity = new Vector3(0f, .25f, 100f);
            player.RecoveredStep(.001f, p => 3f);
            check(player.DidStumble && player.IsOnGround && player.transform.position.y == 3f,
                "Raised-ground flag survives repeated height queries until landing");
            reset(); player.IsFalling = true; player.IsGroundHeightChangeHigher = true; player.SetY(-3f);
            player.Velocity = new Vector3(0f, .25f, 100f); player.RecoveredStep(.001f, p => 0f);
            check(player.IsDead && player.DeathType == CharacterPlayer.DeathTypes.kDeathTypeEaten,
                "Independent falling and raised-ground branches can stumble twice in one landing frame");
            reset(); player.IsFalling = true; player.SetY(-3f); player.StartInvcibility(4f);
            player.Velocity = new Vector3(0f, .25f, 100f); player.RecoveredStep(.001f, p => 0f);
            check(player.IsOnGround && !player.DidStumble, "Invincibility suppresses landing stumble");
            reset(); player.SetY(-1f); player.RecoveredStep(.02f, p => null);
            check(player.IsFalling && player.TimeSinceFallStart == 0f, "First falling frame resets its elapsed timer to zero");
            player.RecoveredStep(.02f, p => null);
            check(Mathf.Abs(player.TimeSinceFallStart - .02f) < .00001f, "Later falling frames accumulate elapsed time");
            reset(); player.JumpAfterDelay = player.StumbleAfterDelay = true; player.JumpDelay = player.StumbleDelay = .01f;
            player.RecoveredStep(.02f, p => 0f);
            check(player.IsStumbling && !player.IsJumping && player.JumpAfterDelay,
                "Simultaneous delayed actions process stumble before the guarded jump");
            reset(); player.StartAngelWings(30f, true); player.AngelWingsRechargeTimeLeft = 9f;
            player.RecoveredStep(.1f, p => 0f);
            check(player.AngelWingsTimeLeft == 30f && player.AngelWingsRechargeTimeLeft == 9f,
                "Permanent wings suspend duration and recharge timers");
            reset(); player.StartAngelWings(30f); player.RecoveredStep(.1f, p => 0f);
            check(Mathf.Abs(player.AngelWingsTimeLeft - 29.9f) < .0001f && Mathf.Abs(player.AngelWingsRechargeTimeLeft - 44.9f) < .0001f,
                "Temporary wings advance both timers");
            foreach (float distance in new[] { 49f, 50f, 51f })
            {
                reset(); player.HasBoost = true; player.BoostDistanceLeft = distance; player.StartInvcibility(4f);
                player.RecoveredStep(.1f, p => 0f);
                check(Mathf.Abs(player.InvincibilityTimeLeft - (distance < 50f ? 3.9f : 4f)) < .0001f,
                    "Boost invincibility timer threshold at distance=" + distance);
            }
            reset(); player.HasBoost = true; player.IsMegaBoost = true; player.BoostDistanceLeft = 100f; player.StartInvcibility(0f);
            player.RecoveredStep(.1f, p => 0f);
            check(!player.HasBoost && !player.HasInvincibility && !player.IsMegaBoost,
                "An expired invincibility state clears boost even in its main segment");
            reset(); player.StartInvcibility(4f); player.RecoveredStep(.2f, p => 0f);
            check(Mathf.Abs(player.InvincibilityTimeLeft - 3.8f) < .0001f,
                "Timers use the full frame duration rather than the movement cap");

            // GameController.HandleControls acceleration branch, including the
            // native curve fallback once boost slows to its pre-boost velocity.
            reset(); player.Velocity = Vector3.forward * 100f; player.HasBoost = true;
            player.BoostDistanceLeft = 40f; player.VelocityBeforeBoost = 100f;
            check(TempleRunRules.Acceleration(player) == 30f, "Boost tail at the prior speed keeps native curve acceleration");
            player.Velocity = Vector3.forward * 101f;
            check(TempleRunRules.Acceleration(player) == -150f, "Boost tail above the prior speed brakes at 150");
            player.BoostDistanceLeft = 51f;
            check(TempleRunRules.Acceleration(player) == 150f, "Main boost segment accelerates at 150");
            player.IsJumping = true;
            check(TempleRunRules.Acceleration(player) == 0f, "Jump state suppresses boost acceleration");
            reset(); player.Velocity = Vector3.zero; player.ApplyForce(Vector3.forward * 10f); player.RecoveredIntegrate(.2f);
            check(Mathf.Abs(player.Velocity.z - 2f) < .00001f && Mathf.Abs(player.transform.position.z - 2f / 15f) < .00001f,
                "Force uses the full frame while displacement alone is capped to 1/15 second");
            reset(); player.transform.position = new Vector3(10f, 20f, 30f);
            Bounds bounds = player.GetWorldSpaceBounds();
            check(Vector3.Distance(bounds.min, player.transform.position + new Vector3(-1.7469f, -.16485f, -1.7469f)) < .00001f &&
                Vector3.Distance(bounds.max, player.transform.position + new Vector3(1.7469f, 9.58665f, 1.7469f)) < .00001f,
                "Pickup bounds use the original ELF minimum and maximum constants");
            check(player.DoesSphereIntersectBoundingBox(bounds.center, 0f) &&
                !player.DoesSphereIntersectBoundingBox(bounds.max + Vector3.right * 4f, 3f),
                "Pickup spheres use three-dimensional distance to native world bounds");
            int[] types = { 1, 2, 3, 4, 5, 6, 7 }; float[] radii = { 3f, 2.25f, 2.25f, 2.25f, 3f, 3f, 2.25f };
            for (int i = 0; i < types.Length; i++)
                check(TempleRunRules.PickupRadius(types[i]) == radii[i], "Native pickup radius for type=" + types[i]);
            check(Mathf.Abs(TempleRunRules.MagnetForce(Vector3.right * 50f).x - 4000f) < .001f,
                "Native magnet uses inverse-square force rather than fixed movement speed");
            check(TempleRunRules.MagnetForce(Vector3.up * 90f).y > 0f && TempleRunRules.MagnetForce(Vector3.up * 91f) == Vector3.zero &&
                TempleRunRules.MagnetForce(Vector3.zero) == Vector3.zero,
                "Magnet range includes 90 units in three dimensions and excludes zero distance");

            foreach (float offset in new[] { -15f, 0f, 15f })
            {
                var prefab = Resources.Load<GameObject>("prefabs/temple/trees/treeJumpLeftVert_prefab");
                var hazard = UnityEngine.Object.Instantiate(prefab);
                try
                {
                    hazard.transform.position += Vector3.up * offset;
                    var obstacle = hazard.GetComponentInChildren<Obstacle>();
                    var region = obstacle.GetComponent<Region2D>(); region.Height += offset;
                    Vector2 center = Vector2.zero; float minimum = float.PositiveInfinity, maximum = float.NegativeInfinity;
                    foreach (Vector2 p in region.Points) { center += p; minimum = Mathf.Min(minimum, p.y); maximum = Mathf.Max(maximum, p.y); }
                    center /= region.Points.Count;
                    Func<float, Vector2> point = z => {
                        Vector3 p = region.transform.TransformPoint(new Vector3(center.x, 0f, z)); return new Vector2(p.x, p.z);
                    };
                    Vector2 previous = point(minimum - 20f), inside = point(center.y), beyond = point(maximum + 20f);
                    check(TempleRunRules.EntersObstacle(obstacle, region, previous, inside, region.Height - 1f, false),
                        "Original jump hazard collides below its world threshold in biome offset=" + offset);
                    check(!TempleRunRules.EntersObstacle(obstacle, region, previous, inside, region.Height, false),
                        "Original jump hazard clears at its world threshold in biome offset=" + offset);
                    check(!TempleRunRules.EntersObstacle(obstacle, region, inside, beyond, region.Height - 1f, false),
                        "Leaving an obstacle does not cause a second contact");
                    check(TempleRunRules.EntersObstacle(obstacle, region, previous, beyond, region.Height - 1f, false),
                        "A swept frame crossing the complete hazard still contacts it");
                    obstacle.MustJumpOver = false; obstacle.MustSlideUnder = true;
                    check(!TempleRunRules.EntersObstacle(obstacle, region, previous, inside, offset, true), "Sliding clears a slide hazard");
                    obstacle.MustJumpOver = true;
                    check(TempleRunRules.ObstacleDeath(obstacle, PathElement.PathLevel.kPathLevelPlank) == CharacterPlayer.DeathTypes.kDeathTypeTangle &&
                        TempleRunRules.ObstacleDeath(obstacle, PathElement.PathLevel.kPathLevelTemple) == CharacterPlayer.DeathTypes.kDeathTypeBurnt,
                        "Combined jump/slide hazard uses the native biome-specific death type");
                }
                finally { UnityEngine.Object.DestroyImmediate(hazard); }
            }
            return count;
        }
        finally { UnityEngine.Object.DestroyImmediate(obj); }
    }
}
