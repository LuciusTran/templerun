namespace Imangi.Utilities;

[Token(Token = "0x200021A")]
public class UrlHelper
{
	[Token(Token = "0x40010DD")]
	public static UrlHelper SharedInstance; //Field offset: 0x0
	[Token(Token = "0x40010E0")]
	protected const string _ValueDelimiter = ","; //Field offset: 0x0
	[Token(Token = "0x40010E1")]
	protected const string _DefaultEmptyListValue = "NONE"; //Field offset: 0x0
	[Token(Token = "0x40010DF")]
	protected static List<GETParameter> GETParameters; //Field offset: 0x8
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x40010DE")]
	private UrlBuilder UrlContructor; //Field offset: 0x10

	[Token(Token = "0x170001B1")]
	public int GETParameterCount
	{
		[Address(RVA = "0x1239810", Offset = "0x1239810", Length = "0x64")]
		[Token(Token = "0x6000F39")]
		 get { } //Length: 100
	}

	[Address(RVA = "0x1239874", Offset = "0x1239874", Length = "0xD4")]
	[Token(Token = "0x6000F3A")]
	public UrlHelper() { }

	[Address(RVA = "0x1239A04", Offset = "0x1239A04", Length = "0x124")]
	[Token(Token = "0x6000F3C")]
	public string BuildUrlWithParameters(string inUrl, List<String> inGETParameters) { }

	[Address(RVA = "0x1239CD0", Offset = "0x1239CD0", Length = "0x48")]
	[Token(Token = "0x6000F3F")]
	protected override string DetermineGETParameterValue(string inParameterName) { }

	[Address(RVA = "0x1239B28", Offset = "0x1239B28", Length = "0xE0")]
	[Token(Token = "0x6000F3D")]
	public int DeterminGETParameterIndex(string inGETParameterName) { }

	[Address(RVA = "0x1239948", Offset = "0x1239948", Length = "0xBC")]
	[Token(Token = "0x6000F3B")]
	public GETParameter FindGETParameterAtIndex(int inIndex) { }

	[Address(RVA = "0x1239810", Offset = "0x1239810", Length = "0x64")]
	[Token(Token = "0x6000F39")]
	public int get_GETParameterCount() { }

	[Address(RVA = "0x1239C08", Offset = "0x1239C08", Length = "0xC8")]
	[Token(Token = "0x6000F3E")]
	protected override bool IsGETParameterValid(string inGETParameterName) { }

}

