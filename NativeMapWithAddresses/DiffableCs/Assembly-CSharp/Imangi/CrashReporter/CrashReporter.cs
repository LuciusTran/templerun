namespace Imangi.CrashReporter;

[Token(Token = "0x200027B")]
public static class CrashReporter
{

	[Token(Token = "0x170001D4")]
	public static bool IsCollectionEnabled
	{
		[Address(RVA = "0x1266A6C", Offset = "0x1266A6C", Length = "0x8")]
		[Token(Token = "0x6001271")]
		 get { } //Length: 8
		[Address(RVA = "0x1266A74", Offset = "0x1266A74", Length = "0xC")]
		[Token(Token = "0x6001272")]
		 set { } //Length: 12
	}

	[Address(RVA = "0x1266A6C", Offset = "0x1266A6C", Length = "0x8")]
	[Token(Token = "0x6001271")]
	public static bool get_IsCollectionEnabled() { }

	[Address(RVA = "0x1266A80", Offset = "0x1266A80", Length = "0x8")]
	[Token(Token = "0x6001273")]
	public static void Log(string inMessage) { }

	[Address(RVA = "0x1266A88", Offset = "0x1266A88", Length = "0x8")]
	[Token(Token = "0x6001274")]
	public static void LogException(Exception inException) { }

	[Address(RVA = "0x1266A74", Offset = "0x1266A74", Length = "0xC")]
	[Token(Token = "0x6001272")]
	public static void set_IsCollectionEnabled(bool value) { }

	[Address(RVA = "0x1266A90", Offset = "0x1266A90", Length = "0x8")]
	[Token(Token = "0x6001275")]
	public static void SetCustomKey(string inKey, string inValue) { }

	[Address(RVA = "0x1266A98", Offset = "0x1266A98", Length = "0x8")]
	[Token(Token = "0x6001276")]
	public static void SetUserId(string inIdentifier) { }

}

