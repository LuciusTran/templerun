using UnityEngine;

public partial class PathElement : DynamicElement
{
	public enum PathType
	{
		kPathNone = 0,
		kPathStraightVert = 1,
		kPathStraightHorz = 2,
		kPathTurnA = 3,
		kPathTurnB = 4,
		kPathTurnC = 5,
		kPathTurnD = 6,
		kPathTLeft = 7,
		kPathTRight = 8,
		kPathTUp = 9,
		kPathTDown = 10,
		kPathStraightHoleVert = 11,
		kPathStraightHoleLongAVert = 12,
		kPathStraightHoleLongBVert = 13,
		kPathStraightHoleHorz = 14,
		kPathStraightHoleLongAHorz = 15,
		kPathStraightHoleLongBHorz = 16,
		kPathStraightNarrowSmallVert = 17,
		kPathStraightNarrowSmallHorz = 18,
		kPathStraightNarrowLongLeftVert = 19,
		kPathStraightNarrowLongLeftAVert = 20,
		kPathStraightNarrowLongLeftBVert = 21,
		kPathStraightNarrowLongRightVert = 22,
		kPathStraightNarrowLongRightAVert = 23,
		kPathStraightNarrowLongRightBVert = 24,
		kPathStraightNarrowLongUpHorz = 25,
		kPathStraightNarrowLongUpAHorz = 26,
		kPathStraightNarrowLongUpBHorz = 27,
		kPathStraightNarrowLongDownHorz = 28,
		kPathStraightNarrowLongDownAHorz = 29,
		kPathStraightNarrowLongDownBHorz = 30,
		kPathStraightFlameTowerHighHorz = 31,
		kPathStraightFlameTowerHighVert = 32,
		kPathSingleLevelStepDownCapAHorz = 33,
		kPathSingleLevelStepDownCapBHorz = 34,
		kPathSingleLevelStepDownCapAVert = 35,
		kPathSingleLevelStepDownCapBVert = 36,
		kPathTemple = 37,
		kPathMax = 38
	}

	public enum PathLevel
	{
		kPathLevelNone = 0,
		kPathLevelPlank = 1,
		kPathLevelTemple = 2,
		kPathLevelCliff = 3,
		kPathlevelMax = 4
	}

	public enum PathDirection
	{
		kPathDirectionNone = 0,
		kPathDirectionNorth = 1,
		kPathDirectionEast = 2,
		kPathDirectionSouth = 3,
		kPathDirectionWest = 4
	}

	public enum ObstacleType
	{
		kObstacleNone = 0,
		kObstacleHole = 1,
		kObstacleNarrow = 2,
		kObstacleTreeStumble = 3,
		kObstacleTreeJump = 4,
		kObstacleTreeSlide = 5,
		kObstacleFlameTower = 6,
		kObstacleLevelChange = 7
	}

	public enum CoinRunLocation
	{
		kCoinRunNone = 0,
		kCoinRunCenter = 1,
		kCoinRunLeft = 2,
		kCoinRunRight = 3
	}

	public enum RenderState
	{
		NotSet = 0,
		Enabled = 1,
		Disabled = 2
	}

	public const int GridX = 60;

	public const int GridZ = 60;

	public PathType Type;

	public PathLevel Level;

	public ObstacleType Obstacles;

	public bool HasObstacles;

	public bool HasCoins;

	public bool HasBonusItems;

	public bool SkippedBonusItems;

	public bool IsTutorialObstacle;

	public bool IsTutorialEnd;

	public CoinRunLocation CoinLocationStart;

	public CoinRunLocation CoinLocationEnd;

	public bool IsCoinRunInAir;

	public PathElement PathNorth;

	public PathElement PathEast;

	public PathElement PathWest;

	public PathElement PathSouth;

	public int TileIndex;

	public int SpacesSinceLastBonusItem;

	public int SpacesSinceLastTurn;

	public int SpacesSinceLastObstacle;

	public int BackToBackObstacleCount;

	public int SpacesSinceLastCoinRun;

	public int CoinRunCount;

	public GameObject SafteyNet;

	public PathType OriginalPick;

	public PathType FinalPick;

	public Rect Rectangle;

	public FriendMarker LocalFriendMarker;

