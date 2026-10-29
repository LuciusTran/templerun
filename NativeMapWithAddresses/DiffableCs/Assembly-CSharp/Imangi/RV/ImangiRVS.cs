namespace Imangi.RV;

[Token(Token = "0x20001B0")]
public class ImangiRVS : MonoBehaviour
{
	[Token(Token = "0x20001B2")]
	internal sealed class ImangiRVS_SVFailureDelegate : MulticastDelegate
	{

		[Address(RVA = "0x1217460", Offset = "0x1217460", Length = "0x8C")]
		[Token(Token = "0x6000C79")]
		public ImangiRVS_SVFailureDelegate(object object, IntPtr method) { }

		[Address(RVA = "0x1217558", Offset = "0x1217558", Length = "0xDC")]
		[Token(Token = "0x6000C7B")]
		public override IAsyncResult BeginInvoke(RVCheck inRVCheck, int inRVSLECode, int inSRCode, string inSEResponse, AsyncCallback callback, object object) { }

		[Address(RVA = "0x1217634", Offset = "0x1217634", Length = "0xC")]
		[Token(Token = "0x6000C7C")]
		public override void EndInvoke(IAsyncResult result) { }

		[Address(RVA = "0x12174EC", Offset = "0x12174EC", Length = "0x6C")]
		[Token(Token = "0x6000C7A")]
		public override void Invoke(RVCheck inRVCheck, int inRVSLECode, int inSRCode, string inSEResponse) { }

	}

	[Token(Token = "0x20001B1")]
	internal sealed class ImangiRVS_SVSuccessfulDelegate : MulticastDelegate
	{

		[Address(RVA = "0x1217228", Offset = "0x1217228", Length = "0x8C")]
		[Token(Token = "0x6000C75")]
		public ImangiRVS_SVSuccessfulDelegate(object object, IntPtr method) { }

		[Address(RVA = "0x1217330", Offset = "0x1217330", Length = "0x124")]
		[Token(Token = "0x6000C77")]
		public override IAsyncResult BeginInvoke(RVCheck inRVCheck, Dictionary<String, Int32> inProductIds, long inSRCode, double inSRTSeconds, int inSPTMicroseconds, AsyncCallback callback, object object) { }

		[Address(RVA = "0x1217454", Offset = "0x1217454", Length = "0xC")]
		[Token(Token = "0x6000C78")]
		public override void EndInvoke(IAsyncResult result) { }

		[Address(RVA = "0x12172B4", Offset = "0x12172B4", Length = "0x7C")]
		[Token(Token = "0x6000C76")]
		public override void Invoke(RVCheck inRVCheck, Dictionary<String, Int32> inProductIds, long inSRCode, double inSRTSeconds, int inSPTMicroseconds) { }

	}

	[Token(Token = "0x20001B5")]
	internal sealed class LogPayloadErrorDelegate : MulticastDelegate
	{

		[Address(RVA = "0x1217C1C", Offset = "0x1217C1C", Length = "0xA0")]
		[Token(Token = "0x6000C84")]
		public LogPayloadErrorDelegate(object object, IntPtr method) { }

		[Address(RVA = "0x1217CD0", Offset = "0x1217CD0", Length = "0x2C")]
		[Token(Token = "0x6000C86")]
		public override IAsyncResult BeginInvoke(string inReason, string inMethod, string inURLBase, string inForm, AsyncCallback callback, object object) { }

		[Address(RVA = "0x1217CFC", Offset = "0x1217CFC", Length = "0xC")]
		[Token(Token = "0x6000C87")]
		public override void EndInvoke(IAsyncResult result) { }

		[Address(RVA = "0x1217CBC", Offset = "0x1217CBC", Length = "0x14")]
		[Token(Token = "0x6000C85")]
		public override void Invoke(string inReason, string inMethod, string inURLBase, string inForm) { }

	}

	[Token(Token = "0x20001B3")]
	internal struct PData
	{
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000FA2")]
		public string IType; //Field offset: 0x0
		[FieldOffset(Offset = "0x8")]
		[Token(Token = "0x4000FA3")]
		public string PToken; //Field offset: 0x8
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000FA4")]
		public string OID; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000FA5")]
		public string PID; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000FA6")]
		public TRStoreTransaction Transaction; //Field offset: 0x20

		[Address(RVA = "0x1217640", Offset = "0x1217640", Length = "0x30")]
		[Token(Token = "0x6000C7D")]
		public PData(string inIType, TRStoreTransaction inTransaction) { }

	}

