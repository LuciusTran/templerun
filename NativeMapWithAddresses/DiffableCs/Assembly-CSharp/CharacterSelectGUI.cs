//Type is in global namespace

[Token(Token = "0x200010D")]
public class CharacterSelectGUI : BasePanel
{
	[CompilerGenerated]
	[Token(Token = "0x200010E")]
	private sealed class <SlideInAnimation>d__27 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000962")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000963")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000964")]
		public CharacterSelectGUI <>4__this; //Field offset: 0x20
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x4000965")]
		private Vector3 <mm>5__2; //Field offset: 0x28
		[FieldOffset(Offset = "0x34")]
		[Token(Token = "0x4000966")]
		private Vector3 <ra>5__3; //Field offset: 0x34

		[Token(Token = "0x1700014C")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x12E18DC", Offset = "0x12E18DC", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x60007E3")]
			private get { } //Length: 8
		}

		[Token(Token = "0x1700014D")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x12E191C", Offset = "0x12E191C", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x60007E5")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x12E13B4", Offset = "0x12E13B4", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x60007E0")]
		public <SlideInAnimation>d__27(int <>1__state) { }

		[Address(RVA = "0x12E1504", Offset = "0x12E1504", Length = "0x3D8")]
		[Token(Token = "0x60007E2")]
		private override bool MoveNext() { }

		[Address(RVA = "0x12E18DC", Offset = "0x12E18DC", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x60007E3")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x12E191C", Offset = "0x12E191C", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x60007E5")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x12E18E4", Offset = "0x12E18E4", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x60007E4")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x12E1500", Offset = "0x12E1500", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x60007E1")]
		private override void System.IDisposable.Dispose() { }

	}

	[Token(Token = "0x400094E")]
	private const string _LogChannel = "CharacterSelectGUI"; //Field offset: 0x0
	[Token(Token = "0x400095F")]
	public static CharacterSelectGUI Instance; //Field offset: 0x0
	[Token(Token = "0x4000961")]
	private const string _PanelName = "Store"; //Field offset: 0x0
	[Token(Token = "0x400094F")]
	private const string _AdLocation = "Store"; //Field offset: 0x0
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000950")]
	public GameObject SlideInOffset; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000951")]
	public GameObject GetMoreCoinsButton; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000952")]
	public GameObject BackButton; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000953")]
	public GameObject Header; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x4000954")]
	public UILabel CoinLabel; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4000955")]
	public UILabel HeaderLabel; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x4000956")]
	public EndGameUI EndGameInterface; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x4000957")]
	public VCGUI CoinsGUI; //Field offset: 0x88
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x4000958")]
	public GameObject[] CharactersObjects; //Field offset: 0x90
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x4000959")]
	public String[] Names; //Field offset: 0x98
	[FieldOffset(Offset = "0xA0")]
	[Token(Token = "0x400095A")]
	private List<Int32> DisplayOrder; //Field offset: 0xA0
	[FieldOffset(Offset = "0xA8")]
	[Token(Token = "0x400095B")]
	public RecordManager RecordManager; //Field offset: 0xA8
	[FieldOffset(Offset = "0xB0")]
	[Token(Token = "0x400095C")]
	public PlayerManager PlayerManager; //Field offset: 0xB0
	[FieldOffset(Offset = "0xB8")]
	[Token(Token = "0x400095D")]
	public UIPanel ScrollViewPanel; //Field offset: 0xB8
	[FieldOffset(Offset = "0xC0")]
	[Token(Token = "0x400095E")]
	public Transform ScrollContent; //Field offset: 0xC0
	[FieldOffset(Offset = "0xC8")]
	[Token(Token = "0x4000960")]
	private bool _FirstSlide; //Field offset: 0xC8

	[Address(RVA = "0x12E1480", Offset = "0x12E1480", Length = "0x80")]
	[Token(Token = "0x60007DF")]
	public CharacterSelectGUI() { }

	[Address(RVA = "0x12E0C40", Offset = "0x12E0C40", Length = "0xD4")]
	[Token(Token = "0x60007D8")]
	private void AdjustCoins() { }

	[Address(RVA = "0x12E0A64", Offset = "0x12E0A64", Length = "0x54")]
	[Token(Token = "0x60007D0")]
	private void Awake() { }

	[Address(RVA = "0x12E13DC", Offset = "0x12E13DC", Length = "0x4")]
	[Token(Token = "0x60007D9")]
	private void BackClicked() { }

	[Address(RVA = "0x12E13E0", Offset = "0x12E13E0", Length = "0x34")]
	[Token(Token = "0x60007DA")]
	private void GetMoreCoinsClicked() { }

	[Address(RVA = "0x12E0D14", Offset = "0x12E0D14", Length = "0x4")]
	[Token(Token = "0x60007D4")]
	public virtual void HideAll() { }

	[Address(RVA = "0x12E1418", Offset = "0x12E1418", Length = "0x4")]
	[Token(Token = "0x60007DC")]
	public void HookStoreBannerAdEvents() { }

	[Address(RVA = "0x12E141C", Offset = "0x12E141C", Length = "0x64")]
	[Token(Token = "0x60007DE")]
	public bool IsNewCharacterSelectEnabled() { }

	[Address(RVA = "0x12E0BC8", Offset = "0x12E0BC8", Length = "0x78")]
	[Token(Token = "0x60007D5")]
	private void ReconfigureStoreItems() { }

	[Address(RVA = "0x12E0AB8", Offset = "0x12E0AB8", Length = "0x7C")]
	[Token(Token = "0x60007D2")]
	private void Setup() { }

	[Address(RVA = "0x12E0B38", Offset = "0x12E0B38", Length = "0x90")]
	[Token(Token = "0x60007D3")]
	public virtual void ShowAll(bool inShowBannerAds = true) { }

	[Address(RVA = "0x12E0D18", Offset = "0x12E0D18", Length = "0x2B0")]
	[Token(Token = "0x60007D6")]
	public virtual void SlideIn(BasePanel returnTo) { }

	[Address(RVA = "0x12E0FC8", Offset = "0x12E0FC8", Length = "0x60")]
	[IteratorStateMachine(typeof(<SlideInAnimation>d__27))]
	[Token(Token = "0x60007D7")]
	private IEnumerator SlideInAnimation() { }

	[Address(RVA = "0x12E1414", Offset = "0x12E1414", Length = "0x4")]
	[Token(Token = "0x60007DB")]
	public void UnhookStoreBannerAdEvents() { }

	[Address(RVA = "0x12E0B34", Offset = "0x12E0B34", Length = "0x4")]
	[Token(Token = "0x60007D1")]
	private void Update() { }

	[Address(RVA = "0x12E1028", Offset = "0x12E1028", Length = "0x38C")]
	[Token(Token = "0x60007DD")]
	public void UpdateHeaderLabel() { }

}

