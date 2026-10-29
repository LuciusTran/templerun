namespace Imangi.Utilities;

[Token(Token = "0x2000207")]
public class ImangiOSAlertManager : MonoBehaviour
{
	[CompilerGenerated]
	[Token(Token = "0x40010A6")]
	private static Action<Int32, String> AlertButtonPressedEvent; //Field offset: 0x0
	[CompilerGenerated]
	[Token(Token = "0x40010A7")]
	private static Action<String> AlertButton0PressedEvent; //Field offset: 0x8
	[CompilerGenerated]
	[Token(Token = "0x40010A8")]
	private static Action<String> AlertButton1PressedEvent; //Field offset: 0x10
	[CompilerGenerated]
	[Token(Token = "0x40010A9")]
	private static Action<String> AlertButton2PressedEvent; //Field offset: 0x18
	[Token(Token = "0x40010AA")]
	protected static ImangiOSAlertManager Instance; //Field offset: 0x20
	[Token(Token = "0x40010AB")]
	protected static GameObject OSAlertGameObj; //Field offset: 0x28
	[Token(Token = "0x40010AC")]
	public static bool ImangiOSAlert_VerboseLogging; //Field offset: 0x30

	[Token(Token = "0x14000014")]
	public static event Action<String> AlertButton0PressedEvent
	{
		[Address(RVA = "0x1235AC8", Offset = "0x1235AC8", Length = "0xD0")]
		[CompilerGenerated]
		[Token(Token = "0x6000EC6")]
		 add { } //Length: 208
		[Address(RVA = "0x1235B98", Offset = "0x1235B98", Length = "0xD0")]
		[CompilerGenerated]
		[Token(Token = "0x6000EC7")]
		 remove { } //Length: 208
	}

	[Token(Token = "0x14000015")]
	public static event Action<String> AlertButton1PressedEvent
	{
		[Address(RVA = "0x1235C68", Offset = "0x1235C68", Length = "0xD0")]
		[CompilerGenerated]
		[Token(Token = "0x6000EC8")]
		 add { } //Length: 208
		[Address(RVA = "0x1235D38", Offset = "0x1235D38", Length = "0xD0")]
		[CompilerGenerated]
		[Token(Token = "0x6000EC9")]
		 remove { } //Length: 208
	}

	[Token(Token = "0x14000016")]
	public static event Action<String> AlertButton2PressedEvent
	{
		[Address(RVA = "0x1235E08", Offset = "0x1235E08", Length = "0xD0")]
		[CompilerGenerated]
		[Token(Token = "0x6000ECA")]
		 add { } //Length: 208
		[Address(RVA = "0x1235ED8", Offset = "0x1235ED8", Length = "0xD0")]
		[CompilerGenerated]
		[Token(Token = "0x6000ECB")]
		 remove { } //Length: 208
	}

	[Token(Token = "0x14000013")]
	public static event Action<Int32, String> AlertButtonPressedEvent
	{
		[Address(RVA = "0x1235930", Offset = "0x1235930", Length = "0xCC")]
		[CompilerGenerated]
		[Token(Token = "0x6000EC4")]
		 add { } //Length: 204
		[Address(RVA = "0x12359FC", Offset = "0x12359FC", Length = "0xCC")]
		[CompilerGenerated]
		[Token(Token = "0x6000EC5")]
		 remove { } //Length: 204
	}

	[Address(RVA = "0x12364C8", Offset = "0x12364C8", Length = "0x8")]
	[Token(Token = "0x6000ED1")]
	public ImangiOSAlertManager() { }

	[Address(RVA = "0x1235AC8", Offset = "0x1235AC8", Length = "0xD0")]
	[CompilerGenerated]
	[Token(Token = "0x6000EC6")]
	public static void add_AlertButton0PressedEvent(Action<String> value) { }

	[Address(RVA = "0x1235C68", Offset = "0x1235C68", Length = "0xD0")]
	[CompilerGenerated]
	[Token(Token = "0x6000EC8")]
	public static void add_AlertButton1PressedEvent(Action<String> value) { }

	[Address(RVA = "0x1235E08", Offset = "0x1235E08", Length = "0xD0")]
	[CompilerGenerated]
	[Token(Token = "0x6000ECA")]
	public static void add_AlertButton2PressedEvent(Action<String> value) { }

	[Address(RVA = "0x1235930", Offset = "0x1235930", Length = "0xCC")]
	[CompilerGenerated]
	[Token(Token = "0x6000EC4")]
	public static void add_AlertButtonPressedEvent(Action<Int32, String> value) { }

	[Address(RVA = "0x1236248", Offset = "0x1236248", Length = "0x1C0")]
	[Token(Token = "0x6000ED0")]
	public void DismissAlert(string inMessage) { }

	[Address(RVA = "0x1235FAC", Offset = "0x1235FAC", Length = "0x1D4")]
	[Token(Token = "0x6000ECD")]
	public static ImangiOSAlertManager GetInstance() { }

	[Address(RVA = "0x1235FA8", Offset = "0x1235FA8", Length = "0x4")]
	[Token(Token = "0x6000ECC")]
	public static void ImangiOSAlert_LogMessage(string inMessage, Object[] paramList) { }

	[Address(RVA = "0x1235B98", Offset = "0x1235B98", Length = "0xD0")]
	[CompilerGenerated]
	[Token(Token = "0x6000EC7")]
	public static void remove_AlertButton0PressedEvent(Action<String> value) { }

	[Address(RVA = "0x1235D38", Offset = "0x1235D38", Length = "0xD0")]
	[CompilerGenerated]
	[Token(Token = "0x6000EC9")]
	public static void remove_AlertButton1PressedEvent(Action<String> value) { }

	[Address(RVA = "0x1235ED8", Offset = "0x1235ED8", Length = "0xD0")]
	[CompilerGenerated]
	[Token(Token = "0x6000ECB")]
	public static void remove_AlertButton2PressedEvent(Action<String> value) { }

	[Address(RVA = "0x12359FC", Offset = "0x12359FC", Length = "0xCC")]
	[CompilerGenerated]
	[Token(Token = "0x6000EC5")]
	public static void remove_AlertButtonPressedEvent(Action<Int32, String> value) { }

	[Address(RVA = "0x1236180", Offset = "0x1236180", Length = "0xC4")]
	[Token(Token = "0x6000ECE")]
	public static void ShowAlert(string inTitle, string inMessage, String[] inButtons, bool inCancelable = true) { }

	[Address(RVA = "0x1236244", Offset = "0x1236244", Length = "0x4")]
	[Token(Token = "0x6000ECF")]
	protected override void ShowAlert_Internal(string inTitle, string inMessage, String[] inButtons, bool inCancelable) { }

}

