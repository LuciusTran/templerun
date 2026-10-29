//Type is in global namespace

[Token(Token = "0x2000151")]
public class UILanguageSelectionRadioButtonChange : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000BD9")]
	public MonoBehaviour target; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000BDA")]
	public bool inverse; //Field offset: 0x28

	[Address(RVA = "0x130101C", Offset = "0x130101C", Length = "0x8")]
	[Token(Token = "0x60009D1")]
	public UILanguageSelectionRadioButtonChange() { }

	[Address(RVA = "0x1300E60", Offset = "0x1300E60", Length = "0x1BC")]
	[Token(Token = "0x60009D0")]
	public void OnLanguageChange(bool isActive) { }

}

