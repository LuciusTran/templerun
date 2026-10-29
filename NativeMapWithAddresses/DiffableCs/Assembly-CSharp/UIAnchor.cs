//Type is in global namespace

[AddComponentMenu("NGUI/UI/Anchor")]
[ExecuteInEditMode]
[Token(Token = "0x2000069")]
public class UIAnchor : MonoBehaviour
{
	[Token(Token = "0x200006A")]
	internal enum Side
	{
		BottomLeft = 0,
		Left = 1,
		TopLeft = 2,
		Top = 3,
		TopRight = 4,
		Right = 5,
		BottomRight = 6,
		Bottom = 7,
		Center = 8,
	}

	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x400024D")]
	public Camera uiCamera; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x400024E")]
	public Side side; //Field offset: 0x28
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x400024F")]
	public bool halfPixelOffset; //Field offset: 0x2C
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000250")]
	public float depthOffset; //Field offset: 0x30
	[FieldOffset(Offset = "0x34")]
	[Token(Token = "0x4000251")]
	public Vector2 relativeOffset; //Field offset: 0x34
	[FieldOffset(Offset = "0x3C")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x4000252")]
	private bool stretchToFill; //Field offset: 0x3C
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000253")]
	private Transform mTrans; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4000254")]
	private bool mIsWindows; //Field offset: 0x48

	[Address(RVA = "0x120C6A4", Offset = "0x120C6A4", Length = "0x64")]
	[Token(Token = "0x6000296")]
	public UIAnchor() { }

	[Address(RVA = "0x120C2DC", Offset = "0x120C2DC", Length = "0x3C8")]
	[Token(Token = "0x6000295")]
	public void AnchorItem() { }

	[Address(RVA = "0x120C1DC", Offset = "0x120C1DC", Length = "0x100")]
	[Token(Token = "0x6000294")]
	private void OnEnable() { }

	[Address(RVA = "0x120C160", Offset = "0x120C160", Length = "0x7C")]
	[Token(Token = "0x6000293")]
	private void Start() { }

}

