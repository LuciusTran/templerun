//Type is in global namespace

[ExecuteInEditMode]
[Token(Token = "0x200013A")]
public class UIStackSpacing : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000AEB")]
	public UIWidget SpacingWidget; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000AEC")]
	public float ExtraPadding; //Field offset: 0x28
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x4000AED")]
	private float OldExtraPadding; //Field offset: 0x2C

	[Address(RVA = "0x12F4148", Offset = "0x12F4148", Length = "0x8")]
	[Token(Token = "0x600091C")]
	public UIStackSpacing() { }

	[Address(RVA = "0x12F3FF4", Offset = "0x12F3FF4", Length = "0x11C")]
	[Token(Token = "0x600091A")]
	private void RepositionNow(GameObject thing) { }

	[Address(RVA = "0x12F4110", Offset = "0x12F4110", Length = "0x38")]
	[Token(Token = "0x600091B")]
	private void Update() { }

}

