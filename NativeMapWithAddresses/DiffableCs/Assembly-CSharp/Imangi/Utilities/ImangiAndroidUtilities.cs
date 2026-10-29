namespace Imangi.Utilities;

[Token(Token = "0x20001CB")]
public class ImangiAndroidUtilities
{
	[Token(Token = "0x4001012")]
	public static readonly string UnityPlayerClassPath; //Field offset: 0x0
	[Token(Token = "0x4001013")]
	protected static AndroidJavaClass ImangiUtilitiesActivityClass; //Field offset: 0x8
	[Token(Token = "0x4001014")]
	protected static readonly string ImangiUtilitiesActivityClassPath; //Field offset: 0x10

	[Address(RVA = "0x121DA08", Offset = "0x121DA08", Length = "0x8C")]
	[Token(Token = "0x6000D0C")]
	private static ImangiAndroidUtilities() { }

	[Address(RVA = "0x121DA00", Offset = "0x121DA00", Length = "0x8")]
	[Token(Token = "0x6000D0B")]
	public ImangiAndroidUtilities() { }

	[Address(RVA = "0x121D8AC", Offset = "0x121D8AC", Length = "0x98")]
	[Token(Token = "0x6000D07")]
	public static DateTime ConvertJavaTimestampToDateTimeLocal(long javaTimestamp) { }

	[Address(RVA = "0x121D7E8", Offset = "0x121D7E8", Length = "0xC4")]
	[Token(Token = "0x6000D06")]
	public static DateTime ConvertJavaTimestampToDateTimeUtc(long javaTimestamp) { }

	[Address(RVA = "0x121D4C4", Offset = "0x121D4C4", Length = "0x290")]
	[Token(Token = "0x6000D04")]
	public static AndroidJavaObject CreateAndroidJavaObject(string classPath) { }

	[Address(RVA = "0x121D29C", Offset = "0x121D29C", Length = "0x228")]
	[Token(Token = "0x6000D03")]
	public static AndroidJavaClass GetAndroidJavaClass(string classPath) { }

	[Address(RVA = "0x121D754", Offset = "0x121D754", Length = "0x94")]
	[Token(Token = "0x6000D05")]
	public static AndroidJavaObject GetCurrentActivity() { }

	[Address(RVA = "0x121D944", Offset = "0x121D944", Length = "0xB0")]
	[Token(Token = "0x6000D08")]
	private static AndroidJavaClass GetImangiUtilitiesActivityClass() { }

	[Address(RVA = "0x121D9F4", Offset = "0x121D9F4", Length = "0x8")]
	[Token(Token = "0x6000D09")]
	public static bool GetVerboseLogging() { }

	[Address(RVA = "0x121D9FC", Offset = "0x121D9FC", Length = "0x4")]
	[Token(Token = "0x6000D0A")]
	public static void SetVerboseLogging(bool inEnabled) { }

}

