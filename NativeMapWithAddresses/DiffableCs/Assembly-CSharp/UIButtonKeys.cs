//Type is in global namespace

[AddComponentMenu("NGUI/Interaction/Button Keys")]
[RequireComponent(typeof(Collider))]
[Token(Token = "0x2000019")]
public class UIButtonKeys : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x400007C")]
	public bool startsSelected; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x400007D")]
	public UIButtonKeys selectOnClick; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x400007E")]
	public UIButtonKeys selectOnUp; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x400007F")]
	public UIButtonKeys selectOnDown; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000080")]
	public UIButtonKeys selectOnLeft; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4000081")]
	public UIButtonKeys selectOnRight; //Field offset: 0x48

	[Address(RVA = "0x11F0A94", Offset = "0x11F0A94", Length = "0x8")]
	[Token(Token = "0x600006F")]
	public UIButtonKeys() { }

	[Address(RVA = "0x11F09C8", Offset = "0x11F09C8", Length = "0xCC")]
	[Token(Token = "0x600006E")]
	private void OnClick() { }

	[Address(RVA = "0x11F06D0", Offset = "0x11F06D0", Length = "0x2F8")]
	[Token(Token = "0x600006D")]
	private void OnKey(KeyCode key) { }

	[Address(RVA = "0x11F0560", Offset = "0x11F0560", Length = "0x170")]
	[Token(Token = "0x600006C")]
	private void Start() { }

}

