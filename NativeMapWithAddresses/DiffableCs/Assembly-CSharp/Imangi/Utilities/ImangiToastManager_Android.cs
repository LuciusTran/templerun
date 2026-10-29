namespace Imangi.Utilities;

[Token(Token = "0x20001D9")]
public class ImangiToastManager_Android : ImangiToastManager
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4001035")]
	private AndroidJavaClass ImangiToastClass; //Field offset: 0x20

	[Address(RVA = "0x1221B38", Offset = "0x1221B38", Length = "0x8C")]
	[Token(Token = "0x6000D4A")]
	public ImangiToastManager_Android() { }

	[Address(RVA = "0x1221BC4", Offset = "0x1221BC4", Length = "0x1F0")]
	[Token(Token = "0x6000D4B")]
	protected virtual void ShowToast_Internal(string inMessage, bool inLong) { }

}

