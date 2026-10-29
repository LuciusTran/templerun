namespace Imangi.Ad;

[Token(Token = "0x20002A2")]
public class ImangiAdServiceHandler_DMonkeyAds : ImangiAdServiceHandler
{

	[Address(RVA = "0x127A260", Offset = "0x127A260", Length = "0x4")]
	[Token(Token = "0x6001445")]
	public ImangiAdServiceHandler_DMonkeyAds() { }

	[Address(RVA = "0x127A258", Offset = "0x127A258", Length = "0x8")]
	[Token(Token = "0x6001444")]
	public virtual bool IsAvailableOnDevice(AdType inType, bool inAnyType = false) { }

}

