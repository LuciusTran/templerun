namespace Imangi.Privacy;

[Token(Token = "0x200024C")]
public class ImangiPrivacyConfigInfo : IParsableJSONListElement
{
	[Token(Token = "0x40011B1")]
	protected static readonly string ImangiPrivacyConfigInfoKey; //Field offset: 0x0
	[Token(Token = "0x40011CF")]
	private const int ConsentFlowVersionDefault = 0; //Field offset: 0x0
	[Token(Token = "0x40011CE")]
	private const string PrivacyPolicyURLDefault = "https://www.imangistudios.com/privacy/privacy-policy-app.html"; //Field offset: 0x0
	[Token(Token = "0x40011CD")]
	private const string ConsentRelativePathDefault = "privacy/consent"; //Field offset: 0x0
	[Token(Token = "0x40011CC")]
	private const string PrivacyDomainDefault = "privacy.imangisupport.com"; //Field offset: 0x0
	[Token(Token = "0x40011CB")]
	private const string HttpSchemeDefault = "https"; //Field offset: 0x0
	[Token(Token = "0x40011C9")]
	private const int ReConsentRequiredDurationDefault = 365; //Field offset: 0x0
	[Token(Token = "0x40011C8")]
	private const float RetryDelayDefault = 1; //Field offset: 0x0
	[Token(Token = "0x40011C7")]
	private const int MaxRetryDefault = 3; //Field offset: 0x0
	[Token(Token = "0x40011C6")]
	private const int ABIDDefault = -1; //Field offset: 0x0
	[Token(Token = "0x40011C5")]
	private const string AppVersionDefault = "0.0.0.0"; //Field offset: 0x0
	[Token(Token = "0x40011C4")]
	public const int NoReConsentRequiredDuration = -1; //Field offset: 0x0
	[Token(Token = "0x40011CA")]
	private const int AgeOfConsentDefault = 16; //Field offset: 0x0
	[Token(Token = "0x40011B2")]
	protected static readonly string AppIDConfigKey; //Field offset: 0x8
	[Token(Token = "0x40011B3")]
	protected static readonly string AppVersionConfigKey; //Field offset: 0x10
	[Token(Token = "0x40011B4")]
	protected static readonly string ABIDConfigKey; //Field offset: 0x18
	[Token(Token = "0x40011B5")]
	protected static readonly string MaxRetryConfigKey; //Field offset: 0x20
	[Token(Token = "0x40011B6")]
	protected static readonly string RetryDelayConfigKey; //Field offset: 0x28
	[Token(Token = "0x40011B7")]
	protected static readonly string ReConsentRequireDurationConfigKey; //Field offset: 0x30
	[Token(Token = "0x40011B8")]
	protected static readonly string CCPAReConsentRequireDurationKey; //Field offset: 0x38
	[Token(Token = "0x40011B9")]
	protected static readonly string GlobalReconsentConfigKey; //Field offset: 0x40
	[Token(Token = "0x40011BA")]
	protected static readonly string AgeOfConsentConfigKey; //Field offset: 0x48
	[Token(Token = "0x40011BB")]
	protected static readonly string HttpSchemeConfigKey; //Field offset: 0x50
	[Token(Token = "0x40011BC")]
	protected static readonly string PrivacyDomainConfigKey; //Field offset: 0x58
	[Token(Token = "0x40011BD")]
	protected static readonly string ConsentRelativePathConfigKey; //Field offset: 0x60
	[Token(Token = "0x40011BE")]
	protected static readonly string PrivacyPolicyURLConfigKey; //Field offset: 0x68
	[Token(Token = "0x40011BF")]
	protected static readonly string ConsentGroupURLsConfigKey; //Field offset: 0x70
	[Token(Token = "0x40011C0")]
	protected static readonly string ConsentGroupConsentTypesConfigKey; //Field offset: 0x78
	[Token(Token = "0x40011C1")]
	protected static readonly string ConsentFlowVersionKey; //Field offset: 0x80
	[Token(Token = "0x40011C2")]
	protected static readonly string MainConsentFlowGroupsConfigKey; //Field offset: 0x88
	[Token(Token = "0x40011C3")]
	protected static readonly string ConsentLocalesKey; //Field offset: 0x90
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x40011D0")]
	public ImangiConsentPlatformID ConsentPlatformID; //Field offset: 0x10
	[FieldOffset(Offset = "0x14")]
	[Token(Token = "0x40011D1")]
	public ImangiConsentAppID ConsentAppID; //Field offset: 0x14
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x40011D2")]
	public string AppVersion; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40011D3")]
	public int ABID; //Field offset: 0x20
	[FieldOffset(Offset = "0x24")]
	[Token(Token = "0x40011D4")]
	public int MaxRetryCount; //Field offset: 0x24
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40011D5")]
	public float RetryDelay; //Field offset: 0x28
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x40011D6")]
	public int ReConsentRequiredDuration; //Field offset: 0x2C
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40011D7")]
	public int CCPAReConsentRequiredDuration; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x40011D8")]
	public DateTime GlobalReconsentDate; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x40011D9")]
	public DateTime CCPAGlobalReconsentDate; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x40011DA")]
	public int AgeOfConsent; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x40011DB")]
	public string HttpScheme; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x40011DC")]
	public string PrivacyDomain; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x40011DD")]
	public string ConsentRelativePath; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x40011DE")]
	public string PrivacyPolicyURL; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x40011DF")]
	public int ConsentFlowVersion; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x40011E0")]
	public Dictionary<ImangiConsentGroup, String> ConsentGroupURLs; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x40011E1")]
	public Dictionary<ImangiConsentGroup, ImangiConsentType> ConsentGroupConsentTypes; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x40011E2")]
	public List<ImangiConsentGroup> MainConsentFlowGroups; //Field offset: 0x88
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x40011E3")]
	public ImangiOfflineLocaleRequirements ConsentLocalesList; //Field offset: 0x90

	[Address(RVA = "0x1245E48", Offset = "0x1245E48", Length = "0x2C8")]
	[Token(Token = "0x6001037")]
	private static ImangiPrivacyConfigInfo() { }

	[Address(RVA = "0x1244548", Offset = "0x1244548", Length = "0x768")]
	[Token(Token = "0x6001032")]
	public ImangiPrivacyConfigInfo() { }

	[Address(RVA = "0x1244CBC", Offset = "0x1244CBC", Length = "0x77C")]
	[Token(Token = "0x6001033")]
	public ImangiPrivacyConfigInfo(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x1245438", Offset = "0x1245438", Length = "0x690")]
	[Token(Token = "0x6001035")]
	public override bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x1244CB0", Offset = "0x1244CB0", Length = "0xC")]
	[Token(Token = "0x6001036")]
	private void SetPlatformID() { }

	[Address(RVA = "0x1245AC8", Offset = "0x1245AC8", Length = "0x380")]
	[Token(Token = "0x6001034")]
	public override Dictionary<String, Object> ToDict() { }

}