	[Token(Token = "0x20001B4")]
	internal struct RVCheck
	{
		[Token(Token = "0x4000FB4")]
		private const string _FOID = "GPA.3340-7461-0672-68911"; //Field offset: 0x0
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000FA7")]
		public ImangiRVS_SVSuccessfulDelegate SVSuccessEvent; //Field offset: 0x0
		[FieldOffset(Offset = "0x8")]
		[Token(Token = "0x4000FA8")]
		public ImangiRVS_SVFailureDelegate SVErrorEvent; //Field offset: 0x8
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000FA9")]
		public ImangiWebRequest WebRequest; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000FAA")]
		public List<PData> PDatas; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000FAB")]
		public string PName; //Field offset: 0x20
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x4000FAC")]
		public string AR; //Field offset: 0x28
		[FieldOffset(Offset = "0x30")]
		[Token(Token = "0x4000FAD")]
		public string Context; //Field offset: 0x30
		[FieldOffset(Offset = "0x38")]
		[Token(Token = "0x4000FAE")]
		public Dictionary<String, Object> Form; //Field offset: 0x38
		[FieldOffset(Offset = "0x40")]
		[Token(Token = "0x4000FAF")]
		public TRStoreTransaction Transaction; //Field offset: 0x40
		[FieldOffset(Offset = "0x48")]
		[Token(Token = "0x4000FB0")]
		public string VType; //Field offset: 0x48
		[FieldOffset(Offset = "0x50")]
		[Token(Token = "0x4000FB1")]
		public double StartingTimeStamp; //Field offset: 0x50
		[FieldOffset(Offset = "0x58")]
		[Token(Token = "0x4000FB2")]
		public double PauseTimeStamp; //Field offset: 0x58
		[FieldOffset(Offset = "0x60")]
		[Token(Token = "0x4000FB3")]
		public double TotalPauseTimeInSeconds; //Field offset: 0x60

		[Address(RVA = "0x1214208", Offset = "0x1214208", Length = "0x1B8")]
		[Token(Token = "0x6000C7E")]
		public RVCheck(TRStoreTransaction inTransaction, string inContext = null, ImangiRVS_SVSuccessfulDelegate inSVSuccessEvent = null, ImangiRVS_SVFailureDelegate inSVErrorEvent = null) { }

		[Address(RVA = "0x12147FC", Offset = "0x12147FC", Length = "0x254")]
		[Token(Token = "0x6000C7F")]
		public RVCheck(List<TRStoreTransaction> inTransactions, string inContext = null, ImangiRVS_SVSuccessfulDelegate inSVSuccessEvent = null, ImangiRVS_SVFailureDelegate inSVErrorEvent = null) { }

		[Address(RVA = "0x12179E4", Offset = "0x12179E4", Length = "0x238")]
		[Token(Token = "0x6000C83")]
		public void OnFinished(bool inSuccess, long inResponseCode, string inDownloadedText, double inTimeStamp) { }

		[Address(RVA = "0x1217670", Offset = "0x1217670", Length = "0x110")]
		[Token(Token = "0x6000C80")]
		private void OnPause(bool inPause) { }

		[Address(RVA = "0x12179D0", Offset = "0x12179D0", Length = "0x14")]
		[Token(Token = "0x6000C82")]
		public void OnRetry(int inCurrentRetryIndex, long inPreviousResponseCode, double inTimeStamp) { }

		[Address(RVA = "0x1217864", Offset = "0x1217864", Length = "0x16C")]
		[Token(Token = "0x6000C81")]
		public void OnStart(double inTimeStamp) { }

	}

