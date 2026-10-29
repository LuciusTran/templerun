//Type is in global namespace

[Token(Token = "0x2000129")]
public class LableAutoSize : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000A84")]
	public string OrignalLable; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000A85")]
	public UILabel Label; //Field offset: 0x28

	[Address(RVA = "0x12F0A3C", Offset = "0x12F0A3C", Length = "0x8")]
	[Token(Token = "0x60008CD")]
	public LableAutoSize() { }

	[Address(RVA = "0x12F0898", Offset = "0x12F0898", Length = "0xC4")]
	[Token(Token = "0x60008CB")]
	private void Start() { }

	[Address(RVA = "0x12F095C", Offset = "0x12F095C", Length = "0xE0")]
	[Token(Token = "0x60008CC")]
	private void Update() { }

}

