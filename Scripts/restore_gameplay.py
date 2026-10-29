#!/usr/bin/env python3
"""Apply reviewed native-derived C# bodies while preserving MonoScript GUIDs."""
import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
NATIVE = json.loads((ROOT / "DecompiledNative/decompilation-results.json").read_text())
CHANGES = []


def restore(cls, name, body, parameter=None, nature="native-derived translation"):
    path = ROOT / "Assets/Scripts/Assembly-CSharp" / (cls + ".cs")
    text = path.read_text()
    pattern = re.compile(r"^\t(?:public|private|protected|internal)[^\n]*\b" + re.escape(name) + r"\(([^\n]*)\)", re.M)
    matches = [m for m in pattern.finditer(text) if parameter is None or parameter in m.group(1)]
    if len(matches) != 1:
        raise ValueError((cls, name, parameter, len(matches)))
    match = matches[0]
    start = text.index("{", match.end())
    depth, end = 1, start + 1
    while depth:
        depth += (text[end] == "{") - (text[end] == "}")
        end += 1
    proofs = [m for m in NATIVE if m["className"] == cls and re.search(r"\b" + re.escape(name) + r"\(", m["signature"]) and (parameter is None or parameter in m["signature"])]
    if not proofs:
        raise ValueError("No native evidence: " + cls + "." + name)
    reference = "; ".join("DecompiledNative/" + m["output"] for m in proofs)
    replacement = "{\n        // Native evidence: " + reference + "\n" + "\n".join("        " + line for line in body.strip().splitlines()) + "\n\t}"
    path.write_text(text[:start] + replacement + text[end:])
    CHANGES.append({"class": cls, "method": name, "parameters": match.group(1), "source": str(path.relative_to(ROOT)), "nativeFiles": ["DecompiledNative/" + m["output"] for m in proofs], "nature": nature})


