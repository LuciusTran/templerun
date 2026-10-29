namespace Imangi.Utilities;

[Token(Token = "0x20001D0")]
public class ImangiOSActivityViewManager_Android : ImangiOSActivityViewManager
{
	[Token(Token = "0x4001028")]
	private const string ImangiActivityViewClassPath = "com.imangi.imangiutilities.ImangiAndroidActivityView"; //Field offset: 0x0
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4001027")]
	private AndroidJavaClass ImangiActivityViewClass; //Field offset: 0x20

	[Address(RVA = "0x121FFE4", Offset = "0x121FFE4", Length = "0xDC")]
	[Token(Token = "0x6000D32")]
	public ImangiOSActivityViewManager_Android() { }

	[Address(RVA = "0x1220328", Offset = "0x1220328", Length = "0x128")]
	[Token(Token = "0x6000D34")]
	protected virtual void HideActivityView_Internal(bool inAnimated) { }

	[Address(RVA = "0x12200C0", Offset = "0x12200C0", Length = "0x268")]
	[Token(Token = "0x6000D33")]
	protected virtual void ShowActivityView_Internal(string inTitle, string inMessage, float inBackgroundAlpha, bool inAnimated, bool inUserCancelable) { }

}

