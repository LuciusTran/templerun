//Type is in global namespace

[Token(Token = "0x200018B")]
public class SceneryManager : MonoBehaviour
{
	[Token(Token = "0x200018C")]
	internal enum SceneryType
	{
		kSceneryTypeUnknown = 0,
		kSceneryTypeTree = 1,
		kSceneryTypeRock = 2,
		kSceneryTypeCliff = 3,
		kSceneryTypeGroundPatch = 4,
		kSceneryTypeTempleHead = 5,
	}

	[Token(Token = "0x4000E2B")]
	public const int kSceneryGridCountX = 19; //Field offset: 0x0
	[Token(Token = "0x4000E2C")]
	public const int kSceneryGridCountY = 19; //Field offset: 0x0
	[Token(Token = "0x4000E2D")]
	public static SceneryManager Instance; //Field offset: 0x0
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000E26")]
	public DynamicElement DynamicElementPrefab; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000E27")]
	public int LastGridX; //Field offset: 0x28
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x4000E28")]
	public int LastGridY; //Field offset: 0x2C
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000E29")]
	public float ObjectDensity; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000E2A")]
	public SceneryElement[] SceneryElements; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000E2E")]
	public Shader fog; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4000E2F")]
	private int gridX; //Field offset: 0x48
	[FieldOffset(Offset = "0x4C")]
	[Token(Token = "0x4000E30")]
	private int gridY; //Field offset: 0x4C
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000E31")]
	private int minGridX; //Field offset: 0x50
	[FieldOffset(Offset = "0x54")]
	[Token(Token = "0x4000E32")]
	private int minGridY; //Field offset: 0x54
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000E33")]
	private int maxGridX; //Field offset: 0x58
	[FieldOffset(Offset = "0x5C")]
	[Token(Token = "0x4000E34")]
	private int maxGridY; //Field offset: 0x5C
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000E35")]
	private Boolean[2] GridMask; //Field offset: 0x60

	[Address(RVA = "0x13226C0", Offset = "0x13226C0", Length = "0x74")]
	[Token(Token = "0x6000BAD")]
	public SceneryManager() { }

	[Address(RVA = "0x1321AD4", Offset = "0x1321AD4", Length = "0x64")]
	[Token(Token = "0x6000BA4")]
	private void ClearMask() { }

	[Address(RVA = "0x13221B8", Offset = "0x13221B8", Length = "0x13C")]
	[Token(Token = "0x6000BA9")]
	private void DumpMask() { }

	[Address(RVA = "0x1321FF4", Offset = "0x1321FF4", Length = "0x1C4")]
	[Token(Token = "0x6000BA8")]
	private void FillMask(PathElement element, PathDirection origin, bool isRootNode) { }

	[Address(RVA = "0x13223BC", Offset = "0x13223BC", Length = "0x304")]
	[Token(Token = "0x6000BAC")]
	public SceneryElement GetSceneryElementIntersectingSphere(Vector3 point, float radius) { }

	[Address(RVA = "0x1321C10", Offset = "0x1321C10", Length = "0xE4")]
	[Token(Token = "0x6000BA6")]
	private bool MaskOccupied(Vector2 gridPoint) { }

	[Address(RVA = "0x1321CF4", Offset = "0x1321CF4", Length = "0x298")]
	[Token(Token = "0x6000BA7")]
	private bool MaskOccupiedTest(Vector2 gridPoint, GameObject go) { }

	[Address(RVA = "0x132234C", Offset = "0x132234C", Length = "0x70")]
	[Token(Token = "0x6000BAA")]
	public void Reset() { }

	[Address(RVA = "0x1321B38", Offset = "0x1321B38", Length = "0xD8")]
	[Token(Token = "0x6000BA5")]
	private void SetMaskForPoint(Vector3 point) { }

	[Address(RVA = "0x1320E28", Offset = "0x1320E28", Length = "0x414")]
	[Token(Token = "0x6000BAB")]
	public void Simulate(PathElement pathRoot, bool checkPathOverlap) { }

	[Address(RVA = "0x1321580", Offset = "0x1321580", Length = "0x4EC")]
	[Token(Token = "0x6000BA3")]
	private void Start() { }

}

