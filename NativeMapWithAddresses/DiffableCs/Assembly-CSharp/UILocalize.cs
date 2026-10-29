//Type is in global namespace

[AddComponentMenu("NGUI/UI/Localize")]
[RequireComponent(typeof(UIWidget))]
[Token(Token = "0x200007B")]
public class UILocalize : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40002E4")]
	public string key; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40002E5")]
	private string mLanguage; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40002E6")]
	private bool mStarted; //Field offset: 0x30

	[Address(RVA = "0x12A2F14", Offset = "0x12A2F14", Length = "0x8")]
	[Token(Token = "0x6000329")]
	public UILocalize() { }

	[Address(RVA = "0x12A2DE4", Offset = "0x12A2DE4", Length = "0x98")]
	[Token(Token = "0x6000327")]
	private void OnEnable() { }

	[Address(RVA = "0x12A2AC4", Offset = "0x12A2AC4", Length = "0x284")]
	[Token(Token = "0x6000326")]
	private void OnLocalize(Localization loc) { }

	[Address(RVA = "0x12A2E7C", Offset = "0x12A2E7C", Length = "0x98")]
	[Token(Token = "0x6000328")]
	private void Start() { }

}