	public static int sCount;

	public static bool sSafetyNetEnabled;

	public static bool sAllowBonusItems;

	public static bool sAllowVariations;

	public static bool sAllowTurns;

	public static bool sAllowPathHoles;

	public static bool sAllowPathNarrows;

	public static bool sAllowFlameTowers;

	public static bool sAllowTreeStumble;

	public static bool sAllowTreeJump;

	public static bool sAllowTreeSlide;

	public static bool sAllowTurnAfterObstacles;

	public static bool sAllowSidePaths;

	public static bool sAllowCoins;

	public static bool sAllowDoubleCoins;

	public static bool sAllowTripleCoins;

	public static bool sAllowCenterCoins;

	public static bool sAllowSideCoins;

	public static bool sAllowJumpCoins;

	public static bool sAllowSlantCoins;

	public static int sMinSpacesBetweenBonusItems;

	public static float sProbabilityCoinBonus;

	public static float sProbabilityInvincibility;

	public static float sProbabilityVacuum;

	public static float sProbabilityBoost;

	public static int sMinSpaceBetweenTurns;

	public static int sMaxBackToBackObstacles;

	public static int sMinSpaceBetweenObstacles;

	public static float sDoubleObstaclePercent;

	public static int sMinSpacesBetweenCoinRuns;

	public static int sMaxCoinsPerRun;

	public static PathLevel sPathLevel;

	public static bool sIsFastTurnSection;

	public static Color sSafteyNetColor;

	private static Transform PathElementPrefab;

	public RenderState LastRenderState;

	public UISprite MySafteyNetSprite;

	private Renderer[] MyRenderers;

	private bool IsInView;

	private static Rect TurnRect;

	private static Rect TutorialRect;

	public static void DumpStatics()
	{
	}

	public static PathElement InstantiatePathElement(PathType type, PathLevel level = PathLevel.kPathLevelTemple)
	{
		return null;
	}

	public static GameObject Instantiate(PathType type, PathLevel level = PathLevel.kPathLevelTemple)
	{
		return null;
	}

	private void OnDrawGizmos()
	{
	}

	private void SetPathType(PathType type, PathLevel level)
	{
	}

	public void SetupTerrain()
	{
	}

	protected static bool HalfTheTime()
	{
		return false;
	}

	public void AddObstacle(ObstacleType type)
	{
	}

	private void ClearTerrainPieces()
	{
	}

	public bool IsTurn()
	{
        // Native evidence: DecompiledNative/PathElement/PathElement_IsTurn_130b174.cpp
        return IsPathTypeTurn(Type);
	}

	public bool IsStraight()
	{
        // Native evidence: DecompiledNative/PathElement/PathElement_IsStraight_130b574.cpp
        return ISsPathTypeStraight(Type);
	}

	public bool IsStraightVert()
	{
        // Native evidence: DecompiledNative/PathElement/PathElement_IsStraightVert_130b59c.cpp
        return IsPathTypeStraightVert(Type);
	}

	public bool IsStraightHorz()
	{
        // Native evidence: DecompiledNative/PathElement/PathElement_IsStraightHorz_130b618.cpp
        return IsPathTypeStraightHorz(Type);
	}

	public bool IsNarrow()
	{
        // Native evidence: DecompiledNative/PathElement/PathElement_IsNarrow_130b6ec.cpp
        return IsPathTypeNarrow(Type);
	}

	public bool CanTurnLeft(PathDirection origin)
	{
        // Native evidence: DecompiledNative/PathElement/PathElement_CanTurnLeft_130b74c.cpp
        int t = (int)Type;
        switch ((int)origin)
        {
            case 1: return t == 6 || t == 8 || t == 9;
            case 2: return t == 4 || t == 8 || t == 10;
            case 3: return t == 3 || t == 7 || t == 10;
            case 4: return t == 5 || t == 7 || t == 9;
            default: return false;
        }
	}

	public bool CanTurnRight(PathDirection origin)
	{
        // Native evidence: DecompiledNative/PathElement/PathElement_CanTurnRight_130b808.cpp
        int t = (int)Type;
        switch ((int)origin)
        {
            case 1: return t == 5 || t == 7 || t == 9;
            case 2: return t == 6 || t == 8 || t == 9;
            case 3: return t == 4 || t == 8 || t == 10;
            case 4: return t == 3 || t == 7 || t == 10;
            default: return false;
        }
	}

