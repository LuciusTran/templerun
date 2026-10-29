//Type is in global namespace

[AddComponentMenu("NGUI/UI/Input (Saved)")]
[Token(Token = "0x2000078")]
public class UIInputSaved : UIInput
{
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x40002C8")]
	public string playerPrefsField; //Field offset: 0x88

	[Address(RVA = "0x12A0D34", Offset = "0x12A0D34", Length = "0x4")]
	[Token(Token = "0x6000304")]
	public UIInputSaved() { }

	[Address(RVA = "0x12A0D00", Offset = "0x12A0D00", Length = "0x34")]
	[Token(Token = "0x6000303")]
	private void OnApplicationQuit() { }

	[Address(RVA = "0x12A0CB0", Offset = "0x12A0CB0", Length = "0x50")]
	[Token(Token = "0x6000302")]
	private void Start() { }

}

