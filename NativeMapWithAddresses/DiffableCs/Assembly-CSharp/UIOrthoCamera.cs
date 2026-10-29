//Type is in global namespace

[AddComponentMenu("NGUI/UI/Orthographic Camera")]
[ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
[Token(Token = "0x200007C")]
public class UIOrthoCamera : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40002E7")]
	private Camera mCam; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40002E8")]
	private Transform mTrans; //Field offset: 0x28

	[Address(RVA = "0x12A30E4", Offset = "0x12A30E4", Length = "0x8")]
	[Token(Token = "0x600032C")]
	public UIOrthoCamera() { }

	[Address(RVA = "0x12A2F1C", Offset = "0x12A2F1C", Length = "0x78")]
	[Token(Token = "0x600032A")]
	private void Start() { }

	[Address(RVA = "0x12A2F94", Offset = "0x12A2F94", Length = "0x150")]
	[Token(Token = "0x600032B")]
	private void Update() { }

}

