namespace Imangi.Utilities;

[Token(Token = "0x2000208")]
public class ImangiOSPickerManager : MonoBehaviour
{
	[CompilerGenerated]
	[Token(Token = "0x40010AD")]
	private static Action<String> PickerDismissedEvent; //Field offset: 0x0
	[Token(Token = "0x40010AE")]
	protected static ImangiOSPickerManager Instance; //Field offset: 0x8
	[Token(Token = "0x40010AF")]
	protected static GameObject OSPickerGameObj; //Field offset: 0x10
	[Token(Token = "0x40010B0")]
	public static bool ImangiOSPicker_VerboseLogging; //Field offset: 0x18

	[Token(Token = "0x14000017")]
	public static event Action<String> PickerDismissedEvent
	{
		[Address(RVA = "0x12364D0", Offset = "0x12364D0", Length = "0xCC")]
		[CompilerGenerated]
		[Token(Token = "0x6000ED2")]
		 add { } //Length: 204
		[Address(RVA = "0x123659C", Offset = "0x123659C", Length = "0xCC")]
		[CompilerGenerated]
		[Token(Token = "0x6000ED3")]
		 remove { } //Length: 204
	}

	[Address(RVA = "0x1236AC0", Offset = "0x1236AC0", Length = "0x8")]
	[Token(Token = "0x6000EDA")]
	public ImangiOSPickerManager() { }

	[Address(RVA = "0x12364D0", Offset = "0x12364D0", Length = "0xCC")]
	[CompilerGenerated]
	[Token(Token = "0x6000ED2")]
	public static void add_PickerDismissedEvent(Action<String> value) { }

	[Address(RVA = "0x12368F4", Offset = "0x12368F4", Length = "0xD8")]
	[Token(Token = "0x6000ED8")]
	public void DismissPicker(string inMessage) { }

	[Address(RVA = "0x12369CC", Offset = "0x12369CC", Length = "0xF4")]
	[Token(Token = "0x6000ED9")]
	public void DismissPicker(object userData, String[] options, int selected) { }

	[Address(RVA = "0x123666C", Offset = "0x123666C", Length = "0x1D4")]
	[Token(Token = "0x6000ED5")]
	public static ImangiOSPickerManager GetInstance() { }

	[Address(RVA = "0x1236668", Offset = "0x1236668", Length = "0x4")]
	[Token(Token = "0x6000ED4")]
	public static void ImangiOSPicker_LogMessage(string inMessage, Object[] paramList) { }

	[Address(RVA = "0x123659C", Offset = "0x123659C", Length = "0xCC")]
	[CompilerGenerated]
	[Token(Token = "0x6000ED3")]
	public static void remove_PickerDismissedEvent(Action<String> value) { }

	[Address(RVA = "0x1236840", Offset = "0x1236840", Length = "0xB0")]
	[Token(Token = "0x6000ED6")]
	public static void ShowPicker(String[] inOptions, int inSelected, bool inCancelable = true) { }

	[Address(RVA = "0x12368F0", Offset = "0x12368F0", Length = "0x4")]
	[Token(Token = "0x6000ED7")]
	protected override void ShowPicker_Internal(String[] inOptions, int inSelected, bool inCancelable) { }

}

