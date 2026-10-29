namespace Imangi.Ad;

[Token(Token = "0x200029B")]
public class ImangiAdServiceHandler_AppLovin : ImangiAdServiceHandler
{
	[CompilerGenerated]
	[Token(Token = "0x20002A0")]
	private sealed class <InitializeSDKCoroutine>d__20 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x40013C0")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x40013C1")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x40013C2")]
		public AdServiceInitializationInfo inInitInfo; //Field offset: 0x20

		[Token(Token = "0x1700023D")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x127A0FC", Offset = "0x127A0FC", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x600143B")]
			private get { } //Length: 8
		}

		[Token(Token = "0x1700023E")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x127A13C", Offset = "0x127A13C", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x600143D")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x1275D98", Offset = "0x1275D98", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x6001438")]
		public <InitializeSDKCoroutine>d__20(int <>1__state) { }

		[Address(RVA = "0x1279E68", Offset = "0x1279E68", Length = "0x294")]
		[Token(Token = "0x600143A")]
		private override bool MoveNext() { }

		[Address(RVA = "0x127A0FC", Offset = "0x127A0FC", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x600143B")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x127A13C", Offset = "0x127A13C", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x600143D")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x127A104", Offset = "0x127A104", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x600143C")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x1279E64", Offset = "0x1279E64", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x6001439")]
		private override void System.IDisposable.Dispose() { }

	}

	[CompilerGenerated]
	[Token(Token = "0x20002A1")]
	private sealed class <RetryFetchCoroutine>d__40 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x40013C3")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x40013C4")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x40013C5")]
		public int retryCount; //Field offset: 0x20
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x40013C6")]
		public ImangiAdServiceHandler_AppLovin <>4__this; //Field offset: 0x28
		[FieldOffset(Offset = "0x30")]
		[Token(Token = "0x40013C7")]
		public AdType inType; //Field offset: 0x30
		[FieldOffset(Offset = "0x38")]
		[Token(Token = "0x40013C8")]
		public string inAdUnitID; //Field offset: 0x38

		[Token(Token = "0x1700023F")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x127A210", Offset = "0x127A210", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6001441")]
			private get { } //Length: 8
		}

		[Token(Token = "0x17000240")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x127A250", Offset = "0x127A250", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6001443")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x127796C", Offset = "0x127796C", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x600143E")]
		public <RetryFetchCoroutine>d__40(int <>1__state) { }

		[Address(RVA = "0x127A148", Offset = "0x127A148", Length = "0xC8")]
		[Token(Token = "0x6001440")]
		private override bool MoveNext() { }

		[Address(RVA = "0x127A210", Offset = "0x127A210", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6001441")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x127A250", Offset = "0x127A250", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6001443")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x127A218", Offset = "0x127A218", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x6001442")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x127A144", Offset = "0x127A144", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x600143F")]
		private override void System.IDisposable.Dispose() { }

	}

	[Token(Token = "0x200029C")]
	internal class AppLovin_AdInfo
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x40013B7")]
		public ImangiAdServiceHandler_AppLovin Handler; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x40013B8")]
		public AdType Type; //Field offset: 0x18
		[FieldOffset(Offset = "0x1C")]
		[Token(Token = "0x40013B9")]
		public AdState State; //Field offset: 0x1C
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x40013BA")]
		public string AdUnitID; //Field offset: 0x20
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x40013BB")]
		public string LastError; //Field offset: 0x28
		[FieldOffset(Offset = "0x30")]
		[Token(Token = "0x40013BC")]
		public bool CompletedWatch; //Field offset: 0x30
		[FieldOffset(Offset = "0x31")]
		[Token(Token = "0x40013BD")]
		public bool WasClicked; //Field offset: 0x31

		[Address(RVA = "0x1279344", Offset = "0x1279344", Length = "0x84")]
		[Token(Token = "0x6001416")]
		public AppLovin_AdInfo(ImangiAdServiceHandler_AppLovin inHandler, AdType inAdType, string inAdUnitID) { }

		[Address(RVA = "0x1278370", Offset = "0x1278370", Length = "0x148")]
		[Token(Token = "0x6001424")]
		public void AdCached(string inAdUnitID) { }

		[Address(RVA = "0x1278FE4", Offset = "0x1278FE4", Length = "0x178")]
		[Token(Token = "0x6001428")]
		public void AdClicked(string inAdUnitID) { }

		[Address(RVA = "0x1278D84", Offset = "0x1278D84", Length = "0x130")]
		[Token(Token = "0x6001429")]
		public void AdCompleted(string inAdUnitID) { }

		[Address(RVA = "0x127883C", Offset = "0x127883C", Length = "0x1B0")]
		[Token(Token = "0x6001427")]
		public void AdDismissed(string inAdUnitID) { }

		[Address(RVA = "0x1278588", Offset = "0x1278588", Length = "0x1C4")]
		[Token(Token = "0x6001426")]
		public void AdFailed(string inAdUnitID, string inError) { }

		[Address(RVA = "0x1278A0C", Offset = "0x1278A0C", Length = "0x170")]
		[Token(Token = "0x6001425")]
		public void AdOpened(string inAdUnitID) { }

		[Address(RVA = "0x12797E8", Offset = "0x12797E8", Length = "0x140")]
		[Token(Token = "0x600142A")]
		public void AdWillLeaveApplication(string inAdUnitID) { }

		[Address(RVA = "0x1279500", Offset = "0x1279500", Length = "0x120")]
		[Token(Token = "0x600141A")]
		public bool CanDisplayAd() { }

		[Address(RVA = "0x12777D4", Offset = "0x12777D4", Length = "0x68")]
		[Token(Token = "0x6001421")]
		public bool DisplayAd(string inPlacement = "", bool bypassflow = false) { }

		[Address(RVA = "0x1279660", Offset = "0x1279660", Length = "0x184")]
		[Token(Token = "0x6001420")]
		public override bool DisplayAd_Internal(string inPlacement = "", bool byPass = false) { }

		[Address(RVA = "0x12774B8", Offset = "0x12774B8", Length = "0x74")]
		[Token(Token = "0x600141D")]
		public void FetchAd(BannerPosition inBannerPosition = 5) { }

		[Address(RVA = "0x1279624", Offset = "0x1279624", Length = "0x4")]
		[Token(Token = "0x600141C")]
		public override void FetchAd_Internal() { }

		[Address(RVA = "0x1279620", Offset = "0x1279620", Length = "0x4")]
		[Token(Token = "0x600141B")]
		public override void FetchAd_Internal(BannerPosition inBannerPosition) { }

		[Address(RVA = "0x12775BC", Offset = "0x12775BC", Length = "0x144")]
		[Token(Token = "0x6001423")]
		public void HideAd() { }

		[Address(RVA = "0x12797E4", Offset = "0x12797E4", Length = "0x4")]
		[Token(Token = "0x6001422")]
		public override void HideAd_Internal() { }

		[Address(RVA = "0x127779C", Offset = "0x127779C", Length = "0xC")]
		[Token(Token = "0x600141F")]
		public bool IsAdAvailable() { }

		[Address(RVA = "0x1279628", Offset = "0x1279628", Length = "0x38")]
		[Token(Token = "0x600141E")]
		public override bool IsAdAvailable_Internal() { }

		[Address(RVA = "0x12793C8", Offset = "0x12793C8", Length = "0x8")]
		[Token(Token = "0x6001417")]
		public override bool IsValid(bool inFetching) { }

		[Address(RVA = "0x12793D0", Offset = "0x12793D0", Length = "0x4")]
		[Token(Token = "0x6001418")]
		public override void Reset() { }

		[Address(RVA = "0x12793D4", Offset = "0x12793D4", Length = "0x12C")]
		[Token(Token = "0x6001419")]
		public override bool ShouldFetchAd() { }

	}

	[Token(Token = "0x200029F")]
	internal class AppLovin_AdInfo_Banner : AppLovin_AdInfo
	{
		[FieldOffset(Offset = "0x34")]
		[Token(Token = "0x40013BE")]
		private BannerPosition _BannerAdPosition; //Field offset: 0x34
		[FieldOffset(Offset = "0x38")]
		[Token(Token = "0x40013BF")]
		private Color _BackgroundColor; //Field offset: 0x38

		[Address(RVA = "0x1277378", Offset = "0x1277378", Length = "0x18")]
		[Token(Token = "0x6001433")]
		public AppLovin_AdInfo_Banner(ImangiAdServiceHandler_AppLovin inHandler, string inAdUnitID) { }

		[Address(RVA = "0x1279D80", Offset = "0x1279D80", Length = "0x80")]
		[Token(Token = "0x6001436")]
		public virtual bool DisplayAd_Internal(string inPlacement = "", bool byPass = false) { }

		[Address(RVA = "0x1279CF0", Offset = "0x1279CF0", Length = "0x90")]
		[Token(Token = "0x6001435")]
		public virtual void FetchAd_Internal(BannerPosition inBannerPosition = 5) { }

		[Address(RVA = "0x1279E00", Offset = "0x1279E00", Length = "0x64")]
		[Token(Token = "0x6001437")]
		public virtual void HideAd_Internal() { }

		[Address(RVA = "0x1279CD4", Offset = "0x1279CD4", Length = "0x1C")]
		[Token(Token = "0x6001434")]
		public void SetAdBannerPosition(BannerPosition inBannerPosition) { }

	}

	[Token(Token = "0x200029D")]
	internal class AppLovin_AdInfo_Card : AppLovin_AdInfo
	{

		[Address(RVA = "0x127736C", Offset = "0x127736C", Length = "0xC")]
		[Token(Token = "0x600142B")]
		public AppLovin_AdInfo_Card(ImangiAdServiceHandler_AppLovin inHandler, string inAdUnitID) { }

		[Address(RVA = "0x1279A14", Offset = "0x1279A14", Length = "0x104")]
		[Token(Token = "0x600142E")]
		public virtual bool DisplayAd_Internal(string inPlacement = "", bool byPass = false) { }

		[Address(RVA = "0x1279928", Offset = "0x1279928", Length = "0x5C")]
		[Token(Token = "0x600142C")]
		public virtual void FetchAd_Internal() { }

		[Address(RVA = "0x1279984", Offset = "0x1279984", Length = "0x90")]
		[Token(Token = "0x600142D")]
		public virtual bool IsAdAvailable_Internal() { }

	}

	[Token(Token = "0x200029E")]
	internal class AppLovin_AdInfo_Video : AppLovin_AdInfo
	{

		[Address(RVA = "0x1277360", Offset = "0x1277360", Length = "0xC")]
		[Token(Token = "0x600142F")]
		public AppLovin_AdInfo_Video(ImangiAdServiceHandler_AppLovin inHandler, string inAdUnitID) { }

		[Address(RVA = "0x1279C04", Offset = "0x1279C04", Length = "0xD0")]
		[Token(Token = "0x6001432")]
		public virtual bool DisplayAd_Internal(string inPlacement = "", bool byPass = false) { }

		[Address(RVA = "0x1279B18", Offset = "0x1279B18", Length = "0x5C")]
		[Token(Token = "0x6001430")]
		public virtual void FetchAd_Internal() { }

		[Address(RVA = "0x1279B74", Offset = "0x1279B74", Length = "0x90")]
		[Token(Token = "0x6001431")]
		public virtual bool IsAdAvailable_Internal() { }

	}

	[Token(Token = "0x40013AA")]
	private const float FetchRetryDelay = 4; //Field offset: 0x0
	[Token(Token = "0x40013AB")]
	private const int MaxRetries = 8; //Field offset: 0x0
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x40013AC")]
	private int _RetryCountVideo; //Field offset: 0x70
	[FieldOffset(Offset = "0x74")]
	[Token(Token = "0x40013AD")]
	private int _RetryCountInterstitial; //Field offset: 0x74
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x40013AE")]
	private int _RetryCountBanner; //Field offset: 0x78
	[FieldOffset(Offset = "0x7C")]
	[Token(Token = "0x40013AF")]
	private bool _InterstitialEventsHooked; //Field offset: 0x7C
	[FieldOffset(Offset = "0x7D")]
	[Token(Token = "0x40013B0")]
	private bool _RewardVideoEventsHooked; //Field offset: 0x7D
	[FieldOffset(Offset = "0x7E")]
	[Token(Token = "0x40013B1")]
	private bool _BannerEventsHooked; //Field offset: 0x7E
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x40013B2")]
	private Dictionary<String, AppLovin_AdInfo_Card> _InterstitialMap; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x40013B3")]
	private Dictionary<String, AppLovin_AdInfo_Video> _RewardedVideoMap; //Field offset: 0x88
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x40013B4")]
	private Dictionary<String, AppLovin_AdInfo_Banner> _BannerMap; //Field offset: 0x90
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x40013B5")]
	private bool _HasConsent; //Field offset: 0x98
	[FieldOffset(Offset = "0x99")]
	[Token(Token = "0x40013B6")]
	private bool _IsAgeRestricted; //Field offset: 0x99

	[Token(Token = "0x1700023B")]
	public bool HasConsent
	{
		[Address(RVA = "0x1275A00", Offset = "0x1275A00", Length = "0x8")]
		[Token(Token = "0x60013E2")]
		 get { } //Length: 8
	}

	[Token(Token = "0x1700023C")]
	public bool IsAgeRestricted
	{
		[Address(RVA = "0x1275A08", Offset = "0x1275A08", Length = "0x8")]
		[Token(Token = "0x60013E3")]
		 get { } //Length: 8
	}

	[Address(RVA = "0x127916C", Offset = "0x127916C", Length = "0x110")]
	[Token(Token = "0x6001415")]
	public ImangiAdServiceHandler_AppLovin() { }

	[Address(RVA = "0x1277D34", Offset = "0x1277D34", Length = "0x4C")]
	[Token(Token = "0x60013FB")]
	protected void AppLovin_Handler_OnAdCached(AdType inAdType, string inAdUnitID) { }

	[Address(RVA = "0x1277EA4", Offset = "0x1277EA4", Length = "0xD8")]
	[Token(Token = "0x60013FC")]
	protected void AppLovin_Handler_OnAdCacheFailed(AdType inAdType, string inAdUnitID, string inError) { }

	[Address(RVA = "0x127827C", Offset = "0x127827C", Length = "0x38")]
	[Token(Token = "0x6001400")]
	protected void AppLovin_Handler_OnAdClicked(AdType inAdType, string inAdUnitID) { }

	[Address(RVA = "0x12782FC", Offset = "0x12782FC", Length = "0x4")]
	[Token(Token = "0x6001401")]
	protected void AppLovin_Handler_OnAdClosed(AdType inAdType, string inAdUnitID) { }

	[Address(RVA = "0x12781EC", Offset = "0x12781EC", Length = "0x40")]
	[Token(Token = "0x60013FF")]
	protected void AppLovin_Handler_OnAdDismissed(AdType inAdType, string inAdUnitID, bool inComplete) { }

	[Address(RVA = "0x127815C", Offset = "0x127815C", Length = "0x40")]
	[Token(Token = "0x60013FE")]
	protected void AppLovin_Handler_OnAdFailed(AdType inAdType, string inAdUnitID, string inError) { }

	[Address(RVA = "0x12780DC", Offset = "0x12780DC", Length = "0x38")]
	[Token(Token = "0x60013FD")]
	protected void AppLovin_Handler_OnAdOpened(AdType inAdType, string inAdUnitID) { }

	[Address(RVA = "0x127834C", Offset = "0x127834C", Length = "0x4")]
	[Token(Token = "0x6001403")]
	protected void AppLovin_Handler_OnAdStarted(AdType inAdType, string inAdUnitID) { }

	[Address(RVA = "0x1278300", Offset = "0x1278300", Length = "0x4")]
	[Token(Token = "0x6001402")]
	protected void AppLovin_Handler_OnAdWillLeaveApplication(AdType inAdType, string inAdUnitID) { }

	[Address(RVA = "0x127783C", Offset = "0x127783C", Length = "0xA8")]
	[Token(Token = "0x60013F8")]
	public virtual void DisplayAd(AdType inType, string inAdUnitID, string inPlacement = "") { }

	[Address(RVA = "0x12777A8", Offset = "0x12777A8", Length = "0x2C")]
	[Token(Token = "0x60013F7")]
	public virtual void DisplayAdForced(AdType inType, string inAdUnitID, string inPlacement = "") { }

	[Address(RVA = "0x1277414", Offset = "0x1277414", Length = "0xA4")]
	[Token(Token = "0x60013F4")]
	public virtual void FetchAd(AdType inType, string inAdUnitID, BannerPosition inBannerPosition = 5) { }

	[Address(RVA = "0x1275A00", Offset = "0x1275A00", Length = "0x8")]
	[Token(Token = "0x60013E2")]
	public bool get_HasConsent() { }

	[Address(RVA = "0x1275A08", Offset = "0x1275A08", Length = "0x8")]
	[Token(Token = "0x60013E3")]
	public bool get_IsAgeRestricted() { }

	[Address(RVA = "0x1276FE4", Offset = "0x1276FE4", Length = "0x4C")]
	[Token(Token = "0x60013EF")]
	private AppLovin_AdInfo GetAdInfo(AdType inAdType, string inAdUnitId, bool inCreateIfNotFound) { }

	[Address(RVA = "0x1277248", Offset = "0x1277248", Length = "0x118")]
	[Token(Token = "0x60013F2")]
	private AppLovin_AdInfo_Banner GetBannerAdInfo(string inAdUnitId, bool inCreateIfNotFound) { }

	[Address(RVA = "0x127713C", Offset = "0x127713C", Length = "0x10C")]
	[Token(Token = "0x60013F1")]
	private AppLovin_AdInfo_Card GetInterstitialAdInfo(string inAdUnitId, bool inCreateIfNotFound) { }

	[Address(RVA = "0x1277030", Offset = "0x1277030", Length = "0x10C")]
	[Token(Token = "0x60013F0")]
	private AppLovin_AdInfo_Video GetRewardedVideoAdInfo(string inAdUnitId, bool inCreateIfNotFound) { }

	[Address(RVA = "0x127752C", Offset = "0x127752C", Length = "0x90")]
	[Token(Token = "0x60013F5")]
	public virtual void HideAd(AdType inType, string inAdUnitID) { }

	[Address(RVA = "0x12762C0", Offset = "0x12762C0", Length = "0x1CC")]
	[Token(Token = "0x60013ED")]
	protected void HookBannerEvents() { }

	[Address(RVA = "0x1275E74", Offset = "0x1275E74", Length = "0x1E0")]
	[Token(Token = "0x60013E9")]
	protected void HookInterstitialEvents() { }

	[Address(RVA = "0x1276054", Offset = "0x1276054", Length = "0x26C")]
	[Token(Token = "0x60013EB")]
	protected void HookRewardVideoEvents() { }

	[Address(RVA = "0x1275A10", Offset = "0x1275A10", Length = "0x300")]
	[Token(Token = "0x60013E4")]
	public virtual bool InitializeAdServiceHandler(AdManager inAdMngr, bool inPrivacyCompliantRequired, bool inHasConsent, bool inIsAgeRestricted, bool isCCPA, AdServiceInitializationInfo inInitInfo, bool adMobInitStatusPrivacyFlow = false) { }

	[Address(RVA = "0x1275D38", Offset = "0x1275D38", Length = "0x60")]
	[IteratorStateMachine(typeof(<InitializeSDKCoroutine>d__20))]
	[Token(Token = "0x60013E5")]
	private IEnumerator InitializeSDKCoroutine(AdServiceInitializationInfo inInitInfo) { }

	[Address(RVA = "0x1277700", Offset = "0x1277700", Length = "0x9C")]
	[Token(Token = "0x60013F6")]
	public virtual bool IsAdAvailable(AdType inType, string inAdUnitID) { }

	[Address(RVA = "0x1275794", Offset = "0x1275794", Length = "0x14")]
	[Token(Token = "0x60013E0")]
	public virtual bool IsAvailableOnDevice(AdType inType, bool inAnyType = false) { }

	[Address(RVA = "0x1277994", Offset = "0x1277994", Length = "0x3A0")]
	[Token(Token = "0x60013FA")]
	private void OnAdRevenuePaidEvent(string adUnitId, AdInfo impressionData) { }

	[Address(RVA = "0x1278FC4", Offset = "0x1278FC4", Length = "0x20")]
	[Token(Token = "0x6001412")]
	public void OnBannerClickedEvent(string inAdUnitId, AdInfo adInfo) { }

	[Address(RVA = "0x1279164", Offset = "0x1279164", Length = "0x8")]
	[Token(Token = "0x6001414")]
	public void OnBannerCollapsedEvent(string inAdUnitId, AdInfo adInfo) { }

	[Address(RVA = "0x127915C", Offset = "0x127915C", Length = "0x8")]
	[Token(Token = "0x6001413")]
	public void OnBannerExpandedEvent(string inAdUnitId, AdInfo adInfo) { }

	[Address(RVA = "0x1278ED4", Offset = "0x1278ED4", Length = "0x20")]
	[Token(Token = "0x6001410")]
	public void OnBannerLoadedEvent(string inAdUnitId, AdInfo adInfo) { }

	[Address(RVA = "0x1278EF4", Offset = "0x1278EF4", Length = "0xD0")]
	[Token(Token = "0x6001411")]
	public void OnBannerLoadFailedEvent(string inAdUnitId, ErrorInfo errorInfo) { }

	[Address(RVA = "0x127881C", Offset = "0x127881C", Length = "0x20")]
	[Token(Token = "0x6001407")]
	public void OnInterstitialDismissedEvent(string inAdUnitId, AdInfo adInfo) { }

	[Address(RVA = "0x12789EC", Offset = "0x12789EC", Length = "0x20")]
	[Token(Token = "0x6001408")]
	public void OnInterstitialDisplayedEvent(string inAdUnitId, AdInfo inAdInfo) { }

	[Address(RVA = "0x127874C", Offset = "0x127874C", Length = "0xD0")]
	[Token(Token = "0x6001406")]
	public void OnInterstitialFailedToDisplayEvent(string inAdUnitId, ErrorInfo errorInfo, AdInfo adInfo) { }

	[Address(RVA = "0x12784B8", Offset = "0x12784B8", Length = "0xD0")]
	[Token(Token = "0x6001405")]
	public void OnInterstitialFailedToLoadEvent(string inAdUnitId, ErrorInfo errorInfo) { }

	[Address(RVA = "0x1278350", Offset = "0x1278350", Length = "0x20")]
	[Token(Token = "0x6001404")]
	public void OnInterstitialLoadedEvent(string inAdUnitId, AdInfo adInfo) { }

	[Address(RVA = "0x1278D5C", Offset = "0x1278D5C", Length = "0x8")]
	[Token(Token = "0x600140D")]
	public void OnRewardedAdClickedEvent(string inAdUnitId, AdInfo adInfo) { }

	[Address(RVA = "0x1278EB4", Offset = "0x1278EB4", Length = "0x20")]
	[Token(Token = "0x600140F")]
	public void OnRewardedAdDismissedEvent(string inAdUnitId, AdInfo adInfo) { }

	[Address(RVA = "0x1278D3C", Offset = "0x1278D3C", Length = "0x20")]
	[Token(Token = "0x600140C")]
	public void OnRewardedAdDisplayedEvent(string inAdUnitId, AdInfo adInfo) { }

	[Address(RVA = "0x1278C6C", Offset = "0x1278C6C", Length = "0xD0")]
	[Token(Token = "0x600140B")]
	public void OnRewardedAdFailedToDisplayEvent(string inAdUnitId, ErrorInfo errorInfo, AdInfo adInfo) { }

	[Address(RVA = "0x1278B9C", Offset = "0x1278B9C", Length = "0xD0")]
	[Token(Token = "0x600140A")]
	public void OnRewardedAdFailedToLoadEvent(string inAdUnitId, ErrorInfo errorInfo) { }

	[Address(RVA = "0x1278B7C", Offset = "0x1278B7C", Length = "0x20")]
	[Token(Token = "0x6001409")]
	public void OnRewardedAdLoadedEvent(string inAdUnitId, AdInfo adInfo) { }

	[Address(RVA = "0x1278D64", Offset = "0x1278D64", Length = "0x20")]
	[Token(Token = "0x600140E")]
	public void OnRewardedAdReceivedRewardEvent(string inAdUnitId, Reward inReward, AdInfo adInfo) { }

	[Address(RVA = "0x1275DC0", Offset = "0x1275DC0", Length = "0xB4")]
	[Token(Token = "0x60013E6")]
	private void OnSdkInitialized(SdkConfiguration inSDKConfiguration) { }

	[Address(RVA = "0x1276EF4", Offset = "0x1276EF4", Length = "0xF0")]
	[Token(Token = "0x60013E8")]
	public virtual bool ReapplyConsentSettings(bool inHasConsent, bool inIsAgeRestricted) { }

	[Address(RVA = "0x12778E4", Offset = "0x12778E4", Length = "0x88")]
	[IteratorStateMachine(typeof(<RetryFetchCoroutine>d__40))]
	[Token(Token = "0x60013F9")]
	private IEnumerator RetryFetchCoroutine(AdType inType, string inAdUnitID, int retryCount) { }

	[Address(RVA = "0x12757A8", Offset = "0x12757A8", Length = "0x258")]
	[Token(Token = "0x60013E1")]
	public virtual void SetPrivacyFlags(bool hasConsent, bool trackingEnabled) { }

	[Address(RVA = "0x12767E8", Offset = "0x12767E8", Length = "0xA8")]
	[Token(Token = "0x60013E7")]
	public virtual void ShutdownAdServiceHandler(AdManager inAdMngr) { }

	[Address(RVA = "0x1276D14", Offset = "0x1276D14", Length = "0x1E0")]
	[Token(Token = "0x60013EE")]
	protected void UnhookBannerEvents() { }

	[Address(RVA = "0x1276890", Offset = "0x1276890", Length = "0x1FC")]
	[Token(Token = "0x60013EA")]
	protected void UnhookInterstitialEvents() { }

	[Address(RVA = "0x1276A8C", Offset = "0x1276A8C", Length = "0x288")]
	[Token(Token = "0x60013EC")]
	protected void UnhookRewardVideoEvents() { }

	[Address(RVA = "0x1277390", Offset = "0x1277390", Length = "0x84")]
	[Token(Token = "0x60013F3")]
	protected string ValidateOperation(AdType inType) { }

}

