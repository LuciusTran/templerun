//Type is in global namespace

[Token(Token = "0x200012D")]
public class MainMenu : BasePanel
{
	[CompilerGenerated]
	[Token(Token = "0x200012F")]
	private sealed class <DelayedPromoShow>d__22 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000AAA")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000AAB")]
		private object <>2__current; //Field offset: 0x18

		[Token(Token = "0x1700015D")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x12F256C", Offset = "0x12F256C", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x60008F4")]
			private get { } //Length: 8
		}

		[Token(Token = "0x1700015E")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x12F25AC", Offset = "0x12F25AC", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x60008F6")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x12F2204", Offset = "0x12F2204", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x60008F1")]
		public <DelayedPromoShow>d__22(int <>1__state) { }

		[Address(RVA = "0x12F2498", Offset = "0x12F2498", Length = "0xD4")]
		[Token(Token = "0x60008F3")]
		private override bool MoveNext() { }

		[Address(RVA = "0x12F256C", Offset = "0x12F256C", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x60008F4")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x12F25AC", Offset = "0x12F25AC", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x60008F6")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x12F2574", Offset = "0x12F2574", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x60008F5")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x12F2494", Offset = "0x12F2494", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x60008F2")]
		private override void System.IDisposable.Dispose() { }

	}

	[Token(Token = "0x200012E")]
	internal struct BannerMapping
	{
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000AA8")]
		public string EventNameString; //Field offset: 0x0
		[FieldOffset(Offset = "0x8")]
		[Token(Token = "0x4000AA9")]
		public GameObject BannerObject; //Field offset: 0x8

	}

	[Token(Token = "0x4000A97")]
	private const float _FadeInTime = 0.5; //Field offset: 0x0
	[Token(Token = "0x4000A99")]
	public static MainMenu Instance; //Field offset: 0x0
	[Token(Token = "0x4000AA7")]
	private const string _PanelName = "MainMenu"; //Field offset: 0x0
	[Token(Token = "0x4000A98")]
	private const string _LogChannel = "MainMenu"; //Field offset: 0x0
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000A9A")]
	public GameObject SaveMeDebugPanel; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000A9B")]
	public GameObject DebugBuildObject; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000A9C")]
	public GameObject DebugScreenPrefab; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[SerializeField]
	[Token(Token = "0x4000A9D")]
	public BannerMapping[] EventBanners; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x4000A9E")]
	public GameObject GlobalChallengesButton; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4000A9F")]
	public GameObject GlobalChallengesCTA; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x4000AA0")]
	public GameObject GlobalChallengesCTA_InputBlocker; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x4000AA1")]
	public GameObject MainMenuRowNew; //Field offset: 0x88
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x4000AA2")]
	public GameObject MainMenuRowOld; //Field offset: 0x90
	[FieldOffset(Offset = "0x98")]
	[Header("Title Screen Buttons")]
	[Token(Token = "0x4000AA3")]
	public UIAnchor NoAdsButtonAnchor; //Field offset: 0x98
	[FieldOffset(Offset = "0xA0")]
	[Token(Token = "0x4000AA4")]
	public GameObject NewOptionsButton; //Field offset: 0xA0
	[FieldOffset(Offset = "0xA8")]
	[Token(Token = "0x4000AA5")]
	public float NoAdsButtonAnchorOffsetY; //Field offset: 0xA8
	[FieldOffset(Offset = "0xAC")]
	[Token(Token = "0x4000AA6")]
	private bool _FirstLaunch; //Field offset: 0xAC

	[Address(RVA = "0x12F2484", Offset = "0x12F2484", Length = "0x10")]
	[Token(Token = "0x60008F0")]
	public MainMenu() { }

	[Address(RVA = "0x12F1F74", Offset = "0x12F1F74", Length = "0x290")]
	[Token(Token = "0x60008E5")]
	private void ChangeGCTimeIndicator() { }

	[Address(RVA = "0x12F1F1C", Offset = "0x12F1F1C", Length = "0x58")]
	[IteratorStateMachine(typeof(<DelayedPromoShow>d__22))]
	[Token(Token = "0x60008E6")]
	private IEnumerator DelayedPromoShow() { }

	[Address(RVA = "0x12F2410", Offset = "0x12F2410", Length = "0x1C")]
	[Token(Token = "0x60008E9")]
	public virtual void HideAll() { }

	[Address(RVA = "0x12F242C", Offset = "0x12F242C", Length = "0x20")]
	[Token(Token = "0x60008EC")]
	private void HideMainMenuButtons() { }

	[Address(RVA = "0x12F222C", Offset = "0x12F222C", Length = "0x1C")]
	[Token(Token = "0x60008E7")]
	protected virtual bool IsBannerAdPlacementEnabled() { }

	[Address(RVA = "0x12F2478", Offset = "0x12F2478", Length = "0x4")]
	[Token(Token = "0x60008ED")]
	public void OnDebug0() { }

	[Address(RVA = "0x12F247C", Offset = "0x12F247C", Length = "0x4")]
	[Token(Token = "0x60008EE")]
	public void OnDebug1() { }

	[Address(RVA = "0x12F2480", Offset = "0x12F2480", Length = "0x4")]
	[Token(Token = "0x60008EF")]
	public void OnDebug2() { }

	[Address(RVA = "0x12F244C", Offset = "0x12F244C", Length = "0x2C")]
	[Token(Token = "0x60008EB")]
	public void OnPlayClicked() { }

	[Address(RVA = "0x12F2248", Offset = "0x12F2248", Length = "0x1C")]
	[Token(Token = "0x60008E8")]
	public virtual void ShowAll(bool inShowBannerAds = true) { }

	[Address(RVA = "0x12F2264", Offset = "0x12F2264", Length = "0x1AC")]
	[Token(Token = "0x60008EA")]
	public void ShowAskForReviewDialog(bool inAskNow = false) { }

	[Address(RVA = "0x12F1690", Offset = "0x12F1690", Length = "0x88C")]
	[Token(Token = "0x60008E4")]
	public virtual void SlideIn(BasePanel returnTo) { }

	[Address(RVA = "0x12F1444", Offset = "0x12F1444", Length = "0x1EC")]
	[Token(Token = "0x60008E2")]
	public virtual void Start() { }

	[Address(RVA = "0x12F1630", Offset = "0x12F1630", Length = "0x60")]
	[Token(Token = "0x60008E3")]
	public void Update() { }

}

