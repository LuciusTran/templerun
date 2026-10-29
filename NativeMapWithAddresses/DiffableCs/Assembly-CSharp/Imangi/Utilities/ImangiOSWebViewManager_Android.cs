namespace Imangi.Utilities;

[Token(Token = "0x20001D4")]
public class ImangiOSWebViewManager_Android : ImangiOSWebViewManager
{
	[Token(Token = "0x400102E")]
	private const string ImangiWebViewClassPath = "com.imangi.imangiutilities.ImangiAndroidWebView"; //Field offset: 0x0
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x400102D")]
	private AndroidJavaClass ImangiWebViewClass; //Field offset: 0x20

	[Address(RVA = "0x12209F4", Offset = "0x12209F4", Length = "0xB8")]
	[Token(Token = "0x6000D3A")]
	public ImangiOSWebViewManager_Android() { }

	[Address(RVA = "0x1220AAC", Offset = "0x1220AAC", Length = "0x15C")]
	[Token(Token = "0x6000D3B")]
	protected virtual void ShowWebPage_Internal(string inURL, bool inShowControls) { }

}

