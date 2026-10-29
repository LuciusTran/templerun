//Type is in global namespace

[Token(Token = "0x2000131")]
public class MessageBoard : MonoBehaviour
{
	[CompilerGenerated]
	[Token(Token = "0x2000132")]
	private sealed class <AnimateMessageBoard>d__18 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000ACC")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000ACD")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000ACE")]
		public MessageBoard <>4__this; //Field offset: 0x20

		[Token(Token = "0x1700015F")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x12F3774", Offset = "0x12F3774", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000904")]
			private get { } //Length: 8
		}

		[Token(Token = "0x17000160")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x12F37B4", Offset = "0x12F37B4", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000906")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x12F3438", Offset = "0x12F3438", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x6000901")]
		public <AnimateMessageBoard>d__18(int <>1__state) { }

		[Address(RVA = "0x12F3640", Offset = "0x12F3640", Length = "0x134")]
		[Token(Token = "0x6000903")]
		private override bool MoveNext() { }

		[Address(RVA = "0x12F3774", Offset = "0x12F3774", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000904")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x12F37B4", Offset = "0x12F37B4", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000906")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x12F377C", Offset = "0x12F377C", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x6000905")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x12F363C", Offset = "0x12F363C", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x6000902")]
		private override void System.IDisposable.Dispose() { }

	}

	[Token(Token = "0x4000AC5")]
	public static MessageBoard Instance; //Field offset: 0x0
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000ABF")]
	public UILabel Label; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000AC0")]
	public UILabel gcLabel; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000AC1")]
	public UISprite LabelTail; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000AC2")]
	public int MessageBoardLastDistance; //Field offset: 0x38
	[FieldOffset(Offset = "0x3C")]
	[Token(Token = "0x4000AC3")]
	private Vector3 UpPosition; //Field offset: 0x3C
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4000AC4")]
	private Vector3 DownPosition; //Field offset: 0x48
	[FieldOffset(Offset = "0x54")]
	[Token(Token = "0x4000AC6")]
	private float _LabelTailDiff; //Field offset: 0x54
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000AC7")]
	private float _TailY; //Field offset: 0x58
	[FieldOffset(Offset = "0x5C")]
	[Token(Token = "0x4000AC8")]
	private bool isDistIndicationInProgress; //Field offset: 0x5C
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000AC9")]
	private float gcLastValue; //Field offset: 0x60
	[FieldOffset(Offset = "0x64")]
	[Token(Token = "0x4000ACA")]
	private float gcValue; //Field offset: 0x64
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000ACB")]
	private int gcRewardsGiven; //Field offset: 0x68

	[Address(RVA = "0x12F361C", Offset = "0x12F361C", Length = "0x20")]
	[Token(Token = "0x6000900")]
	public MessageBoard() { }

	[Address(RVA = "0x12F3374", Offset = "0x12F3374", Length = "0xC4")]
	[Token(Token = "0x60008FC")]
	private void AnchorM() { }

	[Address(RVA = "0x12F3314", Offset = "0x12F3314", Length = "0x60")]
	[IteratorStateMachine(typeof(<AnimateMessageBoard>d__18))]
	[Token(Token = "0x60008FE")]
	public IEnumerator AnimateMessageBoard() { }

	[Address(RVA = "0x12F2FB8", Offset = "0x12F2FB8", Length = "0x35C")]
	[Token(Token = "0x60008FB")]
	private void CheckForGCMilestoneComplete() { }

	[Address(RVA = "0x12F3460", Offset = "0x12F3460", Length = "0x1BC")]
	[Token(Token = "0x60008FF")]
	public void OnEnable() { }

	[Address(RVA = "0x12F2F08", Offset = "0x12F2F08", Length = "0xB0")]
	[Token(Token = "0x60008FD")]
	public void ShowMessageboard(string message) { }

	[Address(RVA = "0x12F2978", Offset = "0x12F2978", Length = "0x128")]
	[Token(Token = "0x60008F9")]
	private void Start() { }

	[Address(RVA = "0x12F2AA0", Offset = "0x12F2AA0", Length = "0x468")]
	[Token(Token = "0x60008FA")]
	private void Update() { }

}

