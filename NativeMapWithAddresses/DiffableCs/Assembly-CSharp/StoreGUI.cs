//Type is in global namespace

[Token(Token = "0x2000149")]
public class StoreGUI : BasePanel
{
	[CompilerGenerated]
	[Token(Token = "0x200014A")]
	private sealed class <SlideInAnimation>d__38 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000B91")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000B92")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000B93")]
		public StoreGUI <>4__this; //Field offset: 0x20
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x4000B94")]
		private Vector3 <mm>5__2; //Field offset: 0x28
		[FieldOffset(Offset = "0x34")]
		[Token(Token = "0x4000B95")]
		private Vector3 <ra>5__3; //Field offset: 0x34

		[Token(Token = "0x17000169")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x12FB90C", Offset = "0x12FB90C", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x600099E")]
			private get { } //Length: 8
		}

		[Token(Token = "0x1700016A")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x12FB94C", Offset = "0x12FB94C", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x60009A0")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x12FA7C4", Offset = "0x12FA7C4", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x600099B")]
		public <SlideInAnimation>d__38(int <>1__state) { }

		[Address(RVA = "0x12FB534", Offset = "0x12FB534", Length = "0x3D8")]
		[Token(Token = "0x600099D")]
		private override bool MoveNext() { }

		[Address(RVA = "0x12FB90C", Offset = "0x12FB90C", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x600099E")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x12FB94C", Offset = "0x12FB94C", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x60009A0")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x12FB914", Offset = "0x12FB914", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x600099F")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x12FB530", Offset = "0x12FB530", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x600099C")]
		private override void System.IDisposable.Dispose() { }

	}

	[Token(Token = "0x4000B75")]
	private const string _LogChannel = "StoreGUI"; //Field offset: 0x0
	[Token(Token = "0x4000B76")]
	private const string _AdLocation = "Store"; //Field offset: 0x0
	[Token(Token = "0x4000B8A")]
	private const string _AdSpaceName = "SaveMe"; //Field offset: 0x0
	[Token(Token = "0x4000B88")]
	private const string _PanelName = "Store"; //Field offset: 0x0
	[Token(Token = "0x4000B86")]
	public static StoreGUI Instance; //Field offset: 0x0
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000B77")]
	public GameObject SlideInOffset; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000B78")]
	public GameObject GetMoreCoinsButton; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000B79")]
	public GameObject BackButton; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000B7A")]
	public GameObject Header; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x4000B7B")]
	public UILabel CoinLabel; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4000B7C")]
	public EndGameUI EndGameInterface; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x4000B7D")]
	public VCGUI CoinsGUI; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x4000B7E")]
	public GameObject[] Disabled; //Field offset: 0x88
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x4000B7F")]
	public GameObject[] CharacterObjects; //Field offset: 0x90
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x4000B80")]
	public RecordManager RecordManager; //Field offset: 0x98
	[FieldOffset(Offset = "0xA0")]
	[Token(Token = "0x4000B81")]
	public PlayerManager PlayerManager; //Field offset: 0xA0
	[FieldOffset(Offset = "0xA8")]
	[Token(Token = "0x4000B82")]
	public UIPanel ScrollViewPanel; //Field offset: 0xA8
	[FieldOffset(Offset = "0xB0")]
	[Token(Token = "0x4000B83")]
	public Transform ScrollContent; //Field offset: 0xB0
	[FieldOffset(Offset = "0xB8")]
	[Header("Rewarded Ad Options")]
	[Token(Token = "0x4000B84")]
	public GameObject RewardedAdCoinsObject; //Field offset: 0xB8
	[FieldOffset(Offset = "0xC0")]
	[Token(Token = "0x4000B85")]
	public GameObject RewardedAdWingsObject; //Field offset: 0xC0
	[FieldOffset(Offset = "0xC8")]
	[Token(Token = "0x4000B87")]
	private bool _FirstSlide; //Field offset: 0xC8
	[FieldOffset(Offset = "0xC9")]
	[Token(Token = "0x4000B89")]
	private bool _HookedAdEvents; //Field offset: 0xC9
	[FieldOffset(Offset = "0xCC")]
	[Token(Token = "0x4000B8B")]
	private int _CoinCountBeforeReward; //Field offset: 0xCC
	[FieldOffset(Offset = "0xD0")]
	[Token(Token = "0x4000B8C")]
	private int _CoinRewardAmount; //Field offset: 0xD0
	[FieldOffset(Offset = "0xD4")]
	[Token(Token = "0x4000B8D")]
	private StoreItem _CachedRewardType; //Field offset: 0xD4
	[FieldOffset(Offset = "0xD8")]
	[Token(Token = "0x4000B8E")]
	private GameObject _ActiveRewardedAdObject; //Field offset: 0xD8
	[FieldOffset(Offset = "0xE0")]
	[Token(Token = "0x4000B8F")]
	private bool _RewardedAdIsCooling; //Field offset: 0xE0
	[FieldOffset(Offset = "0xE4")]
	[Token(Token = "0x4000B90")]
	private float _RewardedAdCoolingTimer; //Field offset: 0xE4

	[Address(RVA = "0x12FB520", Offset = "0x12FB520", Length = "0x10")]
	[Token(Token = "0x600099A")]
	public StoreGUI() { }

	[Address(RVA = "0x12F9BFC", Offset = "0x12F9BFC", Length = "0xD4")]
	[Token(Token = "0x6000987")]
	private void AdjustCoins() { }

	[Address(RVA = "0x12F9368", Offset = "0x12F9368", Length = "0x54")]
	[Token(Token = "0x600097C")]
	private void Awake() { }

	[Address(RVA = "0x12FA7EC", Offset = "0x12FA7EC", Length = "0x8")]
	[Token(Token = "0x6000988")]
	private void BackClicked() { }

	[Address(RVA = "0x12FB4F0", Offset = "0x12FB4F0", Length = "0x20")]
	[Token(Token = "0x6000997")]
	protected void FinishGivingAdCoinReward() { }

	[Address(RVA = "0x12FA7F4", Offset = "0x12FA7F4", Length = "0x34")]
	[Token(Token = "0x6000989")]
	private void GetMoreCoinsClicked() { }

	[Address(RVA = "0x12FB098", Offset = "0x12FB098", Length = "0x458")]
	[Token(Token = "0x6000996")]
	protected void GiveAdReward() { }

	[Address(RVA = "0x12F9F54", Offset = "0x12F9F54", Length = "0x1C")]
	[Token(Token = "0x6000980")]
	public virtual void HideAll() { }

	[Address(RVA = "0x12FB518", Offset = "0x12FB518", Length = "0x8")]
	[Token(Token = "0x6000999")]
	public void HookStoreBannerAdEvents() { }

	[Address(RVA = "0x12F9CD0", Offset = "0x12F9CD0", Length = "0x284")]
	[Token(Token = "0x600098D")]
	private void HookVideoAdEvents(AdManager inAdMngr) { }

	[Address(RVA = "0x12F9B84", Offset = "0x12F9B84", Length = "0x78")]
	[Token(Token = "0x6000984")]
	private void ReconfigureStoreItems() { }

	[Address(RVA = "0x12FA394", Offset = "0x12FA394", Length = "0x1B4")]
	[Token(Token = "0x6000982")]
	private void SetRewardedAdItemActive(GameObject inItemObject, bool inActive) { }

	[Address(RVA = "0x12F93BC", Offset = "0x12F93BC", Length = "0x7C")]
	[Token(Token = "0x600097E")]
	private void Setup() { }

	[Address(RVA = "0x12FA220", Offset = "0x12FA220", Length = "0x174")]
	[Token(Token = "0x6000981")]
	private void SetupRewardedAdItems() { }

	[Address(RVA = "0x12F9944", Offset = "0x12F9944", Length = "0x240")]
	[Token(Token = "0x600097F")]
	public virtual void ShowAll(bool inShowBannerAds = true) { }

	[Address(RVA = "0x12FABDC", Offset = "0x12FABDC", Length = "0x120")]
	[Token(Token = "0x600098C")]
	private void ShowRewardedAd() { }

	[Address(RVA = "0x12FA548", Offset = "0x12FA548", Length = "0x21C")]
	[Token(Token = "0x6000985")]
	public virtual void SlideIn(BasePanel returnTo) { }

	[Address(RVA = "0x12FA764", Offset = "0x12FA764", Length = "0x60")]
	[IteratorStateMachine(typeof(<SlideInAnimation>d__38))]
	[Token(Token = "0x6000986")]
	private IEnumerator SlideInAnimation() { }

	[Address(RVA = "0x12FA828", Offset = "0x12FA828", Length = "0x224")]
	[Token(Token = "0x600098A")]
	public void StartRewardedAdCoinFlow() { }

	[Address(RVA = "0x12FAA4C", Offset = "0x12FAA4C", Length = "0x190")]
	[Token(Token = "0x600098B")]
	public void StartRewardedAdWingsFlow() { }

	[Address(RVA = "0x12FACFC", Offset = "0x12FACFC", Length = "0x90")]
	[Token(Token = "0x600098F")]
	protected void StoreGUI_OnAdClicked(AdService inService, AdType inAdType, string inAdSpaceName) { }

	[Address(RVA = "0x12FAF98", Offset = "0x12FAF98", Length = "0x100")]
	[Token(Token = "0x6000995")]
	protected void StoreGUI_OnAdDismissed(AdService inService, AdType inAdType, string inAdSpaceName, bool inCompleted) { }

	[Address(RVA = "0x12FAE1C", Offset = "0x12FAE1C", Length = "0x164")]
	[Token(Token = "0x6000991")]
	protected void StoreGUI_OnAdFailed(AdService inService, AdType inAdType, string inAdSpaceName, string inError) { }

	[Address(RVA = "0x12FAD8C", Offset = "0x12FAD8C", Length = "0x90")]
	[Token(Token = "0x6000990")]
	protected void StoreGUI_OnAdOpened(AdService inService, AdType inAdType, string inAdSpaceName) { }

	[Address(RVA = "0x12FAF88", Offset = "0x12FAF88", Length = "0x10")]
	[Token(Token = "0x6000994")]
	protected void StoreGUI_OnAdWillLeaveApplication(AdService inService, AdType inAdType, string inAdSpaceName) { }

	[Address(RVA = "0x12FAF80", Offset = "0x12FAF80", Length = "0x4")]
	[Token(Token = "0x6000992")]
	protected void StoreGUI_OnDidReceiveAd(AdService inService, AdType inAdType, string inAdSpaceName) { }

	[Address(RVA = "0x12FAF84", Offset = "0x12FAF84", Length = "0x4")]
	[Token(Token = "0x6000993")]
	protected void StoreGUI_OnFailedToReceiveAd(AdService inService, AdType inAdType, string inAdSpaceName) { }

	[Address(RVA = "0x12FB510", Offset = "0x12FB510", Length = "0x8")]
	[Token(Token = "0x6000998")]
	public void UnhookStoreBannerAdEvents() { }

	[Address(RVA = "0x12F9F70", Offset = "0x12F9F70", Length = "0x2B0")]
	[Token(Token = "0x600098E")]
	private void UnhookVideoAdEvents() { }

	[Address(RVA = "0x12F9438", Offset = "0x12F9438", Length = "0x58")]
	[Token(Token = "0x600097D")]
	private void Update() { }

	[Address(RVA = "0x12F9490", Offset = "0x12F9490", Length = "0x4B4")]
	[Token(Token = "0x6000983")]
	private void UpdateRewardedAdItems(bool isUpdate = false) { }

}

