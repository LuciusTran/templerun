//Type is in global namespace

[Token(Token = "0x200018D")]
public class StoreItemsAvaialble : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000E3D")]
	public UILabel Text; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000E3E")]
	public UISprite Plate; //Field offset: 0x28

	[Address(RVA = "0x1322890", Offset = "0x1322890", Length = "0x8")]
	[Token(Token = "0x6000BAF")]
	public StoreItemsAvaialble() { }

	[Address(RVA = "0x1322734", Offset = "0x1322734", Length = "0x15C")]
	[Token(Token = "0x6000BAE")]
	private void OnEnable() { }

}

