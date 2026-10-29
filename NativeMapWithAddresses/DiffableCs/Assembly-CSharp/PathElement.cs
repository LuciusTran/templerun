//Type is in global namespace

[Token(Token = "0x200016B")]
public class PathElement : DynamicElement
{
	[Token(Token = "0x2000170")]
	internal enum CoinRunLocation
	{
		kCoinRunNone = 0,
		kCoinRunCenter = 1,
		kCoinRunLeft = 2,
		kCoinRunRight = 3,
	}

	[Token(Token = "0x200016F")]
	internal enum ObstacleType
	{
		kObstacleNone = 0,
		kObstacleHole = 1,
		kObstacleNarrow = 2,
		kObstacleTreeStumble = 3,
		kObstacleTreeJump = 4,
		kObstacleTreeSlide = 5,
		kObstacleFlameTower = 6,
		kObstacleLevelChange = 7,
	}

	[Token(Token = "0x200016E")]
	internal enum PathDirection
	{
		kPathDirectionNone = 0,
		kPathDirectionNorth = 1,
		kPathDirectionEast = 2,
		kPathDirectionSouth = 3,
		kPathDirectionWest = 4,
	}

	[Token(Token = "0x200016D")]
	internal enum PathLevel
	{
		kPathLevelNone = 0,
		kPathLevelPlank = 1,
		kPathLevelTemple = 2,
		kPathLevelCliff = 3,
		kPathlevelMax = 4,
	}

