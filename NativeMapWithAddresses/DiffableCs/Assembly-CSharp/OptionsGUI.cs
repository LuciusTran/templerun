//Type is in global namespace

[Token(Token = "0x200013F")]
public class OptionsGUI : BasePanel
{
	[CompilerGenerated]
	[Token(Token = "0x2000140")]
	private sealed class <SlideInAnimation>d__16 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000B14")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000B15")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000B16")]
		public OptionsGUI <>4__this; //Field offset: 0x20
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x4000B17")]
		private Vector3 <backButtonPos>5__2; //Field offset: 0x28
		[FieldOffset(Offset = "0x34")]
		[Token(Token = "0x4000B18")]
		private Vector3 <privacyButtonPos>5__3; //Field offset: 0x34
		[FieldOffset(Offset = "0x40")]
		[Token(Token = "0x4000B19")]
		private UILabel <privacyLabel>5__4; //Field offset: 0x40

		[Token(Token = "0x17000163")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x12F5F38", Offset = "0x12F5F38", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x600093F")]
			private get { } //Length: 8
		}

		[Token(Token = "0x17000164")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x12F5F78", Offset = "0x12F5F78", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000941")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x12F5800", Offset = "0x12F5800", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x600093C")]
		public <SlideInAnimation>d__16(int <>1__state) { }

		[Address(RVA = "0x12F5ABC", Offset = "0x12F5ABC", Length = "0x47C")]
		[Token(Token = "0x600093E")]
		private override bool MoveNext() { }

		[Address(RVA = "0x12F5F38", Offset = "0x12F5F38", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x600093F")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x12F5F78", Offset = "0x12F5F78", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000941")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x12F5F40", Offset = "0x12F5F40", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x6000940")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x12F5AB8", Offset = "0x12F5AB8", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x600093D")]
		private override void System.IDisposable.Dispose() { }

	}

	[Token(Token = "0x4000B12")]
	public static OptionsGUI Instance; //Field offset: 0x0
	[Token(Token = "0x4000B13")]
	private const string _PanelName = "Options"; //Field offset: 0x0
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000B07")]
	public GameObject SlideInOffset; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000B08")]
	public GameObject PrivacyButton; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000B09")]
	public GameObject BackButton; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000B0A")]
	public GameObject Header; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x4000B0B")]
	public GameObject Content; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4000B0C")]
	public GameObject ConsentSection; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x4000B0D")]
	public GameObject SensitivitySlider; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x4000B0E")]
	public GameObject FriendMarkersToggle; //Field offset: 0x88
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x4000B0F")]
	private bool _FriendMarkersToggleHidden; //Field offset: 0x90
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x4000B10")]
	public GameObject OptInButtonText; //Field offset: 0x98
	[FieldOffset(Offset = "0xA0")]
	[Token(Token = "0x4000B11")]
	public GameObject OptOutButtonText; //Field offset: 0xA0

	[Address(RVA = "0x12F5AB0", Offset = "0x12F5AB0", Length = "0x8")]
	[Token(Token = "0x600093B")]
	public OptionsGUI() { }

	[Address(RVA = "0x12F5834", Offset = "0x12F5834", Length = "0x8")]
	[Token(Token = "0x6000934")]
	private void BackButtonClicked() { }

	[Address(RVA = "0x12F584C", Offset = "0x12F584C", Length = "0xBC")]
	[Token(Token = "0x6000936")]
	private void ConsentButtonClicked() { }

	[Address(RVA = "0x12F5A58", Offset = "0x12F5A58", Length = "0x58")]
	[Token(Token = "0x600093A")]
	private void OnFailedToShowPrivacyPolicy() { }

	[Address(RVA = "0x12F5A48", Offset = "0x12F5A48", Length = "0x10")]
	[Token(Token = "0x6000939")]
	private void OnShowPrivacyPolicy(string inMoreInfoURL) { }

	[Address(RVA = "0x12F5908", Offset = "0x12F5908", Length = "0xF8")]
	[Token(Token = "0x6000937")]
	private void PrivacyButtonClicked() { }

	[Address(RVA = "0x12F5A00", Offset = "0x12F5A00", Length = "0x48")]
	[Token(Token = "0x6000938")]
	private void ResetProgressButtonClicked() { }

	[Address(RVA = "0x12F583C", Offset = "0x12F583C", Length = "0x10")]
	[Token(Token = "0x6000935")]
	protected void ReturnToOptions() { }

	[Address(RVA = "0x12F5828", Offset = "0x12F5828", Length = "0xC")]
	[Token(Token = "0x6000933")]
	public void SetFriendMarkersToggleState(bool inSetHidden) { }

	[Address(RVA = "0x12F5580", Offset = "0x12F5580", Length = "0x40")]
	[Token(Token = "0x6000930")]
	public virtual void SlideIn(BasePanel returnTo) { }

	[Address(RVA = "0x12F57A0", Offset = "0x12F57A0", Length = "0x60")]
	[IteratorStateMachine(typeof(<SlideInAnimation>d__16))]
	[Token(Token = "0x6000932")]
	private IEnumerator SlideInAnimation() { }

	[Address(RVA = "0x12F540C", Offset = "0x12F540C", Length = "0x174")]
	[Token(Token = "0x600092F")]
	public virtual void Start() { }

	[Address(RVA = "0x12F55C0", Offset = "0x12F55C0", Length = "0x1E0")]
	[Token(Token = "0x6000931")]
	private void UpdateConsentButtonData() { }

}