def main():
    for cls in ["CharacterPlayer", "MovingObject", "PathElement", "CommonPlayer"]:
        path = ROOT / "Assets/Scripts/Assembly-CSharp" / (cls + ".cs")
        text = path.read_text().replace("public class " + cls + " :", "public partial class " + cls + " :")
        if cls == "CharacterPlayer":
            text = text.replace("public float BoostSlowdownDistance;", "public float BoostSlowdownDistance = 50f;")
        path.write_text(text)

    restore("CharacterPlayer", "GetRunVelocity", "return Mathf.Sqrt(Velocity.x * Velocity.x + Velocity.z * Velocity.z);")
    restore("CharacterPlayer", "GetMaxRunVelocity", "return HasBoost ? MaxRunVelocity * (IsMegaBoost ? 2.5f : 2f) : MaxRunVelocity;")
    restore("CharacterPlayer", "AddScore", "if (score > 0) Score = unchecked(Score + ScoreMultiplier * score);")
    restore("CharacterPlayer", "AddCoins", """
if (count <= 0) return;
CoinCountTotal += count;
CoinCountForBonus += count;
if (CoinCountForBonus >= CoinCountForBonusThreshold)
{
    Score = unchecked(Score + ScoreMultiplier * 500);
    BonusLevel++;
    BonusLevelMax = Mathf.Max(BonusLevelMax, BonusLevel);
    CoinCountForBonus -= CoinCountForBonusThreshold;
}
""")
    restore("CharacterPlayer", "Jump", """
if (IsJumping || IsStumbling || IsFalling) return false;
if (delay > 0f) { JumpAfterDelay = true; JumpDelay = delay; return true; }
Velocity.y = Mathf.Clamp(GetRunVelocity(), 80f, 100f);
IsJumping = true; JumpAfterDelay = false; IsSliding = false;
PlayAnimation("Jump");
return true;
""", nature="native guards/impulse/state; audio and animation use local adapters")
    restore("CharacterPlayer", "Slide", """
if (IsSliding || IsJumping || IsFalling) return false;
IsSliding = true; TimeSinceSlideStart = 0f;
SlideDuration = Mathf.Min(GetRunVelocity() * .007f, .75f);
PlayAnimation("Slide Start");
PlayAnimation("Slide Loop", true);
return true;
""", nature="native guards/timing/state; animation adapter")
    restore("CharacterPlayer", "SlamDown", """
if (!IsJumping || IsFalling) return false;
Velocity.y = -60f;
return true;
""")
    for name, sign in [("StrafeLeft", ""), ("StrafeRight", "-")]:
        restore("CharacterPlayer", name, f"IsStrafing = true; TimeSinceStrafeStart = 0f;\nPlayerXOffset = {sign}((GroundHeight >= 7.5f && !TempleRunRules.Config.Controls.FOC) ? 6f : 7f);")
    restore("CharacterPlayer", "TurnLeft", """
transform.Rotate(0f, -90f, 0f);
Velocity = new Vector3(-Velocity.z, Velocity.y, Velocity.x);
ResetForce();
Facing = TravelingDirection();
""", nature="native transform/velocity rotation; audio omitted")
    restore("CharacterPlayer", "TurnRight", """
transform.Rotate(0f, 90f, 0f);
Velocity = new Vector3(Velocity.z, Velocity.y, -Velocity.x);
ResetForce();
Facing = TravelingDirection();
""", nature="native transform/velocity rotation; audio omitted")
    restore("CharacterPlayer", "StartVacuum", "VacuumTimeLeft = duration; HasVacuum = true; TimeSinceLastPowerup = 0f;")
    restore("CharacterPlayer", "StartInvcibility", "InvincibilityTimeLeft = duration; HasInvincibility = true; TimeSinceLastPowerup = 0f;", nature="native flags/timer; original shader/audio integration omitted")
    restore("CharacterPlayer", "StartAngelWings", """
HasAngelWings = true; AreWingsPermanent = isPermanent; AngelWingsTimeLeft = duration;
if (!isPermanent) { AngelWingsRechargeTimeLeft = 45f; AngelWingsCount--; }
""")
    restore("CharacterPlayer", "StartCoinBonus", "AddCoins(value); TimeSinceLastPowerup = 0f;")
    restore("CharacterPlayer", "StartBoost", """
bool hadBoost = HasBoost;
HasBoost = true; IsMegaBoost = isMega;
if (!hadBoost) { VelocityBeforeBoost = isMega ? MaxRunVelocity : GetRunVelocity(); StartInvcibility(4f); }
BoostDistanceLeft = distance + 50f;
TimeSinceLastPowerup = 0f; StumbleKillTimer += 10f;
""")
    restore("CharacterPlayer", "Stumble", """
if (delay > 0f) { StumbleAfterDelay = true; StumbleDelay = delay; return; }
DidStumble = true; StumbleAfterDelay = false;
if (StumbleKillTimer < 10f) { Kill(DeathTypes.kDeathTypeEaten); return; }
Velocity *= TempleRunRules.Config.Runner.SSDP;
IsStumbling = true; TimeSinceStumbleStart = 0f;
BonusLevel = 1; CoinCountForBonus = 0;
StumbleDuration = Mathf.Min(GetRunVelocity() * .005f, .5f);
StumbleKillTimer = 0f;
PlayAnimation("Stumble");
""", nature="native state/speed/timing/death threshold; audio/UI adapters omitted")
    restore("CharacterPlayer", "Start", """
Instance = this;
BaseAnimationFPS = 24f;
StartRunVelocity = TempleRunRules.Config.Runner.SRV;
MaxRunVelocity = TempleRunRules.Config.Runner.MRV;
CoinCountForBonusThreshold = 100;
""", nature="native initialization subset; reset is explicitly scheduled by the local host")
    restore("CharacterPlayer", "Reset", """
StartRunVelocity = TempleRunRules.Config.Runner.SRV; MaxRunVelocity = TempleRunRules.Config.Runner.MRV;
PlayerXOffset = 0f; IsDead = false; TimeSinceDeath = 0f; DeathType = DeathTypes.kDeathTypeUnknown;
IsFalling = false; IsJumping = false; JumpAfterDelay = false; IsSliding = false; TimeSinceSlideStart = 0f;
IsOnGround = false; IsOverGround = false; IsStumbling = false; StumbleAfterDelay = false;
DidStumble = false; IsStrafing = false; Hold = true; StrafeDuration = .4f;
Score = 0; ScoreMultiplier = 10; BonusLevel = 1; CoinCountTotal = 0; CoinCountForBonus = 0;
CoinCountForBonusThreshold = 100; IsGroundHeightChangeHigher = false; GroundHeight = 0f;
HasInvincibility = false; HasVacuum = false; HasBoost = false; IsMegaBoost = false;
InvincibilityTimeLeft = VacuumTimeLeft = BoostDistanceLeft = VelocityBeforeBoost = TimeSinceLastPowerup = 0f;
AngelWingsCount = 0; AreWingsPermanent = false; HasAngelWings = false;
AngelWingsTimeLeft = AngelWingsRechargeTimeLeft = 0f; StumbleKillTimer = 7f; DeathRunVelocity = 0f;
Velocity = transform.forward * StartRunVelocity; PreviousLocation = transform.position; ResetForce();
PlayAnimation("Run");
""", nature="native reset fields; local baseline multiplier replaces unavailable record-manager initialization")
    restore("CharacterPlayer", "Kill", """
if (IsDead) return;
DeathRunVelocity = GetRunVelocity(); IsDead = true; DeathType = deathType; TimeSinceDeath = 0f;
IsSliding = false; IsJumping = false; Velocity = Vector3.zero;
PlayAnimation("Stumble");
TempleRunEvents.NotifyDeath(deathType);
""", nature="native death state; authored host replaces original end-game UI/platform integration")
    restore("CharacterPlayer", "PlayAnimation", """
if (!AnimateObject) return;
string selected = anim;
if (!AnimateObject.GetClip(selected) && anim == "Run" && AnimateObject.GetClip("Run01")) selected = "Run01";
if (!AnimateObject.GetClip(selected)) return;
if (queued) AnimateObject.PlayQueued(selected); else if (!AnimateObject.IsPlaying(selected)) AnimateObject.CrossFade(selected, .08f);
""", nature="animation integration adapter for recovered legacy clips")
    restore("CharacterPlayer", "StopAllAnimation", "if (AnimateObject) AnimateObject.Stop();")
    restore("CharacterPlayer", "PauseAnimation", "if (AnimateObject) foreach (AnimationState state in AnimateObject) state.speed = 0f;")
    restore("CharacterPlayer", "UnpauseAnimation", "AdjustAnimationSpeed();")
    restore("CharacterPlayer", "AdjustAnimationSpeed", "if (AnimateObject) foreach (AnimationState state in AnimateObject) state.speed = Velocity.magnitude / 100f * .65f;")
    restore("CharacterPlayer", "GetWorldSpaceBounds", """
Vector3 position = transform.position;
Bounds bounds = new Bounds();
bounds.SetMinMax(position + new Vector3(-1.7469f, -.16485f, -1.7469f), position + new Vector3(1.7469f, 9.58665f, 1.7469f));
return bounds;
""", nature="native world-axis bounds; float constants read from original ELF")
    restore("MovingObject", "DoesSphereIntersectBoundingBox", "return GetWorldSpaceBounds().SqrDistance(point) <= radius * radius;", nature="native virtual bounds query and squared-distance comparison; Unity Bounds API integration")
    restore("CharacterPlayer", "GetPreviousPosition2D", "return new Vector2(PreviousLocation.x, PreviousLocation.z);")
    restore("CharacterPlayer", "SetGroundHeight", "if (groundHeight > GroundHeight) IsGroundHeightChangeHigher = true; GroundHeight = groundHeight;")
    restore("CharacterPlayer", "Resurrect", """
SetY(GroundHeight); IsDead = false; TimeSinceDeath = 0f; DeathType = DeathTypes.kDeathTypeUnknown;
IsFalling = false; IsJumping = false; JumpAfterDelay = false; IsSliding = false; TimeSinceSlideStart = 0f;
IsStumbling = false; StumbleAfterDelay = false; DidStumble = false; IsStrafing = false;
IsGroundHeightChangeHigher = false; HasInvincibility = false; InvincibilityTimeLeft = 0f;
AreWingsPermanent = false; HasAngelWings = false; HasVacuum = false; VacuumTimeLeft = 0f;
HasBoost = false; BoostDistanceLeft = 0f; VelocityBeforeBoost = 0f; IsOnGround = true;
StumbleKillTimer = 10f; BonusLevel = 1; CoinCountForBonus = 0; PlayAnimation("Run");
""", nature="native resurrection fields; local animation/material adapter")

    restore("MovingObject", "ApplyForce", "Force += force; HasForce = true;")
    restore("MovingObject", "ResetForce", "Force = Vector3.zero; HasForce = false;")
    restore("MovingObject", "ResetSimulation", "Velocity = Vector3.zero; AngularVelocity = 0f; ResetForce();")
    restore("MovingObject", "GetPosition2D", "return new Vector2(transform.position.x, transform.position.z);")
    restore("MovingObject", "IsMoving", "return Velocity.sqrMagnitude > 0f || AngularVelocity != 0f;")
    restore("MovingObject", "Simulate", "RecoveredIntegrate(Time.smoothDeltaTime);", nature="native free-motion branch via RecoveredIntegrate; scripted following-path branch is not restored")
    for axis in ["X", "Y", "Z"]:
        lower = axis.lower()
        restore("MovingObject", "Set" + axis, f"Vector3 p = transform.position; p.{lower} = {lower}; transform.position = p;")
        restore("MovingObject", "SetLocal" + axis, f"Vector3 p = transform.localPosition; p.{lower} = {lower}; transform.localPosition = p;")
    restore("CommonPlayer", "Teleport", "transform.position = pos; PreviousLocation = pos;")
    restore("CommonPlayer", "TravelingDirection", "int angle = (int)transform.localEulerAngles.y; return (PathElement.PathDirection)(angle < 5 ? 1 : angle < 95 ? 2 : angle <= 184 ? 3 : 4);")
    restore("BonusItem", "IsACoin", "return unchecked((uint)((int)BonusType - 1)) < 3u;")

    predicates = {"IsPathTypeHole": (11, 6), "IsPathTypeNarrow": (17, 14), "IsPathTypeLevelChange": (33, 4), "IsPathTypeObstacle": (11, 26), "IsPathTypeTurn": (3, 8)}
    for name, (start, count) in predicates.items():
        restore("PathElement", name, f"return unchecked((uint)((int)type - {start})) < {count}u;")
    restore("PathElement", "IsPathTypeStraightVert", "uint n = unchecked((uint)((int)type - 1)); return n < 37u && ((0x1c80fd1c01UL >> (int)n) & 1UL) != 0;")
    restore("PathElement", "IsPathTypeStraightHorz", "uint n = unchecked((uint)((int)type - 2)); return n < 33u && ((0x1bf817001UL >> (int)n) & 1UL) != 0;")
    restore("PathElement", "ISsPathTypeStraight", "return IsPathTypeStraightVert(type) || IsPathTypeStraightHorz(type);")
    for name, call in [("IsTurn", "IsPathTypeTurn"), ("IsStraight", "ISsPathTypeStraight"), ("IsNarrow", "IsPathTypeNarrow"), ("IsStraightVert", "IsPathTypeStraightVert"), ("IsStraightHorz", "IsPathTypeStraightHorz")]:
        restore("PathElement", name, f"return {call}(Type);")
    restore("PathElement", "GetPathHeight", "return Level == PathLevel.kPathLevelPlank ? -15f : Level == PathLevel.kPathLevelCliff ? 15f : 0f;")
    restore("PathElement", "GetOpposite", "return (PathDirection)(direction == PathDirection.kPathDirectionNorth ? 3 : direction == PathDirection.kPathDirectionEast ? 4 : direction == PathDirection.kPathDirectionSouth ? 1 : direction == PathDirection.kPathDirectionWest ? 2 : 0);")
    restore("PathElement", "GetPath", "switch (direction) { case PathDirection.kPathDirectionNorth: return PathNorth; case PathDirection.kPathDirectionEast: return PathEast; case PathDirection.kPathDirectionSouth: return PathSouth; case PathDirection.kPathDirectionWest: return PathWest; default: return null; }")
    restore("PathElement", "GetPathBackward", "return GetPath(origin);")
    restore("PathElement", "GetPathForward", "return GetPath(GetOpposite(origin));")
    left = {1: [6, 8, 9], 2: [4, 8, 10], 3: [3, 7, 10], 4: [5, 7, 9]}
    right = {1: [5, 7, 9], 2: [6, 8, 9], 3: [4, 8, 10], 4: [3, 7, 10]}
    for name, table in [("CanTurnLeft", left), ("CanTurnRight", right)]:
        body = "int t = (int)Type;\nswitch ((int)origin)\n{\n"
        for origin, values in table.items():body += "    case " + str(origin) + ": return " + " || ".join("t == " + str(v) for v in values) + ";\n"
        body += "    default: return false;\n}"
        restore("PathElement", name, body)
    restore("PathElement", "GetPathLeft", "return CanTurnLeft(origin) ? GetPath((PathDirection)(((int)origin % 4) + 1)) : null;")
    restore("PathElement", "GetPathRight", "return CanTurnRight(origin) ? GetPath((PathDirection)(((int)origin + 2) % 4 + 1)) : null;")
    restore("PathElement", "IsPointInsideAnyRegion2D", "foreach (Region2D region in GetComponentsInChildren<Region2D>()) if (region.IsPointInside(point)) return true; return false;")
    restore("Region2D", "IsPointInside", "return IsPointInside(new Vector2(point.x, point.z));", "Vector3 point")
    restore("Region2D", "IsPointInside", """
if (Points == null || Points.Count < 3) return false;
Vector3 local = transform.InverseTransformPoint(new Vector3(worldPoint.x, 0f, worldPoint.y));
Vector2 p = new Vector2(local.x, local.z);
bool inside = false;
for (int i = 0, j = Points.Count - 1; i < Points.Count; j = i++)
{
    Vector2 a = Points[i], b = Points[j];
    if (((a.y < p.y && p.y <= b.y) || (b.y < p.y && p.y <= a.y)) &&
        (a.x <= p.x || b.x < p.x) && a.x + (b.x - a.x) * (p.y - a.y) / (b.y - a.y) < p.x) inside = !inside;
}
return inside;
""", "Vector2 worldPoint", nature="native XZ projection and polygon crossing translation; degenerate boundaries are not independently ARM64-verified")
    restore("Region2D", "DoesLineSegementIntersect", """
if (Points == null || Points.Count < 3) return false;
if (IsPointInside(p1) || IsPointInside(p2)) return true;
Vector3 a3 = transform.InverseTransformPoint(new Vector3(p1.x, 0f, p1.y));
Vector3 b3 = transform.InverseTransformPoint(new Vector3(p2.x, 0f, p2.y));
Vector2 a = new Vector2(a3.x, a3.z), b = new Vector2(b3.x, b3.z);
for (int i = 0, j = Points.Count - 1; i < Points.Count; j = i++)
{
    Vector2 c = Points[j], d = Points[i], r = b - a, s = d - c;
    float denominator = r.x * s.y - r.y * s.x;
    if (Mathf.Abs(denominator) < .000001f) continue;
    Vector2 q = c - a;
    float t = (q.x * s.y - q.y * s.x) / denominator;
    float u = (q.x * r.y - q.y * r.x) / denominator;
    if (t >= 0f && t <= 1f && u >= 0f && u <= 1f) return true;
}
return false;
""", nature="native local projection; explicit segment intersection replaces unresolved Geometry helper, with collinear boundaries unverified")
    restore("Obstacle", "IsPointInRegion", "Region2D region = GetComponent<Region2D>(); return region && region.IsPointInside(p);")
    restore("Obstacle", "DoesLineSegementIntersect", "Region2D region = GetComponent<Region2D>(); return region && region.DoesLineSegementIntersect(p1, p2);")

    (ROOT / "Evidence/csharp-restoration-map.json").write_text(json.dumps({"methods": CHANGES, "limitations": ["These are reviewed C# translations and explicit integration adapters, not recovered original C# text.", "Exported methods absent from this map remain stubs; the playable host must not depend on their implementations."]}, indent=2) + "\n")
    print("Restored", len(CHANGES), "method bodies with native references")


if __name__ == "__main__":
    main()
