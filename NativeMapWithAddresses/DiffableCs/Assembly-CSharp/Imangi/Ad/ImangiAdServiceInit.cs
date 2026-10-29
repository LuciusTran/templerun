namespace Imangi.Ad;

[Token(Token = "0x20002B6")]
public class ImangiAdServiceInit
{

	[Address(RVA = "0x1285710", Offset = "0x1285710", Length = "0x8")]
	[Token(Token = "0x6001565")]
	public ImangiAdServiceInit() { }

	[Address(RVA = "0x127E22C", Offset = "0x127E22C", Length = "0xE8")]
	[Token(Token = "0x6001564")]
	public static bool FillInDefaultInitializeInfoForService(AdService inService, ref AdServiceInitializationInfo refInfo) { }

}

