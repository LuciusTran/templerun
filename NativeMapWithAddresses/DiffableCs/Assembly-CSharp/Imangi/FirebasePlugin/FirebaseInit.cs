namespace Imangi.FirebasePlugin;

[Token(Token = "0x2000278")]
public static class FirebaseInit
{
	[CompilerGenerated]
	[Token(Token = "0x2000279")]
	private sealed class <>c__DisplayClass3_0
	{
		[Token(Token = "0x200027A")]
		private struct <<Initialize>b__0>d : IAsyncStateMachine
		{
			[FieldOffset(Offset = "0x0")]
			[Token(Token = "0x400132F")]
			public int <>1__state; //Field offset: 0x0
			[FieldOffset(Offset = "0x8")]
			[Token(Token = "0x4001330")]
			public AsyncTaskMethodBuilder <>t__builder; //Field offset: 0x8
			[FieldOffset(Offset = "0x20")]
			[Token(Token = "0x4001331")]
			public Task<DependencyStatus> task; //Field offset: 0x20
			[FieldOffset(Offset = "0x28")]
			[Token(Token = "0x4001332")]
			public <>c__DisplayClass3_0 <>4__this; //Field offset: 0x28
			[FieldOffset(Offset = "0x30")]
			[Token(Token = "0x4001333")]
			private TaskAwaiter<String> <>u__1; //Field offset: 0x30

			[Address(RVA = "0x1266528", Offset = "0x1266528", Length = "0x4DC")]
			[Token(Token = "0x600126F")]
			private override void MoveNext() { }

			[Address(RVA = "0x1266A04", Offset = "0x1266A04", Length = "0x68")]
			[DebuggerHidden]
			[Token(Token = "0x6001270")]
			private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

		}

		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x400132E")]
		public Action inCompletedCallback; //Field offset: 0x10

		[Address(RVA = "0x1266318", Offset = "0x1266318", Length = "0x8")]
		[Token(Token = "0x600126C")]
		public <>c__DisplayClass3_0() { }

		[Address(RVA = "0x1266394", Offset = "0x1266394", Length = "0xD4")]
		[AsyncStateMachine(typeof(<<Initialize>b__0>d))]
		[Token(Token = "0x600126D")]
		internal Task <Initialize>b__0(Task<DependencyStatus> task) { }

		[Address(RVA = "0x1266468", Offset = "0x1266468", Length = "0xC0")]
		[Token(Token = "0x600126E")]
		internal void <Initialize>b__1(Task<String> task) { }

	}

	[Token(Token = "0x400132B")]
	private const string _LogChannel = "FirebaseInit"; //Field offset: 0x0
	[Token(Token = "0x400132C")]
	public static string AnalyticsID; //Field offset: 0x0
	[Token(Token = "0x400132D")]
	public static bool IsInitialized; //Field offset: 0x8

	[Address(RVA = "0x1266320", Offset = "0x1266320", Length = "0x74")]
	[Token(Token = "0x600126B")]
	private static FirebaseInit() { }

	[Address(RVA = "0x12660F0", Offset = "0x12660F0", Length = "0x228")]
	[Token(Token = "0x600126A")]
	public static void Initialize(Action inCompletedCallback) { }

}

