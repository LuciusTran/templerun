//Type is in global namespace

[Token(Token = "0x200008E")]
public class GameController : MonoBehaviour
{
	[CompilerGenerated]
	[Token(Token = "0x2000090")]
	private sealed class <>c
	{
		[Token(Token = "0x40003F9")]
		public static readonly <>c <>9; //Field offset: 0x0
		[Token(Token = "0x40003FA")]
		public static Action<Boolean> <>9__43_0; //Field offset: 0x8
		[Token(Token = "0x40003FB")]
		public static Func<Boolean> <>9__236_0; //Field offset: 0x10
		[Token(Token = "0x40003FC")]
		public static Func<Boolean> <>9__236_1; //Field offset: 0x18

		[Address(RVA = "0x12AC4D4", Offset = "0x12AC4D4", Length = "0x5C")]
		[Token(Token = "0x6000448")]
		private static <>c() { }

		[Address(RVA = "0x12AC530", Offset = "0x12AC530", Length = "0x8")]
		[Token(Token = "0x6000449")]
		public <>c() { }

		[Address(RVA = "0x12AC53C", Offset = "0x12AC53C", Length = "0x7C")]
		[Token(Token = "0x600044B")]
		internal bool <InitalizeAdjust>b__236_0() { }

		[Address(RVA = "0x12AC5B8", Offset = "0x12AC5B8", Length = "0x84")]
		[Token(Token = "0x600044C")]
		internal bool <InitalizeAdjust>b__236_1() { }

		[Address(RVA = "0x12AC538", Offset = "0x12AC538", Length = "0x4")]
		[Token(Token = "0x600044A")]
		internal void <RefreshRcReachability>b__43_0(bool success) { }

	}

	[CompilerGenerated]
	[Token(Token = "0x2000091")]
	private sealed class <>c__DisplayClass46_0
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x40003FD")]
		public Action clearGuardOnCMPComplete; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x40003FE")]
		public GameController <>4__this; //Field offset: 0x18

		[Address(RVA = "0x12AC63C", Offset = "0x12AC63C", Length = "0x8")]
		[Token(Token = "0x600044D")]
		public <>c__DisplayClass46_0() { }

