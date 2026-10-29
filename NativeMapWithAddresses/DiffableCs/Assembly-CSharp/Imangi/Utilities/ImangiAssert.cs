namespace Imangi.Utilities;

[Token(Token = "0x20001E2")]
public class ImangiAssert : MonoBehaviour
{
	[Token(Token = "0x20001E3")]
	internal enum Type
	{
		Once = 0,
		Always = 1,
	}

	[Token(Token = "0x400104E")]
	private const string LogChannel = "ImangiAssert"; //Field offset: 0x0

	[Token(Token = "0x170001AA")]
	public static bool Showing
	{
		[Address(RVA = "0x1223B3C", Offset = "0x1223B3C", Length = "0x8")]
		[Token(Token = "0x6000D7A")]
		 get { } //Length: 8
	}

	[Address(RVA = "0x1223B64", Offset = "0x1223B64", Length = "0x8")]
	[Token(Token = "0x6000D7F")]
	public ImangiAssert() { }

	[Address(RVA = "0x1223B44", Offset = "0x1223B44", Length = "0x10")]
	[Token(Token = "0x6000D7B")]
	public static void Code(bool inCondition, string inDesc, Type inType = 1) { }

	[Address(RVA = "0x1213B84", Offset = "0x1213B84", Length = "0xE4")]
	[Token(Token = "0x6000D7C")]
	public static void Code(string inDesc, Type inType = 1) { }

	[Address(RVA = "0x1223B3C", Offset = "0x1223B3C", Length = "0x8")]
	[Token(Token = "0x6000D7A")]
	public static bool get_Showing() { }

	[Address(RVA = "0x1223B34", Offset = "0x1223B34", Length = "0x4")]
	[Token(Token = "0x6000D78")]
	public static void RegisterAssertCallbacks(Action inOpeningCallback, Action inClosedCallback) { }

	[Address(RVA = "0x1223B54", Offset = "0x1223B54", Length = "0x10")]
	[Token(Token = "0x6000D7D")]
	public static void Resource(bool inCondition, string inDesc, Type inType = 1) { }

	[Address(RVA = "0x1214010", Offset = "0x1214010", Length = "0xE4")]
	[Token(Token = "0x6000D7E")]
	public static void Resource(string inDesc, Type inType = 1) { }

	[Address(RVA = "0x1223B38", Offset = "0x1223B38", Length = "0x4")]
	[Token(Token = "0x6000D79")]
	public static void UnregisterAssertCallbacks(Action inOpeningCallback, Action inClosedCallback) { }

}

