namespace Imangi.Utilities;

[Token(Token = "0x200020C")]
public class ImangiPathUtilities
{

	[Address(RVA = "0x12378A0", Offset = "0x12378A0", Length = "0x8")]
	[Token(Token = "0x6000EF5")]
	public ImangiPathUtilities() { }

	[Address(RVA = "0x12373D4", Offset = "0x12373D4", Length = "0x2C")]
	[Token(Token = "0x6000EEA")]
	public static string CombineOSPath(String[] inPathComponents) { }

	[Address(RVA = "0x123748C", Offset = "0x123748C", Length = "0x68")]
	[Token(Token = "0x6000EEB")]
	public static string CombineOSPathAsFullPath(String[] inPathComponents) { }

	[Address(RVA = "0x12372C8", Offset = "0x12372C8", Length = "0xC4")]
	[Token(Token = "0x6000EE8")]
	public static string CombinePath(String[] inPathComponents) { }

	[Address(RVA = "0x123738C", Offset = "0x123738C", Length = "0x2C")]
	[Token(Token = "0x6000EE9")]
	public static string CombineUnityPath(String[] inPathComponents) { }

	[Address(RVA = "0x1237668", Offset = "0x1237668", Length = "0xF8")]
	[Token(Token = "0x6000EF2")]
	public static string ConvertFullOsPathToUnityAssetPath(string inFullOsPath) { }

	[Address(RVA = "0x12375C8", Offset = "0x12375C8", Length = "0xA0")]
	[Token(Token = "0x6000EF1")]
	public static string ConvertUnityAssetPathToFullOsPath(string inUnityAssetPath) { }

	[Address(RVA = "0x1237400", Offset = "0x1237400", Length = "0x8C")]
	[Token(Token = "0x6000EEC")]
	public static string FormOSPath(string inPath) { }

	[Address(RVA = "0x12373B8", Offset = "0x12373B8", Length = "0x1C")]
	[Token(Token = "0x6000EED")]
	public static string FormUnityPath(string inPath) { }

	[Address(RVA = "0x12374F4", Offset = "0x12374F4", Length = "0x1C")]
	[Token(Token = "0x6000EEE")]
	public static string FormURL(string inPath) { }

	[Address(RVA = "0x12375C0", Offset = "0x12375C0", Length = "0x8")]
	[Token(Token = "0x6000EF0")]
	public static string GetEditorProjectBaseDirectoryFullOsPath() { }

	[Address(RVA = "0x1237760", Offset = "0x1237760", Length = "0xEC")]
	[Token(Token = "0x6000EF3")]
	public static string GetPlatformFolderName(RuntimePlatform inPlatform) { }

	[Address(RVA = "0x123784C", Offset = "0x123784C", Length = "0x54")]
	[Token(Token = "0x6000EF4")]
	public static string GetPlatformFolderName() { }

	[Address(RVA = "0x1237510", Offset = "0x1237510", Length = "0xB0")]
	[Token(Token = "0x6000EEF")]
	public static string GetRootFolderName() { }

}

