namespace Imangi.Utilities;

[Token(Token = "0x2000217")]
public class ImangiToastManager : MonoBehaviour
{
	[Token(Token = "0x40010D2")]
	public const string LogChannel = "Toast"; //Field offset: 0x0
	[Token(Token = "0x40010D3")]
	protected static ImangiToastManager _Instance; //Field offset: 0x0
	[Token(Token = "0x40010D4")]
	protected static GameObject _ToastGameObj; //Field offset: 0x8

	[Token(Token = "0x170001AF")]
	public static ImangiToastManager Instance
	{
		[Address(RVA = "0x1239278", Offset = "0x1239278", Length = "0x10C")]
		[Token(Token = "0x6000F2E")]
		 get { } //Length: 268
	}

	[Address(RVA = "0x1239518", Offset = "0x1239518", Length = "0x8")]
	[Token(Token = "0x6000F31")]
	public ImangiToastManager() { }

	[Address(RVA = "0x1239278", Offset = "0x1239278", Length = "0x10C")]
	[Token(Token = "0x6000F2E")]
	public static ImangiToastManager get_Instance() { }

	[Address(RVA = "0x1239384", Offset = "0x1239384", Length = "0xA8")]
	[Token(Token = "0x6000F2F")]
	public static void ShowToast(string inMessage, bool inLong) { }

	[Address(RVA = "0x123942C", Offset = "0x123942C", Length = "0xEC")]
	[Token(Token = "0x6000F30")]
	protected override void ShowToast_Internal(string inMessage, bool inLong) { }

}

