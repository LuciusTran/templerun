//Type is in global namespace

[Token(Token = "0x2000161")]
public class VCItem : MonoBehaviour
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000C42")]
	public UISprite IconSprite; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000C43")]
	public UILabel OfferLabel; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000C44")]
	public UILabel PriceLabel; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000C45")]
	private VCGUI GUI; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000C46")]
	private string Code; //Field offset: 0x40

	[Address(RVA = "0x13064D0", Offset = "0x13064D0", Length = "0x8")]
	[Token(Token = "0x6000A34")]
	public VCItem() { }

	[Address(RVA = "0x1305D04", Offset = "0x1305D04", Length = "0x4C")]
	[Token(Token = "0x6000A33")]
	public void IconLeft(float amount = -50) { }

	[Address(RVA = "0x130634C", Offset = "0x130634C", Length = "0x184")]
	[Token(Token = "0x6000A32")]
	private void OnClick() { }

	[Address(RVA = "0x13057D8", Offset = "0x13057D8", Length = "0x74")]
	[Token(Token = "0x6000A31")]
	public void Setup(VCGUI gui, string icon, string offer, string price, string code) { }

}

