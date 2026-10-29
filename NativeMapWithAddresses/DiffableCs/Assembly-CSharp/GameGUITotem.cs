//Type is in global namespace

[Token(Token = "0x200011F")]
public class GameGUITotem : MonoBehaviour
{
	[CompilerGenerated]
	[Token(Token = "0x2000120")]
	private sealed class <AnimateBonus>d__30 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x40009FD")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x40009FE")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x40009FF")]
		public GameGUITotem <>4__this; //Field offset: 0x20
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x4000A00")]
		public string BonusName; //Field offset: 0x28
		[FieldOffset(Offset = "0x30")]
		[Token(Token = "0x4000A01")]
		private UISprite <s>5__2; //Field offset: 0x30

		[Token(Token = "0x17000155")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x12E9238", Offset = "0x12E9238", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000866")]
			private get { } //Length: 8
		}

		[Token(Token = "0x17000156")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x12E9278", Offset = "0x12E9278", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000868")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x12E8D28", Offset = "0x12E8D28", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x6000863")]
		public <AnimateBonus>d__30(int <>1__state) { }

		[Address(RVA = "0x12E8F68", Offset = "0x12E8F68", Length = "0x2D0")]
		[Token(Token = "0x6000865")]
		private override bool MoveNext() { }

		[Address(RVA = "0x12E9238", Offset = "0x12E9238", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000866")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x12E9278", Offset = "0x12E9278", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000868")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x12E9240", Offset = "0x12E9240", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x6000867")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x12E8F64", Offset = "0x12E8F64", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x6000864")]
		private override void System.IDisposable.Dispose() { }

	}

	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40009E9")]
	public GameGUI MainGameInterface; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40009EA")]
	public UIFilledSprite ProgressBarSprite; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40009EB")]
	public UISprite TotemEmblem1; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x40009EC")]
	public UISprite TotemEmblem2; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x40009ED")]
	public UISprite TotemEmblem3; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x40009EE")]
	public UISprite TotemEmblem4; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x40009EF")]
	public UISprite FallingTotemEmblem1; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x40009F0")]
	public UISprite FallingTotemEmblem2; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x40009F1")]
	public UISprite FallingTotemEmblem3; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x40009F2")]
	public UISprite FallingTotemEmblem4; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x40009F3")]
	public GameObject BonusObject; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x40009F4")]
	public CharacterPlayer GamePlayer; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x40009F5")]
	private float lastCoinPercent; //Field offset: 0x80
	[FieldOffset(Offset = "0x84")]
	[Token(Token = "0x40009F6")]
	public int BonusLevel; //Field offset: 0x84
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x40009F7")]
	public bool BonusLevelJustChagned; //Field offset: 0x88
	[FieldOffset(Offset = "0x8C")]
	[Token(Token = "0x40009F8")]
	public int AccumulatedScore; //Field offset: 0x8C
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x40009F9")]
	public float TimeSinceBonusLevelChang; //Field offset: 0x90
	[FieldOffset(Offset = "0x94")]
	[Token(Token = "0x40009FA")]
	public bool TestAnimation; //Field offset: 0x94
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x40009FB")]
	private float testTime; //Field offset: 0x98
	[FieldOffset(Offset = "0x9C")]
	[Token(Token = "0x40009FC")]
	private int bl; //Field offset: 0x9C

	[Address(RVA = "0x12E8F48", Offset = "0x12E8F48", Length = "0x1C")]
	[Token(Token = "0x6000862")]
	public GameGUITotem() { }

	[Address(RVA = "0x12E8CBC", Offset = "0x12E8CBC", Length = "0x6C")]
	[IteratorStateMachine(typeof(<AnimateBonus>d__30))]
	[Token(Token = "0x6000860")]
	public IEnumerator AnimateBonus(string BonusName) { }

	[Address(RVA = "0x12E88EC", Offset = "0x12E88EC", Length = "0x4")]
	[Token(Token = "0x6000856")]
	private void Awake() { }

	[Address(RVA = "0x12E88FC", Offset = "0x12E88FC", Length = "0x4")]
	[Token(Token = "0x600085A")]
	public void HideAll() { }

	[Address(RVA = "0x12E7C40", Offset = "0x12E7C40", Length = "0x194")]
	[Token(Token = "0x600085C")]
	public void Reset() { }

	[Address(RVA = "0x12E89F8", Offset = "0x12E89F8", Length = "0x1D4")]
	[Token(Token = "0x600085F")]
	public void SetBonusLevel(int level, bool awardBonus) { }

	[Address(RVA = "0x12E88F0", Offset = "0x12E88F0", Length = "0x4")]
	[Token(Token = "0x6000857")]
	private void Setup() { }

	[Address(RVA = "0x12E8D50", Offset = "0x12E8D50", Length = "0x1F8")]
	[Token(Token = "0x6000861")]
	private void SetupStar(GUIParticle sprite) { }

	[Address(RVA = "0x12E88F4", Offset = "0x12E88F4", Length = "0x4")]
	[Token(Token = "0x6000858")]
	private void SetVisibility(bool visible) { }

	[Address(RVA = "0x12E88F8", Offset = "0x12E88F8", Length = "0x4")]
	[Token(Token = "0x6000859")]
	public void ShowAll() { }

	[Address(RVA = "0x12E8BCC", Offset = "0x12E8BCC", Length = "0xF0")]
	[Token(Token = "0x600085E")]
	private void StartEmblemFallIfVisible(UISprite emblem) { }

	[Address(RVA = "0x12E8900", Offset = "0x12E8900", Length = "0xDC")]
	[Token(Token = "0x600085B")]
	private void Update() { }

	[Address(RVA = "0x12E89DC", Offset = "0x12E89DC", Length = "0x1C")]
	[Token(Token = "0x600085D")]
	public void UpdateProgress(float coinPercent) { }

}

