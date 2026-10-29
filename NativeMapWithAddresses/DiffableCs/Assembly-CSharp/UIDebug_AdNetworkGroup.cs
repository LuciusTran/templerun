//Type is in global namespace

[Token(Token = "0x2000113")]
public class UIDebug_AdNetworkGroup : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x400097A")]
	private List<AdService> _AdNetworkServices; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x400097B")]
	public UIGrid Grid; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x400097C")]
	public GameObject AdNetworkScrollCellPrefab; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x400097D")]
	private UIDraggablePanel _ScrollPanel; //Field offset: 0x38

	[Address(RVA = "0x12E229C", Offset = "0x12E229C", Length = "0x7C")]
	[Token(Token = "0x60007F9")]
	public UIDebug_AdNetworkGroup() { }

}

