//Type is in global namespace

[Token(Token = "0x2000194")]
public class DebugEx
{

	[Token(Token = "0x17000191")]
	public static bool isDebugBuild
	{
		[Address(RVA = "0x1323AE8", Offset = "0x1323AE8", Length = "0x50")]
		[Token(Token = "0x6000BC0")]
		 get { } //Length: 80
	}

	[Address(RVA = "0x1323CA0", Offset = "0x1323CA0", Length = "0x8")]
	[Token(Token = "0x6000BC8")]
	public DebugEx() { }

	[Address(RVA = "0x1323C50", Offset = "0x1323C50", Length = "0x50")]
	[Token(Token = "0x6000BC7")]
	public static void Break() { }

	[Address(RVA = "0x1323AE8", Offset = "0x1323AE8", Length = "0x50")]
	[Token(Token = "0x6000BC0")]
	public static bool get_isDebugBuild() { }

	[Address(RVA = "0x13222F4", Offset = "0x13222F4", Length = "0x58")]
	[Token(Token = "0x6000BC1")]
	public static void Log(object message) { }

	[Address(RVA = "0x1321F8C", Offset = "0x1321F8C", Length = "0x68")]
	[Token(Token = "0x6000BC2")]
	public static void Log(object message, object context) { }

	[Address(RVA = "0x1323BF8", Offset = "0x1323BF8", Length = "0x58")]
	[Token(Token = "0x6000BC5")]
	public static void LogError(object message) { }

	[Address(RVA = "0x1321A6C", Offset = "0x1321A6C", Length = "0x68")]
	[Token(Token = "0x6000BC6")]
	public static void LogError(object message, object context) { }

	[Address(RVA = "0x1323B38", Offset = "0x1323B38", Length = "0x58")]
	[Token(Token = "0x6000BC3")]
	public static void LogWarning(object message) { }

	[Address(RVA = "0x1323B90", Offset = "0x1323B90", Length = "0x68")]
	[Token(Token = "0x6000BC4")]
	public static void LogWarning(object message, object context) { }

}

