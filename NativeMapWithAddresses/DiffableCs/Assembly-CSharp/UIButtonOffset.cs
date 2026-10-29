//Type is in global namespace

[AddComponentMenu("NGUI/Interaction/Button Offset")]
[Token(Token = "0x200001C")]
public class UIButtonOffset : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x400008F")]
	public Transform tweenTarget; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000090")]
	public Vector3 hover; //Field offset: 0x28
	[FieldOffset(Offset = "0x34")]
	[Token(Token = "0x4000091")]
	public Vector3 pressed; //Field offset: 0x34
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000092")]
	public float duration; //Field offset: 0x40
	[FieldOffset(Offset = "0x44")]
	[Token(Token = "0x4000093")]
	private Vector3 mPos; //Field offset: 0x44
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000094")]
	private bool mInitDone; //Field offset: 0x50
	[FieldOffset(Offset = "0x51")]
	[Token(Token = "0x4000095")]
	private bool mStarted; //Field offset: 0x51
	[FieldOffset(Offset = "0x52")]
	[Token(Token = "0x4000096")]
	private bool mHighlighted; //Field offset: 0x52

	[Address(RVA = "0x11F11A8", Offset = "0x11F11A8", Length = "0x6C")]
	[Token(Token = "0x600007E")]
	public UIButtonOffset() { }

	[Address(RVA = "0x11F0FF0", Offset = "0x11F0FF0", Length = "0xA0")]
	[Token(Token = "0x600007B")]
	private void Init() { }

	[Address(RVA = "0x11F0F04", Offset = "0x11F0F04", Length = "0xEC")]
	[Token(Token = "0x600007A")]
	private void OnDisable() { }

	[Address(RVA = "0x11F0DE4", Offset = "0x11F0DE4", Length = "0x94")]
	[Token(Token = "0x6000079")]
	private void OnEnable() { }

	[Address(RVA = "0x11F0E78", Offset = "0x11F0E78", Length = "0x8C")]
	[Token(Token = "0x600007D")]
	private void OnHover(bool isOver) { }

	[Address(RVA = "0x11F1090", Offset = "0x11F1090", Length = "0x118")]
	[Token(Token = "0x600007C")]
	private void OnPress(bool isPressed) { }

	[Address(RVA = "0x11F0DD8", Offset = "0x11F0DD8", Length = "0xC")]
	[Token(Token = "0x6000078")]
	private void Start() { }

}

