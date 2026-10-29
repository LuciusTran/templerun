namespace Imangi.Utilities;

[Token(Token = "0x20001CA")]
public class ImangiPrivacyOfflineLocaleInfo : IParsableJSONListElement
{
	[Token(Token = "0x4001006")]
	private const string _CountryKey = "CC"; //Field offset: 0x0
	[Token(Token = "0x4001008")]
	private const string _RegulationTypeKey = "RT"; //Field offset: 0x0
	[Token(Token = "0x400100A")]
	private const string _UTCOffSetStartTimeKey = "OST"; //Field offset: 0x0
	[Token(Token = "0x400100C")]
	private const string _UTCOffSetEndTimeKey = "OSE"; //Field offset: 0x0
	[Token(Token = "0x400100E")]
	private const string _LanguageCodeKey = "La"; //Field offset: 0x0
	[Token(Token = "0x4001010")]
	private const string _TimeZoneKey = "TZ"; //Field offset: 0x0
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x4001007")]
	public string Country; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x4001009")]
	public ImangiRegulationType RegulationType; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x400100B")]
	public string UTCOffSetStartTime; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x400100D")]
	public string UTCOffSetEndTime; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x400100F")]
	public string LanguageCode; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4001011")]
	public string TimeZone; //Field offset: 0x38

	[Address(RVA = "0x121CA54", Offset = "0x121CA54", Length = "0x68")]
	[Token(Token = "0x6000CF8")]
	public ImangiPrivacyOfflineLocaleInfo() { }

	[Address(RVA = "0x121CABC", Offset = "0x121CABC", Length = "0xAC")]
	[Token(Token = "0x6000CF9")]
	public ImangiPrivacyOfflineLocaleInfo(string inCountry, ImangiRegulationType inRegulationType, string inLanguageCode, string inUTCOffSetStartTime, string inUTCOffSetEndTime, string inTimeZone = "") { }

	[Address(RVA = "0x121CB68", Offset = "0x121CB68", Length = "0x80")]
	[Token(Token = "0x6000CFA")]
	public ImangiPrivacyOfflineLocaleInfo(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x121CDAC", Offset = "0x121CDAC", Length = "0x84")]
	[Token(Token = "0x6000CFB")]
	public ImangiPrivacyOfflineLocaleInfo(string inJSONString) { }

	[Address(RVA = "0x121CE30", Offset = "0x121CE30", Length = "0xA0")]
	[Token(Token = "0x6000CFC")]
	public ImangiPrivacyOfflineLocaleInfo(ImangiPrivacyOfflineLocaleInfo inInfo) { }

	[Address(RVA = "0x121CBE8", Offset = "0x121CBE8", Length = "0x1C4")]
	[Token(Token = "0x6000D00")]
	public override bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x121D230", Offset = "0x121D230", Length = "0x6C")]
	[Token(Token = "0x6000D02")]
	public TimeSpan GetEndTimeSpan() { }

	[Address(RVA = "0x121D1C4", Offset = "0x121D1C4", Length = "0x6C")]
	[Token(Token = "0x6000D01")]
	public TimeSpan GetStartTimeSpan() { }

	[Address(RVA = "0x121D0F0", Offset = "0x121D0F0", Length = "0x6C")]
	[Token(Token = "0x6000CFE")]
	public string TimeSpanToString(TimeSpan timeSpan, string format = "hh\:mm\:ss") { }

	[Address(RVA = "0x121CED0", Offset = "0x121CED0", Length = "0x220")]
	[Token(Token = "0x6000CFD")]
	public override Dictionary<String, Object> ToDict() { }

	[Address(RVA = "0x121D15C", Offset = "0x121D15C", Length = "0x68")]
	[Token(Token = "0x6000CFF")]
	public bool TryParseTimeSpan(string timeString, out TimeSpan timeSpan) { }

}

