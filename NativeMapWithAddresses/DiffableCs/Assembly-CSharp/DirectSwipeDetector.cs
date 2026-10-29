//Type is in global namespace

[Token(Token = "0x2000117")]
public class DirectSwipeDetector : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000991")]
	public TouchInput IManager; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000992")]
	private bool isPressed; //Field offset: 0x28

	[Address(RVA = "0x12E2828", Offset = "0x12E2828", Length = "0x8")]
	[Token(Token = "0x6000809")]
	public DirectSwipeDetector() { }

	[Address(RVA = "0x12E2698", Offset = "0x12E2698", Length = "0x4")]
	[Token(Token = "0x6000807")]
	private void Start() { }

	[Address(RVA = "0x12E269C", Offset = "0x12E269C", Length = "0x18C")]
	[Token(Token = "0x6000808")]
	private void Update() { }

}

