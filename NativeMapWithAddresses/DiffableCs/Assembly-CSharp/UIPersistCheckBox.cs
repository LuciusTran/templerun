//Type is in global namespace

[Token(Token = "0x2000136")]
public class UIPersistCheckBox : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000ADA")]
	public string Key; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000ADB")]
	public bool DefaultValue; //Field offset: 0x28
	[FieldOffset(Offset = "0x29")]
	[Token(Token = "0x4000ADC")]
	public bool Opposite; //Field offset: 0x29

	[Address(RVA = "0x12F3BC0", Offset = "0x12F3BC0", Length = "0x8")]
	[Token(Token = "0x6000910")]
	public UIPersistCheckBox() { }

	[Address(RVA = "0x12F3AE0", Offset = "0x12F3AE0", Length = "0x94")]
	[Token(Token = "0x600090E")]
	private void Awake() { }

	[Address(RVA = "0x12F3B74", Offset = "0x12F3B74", Length = "0x4C")]
	[Token(Token = "0x600090F")]
	private void OnActivate(bool check) { }

}

