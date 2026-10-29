using System;
using System.Collections.Generic;
using UnityEngine;
using D = PathElement.PathDirection;
using T = PathElement.PathType;

public partial class TempleRunFlow
{
    [Serializable] public class PickupData
    {
        public int type;
        public Vector3 position;
        public Vector3 velocity;
        public bool collected, magnetized;
        [NonSerialized] public GameObject visual;
    }
    [Serializable] public class TrackTile
    {
        public int index, incoming, outgoing, type, obstacle;
        public Vector3 center;
        public string floor;
        public bool turned, hit;
        public List<PickupData> pickups = new List<PickupData>();
        [NonSerialized] public GameObject root;
        [NonSerialized] public PathElement element;
        [NonSerialized] public Region2D[] ground;
        [NonSerialized] public Obstacle[] hazards;
    }
    private readonly List<TrackTile> tiles = new List<TrackTile>();
    private GameObject world;
    private PathElement ruleProbe;
    private System.Random planner;
    private int tileIndex, seed, randomDraws, generatedCount, untilTurn, sinceObstacle;
    private float BaseHeight => Profile.biome == 1 ? -15f : Profile.biome == 3 ? 15f : 0f;
    private static readonly string[] PickupNames = { "", "coinYellow", "coinRed", "coinBlue", "pickupCoinBonus", "pickupInvincibility", "pickupVacuum", "pickupBoost" };
    private static Vector3 Direction(int value) => value == 1 ? Vector3.forward : value == 2 ? Vector3.right : value == 3 ? Vector3.back : Vector3.left;
    private int Next(int minimum, int maximum) { randomDraws++; return minimum + (int)(planner.NextDouble() * (maximum - minimum)); }

    private void BuildTrack(int runSeed)
    {
        ClearTrack();
        seed = runSeed; planner = new System.Random(seed); randomDraws = generatedCount = tileIndex = sinceObstacle = 0;
        untilTurn = 12;
        for (int i = 0; i < 16; i++) AppendTile();
    }
    private void ClearTrack()
    {
        if (world) { world.SetActive(false); Destroy(world); }
        tiles.Clear();
        world = new GameObject("Extracted Temple Run world");
        ruleProbe = new GameObject("Native path rules").AddComponent<PathElement>();
        ruleProbe.transform.SetParent(world.transform, false);
    }
    private void AppendTile()
    {
        var previous = tiles.Count > 0 ? tiles[tiles.Count - 1] : null;
        int incoming = previous != null ? previous.outgoing : 1;
        var tile = new TrackTile { index = generatedCount++, incoming = incoming, outgoing = incoming,
            center = previous != null ? previous.center + Direction(previous.outgoing) * 60f : Vector3.zero };
        bool vertical = incoming == 1 || incoming == 3;
        string prefix = Profile.biome == 1 ? "plank" : Profile.biome == 3 ? "cliff" : "temple";
        string axis = vertical ? "Vert" : "Horz";
        tile.type = vertical ? 1 : 2;
        bool turn = --untilTurn <= 0;
        if (turn)
        {
            bool left = Next(0, 2) == 0;
            tile.outgoing = left ? (incoming + 2) % 4 + 1 : incoming % 4 + 1;
            for (int candidate = 3; candidate <= 6; candidate++)
            {
                ruleProbe.Type = (T)candidate;
                D origin = PathElement.GetOpposite((D)incoming);
                if (left ? ruleProbe.CanTurnLeft(origin) : ruleProbe.CanTurnRight(origin)) { tile.type = candidate; break; }
            }
            tile.floor = prefix + "Turn" + (char)('A' + tile.type - 3) + "_prefab";
            untilTurn = Next(Distance < 250 ? 10 : Distance < 1000 ? 6 : 3, 13);
        }
        else
        {
            tile.floor = prefix + "Straight" + axis + "_prefab";
            sinceObstacle++;
            if (tile.index > 3 && sinceObstacle >= (Distance < 250 ? 6 : 4) && Next(0, 100) < 60)
            {
                sinceObstacle = 0;
                int hazard = Next(0, Distance < 250 ? 2 : Distance < 500 ? 4 : 5);
                if (hazard == 0) tile.obstacle = 1;
                else if (hazard == 1) tile.obstacle = 3;
                else if (hazard == 2 && Profile.biome != 3)
                {
                    tile.floor = prefix + "StraightHole" + axis + "_prefab";
                    tile.type = vertical ? 11 : 14;
                }
                else if (hazard == 3 && Profile.biome == 2)
                {
                    tile.floor = "templeStraightNarrowSmall" + (vertical ? "LeftVert" : "UpHorz") + "_prefab";
                    tile.type = vertical ? 17 : 18;
                }
                else tile.obstacle = 2;
            }
        }
        if (!turn && tile.index > 0 && tile.index % 6 < 4 && tile.obstacle == 0)
        {
            int level = Mathf.Clamp(Profile.upgrades[4], 0, TempleRunRules.Config.CoinSpawn.D.Length - 1);
            int coinType = Distance >= TempleRunRules.Config.CoinSpawn.T[level] ? 3 : Distance >= TempleRunRules.Config.CoinSpawn.D[level] ? 2 : 1;
            float lane = Next(-1, 2) * 6f;
            Vector3 side = Vector3.Cross(Vector3.up, Direction(incoming));
            for (int i = 0; i < 6; i++) tile.pickups.Add(new PickupData { type = coinType,
                position = tile.center + Direction(incoming) * (-24f + i * 9f) + side * lane + Vector3.up * (BaseHeight + 3f) });
        }
        if (!turn && tile.obstacle == 0 && tile.index > 15 && Runner.TimeSinceLastPowerup >= 15f && Next(0, 100) < 10)
        {
            var available = new List<int>();
            for (int i = 0; i < 4; i++) if (Profile.upgrades[i] > 0 || DeveloperUnlocks) available.Add(i + 4);
            if (available.Count > 0) tile.pickups.Add(new PickupData { type = available[Next(0, available.Count)], position = tile.center + Vector3.up * (BaseHeight + 5f) });
        }
        tiles.Add(tile);
        MaterializeTile(tile);
        if (previous != null) Link(previous, tile);
    }

