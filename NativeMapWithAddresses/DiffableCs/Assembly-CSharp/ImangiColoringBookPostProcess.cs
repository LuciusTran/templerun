//Type is in global namespace

[Token(Token = "0x2000011")]
public class ImangiColoringBookPostProcess : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x400003A")]
	public float DepthSensitivity; //Field offset: 0x20
	[FieldOffset(Offset = "0x24")]
	[Token(Token = "0x400003B")]
	public float NormalSensitivity; //Field offset: 0x24
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x400003C")]
	public float SampleSize; //Field offset: 0x28

	[Address(RVA = "0x11ECC8C", Offset = "0x11ECC8C", Length = "0x18")]
	[Token(Token = "0x600003B")]
	public ImangiColoringBookPostProcess() { }

	[Address(RVA = "0x11ECC88", Offset = "0x11ECC88", Length = "0x4")]
	[Token(Token = "0x600003A")]
	private void Awake() { }

}

