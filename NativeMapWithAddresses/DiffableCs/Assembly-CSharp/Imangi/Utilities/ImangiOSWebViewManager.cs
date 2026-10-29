namespace Imangi.Utilities;

[Token(Token = "0x200020B")]
public class ImangiOSWebViewManager : MonoBehaviour
{
	[CompilerGenerated]
	[Token(Token = "0x40010B8")]
	private static Action WebViewClosedEvent; //Field offset: 0x0
	[Token(Token = "0x40010B9")]
	protected static ImangiOSWebViewManager Instance; //Field offset: 0x8
	[Token(Token = "0x40010BA")]
	protected static GameObject OSWebViewGameObj; //Field offset: 0x10
	[Token(Token = "0x40010BB")]
	public static bool ImangiOSWebView_VerboseLogging; //Field offset: 0x18

	[Token(Token = "0x14000018")]
	public static event Action WebViewClosedEvent
	{
		[Address(RVA = "0x1236D3C", Offset = "0x1236D3C", Length = "0xB8")]
		[CompilerGenerated]
		[Token(Token = "0x6000EE0")]
		 add { } //Length: 184
		[Address(RVA = "0x1236DF4", Offset = "0x1236DF4", Length = "0xB8")]
		[CompilerGenerated]
		[Token(Token = "0x6000EE1")]
		 remove { } //Length: 184
	}

	[Address(RVA = "0x12372C0", Offset = "0x12372C0", Length = "0x8")]
	[Token(Token = "0x6000EE7")]
	public ImangiOSWebViewManager() { }

	[Address(RVA = "0x1236D3C", Offset = "0x1236D3C", Length = "0xB8")]
	[CompilerGenerated]
	[Token(Token = "0x6000EE0")]
	public static void add_WebViewClosedEvent(Action value) { }

	[Address(RVA = "0x1236EB0", Offset = "0x1236EB0", Length = "0x1D4")]
	[Token(Token = "0x6000EE3")]
	public static ImangiOSWebViewManager GetInstance() { }

	[Address(RVA = "0x1236EAC", Offset = "0x1236EAC", Length = "0x4")]
	[Token(Token = "0x6000EE2")]
	public static void ImangiOSWebView_LogMessage(string inMessage, Object[] paramList) { }

	[Address(RVA = "0x12371EC", Offset = "0x12371EC", Length = "0xD4")]
	[Token(Token = "0x6000EE6")]
	public void OnWebViewClosed(string inMessage) { }

	[Address(RVA = "0x1236DF4", Offset = "0x1236DF4", Length = "0xB8")]
	[CompilerGenerated]
	[Token(Token = "0x6000EE1")]
	public static void remove_WebViewClosedEvent(Action value) { }

	[Address(RVA = "0x1237084", Offset = "0x1237084", Length = "0x164")]
	[Token(Token = "0x6000EE4")]
	public static void ShowWebPage(string inURL, bool inShowControls) { }

	[Address(RVA = "0x12371E8", Offset = "0x12371E8", Length = "0x4")]
	[Token(Token = "0x6000EE5")]
	protected override void ShowWebPage_Internal(string inURL, bool inShowControls) { }

}

