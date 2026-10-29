//Type is in global namespace

[ExecuteInEditMode]
[Token(Token = "0x200013E")]
public class OffsetOnWidth : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000B05")]
	public UILabel Label; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000B06")]
	public bool OffsetToRight; //Field offset: 0x28

	[Address(RVA = "0x12F5404", Offset = "0x12F5404", Length = "0x8")]
	[Token(Token = "0x600092E")]
	public OffsetOnWidth() { }

	[Address(RVA = "0x12F5274", Offset = "0x12F5274", Length = "0x190")]
	[Token(Token = "0x600092D")]
	private void Update() { }

}

