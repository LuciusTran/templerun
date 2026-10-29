namespace Imangi.Utilities;

[Token(Token = "0x20001D2")]
public class ImangiOSPickerManager_Android : ImangiOSPickerManager
{
	[Token(Token = "0x400102C")]
	private const string ImangiPickerDialogClassPath = "com.imangi.imangiutilities.ImangiListView"; //Field offset: 0x0
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x400102B")]
	private AndroidJavaClass ImangiPickerDialogClass; //Field offset: 0x20

	[Address(RVA = "0x122072C", Offset = "0x122072C", Length = "0xB8")]
	[Token(Token = "0x6000D37")]
	public ImangiOSPickerManager_Android() { }

	[Address(RVA = "0x12207E4", Offset = "0x12207E4", Length = "0x208")]
	[Token(Token = "0x6000D38")]
	protected virtual void ShowPicker_Internal(String[] inOptions, int inSelected, bool inCancelable) { }

}

