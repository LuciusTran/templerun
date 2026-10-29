namespace Imangi.Utilities;

[Token(Token = "0x2000211")]
public class ImangiResourceHelper
{
	[Token(Token = "0x40010C6")]
	public const string _IRH_LogChannel = "ImangiResourceHelper"; //Field offset: 0x0

	[Address(RVA = "0x12381E8", Offset = "0x12381E8", Length = "0x8")]
	[Token(Token = "0x6000F0B")]
	public ImangiResourceHelper() { }

	[Address(RVA = "0x1237FD8", Offset = "0x1237FD8", Length = "0x14")]
	[Token(Token = "0x6000F05")]
	public static object LoadResource(string inPath) { }

	[Address(RVA = "0x1233D38", Offset = "0x1233D38", Length = "0x1C")]
	[Token(Token = "0x6000F06")]
	public static object LoadResource(string inPath, Type inSystemTypeInstance) { }

	[Address(RVA = "0x123812C", Offset = "0x123812C", Length = "0xBC")]
	[Token(Token = "0x6000F0A")]
	public static Texture LoadTextureFromFile(string inTextureFilename, TextureFormat inTextureFormat = 4, bool inUseMipMaps = false) { }

	[Address(RVA = "0x1237FEC", Offset = "0x1237FEC", Length = "0x14")]
	[Token(Token = "0x6000F07")]
	public static object TryLoadResource(string inPath) { }

	[Address(RVA = "0x1238000", Offset = "0x1238000", Length = "0x1C")]
	[Token(Token = "0x6000F08")]
	public static object TryLoadResource(string inPath, Type inSystemTypeInstance) { }

	[Address(RVA = "0x123801C", Offset = "0x123801C", Length = "0x110")]
	[Token(Token = "0x6000F09")]
	public static Texture2D TryLoadTexture(string inFullPath) { }

}

