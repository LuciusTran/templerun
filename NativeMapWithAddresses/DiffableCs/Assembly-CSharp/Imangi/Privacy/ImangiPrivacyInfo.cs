namespace Imangi.Privacy;

[Token(Token = "0x200024D")]
public class ImangiPrivacyInfo : IParsableJSONListElement
{
	[Token(Token = "0x40011E4")]
	public const string LogChannel = "ImangiPrivacyInfo"; //Field offset: 0x0
	[Token(Token = "0x40011F1")]
	public const string UserSelectedReconsentKey = "usr"; //Field offset: 0x0
	[Token(Token = "0x40011F0")]
	public const string IAPConsentKey = "iap"; //Field offset: 0x0
	[Token(Token = "0x40011EF")]
	public const string SocialConsentKey = "so"; //Field offset: 0x0
	[Token(Token = "0x40011EE")]
	public const string SupportConsentKey = "s"; //Field offset: 0x0
	[Token(Token = "0x40011EC")]
	public const string GameServicesConsentKey = "gs"; //Field offset: 0x0
	[Token(Token = "0x40011EB")]
	public const string AdsConsentKey = "ad"; //Field offset: 0x0
	[Token(Token = "0x40011ED")]
	public const string CloudConsentKey = "c"; //Field offset: 0x0
	[Token(Token = "0x40011E9")]
	public const string AgeConsentKey = "ag"; //Field offset: 0x0
	[Token(Token = "0x40011E8")]
	public const string ConsentStatesKey = "c"; //Field offset: 0x0
	[Token(Token = "0x40011E7")]
	public const string TimestampKey = "ts"; //Field offset: 0x0
	[Token(Token = "0x40011E6")]
	public const string RegulationKey = "r"; //Field offset: 0x0
	[Token(Token = "0x40011E5")]
	public const string VersionKey = "v"; //Field offset: 0x0
	[Token(Token = "0x40011EA")]
	public const string AnalyticConsentKey = "an"; //Field offset: 0x0
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x40011F2")]
	private int _Version; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x40011F3")]
	private long _Timestamp; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40011F4")]
	private ImangiRegulationType _Regulation; //Field offset: 0x20
	[FieldOffset(Offset = "0x24")]
	[Token(Token = "0x40011F5")]
	private ImangiRegulationType _RCRegulation; //Field offset: 0x24
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40011F6")]
	private bool _ConsentFlowShouldReconsent; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40011F7")]
	private Dictionary<ImangiConsentGroup, ImangiConsentState> _ConsentStates; //Field offset: 0x30

	[Token(Token = "0x170001D1")]
	public bool ConsentFlowShouldReconsent
	{
		[Address(RVA = "0x1246130", Offset = "0x1246130", Length = "0x8")]
		[Token(Token = "0x600103C")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170001D0")]
	public ImangiRegulationType RCRegulation
	{
		[Address(RVA = "0x1246128", Offset = "0x1246128", Length = "0x8")]
		[Token(Token = "0x600103B")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170001CF")]
	public ImangiRegulationType Regulation
	{
		[Address(RVA = "0x1246120", Offset = "0x1246120", Length = "0x8")]
		[Token(Token = "0x600103A")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170001CE")]
	public long Timestamp
	{
		[Address(RVA = "0x1246118", Offset = "0x1246118", Length = "0x8")]
		[Token(Token = "0x6001039")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170001CD")]
	public int Version
	{
		[Address(RVA = "0x1246110", Offset = "0x1246110", Length = "0x8")]
		[Token(Token = "0x6001038")]
		 get { } //Length: 8
	}

	[Address(RVA = "0x1246144", Offset = "0x1246144", Length = "0x8C")]
	[Token(Token = "0x600103E")]
	public ImangiPrivacyInfo() { }

	[Address(RVA = "0x12461D0", Offset = "0x12461D0", Length = "0x9C")]
	[Token(Token = "0x600103F")]
	public ImangiPrivacyInfo(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x1246404", Offset = "0x1246404", Length = "0x9C")]
	[Token(Token = "0x6001040")]
	public ImangiPrivacyInfo(string inJSONString) { }

	[Address(RVA = "0x1246A48", Offset = "0x1246A48", Length = "0x2B8")]
	[Token(Token = "0x600104A")]
	public void AddConsentStateInfoToWWWForm(ref WWWForm refWWWForm) { }

	[Address(RVA = "0x124671C", Offset = "0x124671C", Length = "0x50")]
	[Token(Token = "0x6001046")]
	public void ClearConsentStates() { }

	[Address(RVA = "0x124626C", Offset = "0x124626C", Length = "0x198")]
	[Token(Token = "0x6001042")]
	public override bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x1246130", Offset = "0x1246130", Length = "0x8")]
	[Token(Token = "0x600103C")]
	public bool get_ConsentFlowShouldReconsent() { }

	[Address(RVA = "0x1246128", Offset = "0x1246128", Length = "0x8")]
	[Token(Token = "0x600103B")]
	public ImangiRegulationType get_RCRegulation() { }

	[Address(RVA = "0x1246120", Offset = "0x1246120", Length = "0x8")]
	[Token(Token = "0x600103A")]
	public ImangiRegulationType get_Regulation() { }

	[Address(RVA = "0x1246118", Offset = "0x1246118", Length = "0x8")]
	[Token(Token = "0x6001039")]
	public long get_Timestamp() { }

	[Address(RVA = "0x1246110", Offset = "0x1246110", Length = "0x8")]
	[Token(Token = "0x6001038")]
	public int get_Version() { }

	[Address(RVA = "0x12469B4", Offset = "0x12469B4", Length = "0x94")]
	[Token(Token = "0x6001049")]
	public ImangiConsentState GetConsentState(ImangiConsentGroup inConsentGroup) { }

	[Address(RVA = "0x1246668", Offset = "0x1246668", Length = "0xA4")]
	[Token(Token = "0x6001043")]
	private long GetCurrentTimeStamp() { }

	[Address(RVA = "0x1246138", Offset = "0x1246138", Length = "0xC")]
	[Token(Token = "0x600103D")]
	public void SetConsentFlowShouldReconsent(bool value) { }

	[Address(RVA = "0x12468D0", Offset = "0x12468D0", Length = "0xE4")]
	[Token(Token = "0x6001048")]
	public bool SetConsentState(ImangiConsentGroup inConsentGroup, ImangiConsentState inConsentState) { }

	[Address(RVA = "0x124676C", Offset = "0x124676C", Length = "0x164")]
	[Token(Token = "0x6001047")]
	public bool SetConsentStates(Dictionary<ImangiConsentGroup, ImangiConsentState> inConsentStates) { }

	[Address(RVA = "0x124670C", Offset = "0x124670C", Length = "0x8")]
	[Token(Token = "0x6001044")]
	public void SetRegulationType(ImangiRegulationType inRegulationType) { }

	[Address(RVA = "0x1246714", Offset = "0x1246714", Length = "0x8")]
	[Token(Token = "0x6001045")]
	public void SetRegulationTypeFromRC(ImangiRegulationType inRegulationType) { }

	[Address(RVA = "0x12464A0", Offset = "0x12464A0", Length = "0x1C8")]
	[Token(Token = "0x6001041")]
	public override Dictionary<String, Object> ToDict() { }

}

