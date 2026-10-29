//Type is in global namespace

[AddComponentMenu("NGUI/Interaction/Button Sound FX")]
[Token(Token = "0x2000155")]
public class UIPlayFX : MonoBehaviour
{
	[Token(Token = "0x2000156")]
	internal enum Trigger
	{
		OnClick = 0,
		OnMouseOver = 1,
		OnMouseOut = 2,
		OnPress = 3,
		OnRelease = 4,
		OnEnable = 5,
	}

	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000BE8")]
	public Effects effect; //Field offset: 0x20
	[FieldOffset(Offset = "0x24")]
	[Token(Token = "0x4000BE9")]
	public Trigger trigger; //Field offset: 0x24
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000BEA")]
	public float volume; //Field offset: 0x28

	[Address(RVA = "0x1301AE8", Offset = "0x1301AE8", Length = "0x10")]
	[Token(Token = "0x60009E8")]
	public UIPlayFX() { }

	[Address(RVA = "0x13019A8", Offset = "0x13019A8", Length = "0x84")]
	[Token(Token = "0x60009E6")]
	private void OnClick() { }

	[Address(RVA = "0x1301A2C", Offset = "0x1301A2C", Length = "0xBC")]
	[Token(Token = "0x60009E7")]
	private void OnEnable() { }

	[Address(RVA = "0x1301878", Offset = "0x1301878", Length = "0x98")]
	[Token(Token = "0x60009E4")]
	private void OnHover(bool isOver) { }

	[Address(RVA = "0x1301910", Offset = "0x1301910", Length = "0x98")]
	[Token(Token = "0x60009E5")]
	private void OnPress(bool isPressed) { }

}

