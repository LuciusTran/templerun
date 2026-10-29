namespace Imangi.Utilities;

[Token(Token = "0x200020D")]
public class ImangiPermissionsHandler : MonoBehaviour
{
	[Token(Token = "0x40010BC")]
	public static readonly string LogChannel; //Field offset: 0x0
	[Token(Token = "0x40010BD")]
	protected static ImangiPermissionsHandler Instance; //Field offset: 0x8
	[Token(Token = "0x40010BE")]
	protected static GameObject GameObj; //Field offset: 0x10

	[Address(RVA = "0x1237AAC", Offset = "0x1237AAC", Length = "0x6C")]
	[Token(Token = "0x6000EFA")]
	private static ImangiPermissionsHandler() { }

	[Address(RVA = "0x1237AA4", Offset = "0x1237AA4", Length = "0x8")]
	[Token(Token = "0x6000EF9")]
	public ImangiPermissionsHandler() { }

	[Address(RVA = "0x12378A8", Offset = "0x12378A8", Length = "0x148")]
	[Token(Token = "0x6000EF6")]
	public static ImangiPermissionsHandler GetInstance() { }

	[Address(RVA = "0x12379F0", Offset = "0x12379F0", Length = "0xB0")]
	[Token(Token = "0x6000EF7")]
	public static void RequestPermissions() { }

	[Address(RVA = "0x1237AA0", Offset = "0x1237AA0", Length = "0x4")]
	[Token(Token = "0x6000EF8")]
	protected override void RequestPermissions_Internal() { }

}

