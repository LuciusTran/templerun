//Type is in global namespace

[Token(Token = "0x2000152")]
public class UiLoadingSplashScreen : BasePanel
{
	[CompilerGenerated]
	[Token(Token = "0x2000153")]
	private sealed class <CloseLoadingScreen>d__16 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000BE5")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000BE6")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000BE7")]
		public UiLoadingSplashScreen <>4__this; //Field offset: 0x20

		[Token(Token = "0x1700016D")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x13013CC", Offset = "0x13013CC", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x60009DD")]
			private get { } //Length: 8
		}

		[Token(Token = "0x1700016E")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x130140C", Offset = "0x130140C", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x60009DF")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x13012A0", Offset = "0x13012A0", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x60009DA")]
		public <CloseLoadingScreen>d__16(int <>1__state) { }

		[Address(RVA = "0x13012E0", Offset = "0x13012E0", Length = "0xEC")]
		[Token(Token = "0x60009DC")]
		private override bool MoveNext() { }

		[Address(RVA = "0x13013CC", Offset = "0x13013CC", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x60009DD")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x130140C", Offset = "0x130140C", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x60009DF")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x13013D4", Offset = "0x13013D4", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x60009DE")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x13012DC", Offset = "0x13012DC", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x60009DB")]
		private override void System.IDisposable.Dispose() { }

	}

	[Token(Token = "0x4000BDF")]
	public const float SlideInTime = 0.5; //Field offset: 0x0
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000BDB")]
	public GameObject SlideInOffset; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000BDC")]
	public GameObject Header; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000BDD")]
	public GameObject LoadingBarRoot; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000BDE")]
	public UIFilledSprite LoadingBarSprite; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x4000BE0")]
	private bool _FirstSlide; //Field offset: 0x70
	[FieldOffset(Offset = "0x74")]
	[Token(Token = "0x4000BE1")]
	private int _ElementCount; //Field offset: 0x74
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4000BE2")]
	private int _ElementIdx; //Field offset: 0x78
	[FieldOffset(Offset = "0x7C")]
	[Token(Token = "0x4000BE3")]
	private float _ElementRatio; //Field offset: 0x7C
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x4000BE4")]
	private bool _DestroyWhenComplete; //Field offset: 0x80

	[Address(RVA = "0x13012C8", Offset = "0x13012C8", Length = "0x14")]
	[Token(Token = "0x60009D9")]
	public UiLoadingSplashScreen() { }

	[Address(RVA = "0x1301240", Offset = "0x1301240", Length = "0x60")]
	[IteratorStateMachine(typeof(<CloseLoadingScreen>d__16))]
	[Token(Token = "0x60009D8")]
	private IEnumerator CloseLoadingScreen() { }

	[Address(RVA = "0x130117C", Offset = "0x130117C", Length = "0x8")]
	[Token(Token = "0x60009D3")]
	public void DontDestroyWhenComplete() { }

	[Address(RVA = "0x13011DC", Offset = "0x13011DC", Length = "0x64")]
	[Token(Token = "0x60009D7")]
	public void OnLoadingEnded() { }

	[Address(RVA = "0x13011A0", Offset = "0x13011A0", Length = "0x3C")]
	[Token(Token = "0x60009D6")]
	public void OnLoadingProgress(float inProgress) { }

	[Address(RVA = "0x130119C", Offset = "0x130119C", Length = "0x4")]
	[Token(Token = "0x60009D5")]
	public void OnLoadingStarted() { }

	[Address(RVA = "0x1301184", Offset = "0x1301184", Length = "0x18")]
	[Token(Token = "0x60009D4")]
	public void SetLoadingCount(int inCount) { }

	[Address(RVA = "0x1301024", Offset = "0x1301024", Length = "0x158")]
	[Token(Token = "0x60009D2")]
	public virtual void SlideIn(BasePanel returnTo) { }

}