	public bool DoesSidePathHaveObstacles()
	{
		return false;
	}

	public static bool HasObstacle(PathElement node)
	{
		return false;
	}

	public static bool IsPathTypeTurn(PathType type)
	{
        // Native evidence: DecompiledNative/PathElement/PathElement_IsPathTypeTurn_130b564.cpp
        return unchecked((uint)((int)type - 3)) < 8u;
	}

	public static bool ISsPathTypeStraight(PathType type)
	{
        // Native evidence: DecompiledNative/PathElement/PathElement_ISsPathTypeStraight_130ba0c.cpp
        return IsPathTypeStraightVert(type) || IsPathTypeStraightHorz(type);
	}

	public static bool IsPathTypeStraightVert(PathType type)
	{
        // Native evidence: DecompiledNative/PathElement/PathElement_IsPathTypeStraightVert_130b694.cpp
        uint n = unchecked((uint)((int)type - 1)); return n < 37u && ((0x1c80fd1c01UL >> (int)n) & 1UL) != 0;
	}

	public static bool IsPathTypeStraightHorz(PathType type)
	{
        // Native evidence: DecompiledNative/PathElement/PathElement_IsPathTypeStraightHorz_130b6c0.cpp
        uint n = unchecked((uint)((int)type - 2)); return n < 33u && ((0x1bf817001UL >> (int)n) & 1UL) != 0;
	}

	public static bool IsPathTypeObstacle(PathType type)
	{
        // Native evidence: DecompiledNative/PathElement/PathElement_IsPathTypeObstacle_130b134.cpp
        return unchecked((uint)((int)type - 11)) < 26u;
	}

	public static bool IsPathTypeHole(PathType type)
	{
        // Native evidence: DecompiledNative/PathElement/PathElement_IsPathTypeHole_130b144.cpp
        return unchecked((uint)((int)type - 11)) < 6u;
	}

	public static bool IsPathTypeNarrow(PathType type)
	{
        // Native evidence: DecompiledNative/PathElement/PathElement_IsPathTypeNarrow_130b154.cpp
        return unchecked((uint)((int)type - 17)) < 14u;
	}

	public static bool IsPathTypeLevelChange(PathType type)
	{
        // Native evidence: DecompiledNative/PathElement/PathElement_IsPathTypeLevelChange_130b164.cpp
        return unchecked((uint)((int)type - 33)) < 4u;
	}

	public static bool IsPathTypeStepDown(PathType type)
	{
		return false;
	}

	public static void WarmResources()
	{
	}

	private static string GetPrefabNameForType(PathType type, PathLevel level)
	{
		return null;
	}

	public float GetPathHeight()
	{
        // Native evidence: DecompiledNative/PathElement/PathElement_GetPathHeight_130bd10.cpp
        return Level == PathLevel.kPathLevelPlank ? -15f : Level == PathLevel.kPathLevelCliff ? 15f : 0f;
	}

	public PathElement GetPath(PathDirection direction)
	{
        // Native evidence: DecompiledNative/PathElement/PathElement_GetPath_130bd38.cpp
        switch (direction) { case PathDirection.kPathDirectionNorth: return PathNorth; case PathDirection.kPathDirectionEast: return PathEast; case PathDirection.kPathDirectionSouth: return PathSouth; case PathDirection.kPathDirectionWest: return PathWest; default: return null; }
	}

	public PathElement GetPathForward(PathDirection origin)
	{
        // Native evidence: DecompiledNative/PathElement/PathElement_GetPathForward_130bd88.cpp
        return GetPath(GetOpposite(origin));
	}

	public PathElement GetPathBackward(PathDirection origin)
	{
        // Native evidence: DecompiledNative/PathElement/PathElement_GetPathBackward_130bdd8.cpp
        return GetPath(origin);
	}

	public PathElement GetPathLeft(PathDirection origin)
	{
        // Native evidence: DecompiledNative/PathElement/PathElement_GetPathLeft_130be28.cpp
        return CanTurnLeft(origin) ? GetPath((PathDirection)(((int)origin % 4) + 1)) : null;
	}

