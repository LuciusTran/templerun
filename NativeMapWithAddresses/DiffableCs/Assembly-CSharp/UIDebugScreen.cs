//Type is in global namespace

[Token(Token = "0x200010F")]
public class UIDebugScreen : BasePanel
{
	[CompilerGenerated]
	[Token(Token = "0x2000110")]
	private sealed class <>c
	{
		[Token(Token = "0x4000970")]
		public static readonly <>c <>9; //Field offset: 0x0
		[Token(Token = "0x4000971")]
		public static Func<Task`1<String>> <>9__11_0; //Field offset: 0x8

		[Address(RVA = "0x12E1C4C", Offset = "0x12E1C4C", Length = "0x5C")]
		[Token(Token = "0x60007EE")]
		private static <>c() { }

		[Address(RVA = "0x12E1CA8", Offset = "0x12E1CA8", Length = "0x8")]
		[Token(Token = "0x60007EF")]
		public <>c() { }

		[Address(RVA = "0x12E1CB0", Offset = "0x12E1CB0", Length = "0x64")]
		[Token(Token = "0x60007F0")]
		internal Task<String> <GetTokenAsync>b__11_0() { }

	}

	[CompilerGenerated]
	[Token(Token = "0x2000111")]
	private struct <GetTokenAsync>d__11 : IAsyncStateMachine
	{
		[FieldOffset(Offset = "0x0")]
		[Token(Token = "0x4000972")]
		public int <>1__state; //Field offset: 0x0
		[FieldOffset(Offset = "0x8")]
		[Token(Token = "0x4000973")]
		public AsyncVoidMethodBuilder <>t__builder; //Field offset: 0x8
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x4000974")]
		private Task<String> <task>5__2; //Field offset: 0x28
		[FieldOffset(Offset = "0x30")]
		[Token(Token = "0x4000975")]
		private TaskAwaiter<String> <>u__1; //Field offset: 0x30

		[Address(RVA = "0x12E1D14", Offset = "0x12E1D14", Length = "0x2C4")]
		[Token(Token = "0x60007F1")]
		private override void MoveNext() { }

		[Address(RVA = "0x12E1FD8", Offset = "0x12E1FD8", Length = "0xC")]
		[DebuggerHidden]
		[Token(Token = "0x60007F2")]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	[Token(Token = "0x2000112")]
	private sealed class <SlideInAnimation>d__13 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000976")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000977")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000978")]
		public UIDebugScreen <>4__this; //Field offset: 0x20
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x4000979")]
		private Vector3 <ra>5__2; //Field offset: 0x28

		[Token(Token = "0x1700014E")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x12E2254", Offset = "0x12E2254", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x60007F6")]
			private get { } //Length: 8
		}

		[Token(Token = "0x1700014F")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x12E2294", Offset = "0x12E2294", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x60007F8")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x12E1C08", Offset = "0x12E1C08", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x60007F3")]
		public <SlideInAnimation>d__13(int <>1__state) { }

		[Address(RVA = "0x12E1FE8", Offset = "0x12E1FE8", Length = "0x26C")]
		[Token(Token = "0x60007F5")]
		private override bool MoveNext() { }

		[Address(RVA = "0x12E2254", Offset = "0x12E2254", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x60007F6")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x12E2294", Offset = "0x12E2294", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x60007F8")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x12E225C", Offset = "0x12E225C", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x60007F7")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x12E1FE4", Offset = "0x12E1FE4", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x60007F4")]
		private override void System.IDisposable.Dispose() { }

	}

	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000967")]
	public GameObject SlideInOffset; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000968")]
	public GameObject CloseButton; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000969")]
	public GameObject Header; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x400096A")]
	public UIPanel ScrollViewPanel; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x400096B")]
	public Transform ScrollContent; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x400096C")]
	public GameObject DebugButtonPrefab; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x400096D")]
	public GameObject DebugAdNetworkGroupPrefab; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x400096E")]
	public GameObject DeathCaptionsPrefab; //Field offset: 0x88
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x400096F")]
	private bool _FirstSlide; //Field offset: 0x90

	[Address(RVA = "0x12E1C38", Offset = "0x12E1C38", Length = "0x14")]
	[Token(Token = "0x60007ED")]
	public UIDebugScreen() { }

	[Address(RVA = "0x12E1924", Offset = "0x12E1924", Length = "0x5C")]
	[Token(Token = "0x60007E6")]
	private void Awake() { }

	[Address(RVA = "0x12E198C", Offset = "0x12E198C", Length = "0x88")]
	[AsyncStateMachine(typeof(<GetTokenAsync>d__11))]
	[Token(Token = "0x60007E8")]
	private void GetTokenAsync() { }

	[Address(RVA = "0x12E1C34", Offset = "0x12E1C34", Length = "0x4")]
	[Token(Token = "0x60007EC")]
	private void LeaveDebugScreen() { }

	[Address(RVA = "0x12E1C30", Offset = "0x12E1C30", Length = "0x4")]
	[Token(Token = "0x60007EB")]
	public void OnCloseTapped() { }

	[Address(RVA = "0x12E1980", Offset = "0x12E1980", Length = "0xC")]
	[Token(Token = "0x60007E7")]
	private void Setup() { }

	[Address(RVA = "0x12E1A14", Offset = "0x12E1A14", Length = "0x194")]
	[Token(Token = "0x60007E9")]
	public virtual void SlideIn(BasePanel returnTo) { }

	[Address(RVA = "0x12E1BA8", Offset = "0x12E1BA8", Length = "0x60")]
	[IteratorStateMachine(typeof(<SlideInAnimation>d__13))]
	[Token(Token = "0x60007EA")]
	private IEnumerator SlideInAnimation() { }

}

