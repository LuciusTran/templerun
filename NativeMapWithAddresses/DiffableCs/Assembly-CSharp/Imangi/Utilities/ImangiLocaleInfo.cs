namespace Imangi.Utilities;

[Token(Token = "0x2000201")]
public class ImangiLocaleInfo : IParsableJSONListElement
{
	[Token(Token = "0x4001087")]
	private const string _CountryKey = "Cc"; //Field offset: 0x0
	[Token(Token = "0x4001089")]
	private const string _Country_iso3Key = "Cc3"; //Field offset: 0x0
	[Token(Token = "0x400108B")]
	private const string _LanguageCodeKey = "La"; //Field offset: 0x0
	[Token(Token = "0x400108D")]
	private const string _TimeZoneKey = "TZ"; //Field offset: 0x0
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x4001088")]
	public string Country; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x400108A")]
	public string Country_iso3; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x400108C")]
	public string LanguageCode; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x400108E")]
	public string TimeZone; //Field offset: 0x28

	[Address(RVA = "0x12330E4", Offset = "0x12330E4", Length = "0x5C")]
	[Token(Token = "0x6000E92")]
	public ImangiLocaleInfo() { }

	[Address(RVA = "0x1233140", Offset = "0x1233140", Length = "0x88")]
	[Token(Token = "0x6000E93")]
	public ImangiLocaleInfo(string inCountry, string inCountry_iso3, string inLanguageCode = "", string inTimeZone = "") { }

	[Address(RVA = "0x12331C8", Offset = "0x12331C8", Length = "0x74")]
	[Token(Token = "0x6000E94")]
	public ImangiLocaleInfo(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x1233398", Offset = "0x1233398", Length = "0x74")]
	[Token(Token = "0x6000E95")]
	public ImangiLocaleInfo(string inJSONString) { }

	[Address(RVA = "0x123340C", Offset = "0x123340C", Length = "0x84")]
	[Token(Token = "0x6000E96")]
	public ImangiLocaleInfo(ImangiLocaleInfo inInfo) { }

	[Address(RVA = "0x123323C", Offset = "0x123323C", Length = "0x15C")]
	[Token(Token = "0x6000E98")]
	public override bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12336A4", Offset = "0x12336A4", Length = "0x190")]
	[Token(Token = "0x6000E9A")]
	public bool IsValidForDevice(ImangiLocaleInfo inCheckInfo, bool inStrict) { }

	[Address(RVA = "0x1233638", Offset = "0x1233638", Length = "0x6C")]
	[Token(Token = "0x6000E99")]
	protected bool StrictCompareValues(string inSource, string inCheck) { }

	[Address(RVA = "0x1233490", Offset = "0x1233490", Length = "0x1A8")]
	[Token(Token = "0x6000E97")]
	public override Dictionary<String, Object> ToDict() { }

}

