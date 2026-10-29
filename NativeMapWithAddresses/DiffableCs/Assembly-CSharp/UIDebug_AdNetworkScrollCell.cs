//Type is in global namespace

[Token(Token = "0x2000114")]
public class UIDebug_AdNetworkScrollCell : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x400097E")]
	public AdService Service; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x400097F")]
	public UILabel AdNetwork_Label; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000980")]
	public UICheckbox Service_Enabled; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000981")]
	private UIDebug_AdNetworkGroup _AdNetworkGroup; //Field offset: 0x38

	[Address(RVA = "0x12E2318", Offset = "0x12E2318", Length = "0x10")]
	[Token(Token = "0x60007FA")]
	public UIDebug_AdNetworkScrollCell() { }

}

