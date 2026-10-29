//Type is in global namespace

[AddComponentMenu("NGUI/Interaction/Drag Camera")]
[ExecuteInEditMode]
[Token(Token = "0x2000026")]
public class UIDragCamera : IgnoreTimeScale
{
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40000DA")]
	public UIDraggableCamera draggableCamera; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x40000DB")]
	private Component target; //Field offset: 0x38

	[Address(RVA = "0x11F3628", Offset = "0x11F3628", Length = "0x8")]
	[Token(Token = "0x60000B1")]
	public UIDragCamera() { }

	[Address(RVA = "0x11F2EB8", Offset = "0x11F2EB8", Length = "0x160")]
	[Token(Token = "0x60000AD")]
	private void Awake() { }

	[Address(RVA = "0x11F3248", Offset = "0x11F3248", Length = "0xC8")]
	[Token(Token = "0x60000AF")]
	private void OnDrag(Vector2 delta) { }

	[Address(RVA = "0x11F3018", Offset = "0x11F3018", Length = "0xB4")]
	[Token(Token = "0x60000AE")]
	private void OnPress(bool isPressed) { }

	[Address(RVA = "0x11F34E8", Offset = "0x11F34E8", Length = "0xC0")]
	[Token(Token = "0x60000B0")]
	private void OnScroll(float delta) { }

}