		[Address(RVA = "0x12AC644", Offset = "0x12AC644", Length = "0xC8")]
		[Token(Token = "0x600044E")]
		internal void <PostGamePrivacyFlow>b__0() { }

	}

	[CompilerGenerated]
	[Token(Token = "0x2000092")]
	private sealed class <InitalizeAdjust>d__236 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x40003FF")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000400")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000401")]
		public GameController <>4__this; //Field offset: 0x20

		[Token(Token = "0x170000AD")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x12ACAD8", Offset = "0x12ACAD8", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000452")]
			private get { } //Length: 8
		}

		[Token(Token = "0x170000AE")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x12ACB18", Offset = "0x12ACB18", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000454")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x12AC70C", Offset = "0x12AC70C", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x600044F")]
		public <InitalizeAdjust>d__236(int <>1__state) { }

		[Address(RVA = "0x12AC738", Offset = "0x12AC738", Length = "0x3A0")]
		[Token(Token = "0x6000451")]
		private override bool MoveNext() { }

		[Address(RVA = "0x12ACAD8", Offset = "0x12ACAD8", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000452")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x12ACB18", Offset = "0x12ACB18", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000454")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x12ACAE0", Offset = "0x12ACAE0", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x6000453")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x12AC734", Offset = "0x12AC734", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x6000450")]
		private override void System.IDisposable.Dispose() { }

	}

	[CompilerGenerated]
	[Token(Token = "0x2000093")]
	private sealed class <LogAdInitOutcome>d__55 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000402")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000403")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000404")]
		public GameController <>4__this; //Field offset: 0x20
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x4000405")]
		public float secondsSinceLaunch; //Field offset: 0x28
		[FieldOffset(Offset = "0x30")]
		[Token(Token = "0x4000406")]
		public string trigger; //Field offset: 0x30
		[FieldOffset(Offset = "0x38")]
		[Token(Token = "0x4000407")]
		public bool releaseRetryGuard; //Field offset: 0x38
		[FieldOffset(Offset = "0x3C")]
		[Token(Token = "0x4000408")]
		private float <elapsed>5__2; //Field offset: 0x3C

		[Token(Token = "0x170000AF")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x12ACC38", Offset = "0x12ACC38", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000458")]
			private get { } //Length: 8
		}

		[Token(Token = "0x170000B0")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x12ACC78", Offset = "0x12ACC78", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x600045A")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x12ACB20", Offset = "0x12ACB20", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x6000455")]
		public <LogAdInitOutcome>d__55(int <>1__state) { }

		[Address(RVA = "0x12ACB4C", Offset = "0x12ACB4C", Length = "0xEC")]
		[Token(Token = "0x6000457")]
		private override bool MoveNext() { }

		[Address(RVA = "0x12ACC38", Offset = "0x12ACC38", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000458")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x12ACC78", Offset = "0x12ACC78", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x600045A")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x12ACC40", Offset = "0x12ACC40", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x6000459")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x12ACB48", Offset = "0x12ACB48", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x6000456")]
		private override void System.IDisposable.Dispose() { }

	}

	[CompilerGenerated]
	[Token(Token = "0x2000094")]
	private sealed class <LogRetryResult>d__227 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000409")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x400040A")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x400040B")]
		public float secondsSinceLaunch; //Field offset: 0x20
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x400040C")]
		public GameController <>4__this; //Field offset: 0x28
		[FieldOffset(Offset = "0x30")]
		[Token(Token = "0x400040D")]
		public string trigger; //Field offset: 0x30
		[FieldOffset(Offset = "0x38")]
		[Token(Token = "0x400040E")]
		private float <elapsed>5__2; //Field offset: 0x38

		[Token(Token = "0x170000B1")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x12AD1B0", Offset = "0x12AD1B0", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x600045E")]
			private get { } //Length: 8
		}

		[Token(Token = "0x170000B2")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x12AD1F0", Offset = "0x12AD1F0", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000460")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x12ACC80", Offset = "0x12ACC80", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x600045B")]
		public <LogRetryResult>d__227(int <>1__state) { }

		[Address(RVA = "0x12ACCAC", Offset = "0x12ACCAC", Length = "0x504")]
		[Token(Token = "0x600045D")]
		private override bool MoveNext() { }

		[Address(RVA = "0x12AD1B0", Offset = "0x12AD1B0", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x600045E")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x12AD1F0", Offset = "0x12AD1F0", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000460")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x12AD1B8", Offset = "0x12AD1B8", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x600045F")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x12ACCA8", Offset = "0x12ACCA8", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x600045C")]
		private override void System.IDisposable.Dispose() { }

	}

	[CompilerGenerated]
	[Token(Token = "0x2000095")]
	private sealed class <LogStartupAdInitAttemptDeferred>d__53 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x400040F")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000410")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000411")]
		public float secondsSinceLaunch; //Field offset: 0x20
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x4000412")]
		public GameController <>4__this; //Field offset: 0x28

		[Token(Token = "0x170000B3")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x12AD768", Offset = "0x12AD768", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000464")]
			private get { } //Length: 8
		}

		[Token(Token = "0x170000B4")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x12AD7A8", Offset = "0x12AD7A8", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000466")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x12AD1F8", Offset = "0x12AD1F8", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x6000461")]
		public <LogStartupAdInitAttemptDeferred>d__53(int <>1__state) { }

		[Address(RVA = "0x12AD224", Offset = "0x12AD224", Length = "0x544")]
		[Token(Token = "0x6000463")]
		private override bool MoveNext() { }

		[Address(RVA = "0x12AD768", Offset = "0x12AD768", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000464")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x12AD7A8", Offset = "0x12AD7A8", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000466")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x12AD770", Offset = "0x12AD770", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x6000465")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x12AD220", Offset = "0x12AD220", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x6000462")]
		private override void System.IDisposable.Dispose() { }

	}

	[CompilerGenerated]
	[Token(Token = "0x2000096")]
	private sealed class <WaitAndWarmResources>d__240 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000413")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000414")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000415")]
		public GameController <>4__this; //Field offset: 0x20

		[Token(Token = "0x170000B5")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x12ADCD4", Offset = "0x12ADCD4", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x600046A")]
			private get { } //Length: 8
		}

		[Token(Token = "0x170000B6")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x12ADD14", Offset = "0x12ADD14", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x600046C")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x12AD7B0", Offset = "0x12AD7B0", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x6000467")]
		public <WaitAndWarmResources>d__240(int <>1__state) { }

		[Address(RVA = "0x12AD7DC", Offset = "0x12AD7DC", Length = "0x4F8")]
		[Token(Token = "0x6000469")]
		private override bool MoveNext() { }

		[Address(RVA = "0x12ADCD4", Offset = "0x12ADCD4", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x600046A")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x12ADD14", Offset = "0x12ADD14", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x600046C")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x12ADCDC", Offset = "0x12ADCDC", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x600046B")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x12AD7D8", Offset = "0x12AD7D8", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x6000468")]
		private override void System.IDisposable.Dispose() { }

	}

	[Token(Token = "0x200008F")]
	internal enum FeatureToggleStatus
	{
		FeatureNotAvailable = 0,
		FeatureNotAvailable_ConsentDenied = 1,
		FeatureAvailable = 2,
	}

	[Token(Token = "0x4000352")]
	public const string FeatureNameGameServices = "TRGameServices"; //Field offset: 0x0
	[Token(Token = "0x4000353")]
	public const string FeatureNameIapStore = "TRIapStore"; //Field offset: 0x0
	[Token(Token = "0x4000354")]
	public const string FeatureNameSharing = "TRSharing"; //Field offset: 0x0
	[Token(Token = "0x40003E1")]
	public static GameController SharedInstance; //Field offset: 0x0
	[Token(Token = "0x40003CA")]
	private const string _AdPlacement = "SaveMe"; //Field offset: 0x0
	[Token(Token = "0x40003C9")]
	private const string _VideoAdSpaceName = "SaveMe"; //Field offset: 0x0
	[Token(Token = "0x400035B")]
	private const string _LogChannel = "GameController"; //Field offset: 0x0
	[Token(Token = "0x400035C")]
	public const string Pref_TutorialKey = "TR Tutorial"; //Field offset: 0x0
	[Token(Token = "0x400035D")]
	public const string Pref_CurrentLanguageKey = "TR Current Language"; //Field offset: 0x0
	[Token(Token = "0x400035E")]
	public const string Pref_FriendMarkerKey = "TR Friend Marker"; //Field offset: 0x0
	[Token(Token = "0x40003ED")]
	public static RemoteConfigManager RCManager; //Field offset: 0x8
	[Token(Token = "0x40003EE")]
	private static bool _RemoteConfigReady; //Field offset: 0x10
	[Token(Token = "0x40003F2")]
	private static CoinSpawnConfigData CoinSpawnConfig; //Field offset: 0x18
	[Token(Token = "0x40003F3")]
	private static ControlsConfigData ControlsConfig; //Field offset: 0x20
	[Token(Token = "0x40003F4")]
	private static PlayerConfigData PlayerConfig; //Field offset: 0x28
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000355")]
	private bool _privacyFlowInProgress; //Field offset: 0x20
	[FieldOffset(Offset = "0x21")]
	[Token(Token = "0x4000356")]
	private bool _adServiceRetryInFlight; //Field offset: 0x21
	[FieldOffset(Offset = "0x24")]
	[Token(Token = "0x4000357")]
	private int _appLovinRetryCount; //Field offset: 0x24
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000358")]
	private bool _switchedToAdMob; //Field offset: 0x28
	[FieldOffset(Offset = "0x29")]
	[Token(Token = "0x4000359")]
	private bool _adInitOutcomeLogged; //Field offset: 0x29
	[FieldOffset(Offset = "0x2A")]
	[Token(Token = "0x400035A")]
	private bool _adInitHeldForRegulation; //Field offset: 0x2A
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x400035F")]
	public ShaderVariantCollection AllShaderVariants; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000360")]
	public PathElement PathRoot; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000361")]
	public PathDirection PathRootOrigin; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4000362")]
	public PathElement LastTurnPathPiece; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000363")]
	public Region2D SafetyNetRegion; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000364")]
	public int TutorialID; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000365")]
	public GameCamera MainCamera; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000366")]
	public MovingObject MainCameraFocusPoint; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x4000367")]
	public SceneryManager Scenery; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4000368")]
	public CommonPlayer Player; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x4000369")]
	public CharacterPlayer GamePlayer; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x400036A")]
	public GameInput GameInput; //Field offset: 0x88
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x400036B")]
	public UISprite Countdown; //Field offset: 0x90
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x400036C")]
	public PathElement NearestElement; //Field offset: 0x98
	[FieldOffset(Offset = "0xA0")]
	[Token(Token = "0x400036D")]
	public PathElement LastNearestElement; //Field offset: 0xA0
	[FieldOffset(Offset = "0xA8")]
	[Token(Token = "0x400036E")]
	public PathLevel LastLevel; //Field offset: 0xA8
	[FieldOffset(Offset = "0xB0")]
	[Token(Token = "0x400036F")]
	public GameGUI GameInterface; //Field offset: 0xB0
	[FieldOffset(Offset = "0xB8")]
	[Token(Token = "0x4000370")]
	public AwardedObjectives GameOverInterface; //Field offset: 0xB8
	[FieldOffset(Offset = "0xC0")]
	[Token(Token = "0x4000371")]
	public RecordManager RecordManager; //Field offset: 0xC0
	[FieldOffset(Offset = "0xC8")]
	[Token(Token = "0x4000372")]
	public PlayerManager PlayerManager; //Field offset: 0xC8
	[FieldOffset(Offset = "0xD0")]
	[Token(Token = "0x4000373")]
	public GameObject TutorialUIGameObjects; //Field offset: 0xD0
	[FieldOffset(Offset = "0xD8")]
	[Token(Token = "0x4000374")]
	public GameObject CurrentTutorialUIGameObject; //Field offset: 0xD8
	[FieldOffset(Offset = "0xE0")]
	[Header("State Variables")]
	[Token(Token = "0x4000375")]
	public float TimeSinceGameStart; //Field offset: 0xE0
	[FieldOffset(Offset = "0xE4")]
	[Token(Token = "0x4000376")]
	public float TimeSinceLastPause; //Field offset: 0xE4
	[FieldOffset(Offset = "0xE8")]
	[Token(Token = "0x4000377")]
	public float TimeSinceGameEnd; //Field offset: 0xE8
	[FieldOffset(Offset = "0xEC")]
	[Token(Token = "0x4000378")]
	public bool IsPaused; //Field offset: 0xEC
	[FieldOffset(Offset = "0xED")]
	[Token(Token = "0x4000379")]
	public bool IsGameStarted; //Field offset: 0xED
	[FieldOffset(Offset = "0xEE")]
	[Token(Token = "0x400037A")]
	public bool IsGameOver; //Field offset: 0xEE
	[FieldOffset(Offset = "0xEF")]
	[Token(Token = "0x400037B")]
	public bool IsGameOverFinished; //Field offset: 0xEF
	[FieldOffset(Offset = "0xF0")]
	[Token(Token = "0x400037C")]
	public bool IsResurrecting; //Field offset: 0xF0
	[FieldOffset(Offset = "0xF4")]
	[Token(Token = "0x400037D")]
	private float _LaunchTime; //Field offset: 0xF4
	[FieldOffset(Offset = "0xF8")]
	[Token(Token = "0x400037E")]
	private int _AdInitRetryCount; //Field offset: 0xF8
	[FieldOffset(Offset = "0xFC")]
	[Token(Token = "0x400037F")]
	private bool _WasRecoveredByRetry; //Field offset: 0xFC
	[FieldOffset(Offset = "0xFD")]
	[Token(Token = "0x4000380")]
	private bool _needsPrivacyFlowAfterGame; //Field offset: 0xFD
	[FieldOffset(Offset = "0x100")]
	[Token(Token = "0x4000381")]
	private Action _OnGameOverForAdInit; //Field offset: 0x100
	[FieldOffset(Offset = "0x108")]
	[Token(Token = "0x4000382")]
	public float TimeSinceResurrectStart; //Field offset: 0x108
	[FieldOffset(Offset = "0x10C")]
	[Token(Token = "0x4000383")]
	public int UsedAngelWingsCount; //Field offset: 0x10C
	[FieldOffset(Offset = "0x110")]
	[Token(Token = "0x4000384")]
	public int UsedAngelWingsPermaCount; //Field offset: 0x110
	[FieldOffset(Offset = "0x114")]
	[Token(Token = "0x4000385")]
	public int ResurrectionCount; //Field offset: 0x114
	[FieldOffset(Offset = "0x118")]
	[Token(Token = "0x4000386")]
	public bool UsedHeadStart; //Field offset: 0x118
	[FieldOffset(Offset = "0x119")]
	[Token(Token = "0x4000387")]
	public bool UsedHeadStartMega; //Field offset: 0x119
	[FieldOffset(Offset = "0x11C")]
	[Token(Token = "0x4000388")]
	public float MaxDistanceWithoutCoins; //Field offset: 0x11C
	[FieldOffset(Offset = "0x120")]
	[Token(Token = "0x4000389")]
	public bool IsNewHighScore; //Field offset: 0x120
	[FieldOffset(Offset = "0x124")]
	[Token(Token = "0x400038A")]
	public int HighScore; //Field offset: 0x124
	[FieldOffset(Offset = "0x128")]
	[Token(Token = "0x400038B")]
	public bool IsTutorialMode; //Field offset: 0x128
	[FieldOffset(Offset = "0x129")]
	[Token(Token = "0x400038C")]
	public bool ShowTutorialGuides; //Field offset: 0x129
	[FieldOffset(Offset = "0x12A")]
	[Token(Token = "0x400038D")]
	public bool IsIntroScene; //Field offset: 0x12A
	[FieldOffset(Offset = "0x12C")]
	[Token(Token = "0x400038E")]
	public float TutorialTextExtraDuration; //Field offset: 0x12C
	[FieldOffset(Offset = "0x130")]
	[Token(Token = "0x400038F")]
	public float TimeSinceTutorialSectionEnded; //Field offset: 0x130
	[FieldOffset(Offset = "0x134")]
	[Token(Token = "0x4000390")]
	public int TutorialDeathCount; //Field offset: 0x134
	[FieldOffset(Offset = "0x138")]
	[Token(Token = "0x4000391")]
	public float TimeSinceTutorialStart; //Field offset: 0x138
	[FieldOffset(Offset = "0x13C")]
	[Token(Token = "0x4000392")]
	public bool AutoRestart; //Field offset: 0x13C
	[FieldOffset(Offset = "0x140")]
	[Token(Token = "0x4000393")]
	public float EndGameDelayTime; //Field offset: 0x140
	[FieldOffset(Offset = "0x144")]
	[Token(Token = "0x4000394")]
	public float DistanceRemainder; //Field offset: 0x144
	[FieldOffset(Offset = "0x148")]
	[Token(Token = "0x4000395")]
	public float DistanceTraveled; //Field offset: 0x148
	[FieldOffset(Offset = "0x14C")]
	[Token(Token = "0x4000396")]
	public float DistanceToChangeAtTemple; //Field offset: 0x14C
	[FieldOffset(Offset = "0x150")]
	[Token(Token = "0x4000397")]
	public float DistanceToChangeAtOther; //Field offset: 0x150
	[FieldOffset(Offset = "0x154")]
	[Token(Token = "0x4000398")]
	public float DistanceTraveledSinceLastLevelChange; //Field offset: 0x154
	[FieldOffset(Offset = "0x158")]
	[Token(Token = "0x4000399")]
	public float DistanceToTurnSection; //Field offset: 0x158
	[FieldOffset(Offset = "0x15C")]
	[Token(Token = "0x400039A")]
	public float DistanceToTurnSectionEnd; //Field offset: 0x15C
	[FieldOffset(Offset = "0x160")]
	[Token(Token = "0x400039B")]
	public float DistanceTraveledSinceLastTurnSection; //Field offset: 0x160
	[FieldOffset(Offset = "0x164")]
	[Token(Token = "0x400039C")]
	public float DistanceToChangeDoubleCoins; //Field offset: 0x164
	[FieldOffset(Offset = "0x168")]
	[Token(Token = "0x400039D")]
	public float DistanceToChangeTripleCoins; //Field offset: 0x168
	[FieldOffset(Offset = "0x16C")]
	[Token(Token = "0x400039E")]
	public float AverageScorePerBlock; //Field offset: 0x16C
	[FieldOffset(Offset = "0x170")]
	[Token(Token = "0x400039F")]
	public int LastBlockScore; //Field offset: 0x170
	[FieldOffset(Offset = "0x174")]
	[Header("Powerups")]
	[Token(Token = "0x40003A0")]
	public int CoinMagnetMultiplier; //Field offset: 0x174
	[FieldOffset(Offset = "0x178")]
	[Token(Token = "0x40003A1")]
	public int CoinBonusValue; //Field offset: 0x178
	[FieldOffset(Offset = "0x17C")]
	[Token(Token = "0x40003A2")]
	public float VacuumDuration; //Field offset: 0x17C
	[FieldOffset(Offset = "0x180")]
	[Token(Token = "0x40003A3")]
	public float InvincibilityDuration; //Field offset: 0x180
	[FieldOffset(Offset = "0x184")]
	[Token(Token = "0x40003A4")]
	public float BoostDistance; //Field offset: 0x184
	[FieldOffset(Offset = "0x188")]
	[Token(Token = "0x40003A5")]
	public bool DidStumble; //Field offset: 0x188
	[FieldOffset(Offset = "0x18C")]
	[Token(Token = "0x40003A6")]
	public int StumbleCount; //Field offset: 0x18C
	[FieldOffset(Offset = "0x190")]
	[Token(Token = "0x40003A7")]
	public bool UsedPowers; //Field offset: 0x190
	[FieldOffset(Offset = "0x194")]
	[Token(Token = "0x40003A8")]
	public int ScoreWhenFirstUsedPowers; //Field offset: 0x194
	[FieldOffset(Offset = "0x198")]
	[Header("Pickups")]
	[Token(Token = "0x40003A9")]
	public int NumMagnetBonusesPickedUp; //Field offset: 0x198
	[FieldOffset(Offset = "0x19C")]
	[Token(Token = "0x40003AA")]
	public int NumBoostsPickedUp; //Field offset: 0x19C
	[FieldOffset(Offset = "0x1A0")]
	[Token(Token = "0x40003AB")]
	public int NumInvisibilityBonusesPickedUp; //Field offset: 0x1A0
	[FieldOffset(Offset = "0x1A4")]
	[Token(Token = "0x40003AC")]
	public int NumMegaCoinsPickedUp; //Field offset: 0x1A4
	[FieldOffset(Offset = "0x1A8")]
	[Token(Token = "0x40003AD")]
	public bool UsedCheat; //Field offset: 0x1A8
	[FieldOffset(Offset = "0x1AC")]
	[Token(Token = "0x40003AE")]
	public float TimeSinceCheat; //Field offset: 0x1AC
	[FieldOffset(Offset = "0x1B0")]
	[Header("Head Start")]
	[Token(Token = "0x40003AF")]
	public float HeadStartStartDistance; //Field offset: 0x1B0
	[FieldOffset(Offset = "0x1B4")]
	[Token(Token = "0x40003B0")]
	public float HeadStartEndDistance; //Field offset: 0x1B4
	[FieldOffset(Offset = "0x1B8")]
	[Token(Token = "0x40003B1")]
	public float HeadStartBoostDistance; //Field offset: 0x1B8
	[FieldOffset(Offset = "0x1BC")]
	[Token(Token = "0x40003B2")]
	public float HeadStartMegaBoostDistance; //Field offset: 0x1BC
	[FieldOffset(Offset = "0x1C0")]
	[Token(Token = "0x40003B3")]
	public bool HandelingEndGame; //Field offset: 0x1C0
	[FieldOffset(Offset = "0x1C8")]
	[Header("Friend Markers")]
	[Token(Token = "0x40003B4")]
	public GameObject FriendMarkerPrefab; //Field offset: 0x1C8
	[FieldOffset(Offset = "0x1D0")]
	[Token(Token = "0x40003B5")]
	private bool UseFriendMarkers; //Field offset: 0x1D0
	[FieldOffset(Offset = "0x1D8")]
	[Token(Token = "0x40003B6")]
	private List<FriendMarker> FriendMarkers; //Field offset: 0x1D8
	[FieldOffset(Offset = "0x1E0")]
	[Token(Token = "0x40003B7")]
	private int FriendScoresCount; //Field offset: 0x1E0
	[FieldOffset(Offset = "0x1E8")]
	[Token(Token = "0x40003B8")]
	private List<ImangiGameCenterScore> FriendScores; //Field offset: 0x1E8
	[FieldOffset(Offset = "0x1F0")]
	[Token(Token = "0x40003B9")]
	private string _CurrentPlayerId; //Field offset: 0x1F0
	[FieldOffset(Offset = "0x1F8")]
	[Token(Token = "0x40003BA")]
	private readonly String[] _LeaderBoardNames; //Field offset: 0x1F8
	[FieldOffset(Offset = "0x200")]
	[Token(Token = "0x40003BB")]
	private int _CurrentLeaderboardIdx; //Field offset: 0x200
	[FieldOffset(Offset = "0x204")]
	[Header("Save Me")]
	[Token(Token = "0x40003BC")]
	public bool ShouldPromptForSaveMe; //Field offset: 0x204
	[FieldOffset(Offset = "0x205")]
	[Token(Token = "0x40003BD")]
	public bool IsPromptingForSaveMe; //Field offset: 0x205
	[FieldOffset(Offset = "0x206")]
	[Token(Token = "0x40003BE")]
	public bool IsShowingSaveMeVideo; //Field offset: 0x206
	[FieldOffset(Offset = "0x207")]
	[Token(Token = "0x40003BF")]
	public bool SkippedSaveMeVideo; //Field offset: 0x207
	[FieldOffset(Offset = "0x208")]
	[Token(Token = "0x40003C0")]
	public bool SaveMePromptTimedOut; //Field offset: 0x208
	[FieldOffset(Offset = "0x209")]
	[Token(Token = "0x40003C1")]
	public bool ClosedSaveMeVideo; //Field offset: 0x209
	[FieldOffset(Offset = "0x20A")]
	[Token(Token = "0x40003C2")]
	public bool WatchedSavedMeVideo; //Field offset: 0x20A
	[FieldOffset(Offset = "0x20B")]
	[Token(Token = "0x40003C3")]
	public bool CancelledSaveMeVideo; //Field offset: 0x20B
	[FieldOffset(Offset = "0x20C")]
	[Token(Token = "0x40003C4")]
	public int SaveMeUsedCount; //Field offset: 0x20C
	[FieldOffset(Offset = "0x210")]
	[Token(Token = "0x40003C5")]
	public int MaxScoreBeforeFirstSaveMe; //Field offset: 0x210
	[FieldOffset(Offset = "0x214")]
	[Token(Token = "0x40003C6")]
	public int MaxCoinsBeforeFirstSaveMe; //Field offset: 0x214
	[FieldOffset(Offset = "0x218")]
	[Token(Token = "0x40003C7")]
	public int MaxDistBeforeFirstSaveMe; //Field offset: 0x218
	[FieldOffset(Offset = "0x21C")]
	[Token(Token = "0x40003C8")]
	private bool _VideoAdEventsHooked; //Field offset: 0x21C
	[FieldOffset(Offset = "0x21D")]
	[Token(Token = "0x40003CB")]
	private bool _IsVideoAvailable; //Field offset: 0x21D
	[FieldOffset(Offset = "0x21E")]
	[Token(Token = "0x40003CC")]
	private bool _IsVideoAvailableFirstCheck; //Field offset: 0x21E
	[FieldOffset(Offset = "0x21F")]
	[Header("Count down")]
	[Token(Token = "0x40003CD")]
	public bool IsInCountdown; //Field offset: 0x21F
	[FieldOffset(Offset = "0x220")]
	[Token(Token = "0x40003CE")]
	public float TimeSinceCountdownStarted; //Field offset: 0x220
	[FieldOffset(Offset = "0x224")]
	[Token(Token = "0x40003CF")]
	public bool IsStartOfCountDown; //Field offset: 0x224
	[FieldOffset(Offset = "0x225")]
	[Token(Token = "0x40003D0")]
	public bool Has3SoundPlayed; //Field offset: 0x225
	[FieldOffset(Offset = "0x226")]
	[Token(Token = "0x40003D1")]
	public bool Has2SoundPlayed; //Field offset: 0x226
	[FieldOffset(Offset = "0x227")]
	[Token(Token = "0x40003D2")]
	public bool Has1SoundPlayed; //Field offset: 0x227
	[FieldOffset(Offset = "0x228")]
	[Header("Count down")]
	[Token(Token = "0x40003D3")]
	public int EnemyCount; //Field offset: 0x228
	[FieldOffset(Offset = "0x230")]
	[Token(Token = "0x40003D4")]
	private List<Enemy> Enemies; //Field offset: 0x230
	[FieldOffset(Offset = "0x238")]
	[Token(Token = "0x40003D5")]
	public float EnemySpreadLeftRight; //Field offset: 0x238
	[FieldOffset(Offset = "0x23C")]
	[Token(Token = "0x40003D6")]
	public float EnemySpreadFrontBack; //Field offset: 0x23C
	[FieldOffset(Offset = "0x240")]
	[Token(Token = "0x40003D7")]
	public float EnemyFollowDistance; //Field offset: 0x240
	[FieldOffset(Offset = "0x248")]
	[Token(Token = "0x40003D8")]
	public GameObject EnemyPrefab; //Field offset: 0x248
	[FieldOffset(Offset = "0x250")]
	[Header("Controls")]
	[Token(Token = "0x40003D9")]
	public Vector3 AccForceVector; //Field offset: 0x250
	[FieldOffset(Offset = "0x25C")]
	[Token(Token = "0x40003DA")]
	public bool IsSwiping; //Field offset: 0x25C
	[FieldOffset(Offset = "0x260")]
	[Token(Token = "0x40003DB")]
	public Vector2 LastSwipePoint; //Field offset: 0x260
	[FieldOffset(Offset = "0x268")]
	[Token(Token = "0x40003DC")]
	public float LastSwipeTime; //Field offset: 0x268
	[FieldOffset(Offset = "0x26C")]
	[Header("Sounds")]
	[Token(Token = "0x40003DD")]
	public int RunCycleLength; //Field offset: 0x26C
	[FieldOffset(Offset = "0x270")]
	[Token(Token = "0x40003DE")]
	public float TimeSinceLastCoin; //Field offset: 0x270
	[FieldOffset(Offset = "0x278")]
	[Token(Token = "0x40003DF")]
	public GameObject SafteyNetPrefab; //Field offset: 0x278
	[FieldOffset(Offset = "0x280")]
	[Token(Token = "0x40003E0")]
	public AudioManager Audio; //Field offset: 0x280
	[FieldOffset(Offset = "0x288")]
	[Token(Token = "0x40003E2")]
	public PauseMenu PauseGameGUI; //Field offset: 0x288
	[FieldOffset(Offset = "0x290")]
	[Token(Token = "0x40003E3")]
	public List<String> AwardedAchievements; //Field offset: 0x290
	[FieldOffset(Offset = "0x298")]
	[Header("Timed Celebration Events")]
	[Token(Token = "0x40003E4")]
	public List<Entry> TimedCelebrationEntries; //Field offset: 0x298
	[FieldOffset(Offset = "0x2A0")]
	[Header("Loading Screen")]
	[Token(Token = "0x40003E5")]
	public GameObject UiRoot; //Field offset: 0x2A0
	[FieldOffset(Offset = "0x2A8")]
	[Token(Token = "0x40003E6")]
	public GameObject LoadingScreenPrefab; //Field offset: 0x2A8
	[FieldOffset(Offset = "0x2B0")]
	[HideInInspector]
	[Token(Token = "0x40003E7")]
	public UiLoadingSplashScreen LoadingScreenComponent; //Field offset: 0x2B0
	[FieldOffset(Offset = "0x2B8")]
	[Token(Token = "0x40003E8")]
	public bool SkipFrame; //Field offset: 0x2B8
	[FieldOffset(Offset = "0x2B9")]
	[Token(Token = "0x40003E9")]
	public bool GodMode; //Field offset: 0x2B9
	[CompilerGenerated]
	[FieldOffset(Offset = "0x2C0")]
	[Token(Token = "0x40003EA")]
	private string <DeeplinkUrl>k__BackingField; //Field offset: 0x2C0
	[FieldOffset(Offset = "0x2C8")]
	[Token(Token = "0x40003EB")]
	protected ImangiLocaleInfo _CurrentLocale; //Field offset: 0x2C8
	[FieldOffset(Offset = "0x2D0")]
	[Token(Token = "0x40003EC")]
	private CultureInfo currentCultureInfo; //Field offset: 0x2D0
	[FieldOffset(Offset = "0x2D8")]
	[Token(Token = "0x40003EF")]
	protected bool _InitializedAdManager; //Field offset: 0x2D8
	[FieldOffset(Offset = "0x2E0")]
	[Token(Token = "0x40003F0")]
	private ImangiLocaleInfo inImangiLocaleInfo; //Field offset: 0x2E0
	[FieldOffset(Offset = "0x2E8")]
	[Token(Token = "0x40003F1")]
	public bool DebugHyperCoins; //Field offset: 0x2E8

	[Token(Token = "0x170000A2")]
	public static bool AllowFallOnCliffs
	{
		[Address(RVA = "0x1297450", Offset = "0x1297450", Length = "0x64")]
		[Token(Token = "0x6000437")]
		 get { } //Length: 100
	}

	[Token(Token = "0x170000A3")]
	public static bool AllowFallOnNarrows
	{
		[Address(RVA = "0x12974B4", Offset = "0x12974B4", Length = "0x64")]
		[Token(Token = "0x6000438")]
		 get { } //Length: 100
	}

	[Token(Token = "0x170000A4")]
	public static bool AllowSwipeStumbleDeath
	{
		[Address(RVA = "0x129C7B0", Offset = "0x129C7B0", Length = "0x64")]
		[Token(Token = "0x6000439")]
		 get { } //Length: 100
	}

	[Token(Token = "0x170000A6")]
	public static bool AllowSwipeToSlamDown
	{
		[Address(RVA = "0x129C878", Offset = "0x129C878", Length = "0x64")]
		[Token(Token = "0x600043B")]
		 get { } //Length: 100
	}

	[Token(Token = "0x170000A5")]
	public static bool AllowSwipeToStrafe
	{
		[Address(RVA = "0x129C814", Offset = "0x129C814", Length = "0x64")]
		[Token(Token = "0x600043A")]
		 get { } //Length: 100
	}

	[Token(Token = "0x170000A7")]
	public static bool AllowTiltToTurn
	{
		[Address(RVA = "0x1296DE4", Offset = "0x1296DE4", Length = "0x64")]
		[Token(Token = "0x600043C")]
		 get { } //Length: 100
	}

	[Token(Token = "0x170000A0")]
	public static CultureInfo CurrentCultureInfo
	{
		[Address(RVA = "0x128CABC", Offset = "0x128CABC", Length = "0xF0")]
		[Token(Token = "0x60003D6")]
		 get { } //Length: 240
	}

	[Token(Token = "0x1700009F")]
	public ImangiLocaleInfo CurrentLocale
	{
		[Address(RVA = "0x128CA54", Offset = "0x128CA54", Length = "0x68")]
		[Token(Token = "0x60003D5")]
		 get { } //Length: 104
	}

	[Token(Token = "0x1700009E")]
	public private string DeeplinkUrl
	{
		[Address(RVA = "0x128CA44", Offset = "0x128CA44", Length = "0x8")]
		[CompilerGenerated]
		[Token(Token = "0x60003D3")]
		 get { } //Length: 8
		[Address(RVA = "0x128CA4C", Offset = "0x128CA4C", Length = "0x8")]
		[CompilerGenerated]
		[Token(Token = "0x60003D4")]
		private set { } //Length: 8
	}

	[Token(Token = "0x1700009B")]
	public bool IsAdInitHeldForRegulation
	{
		[Address(RVA = "0x128877C", Offset = "0x128877C", Length = "0x8")]
		[Token(Token = "0x60003B8")]
		 get { } //Length: 8
	}

	[Token(Token = "0x1700009D")]
	public bool IsPostGamePrivacyFlowActive
	{
		[Address(RVA = "0x128878C", Offset = "0x128878C", Length = "0x20")]
		[Token(Token = "0x60003BA")]
		 get { } //Length: 32
	}

	[Token(Token = "0x170000A9")]
	public static float MaxRunVelocity
	{
		[Address(RVA = "0x129C940", Offset = "0x129C940", Length = "0x64")]
		[Token(Token = "0x600043E")]
		 get { } //Length: 100
	}

	[Token(Token = "0x1700009C")]
	public bool NeedsPrivacyFlowAfterGame
	{
		[Address(RVA = "0x1288784", Offset = "0x1288784", Length = "0x8")]
		[Token(Token = "0x60003B9")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000A1")]
	public static bool RemoteConfigReady
	{
		[Address(RVA = "0x128CBAC", Offset = "0x128CBAC", Length = "0x58")]
		[Token(Token = "0x60003D7")]
		 get { } //Length: 88
		[Address(RVA = "0x128CC04", Offset = "0x128CC04", Length = "0x60")]
		[Token(Token = "0x60003D8")]
		 set { } //Length: 96
	}

	[Token(Token = "0x170000AC")]
	public static int ResurrectionBoostDistance
	{
		[Address(RVA = "0x1296C70", Offset = "0x1296C70", Length = "0x64")]
		[Token(Token = "0x6000441")]
		 get { } //Length: 100
	}

	[Token(Token = "0x170000AB")]
	public static float ResurrectionSlowDownPercent
	{
		[Address(RVA = "0x1296CD4", Offset = "0x1296CD4", Length = "0x64")]
		[Token(Token = "0x6000440")]
		 get { } //Length: 100
	}

	[Token(Token = "0x170000A8")]
	public static float StartRunVelocity
	{
		[Address(RVA = "0x129C8DC", Offset = "0x129C8DC", Length = "0x64")]
		[Token(Token = "0x600043D")]
		 get { } //Length: 100
	}

	[Token(Token = "0x170000AA")]
	public static float StumbleSlowDownPercent
	{
		[Address(RVA = "0x129C9A4", Offset = "0x129C9A4", Length = "0x64")]
		[Token(Token = "0x600043F")]
		 get { } //Length: 100
	}

	[Address(RVA = "0x129CCA8", Offset = "0x129CCA8", Length = "0xF8")]
	[Token(Token = "0x6000445")]
	private static GameController() { }

	[Address(RVA = "0x129CA08", Offset = "0x129CA08", Length = "0x2A0")]
	[Token(Token = "0x6000444")]
	public GameController() { }

	[Address(RVA = "0x129CDA0", Offset = "0x129CDA0", Length = "0x10")]
	[CompilerGenerated]
	[Token(Token = "0x6000446")]
	private bool <InitalizeAdjust>b__236_2() { }

	[Address(RVA = "0x129CDB0", Offset = "0x129CDB0", Length = "0x1C8")]
	[CompilerGenerated]
	[Token(Token = "0x6000447")]
	private void <SetupDeeplinkTracker>b__306_0(string url) { }

	[Address(RVA = "0x129C330", Offset = "0x129C330", Length = "0x8C")]
	[Token(Token = "0x600042D")]
	public void AdjustCultureinfoForLanguageSetting(string languageName) { }

	[Address(RVA = "0x1288A68", Offset = "0x1288A68", Length = "0x548")]
	[Token(Token = "0x60003C0")]
	private EventParameter[] AdServiceStateParams() { }

	[Address(RVA = "0x128887C", Offset = "0x128887C", Length = "0xFC")]
	[Token(Token = "0x60003BD")]
	private static EventParameter AgeRestrictedParam() { }

	[Address(RVA = "0x1287AEC", Offset = "0x1287AEC", Length = "0x90")]
	[Token(Token = "0x60003B2")]
	public static bool AreGameServicesAvailable() { }

	[Address(RVA = "0x128F028", Offset = "0x128F028", Length = "0x144")]
	[Token(Token = "0x60003EB")]
	public static void AttributionChangedCallback(AdjustAttribution attributionData) { }

	[Address(RVA = "0x128E0AC", Offset = "0x128E0AC", Length = "0x54")]
	[Token(Token = "0x60003E8")]
	private void Awake() { }

	[Address(RVA = "0x1296E48", Offset = "0x1296E48", Length = "0x8C")]
	[Token(Token = "0x6000418")]
	public void BoostPlayer(float distance, bool isMega = false) { }

	[Address(RVA = "0x129735C", Offset = "0x129735C", Length = "0xF4")]
	[Token(Token = "0x600041D")]
	private void ChangeLevel() { }

	[Address(RVA = "0x128798C", Offset = "0x128798C", Length = "0x160")]
	[Token(Token = "0x60003B1")]
	public static FeatureToggleStatus CheckFeatureState(string inFeatureName) { }

	[Address(RVA = "0x129524C", Offset = "0x129524C", Length = "0x13C")]
	[Token(Token = "0x6000416")]
	private void CheckHittingScenery() { }

	[Address(RVA = "0x129288C", Offset = "0x129288C", Length = "0x4E8")]
	[Token(Token = "0x600041A")]
	private void ComputeDistanceTraveled() { }

	[Address(RVA = "0x12894A8", Offset = "0x12894A8", Length = "0x94")]
	[Token(Token = "0x60003C4")]
	private static EventParameter[] Concat(EventParameter[] inFirst, EventParameter[] inSecond) { }

	[Address(RVA = "0x128DD8C", Offset = "0x128DD8C", Length = "0x2C4")]
	[Token(Token = "0x60003E6")]
	private void CreateRemoteConfigManager() { }

	[Address(RVA = "0x12887F0", Offset = "0x12887F0", Length = "0x8C")]
	[Token(Token = "0x60003BC")]
	private static string CurrentNetworkState() { }

	[Address(RVA = "0x1288FD0", Offset = "0x1288FD0", Length = "0xB4")]
	[Token(Token = "0x60003C8")]
	private static ImangiRegulationType CurrentRegulationType() { }

	[Address(RVA = "0x1297668", Offset = "0x1297668", Length = "0x90")]
	[Token(Token = "0x6000421")]
	public void DeleteAnyExistingPath() { }

	[Address(RVA = "0x128F398", Offset = "0x128F398", Length = "0xA8")]
	[Token(Token = "0x60003EF")]
	public void DestroyLoadingScreen() { }

	[Address(RVA = "0x1292884", Offset = "0x1292884", Length = "0x8")]
	[Token(Token = "0x600040F")]
	private void DisableIntroScene() { }

	[Address(RVA = "0x1288FB0", Offset = "0x1288FB0", Length = "0x20")]
	[Token(Token = "0x60003C5")]
	private static int EffectiveMaxAppLovinRetries() { }

	[Address(RVA = "0x128B9B0", Offset = "0x128B9B0", Length = "0x63C")]
	[Token(Token = "0x60003D0")]
	private void EmitAdInitRetryResult(float secondsSinceLaunch, string trigger) { }

	[Address(RVA = "0x1296758", Offset = "0x1296758", Length = "0xC8")]
	[Token(Token = "0x600040A")]
	private void EndGame(float delayTime, bool autoRestart) { }

	[Address(RVA = "0x1289F3C", Offset = "0x1289F3C", Length = "0x274")]
	[Token(Token = "0x60003C7")]
	public void EndOfRunAdInitRetryGate() { }

	[Address(RVA = "0x128D40C", Offset = "0x128D40C", Length = "0x1C0")]
	[Token(Token = "0x60003DE")]
	private void ExecutePrivacyFlowForAdInit() { }

	[Address(RVA = "0x1290094", Offset = "0x1290094", Length = "0x90")]
	[Token(Token = "0x60003F8")]
	protected void GameController_OnAdClicked(AdService inService, AdType inAdType, string inAdSpaceName) { }

	[Address(RVA = "0x1290694", Offset = "0x1290694", Length = "0x1BC")]
	[Token(Token = "0x60003FE")]
	protected void GameController_OnAdDismissed(AdService inService, AdType inAdType, string inAdSpaceName, bool inCompleted) { }

	[Address(RVA = "0x12901C8", Offset = "0x12901C8", Length = "0x1E8")]
	[Token(Token = "0x60003FA")]
	protected void GameController_OnAdFailed(AdService inService, AdType inAdType, string inAdSpaceName, string inError) { }

	[Address(RVA = "0x1290124", Offset = "0x1290124", Length = "0xA4")]
	[Token(Token = "0x60003F9")]
	protected void GameController_OnAdOpened(AdService inService, AdType inAdType, string inAdSpaceName) { }

	[Address(RVA = "0x1290684", Offset = "0x1290684", Length = "0x10")]
	[Token(Token = "0x60003FD")]
	protected void GameController_OnAdWillLeaveApplication(AdService inService, AdType inAdType, string inAdSpaceName) { }

	[Address(RVA = "0x129066C", Offset = "0x129066C", Length = "0x4")]
	[Token(Token = "0x60003FB")]
	protected void GameController_OnDidReceiveAd(AdService inService, AdType inAdType, string inAdSpaceName) { }

	[Address(RVA = "0x1290670", Offset = "0x1290670", Length = "0x14")]
	[Token(Token = "0x60003FC")]
	protected void GameController_OnFailedToReceiveAd(AdService inService, AdType inAdType, string inAdSpaceName) { }

	[Address(RVA = "0x128F870", Offset = "0x128F870", Length = "0x278")]
	[Token(Token = "0x60003F2")]
	public void GameStart() { }

	[Address(RVA = "0x1297450", Offset = "0x1297450", Length = "0x64")]
	[Token(Token = "0x6000437")]
	public static bool get_AllowFallOnCliffs() { }

	[Address(RVA = "0x12974B4", Offset = "0x12974B4", Length = "0x64")]
	[Token(Token = "0x6000438")]
	public static bool get_AllowFallOnNarrows() { }

	[Address(RVA = "0x129C7B0", Offset = "0x129C7B0", Length = "0x64")]
	[Token(Token = "0x6000439")]
	public static bool get_AllowSwipeStumbleDeath() { }

	[Address(RVA = "0x129C878", Offset = "0x129C878", Length = "0x64")]
	[Token(Token = "0x600043B")]
	public static bool get_AllowSwipeToSlamDown() { }

	[Address(RVA = "0x129C814", Offset = "0x129C814", Length = "0x64")]
	[Token(Token = "0x600043A")]
	public static bool get_AllowSwipeToStrafe() { }

	[Address(RVA = "0x1296DE4", Offset = "0x1296DE4", Length = "0x64")]
	[Token(Token = "0x600043C")]
	public static bool get_AllowTiltToTurn() { }

	[Address(RVA = "0x128CABC", Offset = "0x128CABC", Length = "0xF0")]
	[Token(Token = "0x60003D6")]
	public static CultureInfo get_CurrentCultureInfo() { }

	[Address(RVA = "0x128CA54", Offset = "0x128CA54", Length = "0x68")]
	[Token(Token = "0x60003D5")]
	public ImangiLocaleInfo get_CurrentLocale() { }

	[Address(RVA = "0x128CA44", Offset = "0x128CA44", Length = "0x8")]
	[CompilerGenerated]
	[Token(Token = "0x60003D3")]
	public string get_DeeplinkUrl() { }

	[Address(RVA = "0x128877C", Offset = "0x128877C", Length = "0x8")]
	[Token(Token = "0x60003B8")]
	public bool get_IsAdInitHeldForRegulation() { }

	[Address(RVA = "0x128878C", Offset = "0x128878C", Length = "0x20")]
	[Token(Token = "0x60003BA")]
	public bool get_IsPostGamePrivacyFlowActive() { }

	[Address(RVA = "0x129C940", Offset = "0x129C940", Length = "0x64")]
	[Token(Token = "0x600043E")]
	public static float get_MaxRunVelocity() { }

	[Address(RVA = "0x1288784", Offset = "0x1288784", Length = "0x8")]
	[Token(Token = "0x60003B9")]
	public bool get_NeedsPrivacyFlowAfterGame() { }

	[Address(RVA = "0x128CBAC", Offset = "0x128CBAC", Length = "0x58")]
	[Token(Token = "0x60003D7")]
	public static bool get_RemoteConfigReady() { }

	[Address(RVA = "0x1296C70", Offset = "0x1296C70", Length = "0x64")]
	[Token(Token = "0x6000441")]
	public static int get_ResurrectionBoostDistance() { }

	[Address(RVA = "0x1296CD4", Offset = "0x1296CD4", Length = "0x64")]
	[Token(Token = "0x6000440")]
	public static float get_ResurrectionSlowDownPercent() { }

	[Address(RVA = "0x129C8DC", Offset = "0x129C8DC", Length = "0x64")]
	[Token(Token = "0x600043D")]
	public static float get_StartRunVelocity() { }

	[Address(RVA = "0x129C9A4", Offset = "0x129C9A4", Length = "0x64")]
	[Token(Token = "0x600043F")]
	public static float get_StumbleSlowDownPercent() { }

	[Address(RVA = "0x12975C0", Offset = "0x12975C0", Length = "0xA8")]
	[Token(Token = "0x6000443")]
	public static float GetAccelerationCurveForce(int index) { }

	[Address(RVA = "0x1297518", Offset = "0x1297518", Length = "0xA8")]
	[Token(Token = "0x6000442")]
	public static float GetAccelerationCurveThreshold(int index) { }

	[Address(RVA = "0x128D9A0", Offset = "0x128D9A0", Length = "0xA0")]
	[Token(Token = "0x60003E3")]
	public static AdManager GetAdManager() { }

	[Address(RVA = "0x1297B48", Offset = "0x1297B48", Length = "0xA4")]
	[Token(Token = "0x6000435")]
	public static int GetDoubleValueCoinSpawnDistanceForUpgradeLvl(int lvl) { }

	[Address(RVA = "0x1296A90", Offset = "0x1296A90", Length = "0x158")]
	[Token(Token = "0x6000406")]
	private List<ImangiGameCenterScore> GetFriendScoresInRange(float inMin, float inMax) { }

	[Address(RVA = "0x1297BEC", Offset = "0x1297BEC", Length = "0xA4")]
	[Token(Token = "0x6000436")]
	public static int GetTripleValueCoinSpawnDistanceForUpgradeLvl(int lvl) { }

	[Address(RVA = "0x1296BE8", Offset = "0x1296BE8", Length = "0x88")]
	[Token(Token = "0x6000408")]
	private FriendMarker GetUnusedFriendMarker() { }

	[Address(RVA = "0x1295388", Offset = "0x1295388", Length = "0x66C")]
	[Token(Token = "0x6000417")]
	public void HandleBonusItemPickup(PathElement pathElement, PathDirection origin, bool isRootNode, int bailOut = 3) { }

	[Address(RVA = "0x12959F4", Offset = "0x12959F4", Length = "0x388")]
	[Token(Token = "0x6000419")]
	private void HandleCollisionWithObstacles() { }

	[Address(RVA = "0x1293988", Offset = "0x1293988", Length = "0x97C")]
	[Token(Token = "0x600041F")]
	private void HandleControls() { }

	[Address(RVA = "0x12925DC", Offset = "0x12925DC", Length = "0x2A8")]
	[Token(Token = "0x600040E")]
	private void HandleCountDown() { }

	[Address(RVA = "0x1294304", Offset = "0x1294304", Length = "0x26C")]
	[Token(Token = "0x6000410")]
	private void HandleDelayedJumping() { }

	[Address(RVA = "0x1294570", Offset = "0x1294570", Length = "0x50")]
	[Token(Token = "0x6000411")]
	private void HandleDelayedSliding() { }

	[Address(RVA = "0x12945C0", Offset = "0x12945C0", Length = "0x8EC")]
	[Token(Token = "0x6000412")]
	private void HandleDelayedTurning() { }

	[Address(RVA = "0x1296820", Offset = "0x1296820", Length = "0x19C")]
	[Token(Token = "0x6000425")]
	private void HandleEndGame() { }

	[Address(RVA = "0x1295248", Offset = "0x1295248", Length = "0x4")]
	[Token(Token = "0x6000409")]
	private void HandleFriendMarkers() { }

	[Address(RVA = "0x1295124", Offset = "0x1295124", Length = "0x120")]
	[Token(Token = "0x6000413")]
	private void HandleInvincibility() { }

	[Address(RVA = "0x1292D74", Offset = "0x1292D74", Length = "0xAD8")]
	[Token(Token = "0x600041E")]
	private void HandlePacing() { }

	[Address(RVA = "0x1291A64", Offset = "0x1291A64", Length = "0x78")]
	[Token(Token = "0x600040D")]
	private void HandleResurrecting() { }

	[Address(RVA = "0x1296ED4", Offset = "0x1296ED4", Length = "0x324")]
	[Token(Token = "0x600041C")]
	private void HandleTutorialHints() { }

	[Address(RVA = "0x1295244", Offset = "0x1295244", Length = "0x4")]
	[Token(Token = "0x6000414")]
	private void HandleTutorialMode() { }

	[Address(RVA = "0x12971F8", Offset = "0x12971F8", Length = "0x164")]
	[Token(Token = "0x600041B")]
	private GUIParticle HintSprite(string name, Vector3 start, Vector3 motion, bool startAnimation = true, bool ContainsText = false, string text = null) { }

	[Address(RVA = "0x1290850", Offset = "0x1290850", Length = "0x284")]
	[Token(Token = "0x60003FF")]
	protected void HookAdEvents(AdManager inAdMngr) { }

	[Address(RVA = "0x128B4A8", Offset = "0x128B4A8", Length = "0x508")]
	[Token(Token = "0x60003D9")]
	public void InitAdServices() { }

	[Address(RVA = "0x128EFC0", Offset = "0x128EFC0", Length = "0x68")]
	[IteratorStateMachine(typeof(<InitalizeAdjust>d__236))]
	[Token(Token = "0x60003EA")]
	private IEnumerator InitalizeAdjust() { }

	[Address(RVA = "0x128CC64", Offset = "0x128CC64", Length = "0x198")]
	[Token(Token = "0x60003DA")]
	public void InitializeAdManager() { }

	[Address(RVA = "0x129C3C4", Offset = "0x129C3C4", Length = "0x1A0")]
	[Token(Token = "0x6000431")]
	public static void InitializeConfig(PromoFile inPromoFile) { }

	[Address(RVA = "0x1287900", Offset = "0x1287900", Length = "0x8C")]
	[Token(Token = "0x60003B3")]
	public void InitializeGameCenter() { }

	[Address(RVA = "0x128DA40", Offset = "0x128DA40", Length = "0x28C")]
	[Token(Token = "0x60003E4")]
	public static bool IsVideoAdAvailable() { }

	[Address(RVA = "0x1287D8C", Offset = "0x1287D8C", Length = "0x1B0")]
	[Token(Token = "0x60003B5")]
	private void LoadedAchievements(List<ImangiGameCenterAchievement> inAchievements) { }

	[Address(RVA = "0x128E344", Offset = "0x128E344", Length = "0xC14")]
	[Token(Token = "0x6000422")]
	public void LoadLevelInformation() { }

	[Address(RVA = "0x1287B7C", Offset = "0x1287B7C", Length = "0x210")]
	[Token(Token = "0x60003B4")]
	private void LocalPlayerAuthenticated(ImangiGameCenterPlayer inPlayer) { }

	[Address(RVA = "0x128B368", Offset = "0x128B368", Length = "0x94")]
	[IteratorStateMachine(typeof(<LogAdInitOutcome>d__55))]
	[Token(Token = "0x60003CF")]
	private IEnumerator LogAdInitOutcome(float secondsSinceLaunch, string trigger, bool releaseRetryGuard) { }

	[Address(RVA = "0x128BFEC", Offset = "0x128BFEC", Length = "0x464")]
	[Token(Token = "0x60003D1")]
	public void LogBootConsentAttempt() { }

	[Address(RVA = "0x128C450", Offset = "0x128C450", Length = "0x5F4")]
	[Token(Token = "0x60003D2")]
	public void LogBootConsentOutcome(string inOutcome) { }

	[Address(RVA = "0x128D6AC", Offset = "0x128D6AC", Length = "0x2F4")]
	[Token(Token = "0x60003E2")]
	public void LogRetryFirstImpression() { }

	[Address(RVA = "0x1289EB8", Offset = "0x1289EB8", Length = "0x84")]
	[IteratorStateMachine(typeof(<LogRetryResult>d__227))]
	[Token(Token = "0x60003E1")]
	private IEnumerator LogRetryResult(float secondsSinceLaunch, string trigger) { }

	[Address(RVA = "0x128B3FC", Offset = "0x128B3FC", Length = "0x34")]
	[Token(Token = "0x60003CC")]
	public void LogStartupAdInitAttempt() { }

	[Address(RVA = "0x128B430", Offset = "0x128B430", Length = "0x78")]
	[IteratorStateMachine(typeof(<LogStartupAdInitAttemptDeferred>d__53))]
	[Token(Token = "0x60003CD")]
	private IEnumerator LogStartupAdInitAttemptDeferred(float secondsSinceLaunch) { }

	[Address(RVA = "0x1294EAC", Offset = "0x1294EAC", Length = "0x278")]
	[Token(Token = "0x6000415")]
	private void MakeSureDidntRunPastTurn(Vector3 oldPlayerPosition, Vector3 newPlayerPosition) { }

	[Address(RVA = "0x1288A18", Offset = "0x1288A18", Length = "0x50")]
	[Token(Token = "0x60003BF")]
	private static bool MaxSdkInitialized() { }

	[Address(RVA = "0x128F2EC", Offset = "0x128F2EC", Length = "0xAC")]
	[Token(Token = "0x60003ED")]
	private void OnApplicationFocus(bool focus) { }

	[Address(RVA = "0x128F16C", Offset = "0x128F16C", Length = "0x180")]
	[Token(Token = "0x60003EC")]
	private void OnApplicationPause(bool paused) { }

	[Address(RVA = "0x128F800", Offset = "0x128F800", Length = "0x70")]
	[Token(Token = "0x60003F1")]
	private void OnApplicationQuit() { }

	[Address(RVA = "0x129C3BC", Offset = "0x129C3BC", Length = "0x8")]
	[Token(Token = "0x6000430")]
	public void OnDeeplinkFound(string url, string source = "unknown") { }

	[Address(RVA = "0x128CDFC", Offset = "0x128CDFC", Length = "0x610")]
	[Token(Token = "0x60003DB")]
	private void OnNetworkChangedForAdInit(NetworkReachability oldState, NetworkReachability newState) { }

	[Address(RVA = "0x128D6A0", Offset = "0x128D6A0", Length = "0xC")]
	[Token(Token = "0x60003E0")]
	private void OnPostGamePrivacyFlow() { }

	[Address(RVA = "0x128D644", Offset = "0x128D644", Length = "0x5C")]
	[Token(Token = "0x60003DF")]
	private void OnPrivacyFlowCompleteForAdInit() { }

	[Address(RVA = "0x128D5CC", Offset = "0x128D5CC", Length = "0x78")]
	[Token(Token = "0x60003DD")]
	private void OnRCFetchCompleteForAdInit(bool success) { }

	[Address(RVA = "0x128E050", Offset = "0x128E050", Length = "0x5C")]
	[Token(Token = "0x60003E7")]
	private void OnRemoteConfigManagerInitializeFetchComplete(bool inSuccess) { }

	[Address(RVA = "0x129C2A4", Offset = "0x129C2A4", Length = "0x8C")]
	[Token(Token = "0x600042A")]
	public void Pause() { }

	[Address(RVA = "0x128953C", Offset = "0x128953C", Length = "0x5EC")]
	[Token(Token = "0x60003C6")]
	public void PostGamePrivacyFlow(Action onComplete) { }

	[Address(RVA = "0x129C564", Offset = "0x129C564", Length = "0xC4")]
	[Token(Token = "0x6000432")]
	private static bool ProcessCoinSpawnConfigData(ConfigData inConfigData) { }

	[Address(RVA = "0x129C628", Offset = "0x129C628", Length = "0xC4")]
	[Token(Token = "0x6000433")]
	private static bool ProcessControlsConfigData(ConfigData inConfigData) { }

	[Address(RVA = "0x129C6EC", Offset = "0x129C6EC", Length = "0xC4")]
	[Token(Token = "0x6000434")]
	private static bool ProcessPlayerConfigData(ConfigData inConfigData) { }

	[Address(RVA = "0x129384C", Offset = "0x129384C", Length = "0x13C")]
	[Token(Token = "0x600040C")]
	private void Prune() { }

	[Address(RVA = "0x12891A4", Offset = "0x12891A4", Length = "0x13C")]
	[Token(Token = "0x60003C2")]
	private static string RcAgeSecondsParamValue() { }

	[Address(RVA = "0x1289084", Offset = "0x1289084", Length = "0x120")]
	[Token(Token = "0x60003C1")]
	private static string RcReachableParamValue() { }

	[Address(RVA = "0x12892E0", Offset = "0x12892E0", Length = "0x1C8")]
	[Token(Token = "0x60003C3")]
	private void RefreshRcReachability(string inReason) { }

	[Address(RVA = "0x1288978", Offset = "0x1288978", Length = "0xA0")]
	[Token(Token = "0x60003BE")]
	private static EventParameter RegulationBranchParam() { }

	[Address(RVA = "0x128A1B0", Offset = "0x128A1B0", Length = "0x180")]
	[Token(Token = "0x60003CA")]
	private void ReleaseHeldAdInit(string inTrigger) { }

	[Address(RVA = "0x128FAE8", Offset = "0x128FAE8", Length = "0x80")]
	[Token(Token = "0x6000407")]
	private void ResetFriendScores() { }

	[Address(RVA = "0x128DCCC", Offset = "0x128DCCC", Length = "0xC0")]
	[Token(Token = "0x60003E5")]
	public static void ResetIsVideoAvailableFirstCheck() { }

	[Address(RVA = "0x128FCE8", Offset = "0x128FCE8", Length = "0x37C")]
	[Token(Token = "0x60003F4")]
	public void ResetTutorial() { }

	[Address(RVA = "0x128FBBC", Offset = "0x128FBBC", Length = "0x12C")]
	[Token(Token = "0x60003F5")]
	public void RestartGame() { }

	[Address(RVA = "0x1291ADC", Offset = "0x1291ADC", Length = "0xB00")]
	[Token(Token = "0x600040B")]
	private bool ResurrectPlayer(bool isSaveMe = false) { }

	[Address(RVA = "0x1287F3C", Offset = "0x1287F3C", Length = "0x680")]
	[Token(Token = "0x60003B6")]
	private void RetrievedScoresFromGameCenter(List<ImangiGameCenterScore> inScores) { }

	[Address(RVA = "0x12885BC", Offset = "0x12885BC", Length = "0x1C0")]
	[Token(Token = "0x60003B7")]
	private void RetrievingScoresFailed(string inError) { }

	[Address(RVA = "0x128A330", Offset = "0x128A330", Length = "0x888")]
	[Token(Token = "0x60003CB")]
	private void RetryAdServiceInit() { }

	[Address(RVA = "0x129065C", Offset = "0x129065C", Length = "0x10")]
	[Token(Token = "0x6000403")]
	public void SaveMeVideo_Skip() { }

	[Address(RVA = "0x1290C04", Offset = "0x1290C04", Length = "0x14")]
	[Token(Token = "0x6000402")]
	public void SaveMeVideo_TimedOut() { }

	[Address(RVA = "0x1290AD4", Offset = "0x1290AD4", Length = "0x130")]
	[Token(Token = "0x6000401")]
	public void SaveMeVideo_Watch() { }

	[Address(RVA = "0x12863E8", Offset = "0x12863E8", Length = "0x220")]
	[Token(Token = "0x60003AE")]
	public void SendLifetimeRunsMilestoneEvent(int lifetimeRuns) { }

	[Address(RVA = "0x1285858", Offset = "0x1285858", Length = "0xB90")]
	[Token(Token = "0x60003A6")]
	public void SendRunEndEvent() { }

	[Address(RVA = "0x1285794", Offset = "0x1285794", Length = "0xC4")]
	[Token(Token = "0x60003A5")]
	public void SendRunStartEvent() { }

	[Address(RVA = "0x12872F0", Offset = "0x12872F0", Length = "0x298")]
	[Token(Token = "0x60003AD")]
	public void SendScoreMilestoneEvent(int score) { }

	[Address(RVA = "0x12868D8", Offset = "0x12868D8", Length = "0x2E0")]
	[Token(Token = "0x60003A9")]
	public void SendTutorialDeathEvent() { }

	[Address(RVA = "0x12866A4", Offset = "0x12866A4", Length = "0x234")]
	[Token(Token = "0x60003A8")]
	public void SendTutorialEndEvent() { }

	[Address(RVA = "0x1286E28", Offset = "0x1286E28", Length = "0x270")]
	[Token(Token = "0x60003AB")]
	public void SendTutorialExitedEvent() { }

	[Address(RVA = "0x1287098", Offset = "0x1287098", Length = "0x258")]
	[Token(Token = "0x60003AC")]
	public void SendTutorialSectionCompleteEvent() { }

	[Address(RVA = "0x1286608", Offset = "0x1286608", Length = "0x9C")]
	[Token(Token = "0x60003A7")]
	public void SendTutorialStartEvent() { }

	[Address(RVA = "0x1286BB8", Offset = "0x1286BB8", Length = "0x270")]
	[Token(Token = "0x60003AA")]
	public void SendTutorialStumbleEvent() { }

	[Address(RVA = "0x128CA4C", Offset = "0x128CA4C", Length = "0x8")]
	[CompilerGenerated]
	[Token(Token = "0x60003D4")]
	private void set_DeeplinkUrl(string value) { }

	[Address(RVA = "0x128CC04", Offset = "0x128CC04", Length = "0x60")]
	[Token(Token = "0x60003D8")]
	public static void set_RemoteConfigReady(bool value) { }

	[Address(RVA = "0x1287588", Offset = "0x1287588", Length = "0x74")]
	[Token(Token = "0x60003AF")]
	public void SetFeature(string inFeatureName) { }

	[Address(RVA = "0x12875FC", Offset = "0x12875FC", Length = "0x304")]
	[Token(Token = "0x60003B0")]
	public void SetFeature(string inFeatureName, bool inState) { }

	[Address(RVA = "0x12976F8", Offset = "0x12976F8", Length = "0x260")]
	[Token(Token = "0x600042E")]
	public void SetLocalizationSystemLanguage(string newLanguage, bool updateRecordManager) { }

	[Address(RVA = "0x128F7B8", Offset = "0x128F7B8", Length = "0x48")]
	[Token(Token = "0x60003F6")]
	public void SetMainMenuAnimation() { }

	[Address(RVA = "0x1290064", Offset = "0x1290064", Length = "0x30")]
	[Token(Token = "0x60003F7")]
	private void SetPathElementVisibility() { }

	[Address(RVA = "0x128E100", Offset = "0x128E100", Length = "0xE4")]
	[Token(Token = "0x600042F")]
	private void SetupDeeplinkTracker() { }

	[Address(RVA = "0x1297958", Offset = "0x1297958", Length = "0x1F0")]
	[Token(Token = "0x6000423")]
	public void SetupEnemy() { }

	[Address(RVA = "0x128ABB8", Offset = "0x128ABB8", Length = "0x710")]
	[Token(Token = "0x60003C9")]
	public bool ShouldHoldAdInitForUnresolvedRegulation() { }

	[Address(RVA = "0x12887AC", Offset = "0x12887AC", Length = "0x44")]
	[Token(Token = "0x60003BB")]
	public bool ShouldRetryAdInitNow() { }

	[Address(RVA = "0x1295D7C", Offset = "0x1295D7C", Length = "0x9DC")]
	[Token(Token = "0x6000420")]
	public void SimulateEnemies() { }

	[Address(RVA = "0x12969BC", Offset = "0x12969BC", Length = "0xD4")]
	[Token(Token = "0x6000405")]
	private void SimulateWorldElements() { }

	[Address(RVA = "0x128FB68", Offset = "0x128FB68", Length = "0x54")]
	[Token(Token = "0x60003F3")]
	public void SnapMainMenu() { }

	[Address(RVA = "0x128E1E4", Offset = "0x128E1E4", Length = "0x160")]
	[Token(Token = "0x60003E9")]
	private void Start() { }

	[Address(RVA = "0x128F440", Offset = "0x128F440", Length = "0x378")]
	[Token(Token = "0x60003F0")]
	private void StartGame() { }

	[Address(RVA = "0x128B2C8", Offset = "0x128B2C8", Length = "0xA0")]
	[Token(Token = "0x60003CE")]
	private void SwitchToAdMob(AdManager mgr) { }

	[Address(RVA = "0x1289B28", Offset = "0x1289B28", Length = "0x390")]
	[Token(Token = "0x60003DC")]
	private void TriggerPrivacyFlowForAdInit() { }

	[Address(RVA = "0x12903B0", Offset = "0x12903B0", Length = "0x2AC")]
	[Token(Token = "0x6000400")]
	protected void UnhookAdEvents() { }

	[Address(RVA = "0x1296D38", Offset = "0x1296D38", Length = "0xAC")]
	[Token(Token = "0x600042B")]
	public void Unpause() { }

	[Address(RVA = "0x1290C18", Offset = "0x1290C18", Length = "0xE4C")]
	[Token(Token = "0x6000404")]
	private void Update() { }

	[Address(RVA = "0x1297DA8", Offset = "0x1297DA8", Length = "0x3F30")]
	[Token(Token = "0x600042C")]
	private void UpdateAchievementRecords() { }

	[Address(RVA = "0x1297C90", Offset = "0x1297C90", Length = "0x118")]
	[Token(Token = "0x6000424")]
	private void UpdateAndSaveRecords() { }

	[Address(RVA = "0x129BCD8", Offset = "0x129BCD8", Length = "0x178")]
	[Token(Token = "0x6000426")]
	public void UseAngelWings() { }

	[Address(RVA = "0x129BFC4", Offset = "0x129BFC4", Length = "0x170")]
	[Token(Token = "0x6000428")]
	public void UseHeadStart() { }

	[Address(RVA = "0x129C134", Offset = "0x129C134", Length = "0x170")]
	[Token(Token = "0x6000429")]
	public void UseHeadStartMega() { }

	[Address(RVA = "0x129BE50", Offset = "0x129BE50", Length = "0x174")]
	[Token(Token = "0x6000427")]
	public void UsePermaWings() { }

	[Address(RVA = "0x128EF58", Offset = "0x128EF58", Length = "0x68")]
	[IteratorStateMachine(typeof(<WaitAndWarmResources>d__240))]
	[Token(Token = "0x60003EE")]
	private IEnumerator WaitAndWarmResources() { }

}

