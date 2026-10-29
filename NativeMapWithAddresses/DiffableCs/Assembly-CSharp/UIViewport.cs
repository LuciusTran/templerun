//Type is in global namespace

[AddComponentMenu("NGUI/UI/Viewport Camera")]
[ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
[Token(Token = "0x200008B")]
public class UIViewport : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x400034A")]
	public Camera sourceCamera; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x400034B")]
	public Transform topLeft; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x400034C")]
	public Transform bottomRight; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x400034D")]
	public float fullSize; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x400034E")]
	private Camera mCam; //Field offset: 0x40

	[Address(RVA = "0x12ABC54", Offset = "0x12ABC54", Length = "0x10")]
	[Token(Token = "0x600039B")]
	public UIViewport() { }

	[Address(RVA = "0x12ABA48", Offset = "0x12ABA48", Length = "0x20C")]
	[Token(Token = "0x600039A")]
	private void LateUpdate() { }

	[Address(RVA = "0x12AB9A8", Offset = "0x12AB9A8", Length = "0xA0")]
	[Token(Token = "0x6000399")]
	private void Start() { }

}

