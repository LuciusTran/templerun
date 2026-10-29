//Type is in global namespace

[AddComponentMenu("NGUI/Interaction/Button Sound")]
[Token(Token = "0x2000020")]
public class UIButtonSound : MonoBehaviour
{
	[Token(Token = "0x2000021")]
	internal enum Trigger
	{
		OnClick = 0,
		OnMouseOver = 1,
		OnMouseOut = 2,
		OnPress = 3,
		OnRelease = 4,
	}

	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40000B3")]
	public AudioClip audioClip; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40000B4")]
	public Trigger trigger; //Field offset: 0x28
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x40000B5")]
	public float volume; //Field offset: 0x2C
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40000B6")]
	public float pitch; //Field offset: 0x30

	[Address(RVA = "0x11F215C", Offset = "0x11F215C", Length = "0x10")]
	[Token(Token = "0x6000098")]
	public UIButtonSound() { }

	[Address(RVA = "0x11F2124", Offset = "0x11F2124", Length = "0x38")]
	[Token(Token = "0x6000097")]
	private void OnClick() { }

	[Address(RVA = "0x11F2074", Offset = "0x11F2074", Length = "0x58")]
	[Token(Token = "0x6000095")]
	private void OnHover(bool isOver) { }

	[Address(RVA = "0x11F20CC", Offset = "0x11F20CC", Length = "0x58")]
	[Token(Token = "0x6000096")]
	private void OnPress(bool isPressed) { }

}