	public PathElement GetPathRight(PathDirection origin)
	{
        // Native evidence: DecompiledNative/PathElement/PathElement_GetPathRight_130bf24.cpp
        return CanTurnRight(origin) ? GetPath((PathDirection)(((int)origin + 2) % 4 + 1)) : null;
	}

	public static PathDirection GetOpposite(PathDirection direction)
	{
        // Native evidence: DecompiledNative/PathElement/PathElement_GetOpposite_130c020.cpp
        return (PathDirection)(direction == PathDirection.kPathDirectionNorth ? 3 : direction == PathDirection.kPathDirectionEast ? 4 : direction == PathDirection.kPathDirectionSouth ? 1 : direction == PathDirection.kPathDirectionWest ? 2 : 0);
	}

	private bool DoesPieceTypeFitOnSide(PathType type, PathDirection direction, bool checkPieceTypes = true)
	{
		return false;
	}

	private bool CanPathExtendOnSide2(PathDirection direction)
	{
		return false;
	}

	private bool CanPathExtendOnSide(PathDirection direction)
	{
		return false;
	}

	private bool WillPieceTypeConnectOnSide(PathType type, PathDirection direction)
	{
		return false;
	}

	private bool ACertainTypeCheck(PathType currentType, PathType parentType)
	{
		return false;
	}

	private PathElement GetRandomPathElementForSide(PathDirection direction)
	{
		return null;
	}

	public GameObject InstantiateSafteynet()
	{
		return null;
	}

	public void AddSafteyNet(PathElement newPath, PathDirection origin)
	{
	}

	public void AddTutorialPath(int tutorialId)
	{
	}

	private bool SetPath(PathElement path, PathDirection direction)
	{
		return false;
	}

	public void AddDefinedPath()
	{
	}

	public void AddRandomPath(int depth, PathDirection origin)
	{
	}

	public void UpdatePathDescription(PathElement parentPath)
	{
	}

	public void OnSpawned()
	{
	}

	public void OnDespawned()
	{
	}

	public void Prune(PathDirection origin)
	{
	}

	private void RemoveAllSubObjects()
	{
	}

	public void UpdateCachedComponents()
	{
	}

	public PathElement GetNearestPathElement(Vector2 point, PathDirection origin, bool isRootNode, int maxTurns = 3)
	{
		return null;
	}

	public PathElement GetPathElementIfPointOverTurn(Vector3 point, float radius, PathDirection origin, bool isRootNode, int bailOut = 3)
	{
		return null;
	}

	public PathElement GetPathElementIfPointOverTurn2D(Vector2 point, float radius, PathDirection origin, bool isRootNode, int bailOut = 3)
	{
		return null;
	}

	public bool IsPointOverTurnArea(Vector3 point, float radius)
	{
		return false;
	}

	public bool IsPointOverTurnArea(Vector2 point, float radius)
	{
		return false;
	}

	public PathElement GetPathElementIfPointOverTutorialObstacle(Vector3 point, float radius, PathDirection origin, bool isRootNode)
	{
		return null;
	}

	public PathElement GetPathElementIfPointOverTutorialObstacle(Vector2 point, float radius, PathDirection origin, bool isRootNode)
	{
		return null;
	}

	private void SetRendering(bool enable)
	{
	}

	public void RecursiveVisibility(bool activeFlag, PathDirection origin, bool isRootNode, int turnCount = 0)
	{
	}

	public bool IsPointInsideAnyRegion2D(Vector3 point)
	{
        // Native evidence: DecompiledNative/PathElement/PathElement_IsPointInsideAnyRegion2D_13113e4.cpp
        foreach (Region2D region in GetComponentsInChildren<Region2D>()) if (region.IsPointInside(point)) return true; return false;
	}

	private bool SideHasCoins(PathDirection direciton)
	{
		return false;
	}

	public bool DoesSidePathhaveCoins()
	{
		return false;
	}

	private static void ResetItem(BonusItem item1)
	{
	}

	public void AddCoins(PathDirection direction, PathElement parentPiece)
	{
	}

	public void AddBonusItems(PathDirection direction, PathElement parentPiece)
	{
	}
}
