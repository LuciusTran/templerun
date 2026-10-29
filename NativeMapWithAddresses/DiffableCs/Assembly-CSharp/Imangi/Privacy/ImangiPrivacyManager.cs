namespace Imangi.Privacy;

[Token(Token = "0x2000254")]
public class ImangiPrivacyManager : MonoBehaviour
{
	[CompilerGenerated]
	[Token(Token = "0x2000255")]
	private sealed class <PostConsentStateChange>d__93 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4001245")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4001246")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4001247")]
		public ImangiPrivacyManager <>4__this; //Field offset: 0x20
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x4001248")]
		private bool <isFinished>5__2; //Field offset: 0x28
		[FieldOffset(Offset = "0x29")]
		[Token(Token = "0x4001249")]
		private bool <retry>5__3; //Field offset: 0x29
		[FieldOffset(Offset = "0x2A")]
		[Token(Token = "0x400124A")]
		private bool <success>5__4; //Field offset: 0x2A
		[FieldOffset(Offset = "0x2C")]
		[Token(Token = "0x400124B")]
		private int <retryCount>5__5; //Field offset: 0x2C
		[FieldOffset(Offset = "0x30")]
		[Token(Token = "0x400124C")]
		private long <timeStamp>5__6; //Field offset: 0x30
		[FieldOffset(Offset = "0x38")]
		[Token(Token = "0x400124D")]
		private WWWForm <wwwForm>5__7; //Field offset: 0x38
		[FieldOffset(Offset = "0x40")]
		[Token(Token = "0x400124E")]
		private UnityWebRequest <webRequest>5__8; //Field offset: 0x40

		[Token(Token = "0x170001D2")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x1249F68", Offset = "0x1249F68", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6001089")]
			private get { } //Length: 8
		}

		[Token(Token = "0x170001D3")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x1249FA8", Offset = "0x1249FA8", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x600108B")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x1249324", Offset = "0x1249324", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x6001085")]
		public <PostConsentStateChange>d__93(int <>1__state) { }

		[Address(RVA = "0x1249EB8", Offset = "0x1249EB8", Length = "0xB0")]
		[Token(Token = "0x6001088")]
		private void <>m__Finally1() { }

		[Address(RVA = "0x1249AB4", Offset = "0x1249AB4", Length = "0x404")]
		[Token(Token = "0x6001087")]
		private override bool MoveNext() { }

		[Address(RVA = "0x1249F68", Offset = "0x1249F68", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6001089")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x1249FA8", Offset = "0x1249FA8", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x600108B")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x1249F70", Offset = "0x1249F70", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x600108A")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x1249A98", Offset = "0x1249A98", Length = "0x1C")]
		[DebuggerHidden]
		[Token(Token = "0x6001086")]
		private override void System.IDisposable.Dispose() { }

	}

	[Token(Token = "0x400121B")]
	public const string FeatureName = "CF"; //Field offset: 0x0
	[Token(Token = "0x4001233")]
	public const string _BasePrivacyPolicyAppURL = "privacy-policy-app.html"; //Field offset: 0x0
	[Token(Token = "0x400121C")]
	public static readonly string LogChannel; //Field offset: 0x0
	[Token(Token = "0x400121D")]
	public static readonly bool VerboseLogging; //Field offset: 0x8
	[Token(Token = "0x400121E")]
	protected static ImangiPrivacyManager Instance; //Field offset: 0x10
	[Token(Token = "0x400121F")]
	protected static GameObject ImangiPrivacyGameObject; //Field offset: 0x18
	[Token(Token = "0x4001220")]
	protected static readonly string ImangiPrivacyInfoKey; //Field offset: 0x20
	[Token(Token = "0x4001221")]
	protected static readonly string AppIDKey; //Field offset: 0x28
	[Token(Token = "0x4001222")]
	protected static readonly string PlatformIDKey; //Field offset: 0x30
	[Token(Token = "0x4001223")]
	protected static readonly string AppVersionKey; //Field offset: 0x38
	[Token(Token = "0x4001224")]
	protected static readonly string IDFVKey; //Field offset: 0x40
	[Token(Token = "0x4001225")]
	protected static readonly string IDFAKey; //Field offset: 0x48
	[Token(Token = "0x4001226")]
	protected static readonly string ABIDKey; //Field offset: 0x50
	[Token(Token = "0x4001227")]
	protected static readonly string ConsentLanguageKey; //Field offset: 0x58
	[Token(Token = "0x4001228")]
	protected static readonly string ConsentTextVersionKey; //Field offset: 0x60
	[Token(Token = "0x4001229")]
	protected static readonly string ConsentCountryCodeKey; //Field offset: 0x68
	[Token(Token = "0x400122A")]
	protected static readonly string LastChangePostedTimestampKey; //Field offset: 0x70
	[Token(Token = "0x400122B")]
	protected static readonly string HasFinishedConsentFlowKey; //Field offset: 0x78
	[Token(Token = "0x400122C")]
	protected static readonly string ReConsentRequiredDateTimeKey; //Field offset: 0x80
	[Token(Token = "0x400122D")]
	protected static readonly string ConsentFlowVersionKey; //Field offset: 0x88
	[Token(Token = "0x400122E")]
	protected static readonly string SaveFileName; //Field offset: 0x90
	[Token(Token = "0x400122F")]
	protected static readonly string ConsentLanguageDefault; //Field offset: 0x98
	[Token(Token = "0x4001230")]
	protected static readonly string ConsentTextVersionDefault; //Field offset: 0xA0
	[Token(Token = "0x4001231")]
	protected static readonly string ConsentCountryCodeDefault; //Field offset: 0xA8
	[Token(Token = "0x4001232")]
	protected static readonly int ConsentFlowVersionDefault; //Field offset: 0xB0
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4001234")]
	protected ImangiPrivacyInfo PrivacyInfo; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4001235")]
	protected long LastChangePostedTimestamp; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4001236")]
	protected bool PendingStateChangedPostRequest; //Field offset: 0x30
	[FieldOffset(Offset = "0x31")]
	[Token(Token = "0x4001237")]
	protected bool PendingSerialize; //Field offset: 0x31
	[FieldOffset(Offset = "0x32")]
	[Token(Token = "0x4001238")]
	protected bool IsInitialized; //Field offset: 0x32
	[FieldOffset(Offset = "0x33")]
	[Token(Token = "0x4001239")]
	protected bool IsDeserialized; //Field offset: 0x33
	[FieldOffset(Offset = "0x34")]
	[Token(Token = "0x400123A")]
	protected bool HasFinishedConsentFlow; //Field offset: 0x34
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x400123B")]
	protected DateTime ReConsentRequiredDateTime; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x400123C")]
	protected string ConsentWebRequestUrl; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x400123D")]
	protected string AuthHeader; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x400123E")]
	protected string IDFA; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x400123F")]
	protected string ConsentLanguage; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4001240")]
	protected string ConsentTextVersion; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4001241")]
	protected string ConsentCountryCode; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x4001242")]
	protected int ConsentFlowVersion; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4001243")]
	protected ImangiPrivacyConfigInfo ConfigInfo; //Field offset: 0x78
	[CompilerGenerated]
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x4001244")]
	private Action<Int32> OnTrackingAuthorizationComplete; //Field offset: 0x80

	[Token(Token = "0x14000019")]
	protected event Action<Int32> OnTrackingAuthorizationComplete
	{
		[Address(RVA = "0x1246D00", Offset = "0x1246D00", Length = "0xB0")]
		[CompilerGenerated]
		[Token(Token = "0x600104B")]
		 add { } //Length: 176
		[Address(RVA = "0x1246DB0", Offset = "0x1246DB0", Length = "0xB0")]
		[CompilerGenerated]
		[Token(Token = "0x600104C")]
		 remove { } //Length: 176
	}

	[Address(RVA = "0x12497B8", Offset = "0x12497B8", Length = "0x2B4")]
	[Token(Token = "0x6001083")]
	private static ImangiPrivacyManager() { }

	[Address(RVA = "0x124966C", Offset = "0x124966C", Length = "0x14C")]
	[Token(Token = "0x6001082")]
	public ImangiPrivacyManager() { }

	[Address(RVA = "0x1249A6C", Offset = "0x1249A6C", Length = "0x2C")]
	[CompilerGenerated]
	[Token(Token = "0x6001084")]
	private void <GetIDFA>b__54_0(string inAdvertisingId, bool inTrackingEnabled, string inErrorMsg) { }

	[Address(RVA = "0x1246D00", Offset = "0x1246D00", Length = "0xB0")]
	[CompilerGenerated]
	[Token(Token = "0x600104B")]
	protected void add_OnTrackingAuthorizationComplete(Action<Int32> value) { }

	[Address(RVA = "0x1247A80", Offset = "0x1247A80", Length = "0x2C")]
	[Token(Token = "0x6001059")]
	public void ConfigureRegulationType() { }

	[Address(RVA = "0x1247FEC", Offset = "0x1247FEC", Length = "0x1C")]
	[Token(Token = "0x600105A")]
	public void ConfigureRegulationTypeFromRC(ImangiRegulationType type = -1) { }

	[Address(RVA = "0x1248B08", Offset = "0x1248B08", Length = "0xC")]
	[Token(Token = "0x600107D")]
	protected void ConsentStateChanged() { }

	[Address(RVA = "0x1246F24", Offset = "0x1246F24", Length = "0x244")]
	[Token(Token = "0x600104E")]
	public static void CreateInstance() { }

	[Address(RVA = "0x1247168", Offset = "0x1247168", Length = "0x418")]
	[Token(Token = "0x600107A")]
	public void Deserialize(bool inForceDeserialize = false) { }

	[Address(RVA = "0x1247AAC", Offset = "0x1247AAC", Length = "0x30")]
	[Token(Token = "0x600107B")]
	protected void FinishInitialization() { }

	[Address(RVA = "0x1247664", Offset = "0x1247664", Length = "0x378")]
	[Token(Token = "0x6001058")]
	private string GenerateAuthHeader() { }

	[Address(RVA = "0x1248860", Offset = "0x1248860", Length = "0x1C")]
	[Token(Token = "0x600106C")]
	public int GetAgeOfConsent() { }

	[Address(RVA = "0x1247E04", Offset = "0x1247E04", Length = "0x8")]
	[Token(Token = "0x6001054")]
	public override int GetAuthorizationStatus() { }

	[Address(RVA = "0x1248C28", Offset = "0x1248C28", Length = "0x204")]
	[Token(Token = "0x6001074")]
	public void GetConsentGroupsThatRequireConsent(ref List<ImangiConsentGroup>& refConsentGroups) { }

	[Address(RVA = "0x1248B6C", Offset = "0x1248B6C", Length = "0x18")]
	[Token(Token = "0x6001072")]
	public ImangiConsentState GetConsentState(ImangiConsentGroup inConsentGroup) { }

	[Address(RVA = "0x124934C", Offset = "0x124934C", Length = "0x220")]
	[Token(Token = "0x600107F")]
	protected WWWForm GetConsentStateChangedPostRequestWWWForm() { }

	[Address(RVA = "0x1248B84", Offset = "0x1248B84", Length = "0xA4")]
	[Token(Token = "0x6001073")]
	public ImangiConsentType GetConsentType(ImangiConsentGroup inConsentGroup) { }

	[Address(RVA = "0x1247E0C", Offset = "0x1247E0C", Length = "0x50")]
	[Token(Token = "0x6001056")]
	private DateTime GetDateTimeUTCNow() { }

	[Address(RVA = "0x1249028", Offset = "0x1249028", Length = "0xBC")]
	[Token(Token = "0x6001077")]
	protected static string GetFullSaveFilePath() { }

	[Address(RVA = "0x12479DC", Offset = "0x12479DC", Length = "0xA4")]
	[Token(Token = "0x6001057")]
	private void GetIDFA() { }

	[Address(RVA = "0x1246E60", Offset = "0x1246E60", Length = "0xC4")]
	[Token(Token = "0x600104D")]
	public static ImangiPrivacyManager GetInstance() { }

	[Address(RVA = "0x1248E2C", Offset = "0x1248E2C", Length = "0x1C")]
	[Token(Token = "0x6001075")]
	public List<ImangiConsentGroup> GetMainConsentFlowGroups() { }

	[Address(RVA = "0x12490E4", Offset = "0x12490E4", Length = "0x240")]
	[Token(Token = "0x6001078")]
	public string GetPrivacyJSONString() { }

	[Address(RVA = "0x1248E48", Offset = "0x1248E48", Length = "0x1E0")]
	[Token(Token = "0x6001076")]
	public string GetPrivacyPolicyURL(string inLanguageCode, string inCountryCode, ImangiConsentGroup inConsentGroup = -1) { }

	[Address(RVA = "0x1247E5C", Offset = "0x1247E5C", Length = "0x190")]
	[Token(Token = "0x6001067")]
	public ImangiRegulationType GetRegulationType(ImangiLocaleInfo inImangiLocaleInfo = null) { }

	[Address(RVA = "0x124871C", Offset = "0x124871C", Length = "0x11C")]
	[Token(Token = "0x600106E")]
	public bool HasConsent(ImangiConsentGroup inConsentGroup, ImangiLocaleInfo inImangiLocaleInfo = null) { }

	[Address(RVA = "0x1247580", Offset = "0x1247580", Length = "0x38")]
	[Token(Token = "0x600104F")]
	public void Initialize(ImangiPrivacyConfigInfo inConfig) { }

	[Address(RVA = "0x12475B8", Offset = "0x12475B8", Length = "0xAC")]
	[Token(Token = "0x6001050")]
	private void Initialize_Internal(ImangiPrivacyConfigInfo inConfig) { }

	[Address(RVA = "0x12495EC", Offset = "0x12495EC", Length = "0x80")]
	[Token(Token = "0x6001081")]
	public bool IsCCPA() { }

	[Address(RVA = "0x12486EC", Offset = "0x12486EC", Length = "0x24")]
	[Token(Token = "0x600106D")]
	public bool IsConsentKnown(ImangiConsentGroup inConsentGroup) { }

	[Address(RVA = "0x1248378", Offset = "0x1248378", Length = "0x1C")]
	[Token(Token = "0x6001063")]
	public bool IsConsentRequiredBecauseOfResonsent() { }

	[Address(RVA = "0x1248350", Offset = "0x1248350", Length = "0x28")]
	[Token(Token = "0x6001062")]
	public bool IsConsentRequiredByVersion() { }

	[Address(RVA = "0x1248638", Offset = "0x1248638", Length = "0xAC")]
	[Token(Token = "0x6001068")]
	protected bool IsConsentRequiredForConsentGroup(ImangiConsentGroup inConsentGroup) { }

	[Address(RVA = "0x1248498", Offset = "0x1248498", Length = "0x1A0")]
	[Token(Token = "0x6001066")]
	public bool IsConsentRequiredForCountry(ImangiLocaleInfo inImangiLocaleInfo = null) { }

	[Address(RVA = "0x124956C", Offset = "0x124956C", Length = "0x80")]
	[Token(Token = "0x6001080")]
	public bool IsGDPR() { }

	[Address(RVA = "0x1248144", Offset = "0x1248144", Length = "0x15C")]
	[Token(Token = "0x6001060")]
	public bool IsGlobalReConsentRequired(DateTime inNow) { }

	[Address(RVA = "0x1248710", Offset = "0x1248710", Length = "0xC")]
	[Token(Token = "0x600106A")]
	public bool IsOfAgeToConsent() { }

	[Address(RVA = "0x1248838", Offset = "0x1248838", Length = "0x28")]
	[Token(Token = "0x600106B")]
	public bool IsOfAgeToConsentWasOffline() { }

	[Address(RVA = "0x12486E4", Offset = "0x12486E4", Length = "0x8")]
	[Token(Token = "0x6001069")]
	public bool IsOfKnownAge() { }

	[Address(RVA = "0x12482A0", Offset = "0x12482A0", Length = "0xB0")]
	[Token(Token = "0x6001061")]
	public bool IsReConsentRequiredByDate(DateTime inNow) { }

	[Address(RVA = "0x1247D48", Offset = "0x1247D48", Length = "0x8")]
	[Token(Token = "0x6001052")]
	private void OnDestroy() { }

	[Address(RVA = "0x1247CE8", Offset = "0x1247CE8", Length = "0x60")]
	[IteratorStateMachine(typeof(<PostConsentStateChange>d__93))]
	[Token(Token = "0x600107E")]
	protected IEnumerator PostConsentStateChange() { }

	[Address(RVA = "0x1246DB0", Offset = "0x1246DB0", Length = "0xB0")]
	[CompilerGenerated]
	[Token(Token = "0x600104C")]
	protected void remove_OnTrackingAuthorizationComplete(Action<Int32> value) { }

	[Address(RVA = "0x1247D50", Offset = "0x1247D50", Length = "0x58")]
	[Token(Token = "0x6001053")]
	public override void RequestTrackingAuthorization(Action<Int32> trackingAuthorizationComplete) { }

	[Address(RVA = "0x1247B38", Offset = "0x1247B38", Length = "0x1B0")]
	[Token(Token = "0x6001079")]
	protected bool Serialize() { }

	[Address(RVA = "0x1248018", Offset = "0x1248018", Length = "0x8")]
	[Token(Token = "0x600105D")]
	public void SetConsentCountryCode(string inConsentCountryCode) { }

	[Address(RVA = "0x1248020", Offset = "0x1248020", Length = "0x8")]
	[Token(Token = "0x600105E")]
	public void SetConsentFlowVersion(int inConsentFlowVersion) { }

	[Address(RVA = "0x1248008", Offset = "0x1248008", Length = "0x8")]
	[Token(Token = "0x600105B")]
	public void SetConsentLanguage(string inConsentLanguage) { }

	[Address(RVA = "0x1248B40", Offset = "0x1248B40", Length = "0x2C")]
	[Token(Token = "0x6001071")]
	public void SetConsentState(ImangiConsentGroup inConsentGroup, ImangiConsentState inGivesConsent) { }

	[Address(RVA = "0x1248B14", Offset = "0x1248B14", Length = "0x2C")]
	[Token(Token = "0x6001070")]
	public void SetConsentStates(Dictionary<ImangiConsentGroup, ImangiConsentState> inConsentStates) { }

	[Address(RVA = "0x1248010", Offset = "0x1248010", Length = "0x8")]
	[Token(Token = "0x600105C")]
	public void SetConsentTextVersion(string inConsentTextVersion) { }

	[Address(RVA = "0x1248028", Offset = "0x1248028", Length = "0x110")]
	[Token(Token = "0x600105F")]
	public void SetHasFinishedConsentFlow() { }

	[Address(RVA = "0x124887C", Offset = "0x124887C", Length = "0x28C")]
	[Token(Token = "0x600106F")]
	public void SetMainConsentFlowStates(bool inIsOverAgeCheck, Dictionary<ImangiConsentGroup, ImangiConsentState> inConsentStates) { }

	[Address(RVA = "0x1248138", Offset = "0x1248138", Length = "0xC")]
	[Token(Token = "0x600107C")]
	protected void SetPendingSerialize() { }

	[Address(RVA = "0x1248394", Offset = "0x1248394", Length = "0x20")]
	[Token(Token = "0x6001064")]
	public void SetReconsetnState(bool value) { }

	[Address(RVA = "0x12483B4", Offset = "0x12483B4", Length = "0xE4")]
	[Token(Token = "0x6001065")]
	public bool ShouldShowConsentFlow() { }

	[Address(RVA = "0x1247DA8", Offset = "0x1247DA8", Length = "0x5C")]
	[Token(Token = "0x6001055")]
	public void TrackingAuthorizationCompletion(string trackingAuthorizationStatus) { }

	[Address(RVA = "0x1247ADC", Offset = "0x1247ADC", Length = "0x5C")]
	[Token(Token = "0x6001051")]
	private void Update() { }

}

