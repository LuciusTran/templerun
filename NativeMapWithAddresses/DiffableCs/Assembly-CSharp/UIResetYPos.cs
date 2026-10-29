//Type is in global namespace

[Token(Token = "0x2000159")]
public class UIResetYPos : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000C13")]
	public float yPos; //Field offset: 0x20

	[Address(RVA = "0x130320C", Offset = "0x130320C", Length = "0x8")]
	[Token(Token = "0x60009F8")]
	public UIResetYPos() { }

	[Address(RVA = "0x130317C", Offset = "0x130317C", Length = "0x2C")]
	[Token(Token = "0x60009F6")]
	private void Awake() { }

	[Address(RVA = "0x13031A8", Offset = "0x13031A8", Length = "0x64")]
	[Token(Token = "0x60009F7")]
	private void OnEnable() { }

}

