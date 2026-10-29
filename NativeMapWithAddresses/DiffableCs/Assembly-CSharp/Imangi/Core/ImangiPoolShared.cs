namespace Imangi.Core;

[Token(Token = "0x2000281")]
public class ImangiPoolShared
{
	[Token(Token = "0x4001359")]
	protected static Transform _PoolsTopParent; //Field offset: 0x0

	[Token(Token = "0x170001E6")]
	public static Transform PoolsTopParent
	{
		[Address(RVA = "0x1267018", Offset = "0x1267018", Length = "0xEC")]
		[Token(Token = "0x60012AF")]
		 get { } //Length: 236
	}

	[Address(RVA = "0x12690D8", Offset = "0x12690D8", Length = "0x8")]
	[Token(Token = "0x60012B0")]
	public ImangiPoolShared() { }

	[Address(RVA = "0x1267018", Offset = "0x1267018", Length = "0xEC")]
	[Token(Token = "0x60012AF")]
	public static Transform get_PoolsTopParent() { }

}

