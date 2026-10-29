//Type is in global namespace

[AddComponentMenu("NGUI/Interaction/Checkbox Controlled Component")]
[Token(Token = "0x2000024")]
public class UICheckboxControlledComponent : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40000D6")]
	public MonoBehaviour target; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40000D7")]
	public bool inverse; //Field offset: 0x28

	[Address(RVA = "0x11F2E08", Offset = "0x11F2E08", Length = "0x8")]
	[Token(Token = "0x60000AA")]
	public UICheckboxControlledComponent() { }

	[Address(RVA = "0x11F2D5C", Offset = "0x11F2D5C", Length = "0xAC")]
	[Token(Token = "0x60000A9")]
	private void OnActivate(bool isActive) { }

}