	[Token(Token = "0x200016C")]
	internal enum PathType
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
		kPathMax = 38,
	}

	[Token(Token = "0x2000171")]
	internal enum RenderState
	{
		NotSet = 0,
		Enabled = 1,
		Disabled = 2,
	}

	[Token(Token = "0x4000C90")]
	public const int GridX = 60; //Field offset: 0x0
	[Token(Token = "0x4000C91")]
	public const int GridZ = 60; //Field offset: 0x0
	[Token(Token = "0x4000CAE")]
	public static int sCount; //Field offset: 0x0
	[Token(Token = "0x4000CAF")]
	public static bool sSafetyNetEnabled; //Field offset: 0x4
	[Token(Token = "0x4000CB0")]
	public static bool sAllowBonusItems; //Field offset: 0x5
	[Token(Token = "0x4000CB1")]
	public static bool sAllowVariations; //Field offset: 0x6
	[Token(Token = "0x4000CB2")]
	public static bool sAllowTurns; //Field offset: 0x7
	[Token(Token = "0x4000CB3")]
	public static bool sAllowPathHoles; //Field offset: 0x8
	[Token(Token = "0x4000CB4")]
	public static bool sAllowPathNarrows; //Field offset: 0x9
	[Token(Token = "0x4000CB5")]
	public static bool sAllowFlameTowers; //Field offset: 0xA
	[Token(Token = "0x4000CB6")]
	public static bool sAllowTreeStumble; //Field offset: 0xB
	[Token(Token = "0x4000CB7")]
	public static bool sAllowTreeJump; //Field offset: 0xC
	[Token(Token = "0x4000CB8")]
	public static bool sAllowTreeSlide; //Field offset: 0xD
	[Token(Token = "0x4000CB9")]
	public static bool sAllowTurnAfterObstacles; //Field offset: 0xE
	[Token(Token = "0x4000CBA")]
	public static bool sAllowSidePaths; //Field offset: 0xF
	[Token(Token = "0x4000CBB")]
	public static bool sAllowCoins; //Field offset: 0x10
	[Token(Token = "0x4000CBC")]
	public static bool sAllowDoubleCoins; //Field offset: 0x11
	[Token(Token = "0x4000CBD")]
	public static bool sAllowTripleCoins; //Field offset: 0x12
	[Token(Token = "0x4000CBE")]
	public static bool sAllowCenterCoins; //Field offset: 0x13
	[Token(Token = "0x4000CBF")]
	public static bool sAllowSideCoins; //Field offset: 0x14
	[Token(Token = "0x4000CC0")]
	public static bool sAllowJumpCoins; //Field offset: 0x15
	[Token(Token = "0x4000CC1")]
	public static bool sAllowSlantCoins; //Field offset: 0x16
	[Token(Token = "0x4000CC2")]
	public static int sMinSpacesBetweenBonusItems; //Field offset: 0x18
	[Token(Token = "0x4000CC3")]
	public static float sProbabilityCoinBonus; //Field offset: 0x1C
	[Token(Token = "0x4000CC4")]
	public static float sProbabilityInvincibility; //Field offset: 0x20
	[Token(Token = "0x4000CC5")]
	public static float sProbabilityVacuum; //Field offset: 0x24
	[Token(Token = "0x4000CC6")]
	public static float sProbabilityBoost; //Field offset: 0x28
	[Token(Token = "0x4000CC7")]
	public static int sMinSpaceBetweenTurns; //Field offset: 0x2C
	[Token(Token = "0x4000CC8")]
	public static int sMaxBackToBackObstacles; //Field offset: 0x30
	[Token(Token = "0x4000CC9")]
	public static int sMinSpaceBetweenObstacles; //Field offset: 0x34
	[Token(Token = "0x4000CCA")]
	public static float sDoubleObstaclePercent; //Field offset: 0x38
	[Token(Token = "0x4000CCB")]
	public static int sMinSpacesBetweenCoinRuns; //Field offset: 0x3C
	[Token(Token = "0x4000CCC")]
	public static int sMaxCoinsPerRun; //Field offset: 0x40
	[Token(Token = "0x4000CCD")]
	public static PathLevel sPathLevel; //Field offset: 0x44
	[Token(Token = "0x4000CCE")]
	public static bool sIsFastTurnSection; //Field offset: 0x48
	[Token(Token = "0x4000CCF")]
	public static Color sSafteyNetColor; //Field offset: 0x4C
	[Token(Token = "0x4000CD0")]
	private static Transform PathElementPrefab; //Field offset: 0x60
	[Token(Token = "0x4000CD5")]
	private static Rect TurnRect; //Field offset: 0x68
	[Token(Token = "0x4000CD6")]
	private static Rect TutorialRect; //Field offset: 0x78
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000C92")]
	public PathType Type; //Field offset: 0x30
	[FieldOffset(Offset = "0x34")]
	[Token(Token = "0x4000C93")]
	public PathLevel Level; //Field offset: 0x34
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000C94")]
	public ObstacleType Obstacles; //Field offset: 0x38
	[FieldOffset(Offset = "0x3C")]
	[Token(Token = "0x4000C95")]
	public bool HasObstacles; //Field offset: 0x3C
	[FieldOffset(Offset = "0x3D")]
	[Token(Token = "0x4000C96")]
	public bool HasCoins; //Field offset: 0x3D
	[FieldOffset(Offset = "0x3E")]
	[Token(Token = "0x4000C97")]
	public bool HasBonusItems; //Field offset: 0x3E
	[FieldOffset(Offset = "0x3F")]
	[Token(Token = "0x4000C98")]
	public bool SkippedBonusItems; //Field offset: 0x3F
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000C99")]
	public bool IsTutorialObstacle; //Field offset: 0x40
	[FieldOffset(Offset = "0x41")]
	[Token(Token = "0x4000C9A")]
	public bool IsTutorialEnd; //Field offset: 0x41
	[FieldOffset(Offset = "0x44")]
	[Token(Token = "0x4000C9B")]
	public CoinRunLocation CoinLocationStart; //Field offset: 0x44
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4000C9C")]
	public CoinRunLocation CoinLocationEnd; //Field offset: 0x48
	[FieldOffset(Offset = "0x4C")]
	[Token(Token = "0x4000C9D")]
	public bool IsCoinRunInAir; //Field offset: 0x4C
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000C9E")]
	public PathElement PathNorth; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000C9F")]
	public PathElement PathEast; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000CA0")]
	public PathElement PathWest; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000CA1")]
	public PathElement PathSouth; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x4000CA2")]
	public int TileIndex; //Field offset: 0x70
	[FieldOffset(Offset = "0x74")]
	[Token(Token = "0x4000CA3")]
	public int SpacesSinceLastBonusItem; //Field offset: 0x74
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4000CA4")]
	public int SpacesSinceLastTurn; //Field offset: 0x78
	[FieldOffset(Offset = "0x7C")]
	[Token(Token = "0x4000CA5")]
	public int SpacesSinceLastObstacle; //Field offset: 0x7C
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x4000CA6")]
	public int BackToBackObstacleCount; //Field offset: 0x80
	[FieldOffset(Offset = "0x84")]
	[Token(Token = "0x4000CA7")]
	public int SpacesSinceLastCoinRun; //Field offset: 0x84
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x4000CA8")]
	public int CoinRunCount; //Field offset: 0x88
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x4000CA9")]
	public GameObject SafteyNet; //Field offset: 0x90
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x4000CAA")]
	public PathType OriginalPick; //Field offset: 0x98
	[FieldOffset(Offset = "0x9C")]
	[Token(Token = "0x4000CAB")]
	public PathType FinalPick; //Field offset: 0x9C
	[FieldOffset(Offset = "0xA0")]
	[Token(Token = "0x4000CAC")]
	public Rect Rectangle; //Field offset: 0xA0
	[FieldOffset(Offset = "0xB0")]
	[Token(Token = "0x4000CAD")]
	public FriendMarker LocalFriendMarker; //Field offset: 0xB0
	[FieldOffset(Offset = "0xB8")]
	[Token(Token = "0x4000CD1")]
	public RenderState LastRenderState; //Field offset: 0xB8
	[FieldOffset(Offset = "0xC0")]
	[Token(Token = "0x4000CD2")]
	public UISprite MySafteyNetSprite; //Field offset: 0xC0
	[FieldOffset(Offset = "0xC8")]
	[Token(Token = "0x4000CD3")]
	private Renderer[] MyRenderers; //Field offset: 0xC8
	[FieldOffset(Offset = "0xD0")]
	[Token(Token = "0x4000CD4")]
	private bool IsInView; //Field offset: 0xD0

	[Address(RVA = "0x131166C", Offset = "0x131166C", Length = "0x270")]
	[Token(Token = "0x6000AB5")]
	private static PathElement() { }

	[Address(RVA = "0x1311614", Offset = "0x1311614", Length = "0x58")]
	[Token(Token = "0x6000AB4")]
	public PathElement() { }

	[Address(RVA = "0x130C6B8", Offset = "0x130C6B8", Length = "0x54")]
	[Token(Token = "0x6000A97")]
	private bool ACertainTypeCheck(PathType currentType, PathType parentType) { }

	[Address(RVA = "0x130E7D8", Offset = "0x130E7D8", Length = "0x434")]
	[Token(Token = "0x6000AB3")]
	public void AddBonusItems(PathDirection direction, PathElement parentPiece) { }

	[Address(RVA = "0x130D4B8", Offset = "0x130D4B8", Length = "0x1320")]
	[Token(Token = "0x6000AB2")]
	public void AddCoins(PathDirection direction, PathElement parentPiece) { }

	[Address(RVA = "0x130FE48", Offset = "0x130FE48", Length = "0x90")]
	[Token(Token = "0x6000A9D")]
	public void AddDefinedPath() { }

	[Address(RVA = "0x130B1F8", Offset = "0x130B1F8", Length = "0x248")]
	[Token(Token = "0x6000A76")]
	public void AddObstacle(ObstacleType type) { }

	[Address(RVA = "0x130FED8", Offset = "0x130FED8", Length = "0x30C")]
	[Token(Token = "0x6000A9E")]
	public void AddRandomPath(int depth, PathDirection origin) { }

	[Address(RVA = "0x130EC0C", Offset = "0x130EC0C", Length = "0x304")]
	[Token(Token = "0x6000A9A")]
	public void AddSafteyNet(PathElement newPath, PathDirection origin) { }

	[Address(RVA = "0x130F270", Offset = "0x130F270", Length = "0x9D8")]
	[Token(Token = "0x6000A9B")]
	public void AddTutorialPath(int tutorialId) { }

	[Address(RVA = "0x130C140", Offset = "0x130C140", Length = "0x118")]
	[Token(Token = "0x6000A95")]
	private bool CanPathExtendOnSide(PathDirection direction) { }

	[Address(RVA = "0x130C514", Offset = "0x130C514", Length = "0x1A4")]
	[Token(Token = "0x6000A94")]
	private bool CanPathExtendOnSide2(PathDirection direction) { }

	[Address(RVA = "0x130B74C", Offset = "0x130B74C", Length = "0xBC")]
	[Token(Token = "0x6000A7D")]
	public bool CanTurnLeft(PathDirection origin) { }

	[Address(RVA = "0x130B808", Offset = "0x130B808", Length = "0xBC")]
	[Token(Token = "0x6000A7E")]
	public bool CanTurnRight(PathDirection origin) { }

	[Address(RVA = "0x130A784", Offset = "0x130A784", Length = "0x1C")]
	[Token(Token = "0x6000A77")]
	private void ClearTerrainPieces() { }

	[Address(RVA = "0x130C044", Offset = "0x130C044", Length = "0xFC")]
	[Token(Token = "0x6000A93")]
	private bool DoesPieceTypeFitOnSide(PathType type, PathDirection direction, bool checkPieceTypes = true) { }

	[Address(RVA = "0x1311594", Offset = "0x1311594", Length = "0x50")]
	[Token(Token = "0x6000AB0")]
	public bool DoesSidePathhaveCoins() { }

	[Address(RVA = "0x130B8C4", Offset = "0x130B8C4", Length = "0xC8")]
	[Token(Token = "0x6000A7F")]
	public bool DoesSidePathHaveObstacles() { }

	[Address(RVA = "0x1309DCC", Offset = "0x1309DCC", Length = "0x3C8")]
	[Token(Token = "0x6000A6F")]
	public static void DumpStatics() { }

	[Address(RVA = "0x1310488", Offset = "0x1310488", Length = "0x2D4")]
	[Token(Token = "0x6000AA5")]
	public PathElement GetNearestPathElement(Vector2 point, PathDirection origin, bool isRootNode, int maxTurns = 3) { }

	[Address(RVA = "0x130C020", Offset = "0x130C020", Length = "0x24")]
	[Token(Token = "0x6000A92")]
	public static PathDirection GetOpposite(PathDirection direction) { }

	[Address(RVA = "0x130BD38", Offset = "0x130BD38", Length = "0x50")]
	[Token(Token = "0x6000A8D")]
	public PathElement GetPath(PathDirection direction) { }

	[Address(RVA = "0x130BDD8", Offset = "0x130BDD8", Length = "0x50")]
	[Token(Token = "0x6000A8F")]
	public PathElement GetPathBackward(PathDirection origin) { }

	[Address(RVA = "0x131075C", Offset = "0x131075C", Length = "0x10")]
	[Token(Token = "0x6000AA6")]
	public PathElement GetPathElementIfPointOverTurn(Vector3 point, float radius, PathDirection origin, bool isRootNode, int bailOut = 3) { }

	[Address(RVA = "0x131076C", Offset = "0x131076C", Length = "0x368")]
	[Token(Token = "0x6000AA7")]
	public PathElement GetPathElementIfPointOverTurn2D(Vector2 point, float radius, PathDirection origin, bool isRootNode, int bailOut = 3) { }

	[Address(RVA = "0x1310BF0", Offset = "0x1310BF0", Length = "0x34C")]
	[Token(Token = "0x6000AAB")]
	public PathElement GetPathElementIfPointOverTutorialObstacle(Vector2 point, float radius, PathDirection origin, bool isRootNode) { }

	[Address(RVA = "0x1310BE0", Offset = "0x1310BE0", Length = "0x10")]
	[Token(Token = "0x6000AAA")]
	public PathElement GetPathElementIfPointOverTutorialObstacle(Vector3 point, float radius, PathDirection origin, bool isRootNode) { }

	[Address(RVA = "0x130BD88", Offset = "0x130BD88", Length = "0x50")]
	[Token(Token = "0x6000A8E")]
	public PathElement GetPathForward(PathDirection origin) { }

	[Address(RVA = "0x130BD10", Offset = "0x130BD10", Length = "0x28")]
	[Token(Token = "0x6000A8C")]
	public float GetPathHeight() { }

	[Address(RVA = "0x130BE28", Offset = "0x130BE28", Length = "0xFC")]
	[Token(Token = "0x6000A90")]
	public PathElement GetPathLeft(PathDirection origin) { }

	[Address(RVA = "0x130BF24", Offset = "0x130BF24", Length = "0xFC")]
	[Token(Token = "0x6000A91")]
	public PathElement GetPathRight(PathDirection origin) { }

	[Address(RVA = "0x130A7A0", Offset = "0x130A7A0", Length = "0x994")]
	[Token(Token = "0x6000A8B")]
	private static string GetPrefabNameForType(PathType type, PathLevel level) { }

	[Address(RVA = "0x130C70C", Offset = "0x130C70C", Length = "0xDAC")]
	[Token(Token = "0x6000A98")]
	private PathElement GetRandomPathElementForSide(PathDirection direction) { }

	[Address(RVA = "0x130B1D4", Offset = "0x130B1D4", Length = "0x24")]
	[Token(Token = "0x6000A75")]
	protected static bool HalfTheTime() { }

	[Address(RVA = "0x130B98C", Offset = "0x130B98C", Length = "0x80")]
	[Token(Token = "0x6000A80")]
	public static bool HasObstacle(PathElement node) { }

	[Address(RVA = "0x130A21C", Offset = "0x130A21C", Length = "0x254")]
	[Token(Token = "0x6000A71")]
	public static GameObject Instantiate(PathType type, PathLevel level = 2) { }

	[Address(RVA = "0x130A194", Offset = "0x130A194", Length = "0x88")]
	[Token(Token = "0x6000A70")]
	public static PathElement InstantiatePathElement(PathType type, PathLevel level = 2) { }

	[Address(RVA = "0x130F18C", Offset = "0x130F18C", Length = "0xE4")]
	[Token(Token = "0x6000A99")]
	public GameObject InstantiateSafteynet() { }

	[Address(RVA = "0x130B6EC", Offset = "0x130B6EC", Length = "0x60")]
	[Token(Token = "0x6000A7C")]
	public bool IsNarrow() { }

	[Address(RVA = "0x130B144", Offset = "0x130B144", Length = "0x10")]
	[Token(Token = "0x6000A86")]
	public static bool IsPathTypeHole(PathType type) { }

	[Address(RVA = "0x130B164", Offset = "0x130B164", Length = "0x10")]
	[Token(Token = "0x6000A88")]
	public static bool IsPathTypeLevelChange(PathType type) { }

	[Address(RVA = "0x130B154", Offset = "0x130B154", Length = "0x10")]
	[Token(Token = "0x6000A87")]
	public static bool IsPathTypeNarrow(PathType type) { }

	[Address(RVA = "0x130B134", Offset = "0x130B134", Length = "0x10")]
	[Token(Token = "0x6000A85")]
	public static bool IsPathTypeObstacle(PathType type) { }

	[Address(RVA = "0x130BABC", Offset = "0x130BABC", Length = "0x98")]
	[Token(Token = "0x6000A89")]
	public static bool IsPathTypeStepDown(PathType type) { }

	[Address(RVA = "0x130B6C0", Offset = "0x130B6C0", Length = "0x2C")]
	[Token(Token = "0x6000A84")]
	public static bool IsPathTypeStraightHorz(PathType type) { }

	[Address(RVA = "0x130B694", Offset = "0x130B694", Length = "0x2C")]
	[Token(Token = "0x6000A83")]
	public static bool IsPathTypeStraightVert(PathType type) { }

	[Address(RVA = "0x130B564", Offset = "0x130B564", Length = "0x10")]
	[Token(Token = "0x6000A81")]
	public static bool IsPathTypeTurn(PathType type) { }

	[Address(RVA = "0x13113E4", Offset = "0x13113E4", Length = "0xE0")]
	[Token(Token = "0x6000AAE")]
	public bool IsPointInsideAnyRegion2D(Vector3 point) { }

	[Address(RVA = "0x1310AE0", Offset = "0x1310AE0", Length = "0x100")]
	[Token(Token = "0x6000AA9")]
	public bool IsPointOverTurnArea(Vector2 point, float radius) { }

	[Address(RVA = "0x1310AD4", Offset = "0x1310AD4", Length = "0xC")]
	[Token(Token = "0x6000AA8")]
	public bool IsPointOverTurnArea(Vector3 point, float radius) { }

	[Address(RVA = "0x130BA0C", Offset = "0x130BA0C", Length = "0xB0")]
	[Token(Token = "0x6000A82")]
	public static bool ISsPathTypeStraight(PathType type) { }

	[Address(RVA = "0x130B574", Offset = "0x130B574", Length = "0x28")]
	[Token(Token = "0x6000A79")]
	public bool IsStraight() { }

	[Address(RVA = "0x130B618", Offset = "0x130B618", Length = "0x7C")]
	[Token(Token = "0x6000A7B")]
	public bool IsStraightHorz() { }

	[Address(RVA = "0x130B59C", Offset = "0x130B59C", Length = "0x7C")]
	[Token(Token = "0x6000A7A")]
	public bool IsStraightVert() { }

	[Address(RVA = "0x130B174", Offset = "0x130B174", Length = "0x60")]
	[Token(Token = "0x6000A78")]
	public bool IsTurn() { }

	[Address(RVA = "0x131020C", Offset = "0x131020C", Length = "0xDC")]
	[Token(Token = "0x6000AA1")]
	public void OnDespawned() { }

	[Address(RVA = "0x130A478", Offset = "0x130A478", Length = "0x64")]
	[Token(Token = "0x6000A72")]
	private void OnDrawGizmos() { }

	[Address(RVA = "0x13101E4", Offset = "0x13101E4", Length = "0x28")]
	[Token(Token = "0x6000AA0")]
	public void OnSpawned() { }

	[Address(RVA = "0x13102E8", Offset = "0x13102E8", Length = "0x1A0")]
	[Token(Token = "0x6000AA2")]
	public void Prune(PathDirection origin) { }

	[Address(RVA = "0x1311120", Offset = "0x1311120", Length = "0x2C4")]
	[Token(Token = "0x6000AAD")]
	public void RecursiveVisibility(bool activeFlag, PathDirection origin, bool isRootNode, int turnCount = 0) { }

	[Address(RVA = "0x130B440", Offset = "0x130B440", Length = "0x124")]
	[Token(Token = "0x6000AA3")]
	private void RemoveAllSubObjects() { }

	[Address(RVA = "0x13115E4", Offset = "0x13115E4", Length = "0x30")]
	[Token(Token = "0x6000AB1")]
	private static void ResetItem(BonusItem item1) { }

	[Address(RVA = "0x130FC48", Offset = "0x130FC48", Length = "0x200")]
	[Token(Token = "0x6000A9C")]
	private bool SetPath(PathElement path, PathDirection direction) { }

	[Address(RVA = "0x130A470", Offset = "0x130A470", Length = "0x8")]
	[Token(Token = "0x6000A73")]
	private void SetPathType(PathType type, PathLevel level) { }

	[Address(RVA = "0x1310F3C", Offset = "0x1310F3C", Length = "0x1E4")]
	[Token(Token = "0x6000AAC")]
	private void SetRendering(bool enable) { }

	[Address(RVA = "0x130A4DC", Offset = "0x130A4DC", Length = "0x2A8")]
	[Token(Token = "0x6000A74")]
	public void SetupTerrain() { }

	[Address(RVA = "0x13114C4", Offset = "0x13114C4", Length = "0xD0")]
	[Token(Token = "0x6000AAF")]
	private bool SideHasCoins(PathDirection direciton) { }

	[Address(RVA = "0x130F0E0", Offset = "0x130F0E0", Length = "0xAC")]
	[Token(Token = "0x6000AA4")]
	public void UpdateCachedComponents() { }

	[Address(RVA = "0x130EF10", Offset = "0x130EF10", Length = "0x1D0")]
	[Token(Token = "0x6000A9F")]
	public void UpdatePathDescription(PathElement parentPath) { }

	[Address(RVA = "0x130BB54", Offset = "0x130BB54", Length = "0x1BC")]
	[Token(Token = "0x6000A8A")]
	public static void WarmResources() { }

	[Address(RVA = "0x130C258", Offset = "0x130C258", Length = "0x2BC")]
	[Token(Token = "0x6000A96")]
	private bool WillPieceTypeConnectOnSide(PathType type, PathDirection direction) { }

}

