namespace Imangi.Utilities;

[Token(Token = "0x20001D7")]
public class ImangiSystemUtilities_Android
{
	[Token(Token = "0x20001D8")]
	internal static class AndroidVersion
	{
		[Token(Token = "0x4001033")]
		private static AndroidJavaClass _VersionInfo; //Field offset: 0x0
		[Token(Token = "0x4001034")]
		private static string _RELEASE; //Field offset: 0x8

		[Token(Token = "0x170001A7")]
		public static string DEBUG_OUTPUT
		{
			[Address(RVA = "0x1221AAC", Offset = "0x1221AAC", Length = "0x8C")]
			[Token(Token = "0x6000D49")]
			 get { } //Length: 140
		}

		[Token(Token = "0x170001A6")]
		public static string RELEASE
		{
			[Address(RVA = "0x1221454", Offset = "0x1221454", Length = "0x128")]
			[Token(Token = "0x6000D48")]
			 get { } //Length: 296
		}

		[Address(RVA = "0x12219F0", Offset = "0x12219F0", Length = "0xBC")]
		[Token(Token = "0x6000D47")]
		private static AndroidVersion() { }

		[Address(RVA = "0x1221AAC", Offset = "0x1221AAC", Length = "0x8C")]
		[Token(Token = "0x6000D49")]
		public static string get_DEBUG_OUTPUT() { }

		[Address(RVA = "0x1221454", Offset = "0x1221454", Length = "0x128")]
		[Token(Token = "0x6000D48")]
		public static string get_RELEASE() { }

	}

	[Token(Token = "0x4001032")]
	private const uint kMegabyte = 1048576; //Field offset: 0x0

	[Address(RVA = "0x12219E8", Offset = "0x12219E8", Length = "0x8")]
	[Token(Token = "0x6000D46")]
	public ImangiSystemUtilities_Android() { }

	[Address(RVA = "0x1221358", Offset = "0x1221358", Length = "0xFC")]
	[Token(Token = "0x6000D41")]
	public static bool GetAndroidVersionNumber(out int outMajor, out int outMinor, out int outPatch) { }

	[Address(RVA = "0x122157C", Offset = "0x122157C", Length = "0x50")]
	[Token(Token = "0x6000D42")]
	public static ApplicationVersionInfo GetAndroidVersionNumber() { }

	[Address(RVA = "0x12218F8", Offset = "0x12218F8", Length = "0x78")]
	[Token(Token = "0x6000D44")]
	public static int GetAvailMemory() { }

	[Address(RVA = "0x1221678", Offset = "0x1221678", Length = "0x280")]
	[Token(Token = "0x6000D43")]
	private static AndroidJavaObject GetMemoryInfo() { }

	[Address(RVA = "0x1221970", Offset = "0x1221970", Length = "0x78")]
	[Token(Token = "0x6000D45")]
	public static int GetTotalMemory() { }

}

