//Type is in global namespace

[Token(Token = "0x20000D5")]
public class PrivacyRegulationInfoData : ConfigData
{
	[Token(Token = "0x4000748")]
	public const string PromoKeyword = "PrivacyRegulationData"; //Field offset: 0x0
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000749")]
	public ImangiPrivacyRegulationInfo PrivacyRegulationInfo; //Field offset: 0x28

	[Token(Token = "0x17000115")]
	public virtual int ErrorCode
	{
		[Address(RVA = "0x12C8D04", Offset = "0x12C8D04", Length = "0x8")]
		[Token(Token = "0x6000666")]
		 get { } //Length: 8
	}

	[Token(Token = "0x17000113")]
	public virtual int Index
	{
		[Address(RVA = "0x12C8CBC", Offset = "0x12C8CBC", Length = "0x8")]
		[Token(Token = "0x6000664")]
		 get { } //Length: 8
	}

	[Token(Token = "0x17000114")]
	public virtual string Keyword
	{
		[Address(RVA = "0x12C8CC4", Offset = "0x12C8CC4", Length = "0x40")]
		[Token(Token = "0x6000665")]
		 get { } //Length: 64
	}

	[Address(RVA = "0x12C9114", Offset = "0x12C9114", Length = "0x68")]
	[Token(Token = "0x600066C")]
	public PrivacyRegulationInfoData() { }

	[Address(RVA = "0x12C90A8", Offset = "0x12C90A8", Length = "0x6C")]
	[Token(Token = "0x600066B")]
	public virtual bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12C8D04", Offset = "0x12C8D04", Length = "0x8")]
	[Token(Token = "0x6000666")]
	public virtual int get_ErrorCode() { }

	[Address(RVA = "0x12C8CBC", Offset = "0x12C8CBC", Length = "0x8")]
	[Token(Token = "0x6000664")]
	public virtual int get_Index() { }

	[Address(RVA = "0x12C8CC4", Offset = "0x12C8CC4", Length = "0x40")]
	[Token(Token = "0x6000665")]
	public virtual string get_Keyword() { }

	[Address(RVA = "0x12C8D38", Offset = "0x12C8D38", Length = "0x234")]
	[Token(Token = "0x6000668")]
	public ImangiRegulationType GetRegulationType(ImangiOfflineLocaleRequirements inConsentType) { }

	[Address(RVA = "0x12C8F6C", Offset = "0x12C8F6C", Length = "0x120")]
	[Token(Token = "0x6000669")]
	public static bool IsDeviceTimeBetween(TimeSpan startOffset, TimeSpan endOffset) { }

	[Address(RVA = "0x12C8D0C", Offset = "0x12C8D0C", Length = "0x2C")]
	[Token(Token = "0x6000667")]
	public bool IsValidForDevice(ImangiOfflineLocaleRequirements inConsentType) { }

	[Address(RVA = "0x12C908C", Offset = "0x12C908C", Length = "0x1C")]
	[Token(Token = "0x600066A")]
	public virtual Dictionary<String, Object> ToDict() { }

}

