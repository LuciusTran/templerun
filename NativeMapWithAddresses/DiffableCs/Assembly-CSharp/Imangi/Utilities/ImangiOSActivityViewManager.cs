namespace Imangi.Utilities;

[Token(Token = "0x2000206")]
public class ImangiOSActivityViewManager : MonoBehaviour
{
	[Token(Token = "0x40010A2")]
	protected static ImangiOSActivityViewManager Instance; //Field offset: 0x0
	[Token(Token = "0x40010A3")]
	protected static GameObject OSActivityViewGameObj; //Field offset: 0x8
	[Token(Token = "0x40010A4")]
	public static bool ImangiOSActivityView_VerboseLogging; //Field offset: 0x10
	[Token(Token = "0x40010A5")]
	public static float OSActivityViewDefaultBackgroundAlpha; //Field offset: 0x14

	[Address(RVA = "0x12358CC", Offset = "0x12358CC", Length = "0x64")]
	[Token(Token = "0x6000EC3")]
	private static ImangiOSActivityViewManager() { }

	[Address(RVA = "0x12358C4", Offset = "0x12358C4", Length = "0x8")]
	[Token(Token = "0x6000EC2")]
	public ImangiOSActivityViewManager() { }

	[Address(RVA = "0x1235400", Offset = "0x1235400", Length = "0x204")]
	[Token(Token = "0x6000EBC")]
	public static ImangiOSActivityViewManager GetInstance() { }

	[Address(RVA = "0x1235804", Offset = "0x1235804", Length = "0xB8")]
	[Token(Token = "0x6000EBF")]
	public static void HideActivityView(bool inAnimated) { }

	[Address(RVA = "0x12358C0", Offset = "0x12358C0", Length = "0x4")]
	[Token(Token = "0x6000EC1")]
	protected override void HideActivityView_Internal(bool inAnimated) { }

	[Address(RVA = "0x12353FC", Offset = "0x12353FC", Length = "0x4")]
	[Token(Token = "0x6000EBB")]
	public static void ImangiOSActivityView_LogMessage(string inMessage, Object[] paramList) { }

	[Address(RVA = "0x1235604", Offset = "0x1235604", Length = "0x104")]
	[Token(Token = "0x6000EBD")]
	public static void ShowActivityView(string inTitle, string inMessage, bool inAnimated, bool inUserCancelable) { }

	[Address(RVA = "0x12358BC", Offset = "0x12358BC", Length = "0x4")]
	[Token(Token = "0x6000EC0")]
	protected override void ShowActivityView_Internal(string inTitle, string inMessage, float inBackgroundAlpha, bool inAnimated, bool inUserCancelable) { }

	[Address(RVA = "0x1235708", Offset = "0x1235708", Length = "0xFC")]
	[Token(Token = "0x6000EBE")]
	public static void ShowActivityViewWithAlpha(string inTitle, string inMessage, float inBackgroundAlpha, bool inAnimated, bool inUserCancelable) { }

}

