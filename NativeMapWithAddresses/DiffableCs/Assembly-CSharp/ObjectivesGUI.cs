//Type is in global namespace

[Token(Token = "0x200013C")]
public class ObjectivesGUI : BasePanel
{
	[CompilerGenerated]
	[Token(Token = "0x200013D")]
	private sealed class <SlideInAnimation>d__16 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000B00")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000B01")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000B02")]
		public ObjectivesGUI <>4__this; //Field offset: 0x20
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x4000B03")]
		private Vector3 <gb>5__2; //Field offset: 0x28
		[FieldOffset(Offset = "0x34")]
		[Token(Token = "0x4000B04")]
		private Vector3 <mm>5__3; //Field offset: 0x34

		[Token(Token = "0x17000161")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x12F522C", Offset = "0x12F522C", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x600092A")]
			private get { } //Length: 8
		}

		[Token(Token = "0x17000162")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x12F526C", Offset = "0x12F526C", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x600092C")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x12F44D8", Offset = "0x12F44D8", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x6000927")]
		public <SlideInAnimation>d__16(int <>1__state) { }

		[Address(RVA = "0x12F4E08", Offset = "0x12F4E08", Length = "0x424")]
		[Token(Token = "0x6000929")]
		private override bool MoveNext() { }

		[Address(RVA = "0x12F522C", Offset = "0x12F522C", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x600092A")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x12F526C", Offset = "0x12F526C", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x600092C")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x12F5234", Offset = "0x12F5234", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x600092B")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x12F4E04", Offset = "0x12F4E04", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x6000928")]
		private override void System.IDisposable.Dispose() { }

	}

	[Token(Token = "0x4000AFF")]
	private const string _PanelName = "Objectives"; //Field offset: 0x0
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000AF3")]
	public GameObject SlideInOffset; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000AF4")]
	public GameObject MainMenuButton; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000AF5")]
	public GameObject Header; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000AF6")]
	public RecordManager RecordManager; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x4000AF7")]
	public PlayerManager PlayerManager; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4000AF8")]
	public UIStack Stack; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x4000AF9")]
	public UIPanel ScrollViewPanel; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x4000AFA")]
	public Transform ScrollContent; //Field offset: 0x88
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x4000AFB")]
	public UIDraggablePanel ScrollingPanel; //Field offset: 0x90
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x4000AFC")]
	public GameObject ItemPrefab; //Field offset: 0x98
	[FieldOffset(Offset = "0xA0")]
	[Token(Token = "0x4000AFD")]
	public GameObject StatsButton; //Field offset: 0xA0
	[FieldOffset(Offset = "0xA8")]
	[Token(Token = "0x4000AFE")]
	private bool _FirstSlide; //Field offset: 0xA8

	[Address(RVA = "0x12F4DF4", Offset = "0x12F4DF4", Length = "0x10")]
	[Token(Token = "0x6000926")]
	public ObjectivesGUI() { }

	[Address(RVA = "0x12F428C", Offset = "0x12F428C", Length = "0x4")]
	[Token(Token = "0x600091F")]
	private void Awake() { }

	[Address(RVA = "0x12F4500", Offset = "0x12F4500", Length = "0x814")]
	[Token(Token = "0x6000923")]
	private void FillObjectives() { }

	[Address(RVA = "0x12F4D14", Offset = "0x12F4D14", Length = "0x8")]
	[Token(Token = "0x6000924")]
	private void MainMenuClicked() { }

	[Address(RVA = "0x12F4D1C", Offset = "0x12F4D1C", Length = "0xD8")]
	[Token(Token = "0x6000925")]
	private void OnStatsButton() { }

	[Address(RVA = "0x12F4290", Offset = "0x12F4290", Length = "0x54")]
	[Token(Token = "0x6000920")]
	private void Setup() { }

	[Address(RVA = "0x12F42E4", Offset = "0x12F42E4", Length = "0x194")]
	[Token(Token = "0x6000921")]
	public virtual void SlideIn(BasePanel returnTo) { }

	[Address(RVA = "0x12F4478", Offset = "0x12F4478", Length = "0x60")]
	[IteratorStateMachine(typeof(<SlideInAnimation>d__16))]
	[Token(Token = "0x6000922")]
	private IEnumerator SlideInAnimation() { }

}

