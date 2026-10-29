namespace Imangi.Utilities;

[Token(Token = "0x200020E")]
public class ImangiPlistHelper : MonoBehaviour
{
	[Token(Token = "0x40010BF")]
	public static readonly string _LogChannel; //Field offset: 0x0

	[Address(RVA = "0x1237C84", Offset = "0x1237C84", Length = "0x60")]
	[Token(Token = "0x6000EFE")]
	private static ImangiPlistHelper() { }

	[Address(RVA = "0x1237C7C", Offset = "0x1237C7C", Length = "0x8")]
	[Token(Token = "0x6000EFD")]
	public ImangiPlistHelper() { }

	[Address(RVA = "0x1237B18", Offset = "0x1237B18", Length = "0x54")]
	[Token(Token = "0x6000EFB")]
	public static Dictionary<String, Object> LoadPlistToDictionary(string inPathToPlist) { }

	[Address(RVA = "0x1237B6C", Offset = "0x1237B6C", Length = "0x110")]
	[Token(Token = "0x6000EFC")]
	protected static Dictionary<String, Object> LoadPlistToDictionary_Internal(string inPathToPlist) { }

}

