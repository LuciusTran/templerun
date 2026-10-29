namespace Imangi.Utilities;

[Token(Token = "0x20001E9")]
public class ImangiDateTimeHelper
{
	[Token(Token = "0x400105E")]
	public static readonly DateTime ImangiMinDateTime; //Field offset: 0x0

	[Address(RVA = "0x122682C", Offset = "0x122682C", Length = "0xA4")]
	[Token(Token = "0x6000DA7")]
	private static ImangiDateTimeHelper() { }

	[Address(RVA = "0x1226824", Offset = "0x1226824", Length = "0x8")]
	[Token(Token = "0x6000DA6")]
	public ImangiDateTimeHelper() { }

	[Address(RVA = "0x1225F5C", Offset = "0x1225F5C", Length = "0x26C")]
	[Token(Token = "0x6000DA0")]
	public static string GetCountDownString(TimeSpan inTimeSpan, string inDayStyle = " left") { }

	[Address(RVA = "0x1226558", Offset = "0x1226558", Length = "0xA4")]
	[Token(Token = "0x6000DA2")]
	public static string GetCustomizedCountDownString(TimeSpan inTimeSpan, string inPreText, string inPostText, string inDayStyle = " left") { }

	[Address(RVA = "0x12265FC", Offset = "0x12265FC", Length = "0xA4")]
	[Token(Token = "0x6000DA3")]
	public static string GetCustomizedCountDownText(TimeSpan inTimeSpan, string inPreText, string inPostText, string inDayStyle = " left") { }

	[Address(RVA = "0x12261C8", Offset = "0x12261C8", Length = "0x390")]
	[Token(Token = "0x6000DA1")]
	public static string GetCustomizedCountDownValue(TimeSpan inTimeSpan, string inDayStyle = " left") { }

	[Address(RVA = "0x12266A0", Offset = "0x12266A0", Length = "0x58")]
	[Token(Token = "0x6000DA4")]
	public static DateTime GetEpochDateTime() { }

	[Address(RVA = "0x12266F8", Offset = "0x12266F8", Length = "0x12C")]
	[Token(Token = "0x6000DA5")]
	public static long GetUnixTime() { }

	[Address(RVA = "0x1225ECC", Offset = "0x1225ECC", Length = "0x90")]
	[Token(Token = "0x6000D9F")]
	public static bool IsDateTimeValid(DateTime inDateTime) { }

}

