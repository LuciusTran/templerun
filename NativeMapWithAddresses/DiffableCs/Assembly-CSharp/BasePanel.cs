//Type is in global namespace

[Token(Token = "0x200010A")]
public class BasePanel : MonoBehaviour
{
	[CompilerGenerated]
	[Token(Token = "0x200010B")]
	private sealed class <FadeInAfterDelay>d__16 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000940")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000941")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000942")]
		public BasePanel <>4__this; //Field offset: 0x20
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x4000943")]
		public float delay; //Field offset: 0x28
		[FieldOffset(Offset = "0x2C")]
		[Token(Token = "0x4000944")]
		public Color startColor; //Field offset: 0x2C
		[FieldOffset(Offset = "0x3C")]
		[Token(Token = "0x4000945")]
		public float duration; //Field offset: 0x3C
		[FieldOffset(Offset = "0x40")]
		[Token(Token = "0x4000946")]
		public Color endColor; //Field offset: 0x40

		[Token(Token = "0x1700014A")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x12E0610", Offset = "0x12E0610", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x60007CB")]
			private get { } //Length: 8
		}

		[Token(Token = "0x1700014B")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x12E0650", Offset = "0x12E0650", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x60007CD")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x12DFF64", Offset = "0x12DFF64", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x60007C8")]
		public <FadeInAfterDelay>d__16(int <>1__state) { }

		[Address(RVA = "0x12E04E0", Offset = "0x12E04E0", Length = "0x130")]
		[Token(Token = "0x60007CA")]
		private override bool MoveNext() { }

		[Address(RVA = "0x12E0610", Offset = "0x12E0610", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x60007CB")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x12E0650", Offset = "0x12E0650", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x60007CD")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x12E0618", Offset = "0x12E0618", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x60007CC")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x12E04DC", Offset = "0x12E04DC", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x60007C9")]
		private override void System.IDisposable.Dispose() { }

	}

	[Token(Token = "0x4000937")]
	private const string _LogChannel = "BasePanel"; //Field offset: 0x0
	[Token(Token = "0x400093E")]
	private const string _BannerAdSpaceName = "Banner"; //Field offset: 0x0
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000938")]
	public GameController Controller; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000939")]
	public UIPanel Panel; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x400093A")]
	public UINoAdsButton NoAds; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x400093B")]
	protected BasePanel ReturnToPanel; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x400093C")]
	protected bool _LogSceneAnalytics; //Field offset: 0x40
	[FieldOffset(Offset = "0x41")]
	[Token(Token = "0x400093D")]
	private bool _EventsHooked; //Field offset: 0x41
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x400093F")]
	protected string _AdPlacement; //Field offset: 0x48

	[Address(RVA = "0x12DEF98", Offset = "0x12DEF98", Length = "0x10")]
	[Token(Token = "0x60007C7")]
	public BasePanel() { }

	[Address(RVA = "0x12E0314", Offset = "0x12E0314", Length = "0xFC")]
	[Token(Token = "0x60007C3")]
	protected override void AdClickedEvent(AdService inService, AdType inAdType, string inAdSpaceName) { }

	[Address(RVA = "0x12E0224", Offset = "0x12E0224", Length = "0xF0")]
	[Token(Token = "0x60007C2")]
	protected override void AdFailedEvent(AdService inService, AdType inAdType, string inAdSpaceName, string inError) { }

	[Address(RVA = "0x12E00FC", Offset = "0x12E00FC", Length = "0x128")]
	[Token(Token = "0x60007C1")]
	protected override void AdReceivedEvent(AdService inService, AdType inAdType, string inAdSpaceName) { }

	[Address(RVA = "0x12DFDCC", Offset = "0x12DFDCC", Length = "0x7C")]
	[Token(Token = "0x60007B7")]
	public void FadeIn(float delay = 0, float duration = 1) { }

	[Address(RVA = "0x12DFE48", Offset = "0x12DFE48", Length = "0xC8")]
	[IteratorStateMachine(typeof(<FadeInAfterDelay>d__16))]
	[Token(Token = "0x60007B9")]
	private IEnumerator FadeInAfterDelay(Color startColor, Color endColor, float delay, float duration) { }

	[Address(RVA = "0x12DFF10", Offset = "0x12DFF10", Length = "0x54")]
	[Token(Token = "0x60007B8")]
	public void FadeOut(float delay = 0, float duration = 1) { }

	[Address(RVA = "0x12DFBF8", Offset = "0x12DFBF8", Length = "0x28")]
	[Token(Token = "0x60007B4")]
	public override void HideAll() { }

	[Address(RVA = "0x12DFB24", Offset = "0x12DFB24", Length = "0xD4")]
	[Token(Token = "0x60007C0")]
	protected void HideBannerAd() { }

	[Address(RVA = "0x12DFDAC", Offset = "0x12DFDAC", Length = "0x20")]
	[Token(Token = "0x60007B6")]
	private void HidePanel() { }

	[Address(RVA = "0x12DF854", Offset = "0x12DF854", Length = "0x170")]
	[Token(Token = "0x60007C4")]
	public void HookBannerAdEvents() { }

	[Address(RVA = "0x12E0410", Offset = "0x12E0410", Length = "0xCC")]
	[Token(Token = "0x60007C6")]
	protected override bool IsBannerAdPlacementEnabled() { }

	[Address(RVA = "0x12E003C", Offset = "0x12E003C", Length = "0xC0")]
	[Token(Token = "0x60007BE")]
	public void ReturnMenu() { }

	[Address(RVA = "0x12DFF8C", Offset = "0x12DFF8C", Length = "0x98")]
	[Token(Token = "0x60007BA")]
	public void Show() { }

	[Address(RVA = "0x12DF6A4", Offset = "0x12DF6A4", Length = "0x1B0")]
	[Token(Token = "0x60007B3")]
	public override void ShowAll(bool inShowBannerAds = true) { }

	[Address(RVA = "0x12DF9C4", Offset = "0x12DF9C4", Length = "0x160")]
	[Token(Token = "0x60007BF")]
	protected void ShowBannerAd() { }

	[Address(RVA = "0x12DFD8C", Offset = "0x12DFD8C", Length = "0x20")]
	[Token(Token = "0x60007B5")]
	private void ShowPanel() { }

	[Address(RVA = "0x12DEF74", Offset = "0x12DEF74", Length = "0x10")]
	[Token(Token = "0x60007BC")]
	public void SlideIn() { }

	[Address(RVA = "0x12E0034", Offset = "0x12E0034", Length = "0x8")]
	[Token(Token = "0x60007BD")]
	public override void SlideIn(BasePanel returnTo) { }

	[Address(RVA = "0x12E0024", Offset = "0x12E0024", Length = "0x10")]
	[Token(Token = "0x60007BB")]
	public void SlideInDontClearReturn() { }

	[Address(RVA = "0x12DF654", Offset = "0x12DF654", Length = "0x50")]
	[Token(Token = "0x60007B2")]
	public override void Start() { }

	[Address(RVA = "0x12DFC20", Offset = "0x12DFC20", Length = "0x16C")]
	[Token(Token = "0x60007C5")]
	public void UnhookBannerAdEvents() { }

}

