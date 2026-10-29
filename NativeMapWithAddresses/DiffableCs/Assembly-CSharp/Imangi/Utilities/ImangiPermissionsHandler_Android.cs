namespace Imangi.Utilities;

[Token(Token = "0x20001D5")]
public class ImangiPermissionsHandler_Android : ImangiPermissionsHandler
{
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x400102F")]
	private AndroidJavaClass ImangiPermissionsClass; //Field offset: 0x20

	[Address(RVA = "0x1220C08", Offset = "0x1220C08", Length = "0xA8")]
	[Token(Token = "0x6000D3C")]
	public ImangiPermissionsHandler_Android() { }

	[Address(RVA = "0x1220CB0", Offset = "0x1220CB0", Length = "0xBC")]
	[Token(Token = "0x6000D3D")]
	protected virtual void RequestPermissions_Internal() { }

}

