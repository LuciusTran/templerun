//Type is in global namespace

[Token(Token = "0x2000118")]
public class EnableOther : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000993")]
	public UILabel Label; //Field offset: 0x20

	[Address(RVA = "0x12E28B8", Offset = "0x12E28B8", Length = "0x8")]
	[Token(Token = "0x600080B")]
	public EnableOther() { }

	[Address(RVA = "0x12E2830", Offset = "0x12E2830", Length = "0x88")]
	[Token(Token = "0x600080A")]
	private void OnClick() { }

}

