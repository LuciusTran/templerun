//Type is in global namespace

[Token(Token = "0x2000186")]
public class RemoteConfigManager : MonoBehaviour
{
	[CompilerGenerated]
	[Token(Token = "0x2000187")]
	private sealed class <FetchWatchdogCoroutine>d__23 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000E0F")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000E10")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000E11")]
		public RemoteConfigManager <>4__this; //Field offset: 0x20

		[Token(Token = "0x17000187")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x131F940", Offset = "0x131F940", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000B87")]
			private get { } //Length: 8
		}

		[Token(Token = "0x17000188")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x131F980", Offset = "0x131F980", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000B89")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x131F4C0", Offset = "0x131F4C0", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x6000B84")]
		public <FetchWatchdogCoroutine>d__23(int <>1__state) { }

		[Address(RVA = "0x131F788", Offset = "0x131F788", Length = "0x1B8")]
		[Token(Token = "0x6000B86")]
		private override bool MoveNext() { }

		[Address(RVA = "0x131F940", Offset = "0x131F940", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000B87")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x131F980", Offset = "0x131F980", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000B89")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x131F948", Offset = "0x131F948", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x6000B88")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x131F784", Offset = "0x131F784", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x6000B85")]
		private override void System.IDisposable.Dispose() { }

	}

	[Token(Token = "0x4000E04")]
	private const string _LogChannel = "RemoteConfigManager"; //Field offset: 0x0
	[Token(Token = "0x4000E05")]
	private const float _FetchTimeoutTime = 8; //Field offset: 0x0
	[CompilerGenerated]
	[Token(Token = "0x4000E0B")]
	private static Nullable<Boolean> <LastFetchReachable>k__BackingField; //Field offset: 0x0
	[CompilerGenerated]
	[Token(Token = "0x4000E0C")]
	private static float <LastFetchRealtime>k__BackingField; //Field offset: 0x4
	[Token(Token = "0x4000E0D")]
	private static DateTime _LastFetchStartedUtc; //Field offset: 0x8
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000E06")]
	private bool _FetchTimedOut; //Field offset: 0x20
	[FieldOffset(Offset = "0x21")]
	[Token(Token = "0x4000E07")]
	private bool _IsFetching; //Field offset: 0x21
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000E08")]
	private TimeSpan _CacheExpiration; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000E09")]
	private bool _Initialized; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000E0A")]
	private Action<Boolean> _CallbackHandler; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000E0E")]
	private Coroutine _FetchWatchdog; //Field offset: 0x40

	[Token(Token = "0x17000185")]
	public private static Nullable<Boolean> LastFetchReachable
	{
		[Address(RVA = "0x131EEE4", Offset = "0x131EEE4", Length = "0x58")]
		[CompilerGenerated]
		[Token(Token = "0x6000B75")]
		 get { } //Length: 88
		[Address(RVA = "0x131EF3C", Offset = "0x131EF3C", Length = "0x5C")]
		[CompilerGenerated]
		[Token(Token = "0x6000B76")]
		private set { } //Length: 92
	}

	[Token(Token = "0x17000186")]
	public private static float LastFetchRealtime
	{
		[Address(RVA = "0x131EF98", Offset = "0x131EF98", Length = "0x58")]
		[CompilerGenerated]
		[Token(Token = "0x6000B77")]
		 get { } //Length: 88
		[Address(RVA = "0x131EFF0", Offset = "0x131EFF0", Length = "0x64")]
		[CompilerGenerated]
		[Token(Token = "0x6000B78")]
		private set { } //Length: 100
	}

	[Address(RVA = "0x131F6F0", Offset = "0x131F6F0", Length = "0x94")]
	[Token(Token = "0x6000B83")]
	private static RemoteConfigManager() { }

	[Address(RVA = "0x131F6A8", Offset = "0x131F6A8", Length = "0x48")]
	[Token(Token = "0x6000B82")]
	public RemoteConfigManager() { }

	[Address(RVA = "0x131F460", Offset = "0x131F460", Length = "0x60")]
	[IteratorStateMachine(typeof(<FetchWatchdogCoroutine>d__23))]
	[Token(Token = "0x6000B7F")]
	private IEnumerator FetchWatchdogCoroutine() { }

	[Address(RVA = "0x131EEE4", Offset = "0x131EEE4", Length = "0x58")]
	[CompilerGenerated]
	[Token(Token = "0x6000B75")]
	public static Nullable<Boolean> get_LastFetchReachable() { }

	[Address(RVA = "0x131EF98", Offset = "0x131EF98", Length = "0x58")]
	[CompilerGenerated]
	[Token(Token = "0x6000B77")]
	public static float get_LastFetchRealtime() { }

	[Address(RVA = "0x131F4E8", Offset = "0x131F4E8", Length = "0x1C0")]
	[Token(Token = "0x6000B80")]
	public bool Initialize(Action<Boolean> inFetchComplete) { }

	[Address(RVA = "0x131F33C", Offset = "0x131F33C", Length = "0xC")]
	[Token(Token = "0x6000B7B")]
	private void OnFetchComplete() { }

	[Address(RVA = "0x131F348", Offset = "0x131F348", Length = "0xAC")]
	[Token(Token = "0x6000B7C")]
	private void OnRemoteConfigFetchComplete(bool inSuccess) { }

	[Address(RVA = "0x131F0E0", Offset = "0x131F0E0", Length = "0x25C")]
	[Token(Token = "0x6000B7A")]
	private static void RecordFetchOutcome(bool inReportedSuccess) { }

	[Address(RVA = "0x131F054", Offset = "0x131F054", Length = "0x8C")]
	[Token(Token = "0x6000B79")]
	private static void RecordFetchStarted() { }

	[Address(RVA = "0x131DD20", Offset = "0x131DD20", Length = "0x1AC")]
	[Token(Token = "0x6000B81")]
	public bool RefetchAndActivate(Action<Boolean> inFetchComplete, bool forceOverrideCallback = false) { }

	[Address(RVA = "0x131EF3C", Offset = "0x131EF3C", Length = "0x5C")]
	[CompilerGenerated]
	[Token(Token = "0x6000B76")]
	private static void set_LastFetchReachable(Nullable<Boolean> value) { }

	[Address(RVA = "0x131EFF0", Offset = "0x131EFF0", Length = "0x64")]
	[CompilerGenerated]
	[Token(Token = "0x6000B78")]
	private static void set_LastFetchRealtime(float value) { }

	[Address(RVA = "0x131F418", Offset = "0x131F418", Length = "0x48")]
	[Token(Token = "0x6000B7D")]
	private void StartFetchWatchdog() { }

	[Address(RVA = "0x131F3F4", Offset = "0x131F3F4", Length = "0x24")]
	[Token(Token = "0x6000B7E")]
	private void StopFetchWatchdog() { }

}

