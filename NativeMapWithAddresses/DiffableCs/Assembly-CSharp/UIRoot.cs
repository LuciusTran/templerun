//Type is in global namespace

[AddComponentMenu("NGUI/UI/Root")]
[ExecuteInEditMode]
[Token(Token = "0x200007F")]
public class UIRoot : MonoBehaviour
{
	[Token(Token = "0x400030E")]
	private static List<UIRoot> mRoots; //Field offset: 0x0
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x400030F")]
	public bool automatic; //Field offset: 0x20
	[FieldOffset(Offset = "0x24")]
	[Token(Token = "0x4000310")]
	public int manualHeight; //Field offset: 0x24
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000311")]
	private Transform mTrans; //Field offset: 0x28

	[Address(RVA = "0x12A6E64", Offset = "0x12A6E64", Length = "0x8C")]
	[Token(Token = "0x600035C")]
	private static UIRoot() { }

	[Address(RVA = "0x12A6E4C", Offset = "0x12A6E4C", Length = "0x18")]
	[Token(Token = "0x600035B")]
	public UIRoot() { }

	[Address(RVA = "0x12A674C", Offset = "0x12A674C", Length = "0xCC")]
	[Token(Token = "0x6000355")]
	private void Awake() { }

	[Address(RVA = "0x12A6B70", Offset = "0x12A6B70", Length = "0x138")]
	[Token(Token = "0x6000359")]
	public static void Broadcast(string funcName) { }

	[Address(RVA = "0x12A6CA8", Offset = "0x12A6CA8", Length = "0x1A4")]
	[Token(Token = "0x600035A")]
	public static void Broadcast(string funcName, object param) { }

	[Address(RVA = "0x12A6818", Offset = "0x12A6818", Length = "0x80")]
	[Token(Token = "0x6000356")]
	private void OnDestroy() { }

	[Address(RVA = "0x12A6898", Offset = "0x12A6898", Length = "0x178")]
	[Token(Token = "0x6000357")]
	private void Start() { }

	[Address(RVA = "0x12A6A10", Offset = "0x12A6A10", Length = "0x160")]
	[Token(Token = "0x6000358")]
	private void Update() { }

}

