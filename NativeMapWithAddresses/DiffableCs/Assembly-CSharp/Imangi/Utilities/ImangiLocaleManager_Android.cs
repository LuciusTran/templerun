namespace Imangi.Utilities;

[Token(Token = "0x20001CD")]
public class ImangiLocaleManager_Android : ImangiLocaleManager
{
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4001016")]
	private AndroidJavaClass ImangiLocaleClass; //Field offset: 0x40

	[Address(RVA = "0x121DDA4", Offset = "0x121DDA4", Length = "0xA8")]
	[Token(Token = "0x6000D11")]
	public ImangiLocaleManager_Android() { }

	[Address(RVA = "0x121DE4C", Offset = "0x121DE4C", Length = "0x138")]
	[Token(Token = "0x6000D12")]
	protected virtual ImangiLocaleInfo GetCurrentLocale_Internal(bool inRefresh) { }

}

