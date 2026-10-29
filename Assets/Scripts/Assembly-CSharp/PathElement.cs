using UnityEngine;

public class PathElement : DynamicElement
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
		return false;
	}

	public bool IsStraight()
	{
		return false;
	}

	public bool IsStraightVert()
	{
		return false;
	}

	public bool IsStraightHorz()
	{
		return false;
	}

	public bool IsNarrow()
	{
		return false;
	}

	public bool CanTurnLeft(PathDirection origin)
	{
		return false;
	}

	public bool CanTurnRight(PathDirection origin)
	{
		return false;
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
		return false;
	}

	public static bool ISsPathTypeStraight(PathType type)
	{
		return false;
	}

	public static bool IsPathTypeStraightVert(PathType type)
	{
		return false;
	}

	public static bool IsPathTypeStraightHorz(PathType type)
	{
		return false;
	}

	public static bool IsPathTypeObstacle(PathType type)
	{
		return false;
	}

	public static bool IsPathTypeHole(PathType type)
	{
		return false;
	}

	public static bool IsPathTypeNarrow(PathType type)
	{
		return false;
	}

	public static bool IsPathTypeLevelChange(PathType type)
	{
		return false;
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
		return 0f;
	}

	public PathElement GetPath(PathDirection direction)
	{
		return null;
	}

	public PathElement GetPathForward(PathDirection origin)
	{
		return null;
	}

	public PathElement GetPathBackward(PathDirection origin)
	{
		return null;
	}

	public PathElement GetPathLeft(PathDirection origin)
	{
		return null;
	}

	public PathElement GetPathRight(PathDirection origin)
	{
		return null;
	}

	public static PathDirection GetOpposite(PathDirection direction)
	{
		return PathDirection.kPathDirectionNone;
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
		return false;
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