    private void MaterializeTile(TrackTile tile)
    {
        tile.root = new GameObject("Tile " + tile.index + " " + ((T)tile.type));
        tile.root.transform.SetParent(world.transform, false); tile.root.transform.position = tile.center;
        tile.element = tile.root.AddComponent<PathElement>(); tile.element.Type = (T)tile.type;
        tile.element.Level = (PathElement.PathLevel)Profile.biome;
        var floor = SpawnVisual("prefabs/temple/walls/" + tile.floor, tile.root.transform);
        if (!floor) throw new InvalidOperationException("Missing extracted track prefab: " + tile.floor);
        var regions = new List<Region2D>();
        foreach (var region in floor.GetComponentsInChildren<Region2D>()) if (!region.GetComponent<Obstacle>()) regions.Add(region);
        tile.ground = regions.ToArray();
        if (tile.obstacle != 0)
        {
            bool vertical = tile.incoming == 1 || tile.incoming == 3;
            string hazard = tile.obstacle == 1 ? (vertical ? "treeJumpLeftVert" : "treeJumpUpHorz") :
                tile.obstacle == 2 ? (vertical ? "treeSlideVert" : "treeSlideHorz") : (vertical ? "treeTripLeftVert" : "treeTripUpHorz");
            var obstacle = SpawnVisual("prefabs/temple/trees/" + hazard + "_prefab", tile.root.transform);
            if (obstacle) obstacle.transform.localPosition = Vector3.up * BaseHeight;
            tile.hazards = obstacle ? obstacle.GetComponentsInChildren<Obstacle>() : Array.Empty<Obstacle>();
            // The shared temple hazard is placed in another biome by this host.
            // Region2D.Height is a world threshold, not a local transform offset.
            foreach (var hazardComponent in tile.hazards)
            {
                var region = hazardComponent.GetComponent<Region2D>();
                if (region) region.Height += BaseHeight;
            }
        }
        else tile.hazards = Array.Empty<Obstacle>();
        foreach (var pickup in tile.pickups) MaterializePickup(tile, pickup);
        if (tile.index % 3 == 0)
        {
            var tree = SpawnVisual("prefabs/temple/trees/treeAlone_prefab", tile.root.transform);
            if (tree) tree.transform.localPosition = new Vector3(tile.index % 2 == 0 ? -85 : 85, -15, 8);
        }
    }
    private static void SetLink(PathElement node, D direction, PathElement value)
    {
        switch (direction) { case D.kPathDirectionNorth: node.PathNorth = value; break; case D.kPathDirectionEast: node.PathEast = value; break;
            case D.kPathDirectionSouth: node.PathSouth = value; break; case D.kPathDirectionWest: node.PathWest = value; break; }
    }
    private static void Link(TrackTile a, TrackTile b)
    {
        SetLink(a.element, (D)a.outgoing, b.element); SetLink(b.element, PathElement.GetOpposite((D)a.outgoing), a.element);
    }
    private void MaterializePickup(TrackTile tile, PickupData pickup)
    {
        if (pickup.collected || pickup.type < 1 || pickup.type > 7) return;
        pickup.visual = SpawnVisual("prefabs/temple/pickups/" + PickupNames[pickup.type] + "_prefab", tile.root.transform);
        if (pickup.visual) pickup.visual.transform.position = pickup.position;
    }
    private float? GroundAt(Vector3 point)
    {
        for (int i = Mathf.Max(0, tileIndex - 2); i < Mathf.Min(tiles.Count, tileIndex + 4); i++)
            foreach (var region in tiles[i].ground) if (region && region.IsPointInside(point)) return region.Height;
        // Local bridge for native guided-invincibility behavior not fully translated.
        return Runner.HasInvincibility ? BaseHeight : (float?)null;
    }
    public void RequestTurn(int sign)
    {
        if (!IsPlaying) return;
        sign = sign < 0 ? -1 : 1;
        var tile = tiles[tileIndex];
        float distance = Vector3.Dot(tile.center - Runner.transform.position, Direction(tile.incoming));
        if (tile.element.IsTurn() && !tile.turned && Mathf.Abs(distance) <= 12f)
        {
            D origin = PathElement.GetOpposite((D)tile.incoming);
            if (sign < 0 ? tile.element.CanTurnLeft(origin) : tile.element.CanTurnRight(origin))
            {
                Vector3 p = Runner.transform.position;
                Runner.transform.position = new Vector3(tile.center.x, p.y, tile.center.z);
                if (sign < 0) Runner.TurnLeft(); else Runner.TurnRight();
                Runner.PlayerXOffset = 0f; tile.turned = true; turnBuffer = 0; Sound("footstepsTurn"); return;
            }
        }
        if (tileIndex + 1 < tiles.Count)
        {
            var next = tiles[tileIndex + 1];
            float ahead = Vector3.Dot(next.center - Runner.transform.position, Runner.transform.forward);
            if ((next.element.IsTurn() && ahead > 0 && ahead <= Runner.GetRunVelocity() * .4f + 15f) || (tile.element.IsTurn() && !tile.turned && distance > 0))
            { turnBuffer = sign; turnBufferTime = .5f; return; }
        }
        if (!Runner.HasInvincibility && TempleRunRules.Config.Controls.SSD) Runner.Stumble();
    }
    private void ProcessTurnBuffer(float deltaTime)
    {
        var tile = tiles[tileIndex];
        if (Runner.HasBoost && tile.element.IsTurn() && !tile.turned)
        {
            float ahead = Vector3.Dot(tile.center - Runner.transform.position, Direction(tile.incoming));
            if (Mathf.Abs(ahead) < 10f) RequestTurn(tile.element.CanTurnLeft(PathElement.GetOpposite((D)tile.incoming)) ? -1 : 1);
        }
        if (turnBuffer == 0) return;
        turnBufferTime -= deltaTime;
        float distance = Vector3.Dot(tile.center - Runner.transform.position, Direction(tile.incoming));
        if (tile.element.IsTurn() && !tile.turned && Mathf.Abs(distance) <= 10f) { int sign = turnBuffer; turnBuffer = 0; RequestTurn(sign); }
        else if (turnBufferTime <= 0f) turnBuffer = 0;
    }
    private void AdvanceTrack()
    {
        while (tileIndex + 1 < tiles.Count)
        {
            var tile = tiles[tileIndex];
            if (tile.element.IsTurn() && !tile.turned) break;
            if (Vector3.Dot(Runner.transform.position - tile.center, Direction(tile.outgoing)) <= 30f) break;
            tileIndex++;
        }
        while (tiles.Count - tileIndex < 16) AppendTile();
        if (tileIndex > 30)
        {
            int remove = tileIndex - 4;
            for (int i = 0; i < remove; i++) { tiles[i].root.SetActive(false); Destroy(tiles[i].root); }
            tiles.RemoveRange(0, remove); tileIndex -= remove;
        }
    }
    private void CheckTrackInteractions(Vector3 previous, float deltaTime)
    {
        Vector2 oldPoint = new Vector2(previous.x, previous.z), point = Runner.GetPosition2D();
        for (int i = Mathf.Max(0, tileIndex - 1); i < Mathf.Min(tiles.Count, tileIndex + 3); i++)
        {
            var tile = tiles[i];
            if (!Runner.HasInvincibility)
            {
                foreach (var obstacle in tile.hazards)
                {
                    var region = obstacle.GetComponent<Region2D>();
                    if (!region) continue;
                    if (!TempleRunRules.EntersObstacle(obstacle, region, oldPoint, point, Runner.transform.position.y, Runner.IsSliding)) continue;
                    tile.hit = true;
                    if (obstacle.DoesKill) Runner.Kill(TempleRunRules.ObstacleDeath(obstacle, tile.element.Level));
                    else Runner.Stumble();
                    if (!IsPlaying) return;
                }
            }
            foreach (var pickup in tile.pickups)
            {
                if (pickup.collected || !pickup.visual) continue;
                pickup.visual.transform.Rotate(0, 100f * deltaTime, 0, Space.World);
                float radius = TempleRunRules.PickupRadius(pickup.type);
                if (pickup.type <= 3 && (Runner.HasVacuum || pickup.magnetized))
                {
                    Vector3 displacement = Runner.transform.position - pickup.position;
                    if (displacement.sqrMagnitude > 0f && displacement.sqrMagnitude <= 8100f)
                    {
                        pickup.velocity += TempleRunRules.MagnetForce(displacement) * deltaTime;
                        pickup.magnetized = true; radius = 12f;
                    }
                }
                if (Runner.DoesSphereIntersectBoundingBox(pickup.position, radius)) Collect(pickup);
                else
                {
                    pickup.position += pickup.velocity * Mathf.Min(deltaTime, 1f / 15f);
                    pickup.visual.transform.position = pickup.position;
                }
            }
        }
    }
    private void Collect(PickupData pickup)
    {
        if (pickup.collected) return;
        pickup.collected = true; CollectedPickups++;
        var source = pickup.visual ? pickup.visual.GetComponent<BonusItem>() : null;
        if (source) Runner.AddScore(source.Value);
        if (pickup.visual) { pickup.visual.SetActive(false); Destroy(pickup.visual); }
        int level;
        switch (pickup.type)
        {
            case 1: case 2: case 3: Runner.AddCoins(pickup.type * (Runner.HasVacuum ? MagnetMultiplier() : 1)); Sound("coin"); break;
            case 4: level = Profile.upgrades[0]; Runner.StartCoinBonus(level <= 1 ? 50 : level == 2 ? 75 : level == 3 ? 100 : level == 4 ? 125 : 150); Sound("bonusPickup"); break;
            case 5: level = Profile.upgrades[2]; Runner.StartInvcibility(level <= 1 ? 15f : level == 2 ? 17.5f : level == 3 ? 20f : level == 4 ? 22.5f : 25f); break;
            case 6: level = Profile.upgrades[1]; Runner.StartVacuum(level <= 1 ? 15f : level <= 3 ? 20f : 25f); Sound("magnet"); break;
            case 7: level = Profile.upgrades[3]; Runner.StartBoost(level <= 1 ? 250f : level == 2 ? 375f : level == 3 ? 500f : level == 4 ? 625f : 750f, false); Sound("bonusPickup"); break;
        }
    }
    private int MagnetMultiplier() => Profile.upgrades[1] >= 5 ? 3 : Profile.upgrades[1] >= 3 ? 2 : 1;
    public void SpawnTestPickup(int type)
    {
        var tile = tiles[tileIndex]; var item = new PickupData { type = type, position = Runner.transform.position + Vector3.up * 3f };
        tile.pickups.Add(item); MaterializePickup(tile, item);
    }
}
