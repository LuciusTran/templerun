//Type is in global namespace

[AddComponentMenu("NGUI/Interaction/Button Message 2")]
[Token(Token = "0x2000134")]
public class UIButtonMessage2 : MonoBehaviour
{
	[Token(Token = "0x2000135")]
	internal enum Trigger
	{
		OnClick = 0,
		OnMouseOver = 1,
		OnMouseOut = 2,
		OnPress = 3,
		OnRelease = 4,
	}

	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000ACF")]
	public GameObject target; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000AD0")]
	public string functionName; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000AD1")]
	public string EnableComponent; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000AD2")]
	public Trigger trigger; //Field offset: 0x38
	[FieldOffset(Offset = "0x3C")]
	[Token(Token = "0x4000AD3")]
	public bool includeChildren; //Field offset: 0x3C

	[Address(RVA = "0x12F3AD8", Offset = "0x12F3AD8", Length = "0x8")]
	[Token(Token = "0x600090D")]
	public UIButtonMessage2() { }

	[Address(RVA = "0x12F3AC8", Offset = "0x12F3AC8", Length = "0x10")]
	[Token(Token = "0x600090B")]
	private void OnClick() { }

	[Address(RVA = "0x12F3870", Offset = "0x12F3870", Length = "0x20")]
	[Token(Token = "0x6000909")]
	private void OnHover(bool isOver) { }

	[Address(RVA = "0x12F3AA8", Offset = "0x12F3AA8", Length = "0x20")]
	[Token(Token = "0x600090A")]
	private void OnPress(bool isPressed) { }

	[Address(RVA = "0x12F3890", Offset = "0x12F3890", Length = "0x218")]
	[Token(Token = "0x600090C")]
	private void Send() { }

}

