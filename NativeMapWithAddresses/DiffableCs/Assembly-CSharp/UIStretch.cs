//Type is in global namespace

[AddComponentMenu("NGUI/UI/Stretch")]
[ExecuteInEditMode]
[Token(Token = "0x2000083")]
public class UIStretch : MonoBehaviour
{
	[Token(Token = "0x2000084")]
	internal enum Style
	{
		None = 0,
		Horizontal = 1,
		Vertical = 2,
		Both = 3,
		BasedOnHeight = 4,
	}

	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000323")]
	public Camera uiCamera; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000324")]
	public Style style; //Field offset: 0x28
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x4000325")]
	public Vector2 relativeSize; //Field offset: 0x2C
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000326")]
	private Transform mTrans; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000327")]
	private UIRoot mRoot; //Field offset: 0x40

	[Address(RVA = "0x12A9A14", Offset = "0x12A9A14", Length = "0x58")]
	[Token(Token = "0x600037F")]
	public UIStretch() { }

	[Address(RVA = "0x12A9744", Offset = "0x12A9744", Length = "0xBC")]
	[Token(Token = "0x600037D")]
	private void OnEnable() { }

	[Address(RVA = "0x12A9800", Offset = "0x12A9800", Length = "0x214")]
	[Token(Token = "0x600037E")]
	private void Update() { }

}

