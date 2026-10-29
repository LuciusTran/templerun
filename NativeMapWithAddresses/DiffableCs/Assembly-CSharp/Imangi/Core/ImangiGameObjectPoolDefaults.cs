namespace Imangi.Core;

[Token(Token = "0x2000280")]
public class ImangiGameObjectPoolDefaults
{
	[Token(Token = "0x4001356")]
	public const int DefaultInitialPoolSize = 5; //Field offset: 0x0
	[Token(Token = "0x4001357")]
	public const int DefaultPoolMaxSize = 0; //Field offset: 0x0
	[Token(Token = "0x4001358")]
	public const string DefaultPoolsTopParentName = "ImangiPoolsParent"; //Field offset: 0x0

	[Address(RVA = "0x12690D0", Offset = "0x12690D0", Length = "0x8")]
	[Token(Token = "0x60012AE")]
	public ImangiGameObjectPoolDefaults() { }

}

