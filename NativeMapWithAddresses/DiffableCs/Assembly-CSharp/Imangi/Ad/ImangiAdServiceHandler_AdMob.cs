namespace Imangi.Ad;

[Token(Token = "0x20002AC")]
public class ImangiAdServiceHandler_AdMob : ImangiAdServiceHandler
{
	[CompilerGenerated]
	[Token(Token = "0x20002B4")]
	private sealed class <RetryFetchCoroutine>d__30 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4001432")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4001433")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4001434")]
		public int retryCount; //Field offset: 0x20
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x4001435")]
		public ImangiAdServiceHandler_AdMob <>4__this; //Field offset: 0x28
		[FieldOffset(Offset = "0x30")]
		[Token(Token = "0x4001436")]
		public AdType inType; //Field offset: 0x30
		[FieldOffset(Offset = "0x38")]
		[Token(Token = "0x4001437")]
		public string inAdUnitID; //Field offset: 0x38

		[Token(Token = "0x1700024C")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x12854F0", Offset = "0x12854F0", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x600155D")]
			private get { } //Length: 8
		}

		[Token(Token = "0x1700024D")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x1285530", Offset = "0x1285530", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x600155F")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x1282300", Offset = "0x1282300", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x600155A")]
		public <RetryFetchCoroutine>d__30(int <>1__state) { }

		[Address(RVA = "0x1285428", Offset = "0x1285428", Length = "0xC8")]
		[Token(Token = "0x600155C")]
		private override bool MoveNext() { }

		[Address(RVA = "0x12854F0", Offset = "0x12854F0", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x600155D")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x1285530", Offset = "0x1285530", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x600155F")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x12854F8", Offset = "0x12854F8", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x600155E")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x1285424", Offset = "0x1285424", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x600155B")]
		private override void System.IDisposable.Dispose() { }

	}

	[Token(Token = "0x20002AD")]
	internal class AdMob_AdInfo
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x400141F")]
		public ImangiAdServiceHandler_AdMob Handler; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4001420")]
		public AdType Type; //Field offset: 0x18
		[FieldOffset(Offset = "0x1C")]
		[Token(Token = "0x4001421")]
		public AdState State; //Field offset: 0x1C
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4001422")]
		public string AdUnitID; //Field offset: 0x20
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x4001423")]
		public string LastError; //Field offset: 0x28
		[FieldOffset(Offset = "0x30")]
		[Token(Token = "0x4001424")]
		public bool CompletedWatch; //Field offset: 0x30
		[FieldOffset(Offset = "0x31")]
		[Token(Token = "0x4001425")]
		public bool WasClicked; //Field offset: 0x31

		[Address(RVA = "0x1283460", Offset = "0x1283460", Length = "0x84")]
		[Token(Token = "0x6001514")]
		public AdMob_AdInfo(ImangiAdServiceHandler_AdMob inHandler, AdType inAdType, string inAdUnitID) { }

		[Address(RVA = "0x1282568", Offset = "0x1282568", Length = "0x148")]
		[Token(Token = "0x6001522")]
		public void AdCached(string inAdUnitID) { }

		[Address(RVA = "0x12831A0", Offset = "0x12831A0", Length = "0x178")]
		[Token(Token = "0x6001526")]
		public void AdClicked(string inAdUnitID) { }

		[Address(RVA = "0x1282F4C", Offset = "0x1282F4C", Length = "0x130")]
		[Token(Token = "0x6001527")]
		public void AdCompleted(string inAdUnitID) { }

		[Address(RVA = "0x1282A1C", Offset = "0x1282A1C", Length = "0x1B0")]
		[Token(Token = "0x6001525")]
		public void AdDismissed(string inAdUnitID) { }

		[Address(RVA = "0x1282774", Offset = "0x1282774", Length = "0x1C4")]
		[Token(Token = "0x6001524")]
		public void AdFailed(string inAdUnitID, string inError) { }

		[Address(RVA = "0x1282BEC", Offset = "0x1282BEC", Length = "0x170")]
		[Token(Token = "0x6001523")]
		public void AdOpened(string inAdUnitID) { }

		[Address(RVA = "0x1283904", Offset = "0x1283904", Length = "0x140")]
		[Token(Token = "0x6001528")]
		public void AdWillLeaveApplication(string inAdUnitID) { }

		[Address(RVA = "0x128361C", Offset = "0x128361C", Length = "0x120")]
		[Token(Token = "0x6001518")]
		public bool CanDisplayAd() { }

		[Address(RVA = "0x1282168", Offset = "0x1282168", Length = "0x68")]
		[Token(Token = "0x600151F")]
		public bool DisplayAd(string inPlacement = "", bool bypassflow = false) { }

		[Address(RVA = "0x128377C", Offset = "0x128377C", Length = "0x184")]
		[Token(Token = "0x600151E")]
		public override bool DisplayAd_Internal(string inPlacement = "", bool byPass = false) { }

		[Address(RVA = "0x1281E4C", Offset = "0x1281E4C", Length = "0x74")]
		[Token(Token = "0x600151B")]
		public void FetchAd(BannerPosition inBannerPosition = 5) { }

		[Address(RVA = "0x1283740", Offset = "0x1283740", Length = "0x4")]
		[Token(Token = "0x600151A")]
		public override void FetchAd_Internal() { }

		[Address(RVA = "0x128373C", Offset = "0x128373C", Length = "0x4")]
		[Token(Token = "0x6001519")]
		public override void FetchAd_Internal(BannerPosition inBannerPosition) { }

		[Address(RVA = "0x1281F50", Offset = "0x1281F50", Length = "0x144")]
		[Token(Token = "0x6001521")]
		public void HideAd() { }

		[Address(RVA = "0x1283900", Offset = "0x1283900", Length = "0x4")]
		[Token(Token = "0x6001520")]
		public override void HideAd_Internal() { }

		[Address(RVA = "0x1282130", Offset = "0x1282130", Length = "0xC")]
		[Token(Token = "0x600151D")]
		public bool IsAdAvailable() { }

		[Address(RVA = "0x1283744", Offset = "0x1283744", Length = "0x38")]
		[Token(Token = "0x600151C")]
		public override bool IsAdAvailable_Internal() { }

		[Address(RVA = "0x12834E4", Offset = "0x12834E4", Length = "0x8")]
		[Token(Token = "0x6001515")]
		public override bool IsValid(bool inFetching) { }

		[Address(RVA = "0x12834EC", Offset = "0x12834EC", Length = "0x4")]
		[Token(Token = "0x6001516")]
		public override void Reset() { }

		[Address(RVA = "0x12834F0", Offset = "0x12834F0", Length = "0x12C")]
		[Token(Token = "0x6001517")]
		public override bool ShouldFetchAd() { }

	}

	[Token(Token = "0x20002B2")]
	internal class AdMob_AdInfo_Banner : AdMob_AdInfo
	{
		[CompilerGenerated]
		[Token(Token = "0x20002B3")]
		private sealed class <>c
		{
			[Token(Token = "0x4001430")]
			public static readonly <>c <>9; //Field offset: 0x0
			[Token(Token = "0x4001431")]
			public static Action <>9__13_3; //Field offset: 0x8

			[Address(RVA = "0x12853BC", Offset = "0x12853BC", Length = "0x5C")]
			[Token(Token = "0x6001557")]
			private static <>c() { }

			[Address(RVA = "0x1285418", Offset = "0x1285418", Length = "0x8")]
			[Token(Token = "0x6001558")]
			public <>c() { }

			[Address(RVA = "0x1285420", Offset = "0x1285420", Length = "0x4")]
			[Token(Token = "0x6001559")]
			internal void <RegisterEventHandlers>b__13_3() { }

		}

		[FieldOffset(Offset = "0x38")]
		[Token(Token = "0x400142C")]
		private BannerView _bannerView; //Field offset: 0x38
		[FieldOffset(Offset = "0x40")]
		[Token(Token = "0x400142D")]
		public GameObject AdLoadedStatus; //Field offset: 0x40
		[FieldOffset(Offset = "0x48")]
		[Token(Token = "0x400142E")]
		private Color _BackgroundColor; //Field offset: 0x48
		[FieldOffset(Offset = "0x58")]
		[Token(Token = "0x400142F")]
		private AdPosition _BannerAdPosition; //Field offset: 0x58

		[Address(RVA = "0x1281D14", Offset = "0x1281D14", Length = "0x10")]
		[Token(Token = "0x6001547")]
		public AdMob_AdInfo_Banner(ImangiAdServiceHandler_AdMob inHandler, string inAdUnitID) { }

		[Address(RVA = "0x1285004", Offset = "0x1285004", Length = "0x4")]
		[CompilerGenerated]
		[Token(Token = "0x6001551")]
		private void <RegisterEventHandlers>b__13_0() { }

		[Address(RVA = "0x1285008", Offset = "0x1285008", Length = "0x34")]
		[CompilerGenerated]
		[Token(Token = "0x6001552")]
		private void <RegisterEventHandlers>b__13_1(LoadAdError error) { }

		[Address(RVA = "0x128503C", Offset = "0x128503C", Length = "0x360")]
		[CompilerGenerated]
		[Token(Token = "0x6001553")]
		private void <RegisterEventHandlers>b__13_2(AdValue adValue) { }

		[Address(RVA = "0x128539C", Offset = "0x128539C", Length = "0x4")]
		[CompilerGenerated]
		[Token(Token = "0x6001554")]
		private void <RegisterEventHandlers>b__13_4() { }

		[Address(RVA = "0x12853A0", Offset = "0x12853A0", Length = "0x4")]
		[CompilerGenerated]
		[Token(Token = "0x6001555")]
		private void <RegisterEventHandlers>b__13_5() { }

		[Address(RVA = "0x12853A4", Offset = "0x12853A4", Length = "0x18")]
		[CompilerGenerated]
		[Token(Token = "0x6001556")]
		private void <RegisterEventHandlers>b__13_6() { }

		[Address(RVA = "0x1284BF4", Offset = "0x1284BF4", Length = "0xBC")]
		[Token(Token = "0x600154A")]
		public void CreateBannerView() { }

		[Address(RVA = "0x1284CB0", Offset = "0x1284CB0", Length = "0x24")]
		[Token(Token = "0x600154E")]
		public void DestroyAd() { }

		[Address(RVA = "0x1284F9C", Offset = "0x1284F9C", Length = "0x20")]
		[Token(Token = "0x600154B")]
		public virtual bool DisplayAd_Internal(string inPlacement = "", bool byPass = false) { }

		[Address(RVA = "0x1284B7C", Offset = "0x1284B7C", Length = "0x78")]
		[Token(Token = "0x6001549")]
		public virtual void FetchAd_Internal(BannerPosition inBannerPosition = 1) { }

		[Address(RVA = "0x1284FD0", Offset = "0x1284FD0", Length = "0x20")]
		[Token(Token = "0x600154C")]
		public virtual void HideAd_Internal() { }

		[Address(RVA = "0x1284FF0", Offset = "0x1284FF0", Length = "0x14")]
		[Token(Token = "0x600154D")]
		public void HideBannerAd() { }

		[Address(RVA = "0x1284CD4", Offset = "0x1284CD4", Length = "0x2C8")]
		[Token(Token = "0x6001550")]
		private void RegisterEventHandlers() { }

		[Address(RVA = "0x1284B60", Offset = "0x1284B60", Length = "0x1C")]
		[Token(Token = "0x6001548")]
		public void SetAdBannerPosition(BannerPosition inBannerPosition) { }

		[Address(RVA = "0x1284FBC", Offset = "0x1284FBC", Length = "0x14")]
		[Token(Token = "0x600154F")]
		public void ShowBannerAd() { }

	}

	[Token(Token = "0x20002AE")]
	internal class AdMob_AdInfo_Card : AdMob_AdInfo
	{
		[CompilerGenerated]
		[Token(Token = "0x20002AF")]
		private sealed class <>c
		{
			[Token(Token = "0x4001427")]
			public static readonly <>c <>9; //Field offset: 0x0
			[Token(Token = "0x4001428")]
			public static Action <>9__2_1; //Field offset: 0x8

			[Address(RVA = "0x1284244", Offset = "0x1284244", Length = "0x5C")]
			[Token(Token = "0x6001534")]
			private static <>c() { }

			[Address(RVA = "0x12842A0", Offset = "0x12842A0", Length = "0x8")]
			[Token(Token = "0x6001535")]
			public <>c() { }

			[Address(RVA = "0x12842A8", Offset = "0x12842A8", Length = "0x4")]
			[Token(Token = "0x6001536")]
			internal void <RegisterEventHandlers>b__2_1() { }

		}

		[FieldOffset(Offset = "0x38")]
		[Token(Token = "0x4001426")]
		public InterstitialAd _interstitialAd; //Field offset: 0x38

		[Address(RVA = "0x1281D08", Offset = "0x1281D08", Length = "0xC")]
		[Token(Token = "0x6001529")]
		public AdMob_AdInfo_Card(ImangiAdServiceHandler_AdMob inHandler, string inAdUnitID) { }

		[Address(RVA = "0x128421C", Offset = "0x128421C", Length = "0x28")]
		[CompilerGenerated]
		[Token(Token = "0x6001533")]
		private void <FetchAd_Internal>b__3_0(InterstitialAd ad, LoadAdError error) { }

		[Address(RVA = "0x1283E68", Offset = "0x1283E68", Length = "0x360")]
		[CompilerGenerated]
		[Token(Token = "0x600152E")]
		private void <RegisterEventHandlers>b__2_0(AdValue adValue) { }

		[Address(RVA = "0x12841C8", Offset = "0x12841C8", Length = "0x4")]
		[CompilerGenerated]
		[Token(Token = "0x600152F")]
		private void <RegisterEventHandlers>b__2_2() { }

		[Address(RVA = "0x12841CC", Offset = "0x12841CC", Length = "0x4")]
		[CompilerGenerated]
		[Token(Token = "0x6001530")]
		private void <RegisterEventHandlers>b__2_3() { }

		[Address(RVA = "0x12841D0", Offset = "0x12841D0", Length = "0x18")]
		[CompilerGenerated]
		[Token(Token = "0x6001531")]
		private void <RegisterEventHandlers>b__2_4() { }

		[Address(RVA = "0x12841E8", Offset = "0x12841E8", Length = "0x34")]
		[CompilerGenerated]
		[Token(Token = "0x6001532")]
		private void <RegisterEventHandlers>b__2_5(AdError error) { }

		[Address(RVA = "0x1283DBC", Offset = "0x1283DBC", Length = "0xAC")]
		[Token(Token = "0x600152D")]
		public virtual bool DisplayAd_Internal(string inPlacement = "", bool byPass = false) { }

		[Address(RVA = "0x1283CAC", Offset = "0x1283CAC", Length = "0xC8")]
		[Token(Token = "0x600152B")]
		public virtual void FetchAd_Internal() { }

		[Address(RVA = "0x1283D74", Offset = "0x1283D74", Length = "0x48")]
		[Token(Token = "0x600152C")]
		public virtual bool IsAdAvailable_Internal() { }

		[Address(RVA = "0x1283A44", Offset = "0x1283A44", Length = "0x268")]
		[Token(Token = "0x600152A")]
		private void RegisterEventHandlers(InterstitialAd interstitialAd) { }

	}

	[Token(Token = "0x20002B0")]
	internal class AdMob_AdInfo_Video : AdMob_AdInfo
	{
		[CompilerGenerated]
		[Token(Token = "0x20002B1")]
		private sealed class <>c
		{
			[Token(Token = "0x400142A")]
			public static readonly <>c <>9; //Field offset: 0x0
			[Token(Token = "0x400142B")]
			public static Action <>9__2_1; //Field offset: 0x8

			[Address(RVA = "0x1284AF8", Offset = "0x1284AF8", Length = "0x5C")]
			[Token(Token = "0x6001544")]
			private static <>c() { }

			[Address(RVA = "0x1284B54", Offset = "0x1284B54", Length = "0x8")]
			[Token(Token = "0x6001545")]
			public <>c() { }

			[Address(RVA = "0x1284B5C", Offset = "0x1284B5C", Length = "0x4")]
			[Token(Token = "0x6001546")]
			internal void <RegisterEventHandlers>b__2_1() { }

		}

		[FieldOffset(Offset = "0x38")]
		[Token(Token = "0x4001429")]
		private RewardedAd _rewardedAd; //Field offset: 0x38

		[Address(RVA = "0x1281CFC", Offset = "0x1281CFC", Length = "0xC")]
		[Token(Token = "0x6001537")]
		public AdMob_AdInfo_Video(ImangiAdServiceHandler_AdMob inHandler, string inAdUnitID) { }

		[Address(RVA = "0x1284AF0", Offset = "0x1284AF0", Length = "0x4")]
		[CompilerGenerated]
		[Token(Token = "0x6001542")]
		private void <DisplayAd_Internal>b__5_0(Reward reward) { }

		[Address(RVA = "0x1284AF4", Offset = "0x1284AF4", Length = "0x4")]
		[CompilerGenerated]
		[Token(Token = "0x6001543")]
		private void <DisplayAd_Internal>b__5_1(Reward reward) { }

		[Address(RVA = "0x1284AC8", Offset = "0x1284AC8", Length = "0x28")]
		[CompilerGenerated]
		[Token(Token = "0x6001541")]
		private void <FetchAd_Internal>b__3_0(RewardedAd ad, LoadAdError error) { }

		[Address(RVA = "0x1284728", Offset = "0x1284728", Length = "0x360")]
		[CompilerGenerated]
		[Token(Token = "0x600153C")]
		private void <RegisterEventHandlers>b__2_0(AdValue adValue) { }

		[Address(RVA = "0x1284A88", Offset = "0x1284A88", Length = "0x4")]
		[CompilerGenerated]
		[Token(Token = "0x600153D")]
		private void <RegisterEventHandlers>b__2_2() { }

		[Address(RVA = "0x1284A8C", Offset = "0x1284A8C", Length = "0x4")]
		[CompilerGenerated]
		[Token(Token = "0x600153E")]
		private void <RegisterEventHandlers>b__2_3() { }

		[Address(RVA = "0x1284A90", Offset = "0x1284A90", Length = "0x4")]
		[CompilerGenerated]
		[Token(Token = "0x600153F")]
		private void <RegisterEventHandlers>b__2_4() { }

		[Address(RVA = "0x1284A94", Offset = "0x1284A94", Length = "0x34")]
		[CompilerGenerated]
		[Token(Token = "0x6001540")]
		private void <RegisterEventHandlers>b__2_5(AdError error) { }

		[Address(RVA = "0x1284628", Offset = "0x1284628", Length = "0x100")]
		[Token(Token = "0x600153B")]
		public virtual bool DisplayAd_Internal(string inPlacement = "", bool byPass = false) { }

		[Address(RVA = "0x1284514", Offset = "0x1284514", Length = "0xC8")]
		[Token(Token = "0x6001539")]
		public virtual void FetchAd_Internal() { }

		[Address(RVA = "0x12845DC", Offset = "0x12845DC", Length = "0x4C")]
		[Token(Token = "0x600153A")]
		public virtual bool IsAdAvailable_Internal() { }

		[Address(RVA = "0x12842AC", Offset = "0x12842AC", Length = "0x268")]
		[Token(Token = "0x6001538")]
		private void RegisterEventHandlers(RewardedAd ad) { }

	}

	[Token(Token = "0x4001412")]
	private const float FetchRetryDelay = 4; //Field offset: 0x0
	[Token(Token = "0x4001413")]
	private const int MaxRetries = 8; //Field offset: 0x0
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x4001414")]
	private int _RetryCountVideo; //Field offset: 0x70
	[FieldOffset(Offset = "0x74")]
	[Token(Token = "0x4001415")]
	private int _RetryCountInterstitial; //Field offset: 0x74
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4001416")]
	private int _RetryCountBanner; //Field offset: 0x78
	[FieldOffset(Offset = "0x7C")]
	[Token(Token = "0x4001417")]
	private bool _InterstitialEventsHooked; //Field offset: 0x7C
	[FieldOffset(Offset = "0x7D")]
	[Token(Token = "0x4001418")]
	private bool _RewardVideoEventsHooked; //Field offset: 0x7D
	[FieldOffset(Offset = "0x7E")]
	[Token(Token = "0x4001419")]
	private bool _BannerEventsHooked; //Field offset: 0x7E
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x400141A")]
	private Dictionary<String, AdMob_AdInfo_Card> _InterstitialMap; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x400141B")]
	private Dictionary<String, AdMob_AdInfo_Video> _RewardedVideoMap; //Field offset: 0x88
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x400141C")]
	private Dictionary<String, AdMob_AdInfo_Banner> _BannerMap; //Field offset: 0x90
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x400141D")]
	private bool _HasConsent; //Field offset: 0x98
	[FieldOffset(Offset = "0x99")]
	[Token(Token = "0x400141E")]
	private bool _IsAgeRestricted; //Field offset: 0x99

	[Token(Token = "0x1700024A")]
	public bool HasConsent
	{
		[Address(RVA = "0x1281704", Offset = "0x1281704", Length = "0x8")]
		[Token(Token = "0x60014E8")]
		 get { } //Length: 8
	}

	[Token(Token = "0x1700024B")]
	public bool IsAgeRestricted
	{
		[Address(RVA = "0x128170C", Offset = "0x128170C", Length = "0x8")]
		[Token(Token = "0x60014E9")]
		 get { } //Length: 8
	}

	[Address(RVA = "0x1283328", Offset = "0x1283328", Length = "0x110")]
	[Token(Token = "0x6001512")]
	public ImangiAdServiceHandler_AdMob() { }

	[Address(RVA = "0x1283438", Offset = "0x1283438", Length = "0x28")]
	[CompilerGenerated]
	[Token(Token = "0x6001513")]
	private void <InitializeAdServiceHandler>b__17_0(InitializationStatus initStatus) { }

	[Address(RVA = "0x1282328", Offset = "0x1282328", Length = "0x4C")]
	[Token(Token = "0x60014F8")]
	protected void AdMob_Handler_OnAdCached(AdType inAdType, string inAdUnitID) { }

	[Address(RVA = "0x1282374", Offset = "0x1282374", Length = "0xD8")]
	[Token(Token = "0x60014F9")]
	protected void AdMob_Handler_OnAdCacheFailed(AdType inAdType, string inAdUnitID, string inError) { }

	[Address(RVA = "0x1282504", Offset = "0x1282504", Length = "0x38")]
	[Token(Token = "0x60014FD")]
	protected void AdMob_Handler_OnAdClicked(AdType inAdType, string inAdUnitID) { }

	[Address(RVA = "0x128253C", Offset = "0x128253C", Length = "0x4")]
	[Token(Token = "0x60014FE")]
	protected void AdMob_Handler_OnAdClosed(AdType inAdType, string inAdUnitID) { }

	[Address(RVA = "0x12824C4", Offset = "0x12824C4", Length = "0x40")]
	[Token(Token = "0x60014FC")]
	protected void AdMob_Handler_OnAdDismissed(AdType inAdType, string inAdUnitID, bool inComplete) { }

	[Address(RVA = "0x1282484", Offset = "0x1282484", Length = "0x40")]
	[Token(Token = "0x60014FB")]
	protected void AdMob_Handler_OnAdFailed(AdType inAdType, string inAdUnitID, string inError) { }

	[Address(RVA = "0x128244C", Offset = "0x128244C", Length = "0x38")]
	[Token(Token = "0x60014FA")]
	protected void AdMob_Handler_OnAdOpened(AdType inAdType, string inAdUnitID) { }

	[Address(RVA = "0x1282544", Offset = "0x1282544", Length = "0x4")]
	[Token(Token = "0x6001500")]
	protected void AdMob_Handler_OnAdStarted(AdType inAdType, string inAdUnitID) { }

	[Address(RVA = "0x1282540", Offset = "0x1282540", Length = "0x4")]
	[Token(Token = "0x60014FF")]
	protected void AdMob_Handler_OnAdWillLeaveApplication(AdType inAdType, string inAdUnitID) { }

	[Address(RVA = "0x12821D0", Offset = "0x12821D0", Length = "0xA8")]
	[Token(Token = "0x60014F6")]
	public virtual void DisplayAd(AdType inType, string inAdUnitID, string inPlacement = "") { }

	[Address(RVA = "0x128213C", Offset = "0x128213C", Length = "0x2C")]
	[Token(Token = "0x60014F5")]
	public virtual void DisplayAdForced(AdType inType, string inAdUnitID, string inPlacement = "") { }

	[Address(RVA = "0x1281DA8", Offset = "0x1281DA8", Length = "0xA4")]
	[Token(Token = "0x60014F2")]
	public virtual void FetchAd(AdType inType, string inAdUnitID, BannerPosition inBannerPosition = 5) { }

	[Address(RVA = "0x1281704", Offset = "0x1281704", Length = "0x8")]
	[Token(Token = "0x60014E8")]
	public bool get_HasConsent() { }

	[Address(RVA = "0x128170C", Offset = "0x128170C", Length = "0x8")]
	[Token(Token = "0x60014E9")]
	public bool get_IsAgeRestricted() { }

	[Address(RVA = "0x1281988", Offset = "0x1281988", Length = "0x4C")]
	[Token(Token = "0x60014ED")]
	private AdMob_AdInfo GetAdInfo(AdType inAdType, string inAdUnitId, bool inCreateIfNotFound) { }

	[Address(RVA = "0x1281BEC", Offset = "0x1281BEC", Length = "0x110")]
	[Token(Token = "0x60014F0")]
	private AdMob_AdInfo_Banner GetBannerAdInfo(string inAdUnitId, bool inCreateIfNotFound) { }

	[Address(RVA = "0x1281AE0", Offset = "0x1281AE0", Length = "0x10C")]
	[Token(Token = "0x60014EF")]
	public AdMob_AdInfo_Card GetInterstitialAdInfo(string inAdUnitId, bool inCreateIfNotFound) { }

	[Address(RVA = "0x12819D4", Offset = "0x12819D4", Length = "0x10C")]
	[Token(Token = "0x60014EE")]
	private AdMob_AdInfo_Video GetRewardedVideoAdInfo(string inAdUnitId, bool inCreateIfNotFound) { }

	[Address(RVA = "0x1281EC0", Offset = "0x1281EC0", Length = "0x90")]
	[Token(Token = "0x60014F3")]
	public virtual void HideAd(AdType inType, string inAdUnitID) { }

	[Address(RVA = "0x1281714", Offset = "0x1281714", Length = "0x1A8")]
	[Token(Token = "0x60014EA")]
	public virtual bool InitializeAdServiceHandler(AdManager inAdMngr, bool inPrivacyCompliantRequired, bool inHasConsent, bool inIsAgeRestricted, bool isCCPA, AdServiceInitializationInfo inInitInfo, bool adMobInitStatusPrivacyFlow = false) { }

	[Address(RVA = "0x1282094", Offset = "0x1282094", Length = "0x9C")]
	[Token(Token = "0x60014F4")]
	public virtual bool IsAdAvailable(AdType inType, string inAdUnitID) { }

	[Address(RVA = "0x1283180", Offset = "0x1283180", Length = "0x20")]
	[Token(Token = "0x600150F")]
	public void OnBannerClickedEvent(string inAdUnitId) { }

	[Address(RVA = "0x1283320", Offset = "0x1283320", Length = "0x8")]
	[Token(Token = "0x6001511")]
	public void OnBannerCollapsedEvent(string inAdUnitId) { }

	[Address(RVA = "0x1283318", Offset = "0x1283318", Length = "0x8")]
	[Token(Token = "0x6001510")]
	public void OnBannerExpandedEvent(string inAdUnitId) { }

	[Address(RVA = "0x128309C", Offset = "0x128309C", Length = "0x20")]
	[Token(Token = "0x600150D")]
	public void OnBannerLoadedEvent(string inAdUnitId) { }

	[Address(RVA = "0x12830BC", Offset = "0x12830BC", Length = "0xC4")]
	[Token(Token = "0x600150E")]
	public void OnBannerLoadFailedEvent(string inAdUnitId, int inErrorCode) { }

	[Address(RVA = "0x12829FC", Offset = "0x12829FC", Length = "0x20")]
	[Token(Token = "0x6001504")]
	public void OnInterstitialDismissedEvent(string inAdUnitId) { }

	[Address(RVA = "0x1282BCC", Offset = "0x1282BCC", Length = "0x20")]
	[Token(Token = "0x6001505")]
	public void OnInterstitialDisplayedEvent(string inAdUnitId, AdInfo inAdInfo) { }

	[Address(RVA = "0x1282938", Offset = "0x1282938", Length = "0xC4")]
	[Token(Token = "0x6001503")]
	public void OnInterstitialFailedToDisplayEvent(string inAdUnitId, int inErrorCode) { }

	[Address(RVA = "0x12826B0", Offset = "0x12826B0", Length = "0xC4")]
	[Token(Token = "0x6001502")]
	public void OnInterstitialFailedToLoadEvent(string inAdUnitId, int inErrorCode) { }

	[Address(RVA = "0x1282548", Offset = "0x1282548", Length = "0x20")]
	[Token(Token = "0x6001501")]
	public void OnInterstitialLoadedEvent(string inAdUnitId) { }

	[Address(RVA = "0x1282F24", Offset = "0x1282F24", Length = "0x8")]
	[Token(Token = "0x600150A")]
	public void OnRewardedAdClickedEvent(string inAdUnitId) { }

	[Address(RVA = "0x128307C", Offset = "0x128307C", Length = "0x20")]
	[Token(Token = "0x600150C")]
	public void OnRewardedAdDismissedEvent(string inAdUnitId) { }

	[Address(RVA = "0x1282F04", Offset = "0x1282F04", Length = "0x20")]
	[Token(Token = "0x6001509")]
	public void OnRewardedAdDisplayedEvent(string inAdUnitId) { }

	[Address(RVA = "0x1282E40", Offset = "0x1282E40", Length = "0xC4")]
	[Token(Token = "0x6001508")]
	public void OnRewardedAdFailedToDisplayEvent(string inAdUnitId, int inErrorCode) { }

	[Address(RVA = "0x1282D7C", Offset = "0x1282D7C", Length = "0xC4")]
	[Token(Token = "0x6001507")]
	public void OnRewardedAdFailedToLoadEvent(string inAdUnitId, int inErrorCode) { }

	[Address(RVA = "0x1282D5C", Offset = "0x1282D5C", Length = "0x20")]
	[Token(Token = "0x6001506")]
	public void OnRewardedAdLoadedEvent(string inAdUnitId) { }

	[Address(RVA = "0x1282F2C", Offset = "0x1282F2C", Length = "0x20")]
	[Token(Token = "0x600150B")]
	public void OnRewardedAdReceivedRewardEvent(string inAdUnitId, Reward inReward) { }

	[Address(RVA = "0x12818C8", Offset = "0x12818C8", Length = "0xC0")]
	[Token(Token = "0x60014EC")]
	public virtual bool ReapplyConsentSettings(bool inHasConsent, bool inIsAgeRestricted) { }

	[Address(RVA = "0x1282278", Offset = "0x1282278", Length = "0x88")]
	[IteratorStateMachine(typeof(<RetryFetchCoroutine>d__30))]
	[Token(Token = "0x60014F7")]
	private IEnumerator RetryFetchCoroutine(AdType inType, string inAdUnitID, int retryCount) { }

	[Address(RVA = "0x12818BC", Offset = "0x12818BC", Length = "0xC")]
	[Token(Token = "0x60014EB")]
	public virtual void ShutdownAdServiceHandler(AdManager inAdMngr) { }

	[Address(RVA = "0x1281D24", Offset = "0x1281D24", Length = "0x84")]
	[Token(Token = "0x60014F1")]
	protected string ValidateOperation(AdType inType) { }

}

