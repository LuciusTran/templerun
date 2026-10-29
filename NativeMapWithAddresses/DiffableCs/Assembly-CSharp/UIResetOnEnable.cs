//Type is in global namespace

[Token(Token = "0x2000138")]
public class UIResetOnEnable : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000ADF")]
	internal Vector3 StartPosition; //Field offset: 0x20

	[Address(RVA = "0x12F3DFC", Offset = "0x12F3DFC", Length = "0x8")]
	[Token(Token = "0x6000916")]
	public UIResetOnEnable() { }

	[Address(RVA = "0x12F3CE0", Offset = "0x12F3CE0", Length = "0x30")]
	[Token(Token = "0x6000914")]
	private void Awake() { }

	[Address(RVA = "0x12F3D10", Offset = "0x12F3D10", Length = "0xEC")]
	[Token(Token = "0x6000915")]
	private void OnEnable() { }

}

