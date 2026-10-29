namespace Imangi.Utilities;

[Token(Token = "0x200021E")]
public class ImangiWebRequest : MonoBehaviour
{
	[CompilerGenerated]
	[Token(Token = "0x200021F")]
	private sealed class <SendWebRequest>d__41 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x400111B")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x400111C")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x400111D")]
		public ImangiWebRequest <>4__this; //Field offset: 0x20
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x400111E")]
		private bool <isFinished>5__2; //Field offset: 0x28
		[FieldOffset(Offset = "0x29")]
		[Token(Token = "0x400111F")]
		private bool <retry>5__3; //Field offset: 0x29
		[FieldOffset(Offset = "0x2A")]
		[Token(Token = "0x4001120")]
		private bool <success>5__4; //Field offset: 0x2A
		[FieldOffset(Offset = "0x2C")]
		[Token(Token = "0x4001121")]
		private int <retryCount>5__5; //Field offset: 0x2C
		[FieldOffset(Offset = "0x30")]
		[Token(Token = "0x4001122")]
		private long <responseCode>5__6; //Field offset: 0x30
		[FieldOffset(Offset = "0x38")]
		[Token(Token = "0x4001123")]
		private string <downloadedText>5__7; //Field offset: 0x38
		[FieldOffset(Offset = "0x40")]
		[Token(Token = "0x4001124")]
		private UnityWebRequest <webRequest>5__8; //Field offset: 0x40
		[FieldOffset(Offset = "0x48")]
		[Token(Token = "0x4001125")]
		private UnityWebRequestAsyncOperation <webRequestOperation>5__9; //Field offset: 0x48

		[Token(Token = "0x170001B6")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x123B054", Offset = "0x123B054", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000F56")]
			private get { } //Length: 8
		}

		[Token(Token = "0x170001B7")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x123B094", Offset = "0x123B094", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000F58")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x123A3F0", Offset = "0x123A3F0", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x6000F53")]
		public <SendWebRequest>d__41(int <>1__state) { }

		[Address(RVA = "0x123AB1C", Offset = "0x123AB1C", Length = "0x538")]
		[Token(Token = "0x6000F55")]
		private override bool MoveNext() { }

		[Address(RVA = "0x123B054", Offset = "0x123B054", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000F56")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x123B094", Offset = "0x123B094", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000F58")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x123B05C", Offset = "0x123B05C", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x6000F57")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x123AB18", Offset = "0x123AB18", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x6000F54")]
		private override void System.IDisposable.Dispose() { }

	}

	[Token(Token = "0x400111A")]
	public const int RetryDelayDefault = 1; //Field offset: 0x0
	[Token(Token = "0x4001118")]
	private const string _JSONContentTypeValue = "application/json"; //Field offset: 0x0
	[Token(Token = "0x4001117")]
	private const string _ContentTypeHeaderKey = "Content-Type"; //Field offset: 0x0
	[Token(Token = "0x4001116")]
	private const string _LogChannel = "ImangiWebRequest"; //Field offset: 0x0
	[Token(Token = "0x4001119")]
	public const int MaxRetryCountDefault = 3; //Field offset: 0x0
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4001102")]
	private string _RequestURL; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4001103")]
	private WebRequestMethod _RequestMethod; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4001104")]
	private Dictionary<String, String> _RequestHeaders; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4001105")]
	private Dictionary<String, Object> _Form; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4001106")]
	private int _MaxRetryCount; //Field offset: 0x40
	[FieldOffset(Offset = "0x44")]
	[Token(Token = "0x4001107")]
	private int _RetryDelay; //Field offset: 0x44
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4001108")]
	private int _Timeout; //Field offset: 0x48
	[FieldOffset(Offset = "0x4C")]
	[Token(Token = "0x4001109")]
	private bool _RequesterVerboseLogging; //Field offset: 0x4C
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x400110A")]
	private string _RequesterLogChannel; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x400110B")]
	private Action<Double> _OnStart; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x400110C")]
	private Action<Int32, Int64, Double> _OnRetry; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x400110D")]
	private Action<Boolean, Int64, String, Double> _OnFinished; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x400110E")]
	private Action<Single> _OnProgress; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x400110F")]
	private Action<String, ImangiWebRequest> _OnPayloadError; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x4001110")]
	private Action<ImangiWebRequest> _OnPayloadFormError; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x4001111")]
	private bool _IsJSONRequest; //Field offset: 0x88
	[FieldOffset(Offset = "0x89")]
	[Token(Token = "0x4001112")]
	private bool _IsSimpleRequest; //Field offset: 0x89
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x4001113")]
	private Func<String, UnityWebRequest> _UnitySimpleWebRequestFunction; //Field offset: 0x90
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x4001114")]
	private Func<String, String, UnityWebRequest> _UnityDataWebRequestFunction; //Field offset: 0x98
	[FieldOffset(Offset = "0xA0")]
	[Token(Token = "0x4001115")]
	private string _WebRequestPayload; //Field offset: 0xA0

	[Token(Token = "0x170001B5")]
	public Dictionary<String, Object> Form
	{
		[Address(RVA = "0x1239DA4", Offset = "0x1239DA4", Length = "0x80")]
		[Token(Token = "0x6000F43")]
		 get { } //Length: 128
		[Address(RVA = "0x1239E24", Offset = "0x1239E24", Length = "0x80")]
		[Token(Token = "0x6000F44")]
		 set { } //Length: 128
	}

	[Token(Token = "0x170001B4")]
	public Dictionary<String, String> RequestHeaders
	{
		[Address(RVA = "0x1239D28", Offset = "0x1239D28", Length = "0x7C")]
		[Token(Token = "0x6000F42")]
		 get { } //Length: 124
	}

	[Token(Token = "0x170001B3")]
	public WebRequestMethod RequestMethod
	{
		[Address(RVA = "0x1239D20", Offset = "0x1239D20", Length = "0x8")]
		[Token(Token = "0x6000F41")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170001B2")]
	public string RequestURL
	{
		[Address(RVA = "0x1239D18", Offset = "0x1239D18", Length = "0x8")]
		[Token(Token = "0x6000F40")]
		 get { } //Length: 8
	}

	[Address(RVA = "0x123AB10", Offset = "0x123AB10", Length = "0x8")]
	[Token(Token = "0x6000F52")]
	public ImangiWebRequest() { }

	[Address(RVA = "0x123A9E8", Offset = "0x123A9E8", Length = "0x38")]
	[Token(Token = "0x6000F50")]
	public static long ConvertNSURLConnectionErrorCodesToHTTPStatusCodes(long inErrorCode) { }

	[Address(RVA = "0x1239EA4", Offset = "0x1239EA4", Length = "0xE0")]
	[Token(Token = "0x6000F45")]
	public static ImangiWebRequest Create() { }

	[Address(RVA = "0x1239DA4", Offset = "0x1239DA4", Length = "0x80")]
	[Token(Token = "0x6000F43")]
	public Dictionary<String, Object> get_Form() { }

	[Address(RVA = "0x1239D28", Offset = "0x1239D28", Length = "0x7C")]
	[Token(Token = "0x6000F42")]
	public Dictionary<String, String> get_RequestHeaders() { }

	[Address(RVA = "0x1239D20", Offset = "0x1239D20", Length = "0x8")]
	[Token(Token = "0x6000F41")]
	public WebRequestMethod get_RequestMethod() { }

	[Address(RVA = "0x1239D18", Offset = "0x1239D18", Length = "0x8")]
	[Token(Token = "0x6000F40")]
	public string get_RequestURL() { }

	[Address(RVA = "0x123A418", Offset = "0x123A418", Length = "0x2E0")]
	[Token(Token = "0x6000F4D")]
	private UnityWebRequest GetNewWebRequest() { }

	[Address(RVA = "0x123AA20", Offset = "0x123AA20", Length = "0xF0")]
	[Token(Token = "0x6000F51")]
	public static string GetURLBase(string inURL) { }

	[Address(RVA = "0x1239F84", Offset = "0x1239F84", Length = "0x10")]
	[Token(Token = "0x6000F46")]
	public void RegisterEvents(Action<Double> inOnStart, Action<Int32, Int64, Double> inOnRetry, Action<Boolean, Int64, String, Double> inOnFinished, Action<Single> inOnProgress = null, Action<String, ImangiWebRequest> inOnPayloadError = null, Action<ImangiWebRequest> inOnPayloadFormError = null) { }

	[Address(RVA = "0x123A6F8", Offset = "0x123A6F8", Length = "0x280")]
	[Token(Token = "0x6000F4E")]
	private string RequestHeadersToString() { }

	[Address(RVA = "0x123A370", Offset = "0x123A370", Length = "0x20")]
	[Token(Token = "0x6000F4B")]
	public void Send() { }

	[Address(RVA = "0x123A390", Offset = "0x123A390", Length = "0x60")]
	[IteratorStateMachine(typeof(<SendWebRequest>d__41))]
	[Token(Token = "0x6000F4C")]
	private IEnumerator SendWebRequest() { }

	[Address(RVA = "0x1239E24", Offset = "0x1239E24", Length = "0x80")]
	[Token(Token = "0x6000F44")]
	public void set_Form(Dictionary<String, Object> value) { }

	[Address(RVA = "0x123A164", Offset = "0x123A164", Length = "0x168")]
	[Token(Token = "0x6000F49")]
	private void SetRequestMethods() { }

	[Address(RVA = "0x123A2CC", Offset = "0x123A2CC", Length = "0xA4")]
	[Token(Token = "0x6000F4A")]
	private void SetRequestPayload() { }

	[Address(RVA = "0x1239FA8", Offset = "0x1239FA8", Length = "0x1BC")]
	[Token(Token = "0x6000F48")]
	public void Setup(string inRequestURL, WebRequestMethod inRequestMethod, Dictionary<String, String> inRequestHeaders, Dictionary<String, Object> inForm, int inMaxRetryCount = 3, int inRetryDelay = 1, int inTimeout = -1, bool inVerboseLogging = false, string inLogChannel = "ImangiWebRequest") { }

	[Address(RVA = "0x1239F94", Offset = "0x1239F94", Length = "0x14")]
	[Token(Token = "0x6000F47")]
	public void UnregisterEvents() { }

	[Address(RVA = "0x123A978", Offset = "0x123A978", Length = "0x70")]
	[Token(Token = "0x6000F4F")]
	private static bool WasRequestSuccessful(UnityWebRequest inWebRequest) { }

}

