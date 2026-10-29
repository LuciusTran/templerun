//Type is in global namespace

[Token(Token = "0x200015A")]
public class UIShareHelper : MonoBehaviour
{
	[CompilerGenerated]
	[Token(Token = "0x200015B")]
	private sealed class <TakeDelayedScreenShot>d__12 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000C19")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000C1A")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000C1B")]
		public UIShareHelper <>4__this; //Field offset: 0x20
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x4000C1C")]
		public string inMessageFormatStr; //Field offset: 0x28

		[Token(Token = "0x1700016F")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x1304288", Offset = "0x1304288", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000A0E")]
			private get { } //Length: 8
		}

		[Token(Token = "0x17000170")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x13042C8", Offset = "0x13042C8", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000A10")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x1303984", Offset = "0x1303984", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x6000A0B")]
		public <TakeDelayedScreenShot>d__12(int <>1__state) { }

		[Address(RVA = "0x130417C", Offset = "0x130417C", Length = "0x10C")]
		[Token(Token = "0x6000A0D")]
		private override bool MoveNext() { }

		[Address(RVA = "0x1304288", Offset = "0x1304288", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000A0E")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x13042C8", Offset = "0x13042C8", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000A10")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x1304290", Offset = "0x1304290", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x6000A0F")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x1304178", Offset = "0x1304178", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x6000A0C")]
		private override void System.IDisposable.Dispose() { }

	}

	[Token(Token = "0x4000C14")]
	public static readonly string LogChannel; //Field offset: 0x0
	[Token(Token = "0x4000C15")]
	private static UIShareHelper _Instance; //Field offset: 0x8
	[Token(Token = "0x4000C16")]
	private static GameObject ShareHelperGameObj; //Field offset: 0x10
	[Token(Token = "0x4000C18")]
	private static string lastShareMessage; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000C17")]
	private string ScreenShotFile; //Field offset: 0x20

	[Address(RVA = "0x1304118", Offset = "0x1304118", Length = "0x60")]
	[Token(Token = "0x6000A0A")]
	private static UIShareHelper() { }

	[Address(RVA = "0x13040C8", Offset = "0x13040C8", Length = "0x50")]
	[Token(Token = "0x6000A09")]
	public UIShareHelper() { }

	[Address(RVA = "0x13033D8", Offset = "0x13033D8", Length = "0x50")]
	[Token(Token = "0x60009FB")]
	public static bool CanSocialShare() { }

	[Address(RVA = "0x1303A44", Offset = "0x1303A44", Length = "0x74")]
	[Token(Token = "0x6000A02")]
	protected static void DisplayProgressDialog(string inTitle, string inMessage) { }

	[Address(RVA = "0x130335C", Offset = "0x130335C", Length = "0x7C")]
	[Token(Token = "0x60009FA")]
	public static void EnableIfCanSocialShare(UIButton inShareButton) { }

	[Address(RVA = "0x1303214", Offset = "0x1303214", Length = "0x148")]
	[Token(Token = "0x60009F9")]
	public static UIShareHelper GetInstance() { }

	[Address(RVA = "0x13039AC", Offset = "0x13039AC", Length = "0x98")]
	[Token(Token = "0x6000A01")]
	private static string GetPathToImage(string inImageName) { }

	[Address(RVA = "0x1303AB8", Offset = "0x1303AB8", Length = "0x58")]
	[Token(Token = "0x6000A03")]
	protected static void HideProgressDialog() { }

	[Address(RVA = "0x1303860", Offset = "0x1303860", Length = "0xB8")]
	[Token(Token = "0x60009FE")]
	private static void OnCancelled(string inButtonTitle) { }

	[Address(RVA = "0x1303428", Offset = "0x1303428", Length = "0x328")]
	[Token(Token = "0x60009FC")]
	public static void OnShareButtonClicked(string inMessageFormatStr) { }

	[Address(RVA = "0x1303D40", Offset = "0x1303D40", Length = "0x7C")]
	[Token(Token = "0x6000A06")]
	protected static void OnShareCancelled(string inMessage) { }

	[Address(RVA = "0x1303DBC", Offset = "0x1303DBC", Length = "0x7C")]
	[Token(Token = "0x6000A07")]
	protected static void OnShareFailed(string inMessage) { }

	[Address(RVA = "0x1303E38", Offset = "0x1303E38", Length = "0x290")]
	[Token(Token = "0x6000A08")]
	protected static void OnShareSucceeded(string inMessage) { }

	[Address(RVA = "0x1303774", Offset = "0x1303774", Length = "0xEC")]
	[Token(Token = "0x60009FD")]
	private static void OnTryAgain(string inButtonTitle) { }

	[Address(RVA = "0x1303B10", Offset = "0x1303B10", Length = "0x118")]
	[Token(Token = "0x6000A04")]
	protected static void RegisterShareHandlers() { }

	[Address(RVA = "0x1303750", Offset = "0x1303750", Length = "0x24")]
	[Token(Token = "0x60009FF")]
	private void ScreenshotCoroutine(string inMessageFormatStr, bool inIsPostGame) { }

	[Address(RVA = "0x1303918", Offset = "0x1303918", Length = "0x6C")]
	[IteratorStateMachine(typeof(<TakeDelayedScreenShot>d__12))]
	[Token(Token = "0x6000A00")]
	private IEnumerator TakeDelayedScreenShot(string inMessageFormatStr, bool inIsPostGame) { }

	[Address(RVA = "0x1303C28", Offset = "0x1303C28", Length = "0x118")]
	[Token(Token = "0x6000A05")]
	protected static void UnregisterShareHandlers() { }

}

