//Type is in global namespace

[Token(Token = "0x2000154")]
public class UINoAdsButton : MonoBehaviour
{

	[Address(RVA = "0x1301870", Offset = "0x1301870", Length = "0x8")]
	[Token(Token = "0x60009E3")]
	public UINoAdsButton() { }

	[Address(RVA = "0x13014C4", Offset = "0x13014C4", Length = "0x2A0")]
	[Token(Token = "0x60009E1")]
	public void OnNoAdsClicked() { }

	[Address(RVA = "0x1301764", Offset = "0x1301764", Length = "0x10C")]
	[Token(Token = "0x60009E2")]
	public void OnNoAdsPurchaseSuccess(string inProductID) { }

	[Address(RVA = "0x1301414", Offset = "0x1301414", Length = "0xB0")]
	[Token(Token = "0x60009E0")]
	public void Show() { }

}

