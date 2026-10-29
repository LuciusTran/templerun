//Type is in global namespace

[AddComponentMenu("NGUI/UI/Image Button")]
[ExecuteInEditMode]
[Token(Token = "0x2000031")]
public class UIImageButton : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x400012F")]
	public UISprite target; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000130")]
	public string normalSprite; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000131")]
	public string hoverSprite; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000132")]
	public string pressedSprite; //Field offset: 0x38

	[Address(RVA = "0x11F7BB4", Offset = "0x11F7BB4", Length = "0x8")]
	[Token(Token = "0x60000F1")]
	public UIImageButton() { }

	[Address(RVA = "0x11F7A3C", Offset = "0x11F7A3C", Length = "0xBC")]
	[Token(Token = "0x60000EF")]
	private void OnHover(bool isOver) { }

	[Address(RVA = "0x11F7AF8", Offset = "0x11F7AF8", Length = "0xBC")]
	[Token(Token = "0x60000F0")]
	private void OnPress(bool pressed) { }

	[Address(RVA = "0x11F79B0", Offset = "0x11F79B0", Length = "0x8C")]
	[Token(Token = "0x60000EE")]
	private void Start() { }

}

