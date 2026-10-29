//Type is in global namespace

[AddComponentMenu("NGUI/Interaction/Drag Panel Contents")]
[ExecuteInEditMode]
[Token(Token = "0x200002D")]
public class UIDragPanelContents : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000118")]
	public UIDraggablePanel draggablePanel; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[HideInInspector]
	[SerializeField]
	[Token(Token = "0x4000119")]
	private UIPanel panel; //Field offset: 0x28

	[Address(RVA = "0x11F6E30", Offset = "0x11F6E30", Length = "0x8")]
	[Token(Token = "0x60000DE")]
	public UIDragPanelContents() { }

	[Address(RVA = "0x11F6A60", Offset = "0x11F6A60", Length = "0x11C")]
	[Token(Token = "0x60000D9")]
	private void Awake() { }

	[Address(RVA = "0x11F6CC4", Offset = "0x11F6CC4", Length = "0xAC")]
	[Token(Token = "0x60000DC")]
	private void OnDrag(Vector2 delta) { }

	[Address(RVA = "0x11F6C10", Offset = "0x11F6C10", Length = "0xB4")]
	[Token(Token = "0x60000DB")]
	private void OnPress(bool pressed) { }

	[Address(RVA = "0x11F6D70", Offset = "0x11F6D70", Length = "0xC0")]
	[Token(Token = "0x60000DD")]
	private void OnScroll(float delta) { }

	[Address(RVA = "0x11F6B7C", Offset = "0x11F6B7C", Length = "0x94")]
	[Token(Token = "0x60000DA")]
	private void Start() { }

}

