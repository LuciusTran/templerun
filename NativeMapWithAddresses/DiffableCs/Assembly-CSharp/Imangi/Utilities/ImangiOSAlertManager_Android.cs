namespace Imangi.Utilities;

[Token(Token = "0x20001D1")]
public class ImangiOSAlertManager_Android : ImangiOSAlertManager
{
	[Token(Token = "0x400102A")]
	private const string ImangiAlertDialogClassPath = "com.imangi.imangiutilities.ImangiAndroidAlert"; //Field offset: 0x0
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4001029")]
	private AndroidJavaClass ImangiAlertDialogClass; //Field offset: 0x20

	[Address(RVA = "0x1220450", Offset = "0x1220450", Length = "0xB8")]
	[Token(Token = "0x6000D35")]
	public ImangiOSAlertManager_Android() { }

	[Address(RVA = "0x1220508", Offset = "0x1220508", Length = "0x224")]
	[Token(Token = "0x6000D36")]
	protected virtual void ShowAlert_Internal(string inTitle, string inMessage, String[] inButtons, bool inCancelable) { }

}

