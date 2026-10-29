//Type is in global namespace

[AddComponentMenu("NGUI/Interaction/Forward Events")]
[Token(Token = "0x200002E")]
public class UIForwardEvents : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x400011A")]
	public GameObject target; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x400011B")]
	public bool onHover; //Field offset: 0x28
	[FieldOffset(Offset = "0x29")]
	[Token(Token = "0x400011C")]
	public bool onPress; //Field offset: 0x29
	[FieldOffset(Offset = "0x2A")]
	[Token(Token = "0x400011D")]
	public bool onClick; //Field offset: 0x2A
	[FieldOffset(Offset = "0x2B")]
	[Token(Token = "0x400011E")]
	public bool onDoubleClick; //Field offset: 0x2B
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x400011F")]
	public bool onSelect; //Field offset: 0x2C
	[FieldOffset(Offset = "0x2D")]
	[Token(Token = "0x4000120")]
	public bool onDrag; //Field offset: 0x2D
	[FieldOffset(Offset = "0x2E")]
	[Token(Token = "0x4000121")]
	public bool onDrop; //Field offset: 0x2E
	[FieldOffset(Offset = "0x2F")]
	[Token(Token = "0x4000122")]
	public bool onInput; //Field offset: 0x2F
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000123")]
	public bool onSubmit; //Field offset: 0x30

	[Address(RVA = "0x11F7500", Offset = "0x11F7500", Length = "0x8")]
	[Token(Token = "0x60000E8")]
	public UIForwardEvents() { }

	[Address(RVA = "0x11F6FF0", Offset = "0x11F6FF0", Length = "0xA8")]
	[Token(Token = "0x60000E1")]
	private void OnClick() { }

	[Address(RVA = "0x11F7098", Offset = "0x11F7098", Length = "0xA8")]
	[Token(Token = "0x60000E2")]
	private void OnDoubleClick() { }

	[Address(RVA = "0x11F721C", Offset = "0x11F721C", Length = "0xDC")]
	[Token(Token = "0x60000E4")]
	private void OnDrag(Vector2 delta) { }

	[Address(RVA = "0x11F72F8", Offset = "0x11F72F8", Length = "0xB0")]
	[Token(Token = "0x60000E5")]
	private void OnDrop(GameObject go) { }

	[Address(RVA = "0x11F6E38", Offset = "0x11F6E38", Length = "0xDC")]
	[Token(Token = "0x60000DF")]
	private void OnHover(bool isOver) { }

	[Address(RVA = "0x11F73A8", Offset = "0x11F73A8", Length = "0xB0")]
	[Token(Token = "0x60000E6")]
	private void OnInput(string text) { }

	[Address(RVA = "0x11F6F14", Offset = "0x11F6F14", Length = "0xDC")]
	[Token(Token = "0x60000E0")]
	private void OnPress(bool pressed) { }

	[Address(RVA = "0x11F7140", Offset = "0x11F7140", Length = "0xDC")]
	[Token(Token = "0x60000E3")]
	private void OnSelect(bool selected) { }

	[Address(RVA = "0x11F7458", Offset = "0x11F7458", Length = "0xA8")]
	[Token(Token = "0x60000E7")]
	private void OnSubmit() { }

}