	[Token(Token = "0x4000F7E")]
	public static Action<Boolean> OnPauseEvent; //Field offset: 0x0
	[Token(Token = "0x4000F9F")]
	private const string _PTokenDictKey = "pt"; //Field offset: 0x0
	[Token(Token = "0x4000F9E")]
	private const string _ITypeDictKey = "t"; //Field offset: 0x0
	[Token(Token = "0x4000F9D")]
	private const string _PDatasDictKey = "dl"; //Field offset: 0x0
	[Token(Token = "0x4000F9C")]
	private const string _PNameDictKey = "pn"; //Field offset: 0x0
	[Token(Token = "0x4000F9A")]
	private const string _DMDictKey = "dm"; //Field offset: 0x0
	[Token(Token = "0x4000F99")]
	private const string _AVDictKey = "av"; //Field offset: 0x0
	[Token(Token = "0x4000F98")]
	private const string _VTypeDictKey = "vt"; //Field offset: 0x0
	[Token(Token = "0x4000F97")]
	private const string _PSIDDictKey = "psi"; //Field offset: 0x0
	[Token(Token = "0x4000F96")]
	private const string _PVerDictKey = "pv"; //Field offset: 0x0
	[Token(Token = "0x4000F95")]
	private const string _HeaderKey = "h"; //Field offset: 0x0
	[Token(Token = "0x4000F94")]
	private const string _URLKey = "u"; //Field offset: 0x0
	[Token(Token = "0x4000F91")]
	protected const string _ITypeDefault = "inapp"; //Field offset: 0x0
	[Token(Token = "0x4000FA0")]
	private const string _OIDDictKey = "o"; //Field offset: 0x0
	[Token(Token = "0x4000FA1")]
	private const string _PIDDictKey = "p"; //Field offset: 0x0
	[Token(Token = "0x4000F86")]
	public const string PVType = "purchase"; //Field offset: 0x0
	[Token(Token = "0x4000F83")]
	public const string ConfigKey = "ImangiRVSConfigKey"; //Field offset: 0x0
	[Token(Token = "0x4000F84")]
	public const string LogChannel = "TRImangiStoreManager ImangiRVS"; //Field offset: 0x0
	[Token(Token = "0x4000F87")]
	public const string CVType = "contentCheck"; //Field offset: 0x0
	[Token(Token = "0x4000F7F")]
	public static LogPayloadErrorDelegate OnLogPayloadError; //Field offset: 0x8
	[Token(Token = "0x4000F80")]
	public static LogPayloadErrorDelegate OnLogPayloadFormError; //Field offset: 0x10
	[Token(Token = "0x4000F81")]
	public static ImangiRVS_SVSuccessfulDelegate OnLogSVSuccess; //Field offset: 0x18
	[Token(Token = "0x4000F82")]
	public static ImangiRVS_SVFailureDelegate OnLogFailedServerCommunication; //Field offset: 0x20
	[Token(Token = "0x4000F85")]
	private static bool _VerboseLogging; //Field offset: 0x28
	[Token(Token = "0x4000F8E")]
	protected static int PVersion; //Field offset: 0x2C
	[Token(Token = "0x4000F8F")]
	protected static ImangiRVS _Instance; //Field offset: 0x30
	[Token(Token = "0x4000F90")]
	protected static GameObject _ImangiRVSGameObject; //Field offset: 0x38
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000F88")]
	protected string _RVWebRequestUrl; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000F89")]
	protected WebRequestMethod _RVWebRequestMethod; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000F8A")]
	protected Dictionary<String, String> _RVRequestHeaders; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000F8B")]
	protected int _RetryCount; //Field offset: 0x38
	[FieldOffset(Offset = "0x3C")]
	[Token(Token = "0x4000F8C")]
	protected int _RetryDelay; //Field offset: 0x3C
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000F8D")]
	protected int _Timeout; //Field offset: 0x40
	[FieldOffset(Offset = "0x44")]
	[Token(Token = "0x4000F92")]
	private int _DM; //Field offset: 0x44
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4000F93")]
	private string _AV; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000F9B")]
	private Dictionary<SRType, List`1<Int32>> _MappedWRCodes; //Field offset: 0x50

	[Token(Token = "0x170001A0")]
	public static bool VerboseLogging
	{
		[Address(RVA = "0x121390C", Offset = "0x121390C", Length = "0x58")]
		[Token(Token = "0x6000C61")]
		 get { } //Length: 88
	}

	[Address(RVA = "0x12171D4", Offset = "0x12171D4", Length = "0x54")]
	[Token(Token = "0x6000C74")]
	private static ImangiRVS() { }

	[Address(RVA = "0x12170C8", Offset = "0x12170C8", Length = "0x10C")]
	[Token(Token = "0x6000C73")]
	public ImangiRVS() { }

	[Address(RVA = "0x1215D4C", Offset = "0x1215D4C", Length = "0x390")]
	[Token(Token = "0x6000C6B")]
	private static void FSC(RVCheck inRVCheck, int inRVSLECode, int inSRCode, string inSEResponse) { }

	[Address(RVA = "0x121390C", Offset = "0x121390C", Length = "0x58")]
	[Token(Token = "0x6000C61")]
	public static bool get_VerboseLogging() { }

	[Address(RVA = "0x1213964", Offset = "0x1213964", Length = "0x220")]
	[Token(Token = "0x6000C62")]
	public static ImangiRVS GetInstance() { }

	[Address(RVA = "0x1213C68", Offset = "0x1213C68", Length = "0x254")]
	[Token(Token = "0x6000C63")]
	public void Initialize(string inConfigText) { }

	[Address(RVA = "0x1216DC8", Offset = "0x1216DC8", Length = "0x14C")]
	[Token(Token = "0x6000C71")]
	private Dictionary<String, String> MakePDataDictionary(string inIType, string inPToken, string inOID, string inPID) { }

	[Address(RVA = "0x121410C", Offset = "0x121410C", Length = "0x9C")]
	[Token(Token = "0x6000C66")]
	private void OnApplicationPause(bool inPaused) { }

	[Address(RVA = "0x12166B8", Offset = "0x12166B8", Length = "0x164")]
	[Token(Token = "0x6000C6D")]
	private void OnPayloadError(string inPayload, ImangiWebRequest inWebRequest) { }

	[Address(RVA = "0x1216A1C", Offset = "0x1216A1C", Length = "0x16C")]
	[Token(Token = "0x6000C6E")]
	private void OnPayloadFormError(ImangiWebRequest inWebRequest) { }

	[Address(RVA = "0x12150D0", Offset = "0x12150D0", Length = "0xC7C")]
	[Token(Token = "0x6000C6A")]
	protected void PSWRR(RVCheck inRVCheck, bool inSuccess, long inRCode, string inDownloadedText, double inTimeStamp) { }

	[Address(RVA = "0x1216B88", Offset = "0x1216B88", Length = "0x240")]
	[Token(Token = "0x6000C70")]
	private string SerializeForm(Dictionary<String, Object> inForm) { }

	[Address(RVA = "0x12140F4", Offset = "0x12140F4", Length = "0x8")]
	[Token(Token = "0x6000C64")]
	public void SetAV(string inAV) { }

	[Address(RVA = "0x12140FC", Offset = "0x12140FC", Length = "0x10")]
	[Token(Token = "0x6000C65")]
	public void SetRVConfigData(Dictionary<SRType, List`1<Int32>> inMappedWRCodes, int inNumReconnectAttempts, int inTimeoutTime, int inRetryDelay) { }

	[Address(RVA = "0x1216914", Offset = "0x1216914", Length = "0x108")]
	[Token(Token = "0x6000C6F")]
	private void SetupAttributesAndLogPayloadError(ImangiWebRequest inWebRequest, bool inIsReasonEmpty, LogPayloadErrorDelegate inLogPayloadErrorDelegate) { }

	[Address(RVA = "0x1214A50", Offset = "0x1214A50", Length = "0x4D4")]
	[Token(Token = "0x6000C69")]
	protected void SetupContextAndStartRVCheck(RVCheck inRVCheck, PSIType inPSIType, string inContext) { }

	[Address(RVA = "0x12143C0", Offset = "0x12143C0", Length = "0x264")]
	[Token(Token = "0x6000C72")]
	private void SetupRVCheck(RVCheck inRVCheck) { }

	[Address(RVA = "0x1214624", Offset = "0x1214624", Length = "0x1D8")]
	[Token(Token = "0x6000C68")]
	public bool StartRVNPCheck(string inContext, List<TRStoreTransaction> inPurchases, ImangiRVS_SVSuccessfulDelegate inSVSuccessfulEvent = null, ImangiRVS_SVFailureDelegate inSVErrorEvent = null) { }

	[Address(RVA = "0x12141A8", Offset = "0x12141A8", Length = "0x60")]
	[Token(Token = "0x6000C67")]
	public void StartRVPCheck(TRStoreTransaction inPurchase, ImangiRVS_SVSuccessfulDelegate inSVSuccessEvent = null, ImangiRVS_SVFailureDelegate inSVErrorEvent = null) { }

	[Address(RVA = "0x121622C", Offset = "0x121622C", Length = "0x3A8")]
	[Token(Token = "0x6000C6C")]
	private void SVC(RVCheck inRVCheck, Dictionary<String, Object> inPIDResponses, long inSRCode, double inSRTSeconds, int inSPTMicroseconds) { }

}

