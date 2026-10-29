//Type is in global namespace

[Token(Token = "0x2000108")]
public class AwardedObjectives : BasePanel
{
	[CompilerGenerated]
	[Token(Token = "0x2000109")]
	private sealed class <SlideInAnimation>d__20 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x400092F")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000930")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000931")]
		public AwardedObjectives <>4__this; //Field offset: 0x20
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x4000932")]
		private int <startSM>5__2; //Field offset: 0x28
		[FieldOffset(Offset = "0x30")]
		[Token(Token = "0x4000933")]
		private UITweener[] <tweens>5__3; //Field offset: 0x30
		[FieldOffset(Offset = "0x38")]
		[Token(Token = "0x4000934")]
		private Vector3 <mm>5__4; //Field offset: 0x38
		[FieldOffset(Offset = "0x44")]
		[Token(Token = "0x4000935")]
		private int <newMultiplier>5__5; //Field offset: 0x44
		[FieldOffset(Offset = "0x48")]
		[Token(Token = "0x4000936")]
		private int <i>5__6; //Field offset: 0x48

		[Token(Token = "0x17000148")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x12DF60C", Offset = "0x12DF60C", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x60007AF")]
			private get { } //Length: 8
		}

		[Token(Token = "0x17000149")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x12DF64C", Offset = "0x12DF64C", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x60007B1")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x12DDBAC", Offset = "0x12DDBAC", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x60007AC")]
		public <SlideInAnimation>d__20(int <>1__state) { }

		[Address(RVA = "0x12DEFAC", Offset = "0x12DEFAC", Length = "0x660")]
		[Token(Token = "0x60007AE")]
		private override bool MoveNext() { }

		[Address(RVA = "0x12DF60C", Offset = "0x12DF60C", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x60007AF")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x12DF64C", Offset = "0x12DF64C", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x60007B1")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x12DF614", Offset = "0x12DF614", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x60007B0")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x12DEFA8", Offset = "0x12DEFA8", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x60007AD")]
		private override void System.IDisposable.Dispose() { }

	}

	[Token(Token = "0x400092E")]
	private const string _PanelName = "PostGame_Objectives"; //Field offset: 0x0
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x400091E")]
	public GameObject SlideInOffset; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x400091F")]
	public GameObject NextButton; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000920")]
	public GameObject Header; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000921")]
	public GameObject Content; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x4000922")]
	public RecordManager RecordManager; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4000923")]
	public PlayerManager PlayerManager; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x4000924")]
	public CharacterPlayer GamePlayer; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x4000925")]
	public UIStack Stack; //Field offset: 0x88
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x4000926")]
	public GameObject ItemPrefab; //Field offset: 0x90
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x4000927")]
	public UILabel MultiplierLabel; //Field offset: 0x98
	[FieldOffset(Offset = "0xA0")]
	[Token(Token = "0x4000928")]
	public Transform NextObjectivePlate; //Field offset: 0xA0
	[FieldOffset(Offset = "0xA8")]
	[Token(Token = "0x4000929")]
	public EndGameUI EndGameInterface; //Field offset: 0xA8
	[FieldOffset(Offset = "0xB0")]
	[Token(Token = "0x400092A")]
	public Transform MultUp; //Field offset: 0xB0
	[FieldOffset(Offset = "0xB8")]
	[Token(Token = "0x400092B")]
	public UISprite MultUpSprite; //Field offset: 0xB8
	[FieldOffset(Offset = "0xC0")]
	[Token(Token = "0x400092C")]
	public GCGUI GCInterface; //Field offset: 0xC0
	[FieldOffset(Offset = "0xC8")]
	[Token(Token = "0x400092D")]
	private bool _FirstSlide; //Field offset: 0xC8

	[Address(RVA = "0x12DEF84", Offset = "0x12DEF84", Length = "0x14")]
	[Token(Token = "0x60007AB")]
	public AwardedObjectives() { }

	[Address(RVA = "0x12DD7BC", Offset = "0x12DD7BC", Length = "0x4")]
	[Token(Token = "0x60007A5")]
	private void Awake() { }

	[Address(RVA = "0x12DDBD4", Offset = "0x12DDBD4", Length = "0xBEC")]
	[Token(Token = "0x60007A9")]
	private void FillObjectives() { }

	[Address(RVA = "0x12DD9B4", Offset = "0x12DD9B4", Length = "0x198")]
	[Token(Token = "0x60007AA")]
	private void NextClicked() { }

	[Address(RVA = "0x12DD7C0", Offset = "0x12DD7C0", Length = "0x54")]
	[Token(Token = "0x60007A6")]
	private void Setup() { }

	[Address(RVA = "0x12DD814", Offset = "0x12DD814", Length = "0x1A0")]
	[Token(Token = "0x60007A7")]
	public virtual void SlideIn(BasePanel returnTo) { }

	[Address(RVA = "0x12DDB4C", Offset = "0x12DDB4C", Length = "0x60")]
	[IteratorStateMachine(typeof(<SlideInAnimation>d__20))]
	[Token(Token = "0x60007A8")]
	private IEnumerator SlideInAnimation() { }

}

