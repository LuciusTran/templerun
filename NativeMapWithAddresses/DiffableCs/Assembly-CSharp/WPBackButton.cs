//Type is in global namespace

[Token(Token = "0x2000162")]
public class WPBackButton : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000C47")]
	public bool backPressed; //Field offset: 0x20

	[Address(RVA = "0x1306664", Offset = "0x1306664", Length = "0x8")]
	[Token(Token = "0x6000A37")]
	public WPBackButton() { }

	[Address(RVA = "0x1306574", Offset = "0x1306574", Length = "0xF0")]
	[Token(Token = "0x6000A36")]
	private void LateUpdate() { }

	[Address(RVA = "0x13064D8", Offset = "0x13064D8", Length = "0x9C")]
	[Token(Token = "0x6000A35")]
	private void Update() { }

}

