//Type is in global namespace

[Token(Token = "0x200012A")]
public class LanguagesGUI : BasePanel
{
	[CompilerGenerated]
	[Token(Token = "0x200012B")]
	private sealed class <SlideInAnimation>d__17 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000A92")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000A93")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000A94")]
		public LanguagesGUI <>4__this; //Field offset: 0x20
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x4000A95")]
		private Vector3 <ra>5__2; //Field offset: 0x28

		[Token(Token = "0x1700015B")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x12F13A8", Offset = "0x12F13A8", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x60008DD")]
			private get { } //Length: 8
		}

		[Token(Token = "0x1700015C")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x12F13E8", Offset = "0x12F13E8", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x60008DF")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x12F0FBC", Offset = "0x12F0FBC", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x60008DA")]
		public <SlideInAnimation>d__17(int <>1__state) { }

		[Address(RVA = "0x12F10D0", Offset = "0x12F10D0", Length = "0x2D8")]
		[Token(Token = "0x60008DC")]
		private override bool MoveNext() { }

		[Address(RVA = "0x12F13A8", Offset = "0x12F13A8", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x60008DD")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x12F13E8", Offset = "0x12F13E8", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x60008DF")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x12F13B0", Offset = "0x12F13B0", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x60008DE")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x12F10CC", Offset = "0x12F10CC", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x60008DB")]
		private override void System.IDisposable.Dispose() { }

	}

	[Token(Token = "0x4000A86")]
	private const string _LogChannel = "LanguagesGUI"; //Field offset: 0x0
	[Token(Token = "0x4000A87")]
	private const string _AdLocation = "LanguagesGUI"; //Field offset: 0x0
	[Token(Token = "0x4000A8E")]
	public static LanguagesGUI Instance; //Field offset: 0x0
	[Token(Token = "0x4000A91")]
	private const string _PanelName = "LanguagesGUI"; //Field offset: 0x0
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000A88")]
	public GameObject SlideInOffset; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000A89")]
	public GameObject BackButton; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000A8A")]
	public GameObject Header; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000A8B")]
	public UILabel HeaderLabel; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x4000A8C")]
	public UIPanel ScrollViewPanel; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4000A8D")]
	public Transform ScrollContent; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x4000A8F")]
	public UICheckbox[] LanguageCheckBoxes; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x4000A90")]
	private bool _FirstSlide; //Field offset: 0x88

	[Address(RVA = "0x12F10BC", Offset = "0x12F10BC", Length = "0x10")]
	[Token(Token = "0x60008D9")]
	public LanguagesGUI() { }

	[Address(RVA = "0x12F0A44", Offset = "0x12F0A44", Length = "0x54")]
	[Token(Token = "0x60008CE")]
	private void Awake() { }

	[Address(RVA = "0x12F0FFC", Offset = "0x12F0FFC", Length = "0x4")]
	[Token(Token = "0x60008D7")]
	private void BackButtonClicked() { }

	[Address(RVA = "0x12F0FE4", Offset = "0x12F0FE4", Length = "0x8")]
	[Token(Token = "0x60008D4")]
	private void BackClicked() { }

	[Address(RVA = "0x12F0B20", Offset = "0x12F0B20", Length = "0x8")]
	[Token(Token = "0x60008D1")]
	public virtual void HideAll() { }

	[Address(RVA = "0x12F0FF4", Offset = "0x12F0FF4", Length = "0x8")]
	[Token(Token = "0x60008D6")]
	public void HookStoreBannerAdEvents() { }

	[Address(RVA = "0x12F1000", Offset = "0x12F1000", Length = "0xBC")]
	[Token(Token = "0x60008D8")]
	public void ReturnToTheOptionsScreen() { }

	[Address(RVA = "0x12F0A98", Offset = "0x12F0A98", Length = "0x7C")]
	[Token(Token = "0x60008CF")]
	private void Setup() { }

	[Address(RVA = "0x12F0B14", Offset = "0x12F0B14", Length = "0xC")]
	[Token(Token = "0x60008D0")]
	public virtual void ShowAll(bool inShowBannerAds = true) { }

	[Address(RVA = "0x12F0B28", Offset = "0x12F0B28", Length = "0x434")]
	[Token(Token = "0x60008D2")]
	public virtual void SlideIn(BasePanel returnTo) { }

	[Address(RVA = "0x12F0F5C", Offset = "0x12F0F5C", Length = "0x60")]
	[IteratorStateMachine(typeof(<SlideInAnimation>d__17))]
	[Token(Token = "0x60008D3")]
	private IEnumerator SlideInAnimation() { }

	[Address(RVA = "0x12F0FEC", Offset = "0x12F0FEC", Length = "0x8")]
	[Token(Token = "0x60008D5")]
	public void UnhookStoreBannerAdEvents() { }

}

