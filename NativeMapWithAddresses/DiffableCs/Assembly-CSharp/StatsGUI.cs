//Type is in global namespace

[Token(Token = "0x2000147")]
public class StatsGUI : BasePanel
{
	[CompilerGenerated]
	[Token(Token = "0x2000148")]
	private sealed class <SlideInAnimation>d__29 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000B70")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000B71")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000B72")]
		public StatsGUI <>4__this; //Field offset: 0x20
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x4000B73")]
		private Vector3 <gb>5__2; //Field offset: 0x28
		[FieldOffset(Offset = "0x34")]
		[Token(Token = "0x4000B74")]
		private Vector3 <mm>5__3; //Field offset: 0x34

		[Token(Token = "0x17000167")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x12F9320", Offset = "0x12F9320", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000979")]
			private get { } //Length: 8
		}

		[Token(Token = "0x17000168")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x12F9360", Offset = "0x12F9360", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x600097B")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x12F8D48", Offset = "0x12F8D48", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x6000976")]
		public <SlideInAnimation>d__29(int <>1__state) { }

		[Address(RVA = "0x12F8E80", Offset = "0x12F8E80", Length = "0x4A0")]
		[Token(Token = "0x6000978")]
		private override bool MoveNext() { }

		[Address(RVA = "0x12F9320", Offset = "0x12F9320", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000979")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x12F9360", Offset = "0x12F9360", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x600097B")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x12F9328", Offset = "0x12F9328", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x600097A")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x12F8E7C", Offset = "0x12F8E7C", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x6000977")]
		private override void System.IDisposable.Dispose() { }

	}

	[Token(Token = "0x4000B6F")]
	private const string _PanelName = "Stats"; //Field offset: 0x0
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000B56")]
	public GameObject SlideInOffset; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000B57")]
	public GameObject MainMenuButton; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000B58")]
	public GameObject Header; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000B59")]
	public GameObject Content; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x4000B5A")]
	public UIPanel ScrollViewPanel; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4000B5B")]
	public Transform ScrollContent; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x4000B5C")]
	public RecordManager RecordManager; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x4000B5D")]
	public PlayerManager PlayerManager; //Field offset: 0x88
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x4000B5E")]
	public UILabel Multiplier; //Field offset: 0x90
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x4000B5F")]
	public UILabel Coins; //Field offset: 0x98
	[FieldOffset(Offset = "0xA0")]
	[Token(Token = "0x4000B60")]
	public GameObject StatsGroupSingle; //Field offset: 0xA0
	[FieldOffset(Offset = "0xA8")]
	[Token(Token = "0x4000B61")]
	public GameObject StatsGroupSaveMe; //Field offset: 0xA8
	[FieldOffset(Offset = "0xB0")]
	[Token(Token = "0x4000B62")]
	public GameObject StatsGroupLifetime; //Field offset: 0xB0
	[FieldOffset(Offset = "0xB8")]
	[Token(Token = "0x4000B63")]
	public UILabel HighestScore; //Field offset: 0xB8
	[FieldOffset(Offset = "0xC0")]
	[Token(Token = "0x4000B64")]
	public UILabel LongestRun; //Field offset: 0xC0
	[FieldOffset(Offset = "0xC8")]
	[Token(Token = "0x4000B65")]
	public UILabel MostCoins; //Field offset: 0xC8
	[FieldOffset(Offset = "0xD0")]
	[Token(Token = "0x4000B66")]
	public UILabel SaveMeHighestScore; //Field offset: 0xD0
	[FieldOffset(Offset = "0xD8")]
	[Token(Token = "0x4000B67")]
	public UILabel SaveMeLongestRun; //Field offset: 0xD8
	[FieldOffset(Offset = "0xE0")]
	[Token(Token = "0x4000B68")]
	public UILabel SaveMeMostCoins; //Field offset: 0xE0
	[FieldOffset(Offset = "0xE8")]
	[Token(Token = "0x4000B69")]
	public UILabel TotalCoins; //Field offset: 0xE8
	[FieldOffset(Offset = "0xF0")]
	[Token(Token = "0x4000B6A")]
	public UILabel TotalDistance; //Field offset: 0xF0
	[FieldOffset(Offset = "0xF8")]
	[Token(Token = "0x4000B6B")]
	public UILabel TotalGames; //Field offset: 0xF8
	[FieldOffset(Offset = "0x100")]
	[Token(Token = "0x4000B6C")]
	public UILabel VersionInfo; //Field offset: 0x100
	[FieldOffset(Offset = "0x108")]
	[Token(Token = "0x4000B6D")]
	public GameObject StatsButton; //Field offset: 0x108
	[FieldOffset(Offset = "0x110")]
	[Token(Token = "0x4000B6E")]
	private bool _FirstSlide; //Field offset: 0x110

	[Address(RVA = "0x12F8E6C", Offset = "0x12F8E6C", Length = "0x10")]
	[Token(Token = "0x6000975")]
	public StatsGUI() { }

	[Address(RVA = "0x12F86A0", Offset = "0x12F86A0", Length = "0x4")]
	[Token(Token = "0x600096F")]
	private void Awake() { }

	[Address(RVA = "0x12F8D70", Offset = "0x12F8D70", Length = "0x8")]
	[Token(Token = "0x6000973")]
	private void BackClicked() { }

	[Address(RVA = "0x12F8D78", Offset = "0x12F8D78", Length = "0xF4")]
	[Token(Token = "0x6000974")]
	private void OnStatsButton() { }

	[Address(RVA = "0x12F86A4", Offset = "0x12F86A4", Length = "0x54")]
	[Token(Token = "0x6000970")]
	private void Setup() { }

	[Address(RVA = "0x12F86F8", Offset = "0x12F86F8", Length = "0x5F0")]
	[Token(Token = "0x6000971")]
	public virtual void SlideIn(BasePanel returnTo) { }

	[Address(RVA = "0x12F8CE8", Offset = "0x12F8CE8", Length = "0x60")]
	[IteratorStateMachine(typeof(<SlideInAnimation>d__29))]
	[Token(Token = "0x6000972")]
	private IEnumerator SlideInAnimation() { }

}

