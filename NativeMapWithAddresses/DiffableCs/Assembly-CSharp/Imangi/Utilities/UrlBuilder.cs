namespace Imangi.Utilities;

[Token(Token = "0x2000218")]
public class UrlBuilder
{
	[Token(Token = "0x40010D8")]
	private const string _GETParameterStart = "?"; //Field offset: 0x0
	[Token(Token = "0x40010D9")]
	private const string _GETParamterDelimiter = "&"; //Field offset: 0x0
	[Token(Token = "0x40010DA")]
	private const string _GETParameterValueAssignment = "="; //Field offset: 0x0
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x40010D5")]
	private string _Url; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x40010D6")]
	private NameValueCollection _GETParameters; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40010D7")]
	private StringBuilder _UrlStringBuilder; //Field offset: 0x20

	[Token(Token = "0x170001B0")]
	public string Url
	{
		[Address(RVA = "0x1239520", Offset = "0x1239520", Length = "0x8")]
		[Token(Token = "0x6000F32")]
		 set { } //Length: 8
	}

	[Address(RVA = "0x1239528", Offset = "0x1239528", Length = "0x98")]
	[Token(Token = "0x6000F33")]
	public UrlBuilder() { }

	[Address(RVA = "0x12395C0", Offset = "0x12395C0", Length = "0x24")]
	[Token(Token = "0x6000F34")]
	public void AddGETParameter(string name, string value) { }

	[Address(RVA = "0x12395E4", Offset = "0x12395E4", Length = "0x24")]
	[Token(Token = "0x6000F35")]
	public void ClearParameters() { }

	[Address(RVA = "0x1239520", Offset = "0x1239520", Length = "0x8")]
	[Token(Token = "0x6000F32")]
	public void set_Url(string value) { }

	[Address(RVA = "0x1239608", Offset = "0x1239608", Length = "0x1B4")]
	[Token(Token = "0x6000F36")]
	public virtual string ToString() { }

}

