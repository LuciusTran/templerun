//Type is in global namespace

[Token(Token = "0x200012C")]
public class LocalizeIdolButton : LocalizeStringEvent
{
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000A96")]
	public UISprite IdolSprite; //Field offset: 0x40

	[Address(RVA = "0x12F143C", Offset = "0x12F143C", Length = "0x8")]
	[Token(Token = "0x60008E1")]
	public LocalizeIdolButton() { }

	[Address(RVA = "0x12F13F0", Offset = "0x12F13F0", Length = "0x4C")]
	[Token(Token = "0x60008E0")]
	protected virtual void UpdateString(string value) { }

}

