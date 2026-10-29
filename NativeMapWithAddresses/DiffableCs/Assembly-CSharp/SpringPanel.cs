//Type is in global namespace

[AddComponentMenu("NGUI/Internal/Spring Panel")]
[RequireComponent(typeof(UIPanel))]
[Token(Token = "0x200004B")]
public class SpringPanel : IgnoreTimeScale
{
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x40001BB")]
	public Vector3 target; //Field offset: 0x2C
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x40001BC")]
	public float strength; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x40001BD")]
	private UIPanel mPanel; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x40001BE")]
	private Transform mTrans; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x40001BF")]
	private float mThreshold; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x40001C0")]
	private UIDraggablePanel mDrag; //Field offset: 0x58

	[Address(RVA = "0x12047CC", Offset = "0x12047CC", Length = "0x68")]
	[Token(Token = "0x60001CD")]
	public SpringPanel() { }

	[Address(RVA = "0x12046C0", Offset = "0x12046C0", Length = "0x10C")]
	[Token(Token = "0x60001CC")]
	public static SpringPanel Begin(GameObject go, Vector3 pos, float strength) { }

	[Address(RVA = "0x12043B8", Offset = "0x12043B8", Length = "0x8C")]
	[Token(Token = "0x60001CA")]
	private void Start() { }

	[Address(RVA = "0x1204444", Offset = "0x1204444", Length = "0x27C")]
	[Token(Token = "0x60001CB")]
	private void Update() { }

}

