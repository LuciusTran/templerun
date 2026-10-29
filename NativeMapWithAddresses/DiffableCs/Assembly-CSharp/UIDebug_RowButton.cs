//Type is in global namespace

[Token(Token = "0x2000116")]
public class UIDebug_RowButton : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x400098F")]
	public UILabel ButtonLabel; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000990")]
	public UIButtonMessage ButtonMessage; //Field offset: 0x28

	[Address(RVA = "0x12E2690", Offset = "0x12E2690", Length = "0x8")]
	[Token(Token = "0x6000806")]
	public UIDebug_RowButton() { }

}

