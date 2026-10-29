//Type is in global namespace

[Token(Token = "0x2000141")]
public class PauseMenu : BasePanel
{
	[CompilerGenerated]
	[Token(Token = "0x2000142")]
	private sealed class <>c
	{
		[Token(Token = "0x4000B37")]
		public static readonly <>c <>9; //Field offset: 0x0
		[Token(Token = "0x4000B38")]
		public static Action<GameObject> <>9__33_0; //Field offset: 0x8

		[Address(RVA = "0x12F733C", Offset = "0x12F733C", Length = "0x5C")]
		[Token(Token = "0x6000956")]
		private static <>c() { }

		[Address(RVA = "0x12F7398", Offset = "0x12F7398", Length = "0x8")]
		[Token(Token = "0x6000957")]
		public <>c() { }

		[Address(RVA = "0x12F73A0", Offset = "0x12F73A0", Length = "0x58")]
		[Token(Token = "0x6000958")]
		internal void <UpdateStats>b__33_0(GameObject child) { }

	}

	[CompilerGenerated]
	[Token(Token = "0x2000143")]
	private sealed class <SlideInAnimation>d__32 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000B39")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000B3A")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000B3B")]
		public PauseMenu <>4__this; //Field offset: 0x20

		[Token(Token = "0x17000165")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x12F78FC", Offset = "0x12F78FC", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x600095C")]
			private get { } //Length: 8
		}

		[Token(Token = "0x17000166")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x12F793C", Offset = "0x12F793C", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x600095E")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x12F63B8", Offset = "0x12F63B8", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x6000959")]
		public <SlideInAnimation>d__32(int <>1__state) { }

		[Address(RVA = "0x12F73FC", Offset = "0x12F73FC", Length = "0x500")]
		[Token(Token = "0x600095B")]
		private override bool MoveNext() { }

		[Address(RVA = "0x12F78FC", Offset = "0x12F78FC", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x600095C")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x12F793C", Offset = "0x12F793C", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x600095E")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x12F7904", Offset = "0x12F7904", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x600095D")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x12F73F8", Offset = "0x12F73F8", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x600095A")]
		private override void System.IDisposable.Dispose() { }

	}

	[Token(Token = "0x4000B36")]
	private const string _PanelName = "Pause"; //Field offset: 0x0
	[Token(Token = "0x4000B2B")]
	public static PauseMenu Instance; //Field offset: 0x0
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000B1A")]
	public GameObject SlideInOffset; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000B1B")]
	public GameObject MainMenuButton; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000B1C")]
	public GameObject ResumeButton; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000B1D")]
	public GameObject NewGameButton; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x4000B1E")]
	public GameObject Header; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4000B1F")]
	public GameObject Content; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x4000B20")]
	public UILabel ScoreLabel; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x4000B21")]
	public UILabel DistanceLabel; //Field offset: 0x88
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x4000B22")]
	public UILabel CoinsLabel; //Field offset: 0x90
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x4000B23")]
	public UILabel MultiplierLabel; //Field offset: 0x98
	[FieldOffset(Offset = "0xA0")]
	[Token(Token = "0x4000B24")]
	public AlertView AlertView; //Field offset: 0xA0
	[FieldOffset(Offset = "0xA8")]
	[Token(Token = "0x4000B25")]
	public Transform NextObjectivePlate; //Field offset: 0xA8
	[FieldOffset(Offset = "0xB0")]
	[Token(Token = "0x4000B26")]
	public Transform NextObjectiveSlotSprite; //Field offset: 0xB0
	[FieldOffset(Offset = "0xB8")]
	[Token(Token = "0x4000B27")]
	public Transform NextObjectiveText; //Field offset: 0xB8
	[FieldOffset(Offset = "0xC0")]
	[Token(Token = "0x4000B28")]
	public GameObject ObjectiveItemPrefab; //Field offset: 0xC0
	[FieldOffset(Offset = "0xC8")]
	[Token(Token = "0x4000B29")]
	public RecordManager RecordManager; //Field offset: 0xC8
	[FieldOffset(Offset = "0xD0")]
	[Token(Token = "0x4000B2A")]
	public PlayerManager PlayerManager; //Field offset: 0xD0
	[FieldOffset(Offset = "0xD8")]
	[Header("Debug Items")]
	[Token(Token = "0x4000B2C")]
	public GameObject DebugButton; //Field offset: 0xD8
	[FieldOffset(Offset = "0xE0")]
	[Token(Token = "0x4000B2D")]
	public GameObject DebugPanel; //Field offset: 0xE0
	[FieldOffset(Offset = "0xE8")]
	[Token(Token = "0x4000B2E")]
	public UILabel debugStatus; //Field offset: 0xE8
	[FieldOffset(Offset = "0xF0")]
	[Token(Token = "0x4000B2F")]
	public UILabel lifeTimeConis; //Field offset: 0xF0
	[FieldOffset(Offset = "0xF8")]
	[Token(Token = "0x4000B30")]
	public UILabel lifeTimeRuns; //Field offset: 0xF8
	[FieldOffset(Offset = "0x100")]
	[Token(Token = "0x4000B31")]
	public UILabel lifeTimeDistance; //Field offset: 0x100
	[FieldOffset(Offset = "0x108")]
	[Token(Token = "0x4000B32")]
	public UILabel debugHUDStatus; //Field offset: 0x108
	[FieldOffset(Offset = "0x110")]
	[Token(Token = "0x4000B33")]
	private Vector3 menuButtonPos; //Field offset: 0x110
	[FieldOffset(Offset = "0x11C")]
	[Token(Token = "0x4000B34")]
	private Vector3 resumeButtonPos; //Field offset: 0x11C
	[FieldOffset(Offset = "0x128")]
	[Token(Token = "0x4000B35")]
	private Vector3 newButtonPos; //Field offset: 0x128

	[Address(RVA = "0x12F72AC", Offset = "0x12F72AC", Length = "0x8")]
	[Token(Token = "0x6000953")]
	public PauseMenu() { }

	[Address(RVA = "0x12F72B4", Offset = "0x12F72B4", Length = "0x3C")]
	[CompilerGenerated]
	[Token(Token = "0x6000954")]
	private void <MainMenuClicked>b__34_0() { }

	[Address(RVA = "0x12F72F0", Offset = "0x12F72F0", Length = "0x4C")]
	[CompilerGenerated]
	[Token(Token = "0x6000955")]
	private void <NewGameClicked>b__36_0() { }

	[Address(RVA = "0x12F6BF0", Offset = "0x12F6BF0", Length = "0x1B0")]
	[Token(Token = "0x6000947")]
	private void MainMenuClicked() { }

	[Address(RVA = "0x12F6E44", Offset = "0x12F6E44", Length = "0x1B0")]
	[Token(Token = "0x6000949")]
	private void NewGameClicked() { }

	[Address(RVA = "0x12F6FF4", Offset = "0x12F6FF4", Length = "0x4")]
	[Token(Token = "0x600094A")]
	public void OnCloseDebugPanelButtonClicked() { }

	[Address(RVA = "0x12F70DC", Offset = "0x12F70DC", Length = "0x2C")]
	[Token(Token = "0x600094D")]
	public void OnCoinDebugClicked() { }

	[Address(RVA = "0x12F6FF8", Offset = "0x12F6FF8", Length = "0x4")]
	[Token(Token = "0x600094B")]
	public void OnDebugButtonClicked() { }

	[Address(RVA = "0x12F6FFC", Offset = "0x12F6FFC", Length = "0xE0")]
	[Token(Token = "0x600094C")]
	public void OnGodModeClicked() { }

	[Address(RVA = "0x12F7164", Offset = "0x12F7164", Length = "0x118")]
	[Token(Token = "0x6000950")]
	public void OnLifeTimeDebugClicked() { }

	[Address(RVA = "0x12F7138", Offset = "0x12F7138", Length = "0x2C")]
	[Token(Token = "0x600094F")]
	public void OnMultiplierDebugClicked() { }

	[Address(RVA = "0x12F727C", Offset = "0x12F727C", Length = "0x2C")]
	[Token(Token = "0x6000951")]
	public void OnRunDistanceDebugClicked() { }

	[Address(RVA = "0x12F7108", Offset = "0x12F7108", Length = "0x30")]
	[Token(Token = "0x600094E")]
	public void OnScoreDebugClicked() { }

	[Address(RVA = "0x12F72A8", Offset = "0x12F72A8", Length = "0x4")]
	[Token(Token = "0x6000952")]
	public void OnShowHUDClicked() { }

	[Address(RVA = "0x12F6DA0", Offset = "0x12F6DA0", Length = "0xA4")]
	[Token(Token = "0x6000948")]
	public void ResumeClicked() { }

	[Address(RVA = "0x12F6294", Offset = "0x12F6294", Length = "0x54")]
	[Token(Token = "0x6000943")]
	private void Setup() { }

	[Address(RVA = "0x12F62E8", Offset = "0x12F62E8", Length = "0x70")]
	[Token(Token = "0x6000944")]
	public virtual void SlideIn(BasePanel returnTo) { }

	[Address(RVA = "0x12F6358", Offset = "0x12F6358", Length = "0x60")]
	[IteratorStateMachine(typeof(<SlideInAnimation>d__32))]
	[Token(Token = "0x6000945")]
	private IEnumerator SlideInAnimation() { }

	[Address(RVA = "0x12F5F80", Offset = "0x12F5F80", Length = "0x314")]
	[Token(Token = "0x6000942")]
	public virtual void Start() { }

	[Address(RVA = "0x12F63E0", Offset = "0x12F63E0", Length = "0x810")]
	[Token(Token = "0x6000946")]
	private void UpdateStats() { }

}

