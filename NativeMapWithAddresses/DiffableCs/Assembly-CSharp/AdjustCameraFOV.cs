//Type is in global namespace

[Token(Token = "0x2000002")]
public class AdjustCameraFOV : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000001")]
	public Camera mainCamera; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000002")]
	public float defaultFOV; //Field offset: 0x28
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x4000003")]
	public float fovMultiplier; //Field offset: 0x2C

	[Address(RVA = "0x11EA3F0", Offset = "0x11EA3F0", Length = "0x14")]
	[Token(Token = "0x6000003")]
	public AdjustCameraFOV() { }

	[Address(RVA = "0x11EA2FC", Offset = "0x11EA2FC", Length = "0xF4")]
	[Token(Token = "0x6000002")]
	private void AdjustFOVBasedOnResolution() { }

	[Address(RVA = "0x11EA2F8", Offset = "0x11EA2F8", Length = "0x4")]
	[Token(Token = "0x6000001")]
	private void Start() { }

}

