//Type is in global namespace

[AddComponentMenu("NGUI/Interaction/Checkbox Controlled Object")]
[Token(Token = "0x2000025")]
public class UICheckboxControlledObject : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40000D8")]
	public GameObject target; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40000D9")]
	public bool inverse; //Field offset: 0x28

	[Address(RVA = "0x11F2EB0", Offset = "0x11F2EB0", Length = "0x8")]
	[Token(Token = "0x60000AC")]
	public UICheckboxControlledObject() { }

	[Address(RVA = "0x11F2E10", Offset = "0x11F2E10", Length = "0xA0")]
	[Token(Token = "0x60000AB")]
	private void OnActivate(bool isActive) { }

}

