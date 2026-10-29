//Type is in global namespace

[Token(Token = "0x2000172")]
public class SavedPathElement
{
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x4000D1D")]
	public string Name; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x4000D1E")]
	public Vector3 Position; //Field offset: 0x18
	[FieldOffset(Offset = "0x24")]
	[Token(Token = "0x4000D1F")]
	public PathType Type; //Field offset: 0x24
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000D20")]
	public PathLevel Level; //Field offset: 0x28
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x4000D21")]
	public ObstacleType Obstacles; //Field offset: 0x2C
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000D22")]
	public bool HasCoins; //Field offset: 0x30
	[FieldOffset(Offset = "0x31")]
	[Token(Token = "0x4000D23")]
	public bool HasBonusItems; //Field offset: 0x31
	[FieldOffset(Offset = "0x32")]
	[Token(Token = "0x4000D24")]
	public bool SkippedBonusItems; //Field offset: 0x32
	[FieldOffset(Offset = "0x33")]
	[Token(Token = "0x4000D25")]
	public bool IsTutorialObstacle; //Field offset: 0x33
	[FieldOffset(Offset = "0x34")]
	[Token(Token = "0x4000D26")]
	public bool IsTutorialEnd; //Field offset: 0x34
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000D27")]
	public CoinRunLocation CoinLocationStart; //Field offset: 0x38
	[FieldOffset(Offset = "0x3C")]
	[Token(Token = "0x4000D28")]
	public CoinRunLocation CoinLocationEnd; //Field offset: 0x3C
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000D29")]
	public bool IsCoinRunInAir; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4000D2A")]
	public SavedPathElement PathNorth; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000D2B")]
	public SavedPathElement PathEast; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000D2C")]
	public SavedPathElement PathWest; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000D2D")]
	public SavedPathElement PathSouth; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000D2E")]
	public int TileIndex; //Field offset: 0x68
	[FieldOffset(Offset = "0x6C")]
	[Token(Token = "0x4000D2F")]
	public int SpacesSinceLastBonusItem; //Field offset: 0x6C
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x4000D30")]
	public int SpacesSinceLastTurn; //Field offset: 0x70
	[FieldOffset(Offset = "0x74")]
	[Token(Token = "0x4000D31")]
	public int SpacesSinceLastObstacle; //Field offset: 0x74
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4000D32")]
	public int BackToBackObstacleCount; //Field offset: 0x78
	[FieldOffset(Offset = "0x7C")]
	[Token(Token = "0x4000D33")]
	public int SpacesSinceLastCoinRun; //Field offset: 0x7C
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x4000D34")]
	public int CoinRunCount; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x4000D35")]
	public List<SavedBonusItem> BonusItems; //Field offset: 0x88
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x4000D36")]
	public bool HasSafteyNet; //Field offset: 0x90
	[FieldOffset(Offset = "0x94")]
	[Token(Token = "0x4000D37")]
	public Vector3 SafteyNetPosition; //Field offset: 0x94
	[FieldOffset(Offset = "0xA0")]
	[Token(Token = "0x4000D38")]
	public Quaternion SafteynetRotation; //Field offset: 0xA0

	[Address(RVA = "0x13118DC", Offset = "0x13118DC", Length = "0x8")]
	[Token(Token = "0x6000AB6")]
	public SavedPathElement() { }

	[Address(RVA = "0x13118E4", Offset = "0x13118E4", Length = "0x420")]
	[Token(Token = "0x6000AB7")]
	public SavedPathElement(PathElement e, PathDirection origin = 0) { }

	[Address(RVA = "0x1311D04", Offset = "0x1311D04", Length = "0x39C")]
	[Token(Token = "0x6000AB8")]
	public PathElement Apply(SavedGameController savedController, PathDirection origin = 0, PathElement parent = null) { }

}

