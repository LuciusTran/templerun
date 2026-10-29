//Type is in global namespace

[AddComponentMenu("NGUI/Interaction/Language Selection")]
[RequireComponent(typeof(UIPopupList))]
[Token(Token = "0x2000016")]
public class LanguageSelection : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000073")]
	private UIPopupList mList; //Field offset: 0x20

	[Address(RVA = "0x11EFC74", Offset = "0x11EFC74", Length = "0x8")]
	[Token(Token = "0x600005D")]
	public LanguageSelection() { }

	[Address(RVA = "0x11EFBDC", Offset = "0x11EFBDC", Length = "0x98")]
	[Token(Token = "0x600005C")]
	private void OnLanguageSelection(string language) { }

	[Address(RVA = "0x11EF798", Offset = "0x11EF798", Length = "0x98")]
	[Token(Token = "0x600005A")]
	private void Start() { }

	[Address(RVA = "0x11EF830", Offset = "0x11EF830", Length = "0x220")]
	[Token(Token = "0x600005B")]
	private void UpdateList() { }

}

