//Type is in global namespace

[Token(Token = "0x200015F")]
public class VCGUI : BasePanel
{
	[CompilerGenerated]
	[Token(Token = "0x2000160")]
	private sealed class <SlideInAnimation>d__28 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000C3D")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000C3E")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000C3F")]
		public VCGUI <>4__this; //Field offset: 0x20
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x4000C40")]
		private FeatureToggleStatus <iapFeatureStatus>5__2; //Field offset: 0x28
		[FieldOffset(Offset = "0x2C")]
		[Token(Token = "0x4000C41")]
		private Vector3 <mm>5__3; //Field offset: 0x2C

		[Token(Token = "0x17000171")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x1306304", Offset = "0x1306304", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000A2E")]
			private get { } //Length: 8
		}

		[Token(Token = "0x17000172")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x1306344", Offset = "0x1306344", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000A30")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x1304F2C", Offset = "0x1304F2C", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x6000A2B")]
		public <SlideInAnimation>d__28(int <>1__state) { }

		[Address(RVA = "0x1305D90", Offset = "0x1305D90", Length = "0x574")]
		[Token(Token = "0x6000A2D")]
		private override bool MoveNext() { }

		[Address(RVA = "0x1306304", Offset = "0x1306304", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000A2E")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x1306344", Offset = "0x1306344", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000A30")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x130630C", Offset = "0x130630C", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x6000A2F")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x1305D8C", Offset = "0x1305D8C", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x6000A2C")]
		private override void System.IDisposable.Dispose() { }

	}

	[Token(Token = "0x4000C3C")]
	private const string _PanelName = "MoreCoins"; //Field offset: 0x0
	[Token(Token = "0x4000C3A")]
	public static VCGUI Instance; //Field offset: 0x0
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000C25")]
	public GameObject SlideInOffset; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000C26")]
	public GameObject BackButton; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000C27")]
	public GameObject Header; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000C28")]
	public GameObject Status; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x4000C29")]
	public UILabel CoinsLabel; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4000C2A")]
	public UILabel MessageLabel; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x4000C2B")]
	public UILabel ComingSoon; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x4000C2C")]
	public RecordManager RecordManager; //Field offset: 0x88
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x4000C2D")]
	public PlayerManager PlayerManager; //Field offset: 0x90
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x4000C2E")]
	public UIStack Stack; //Field offset: 0x98
	[FieldOffset(Offset = "0xA0")]
	[Token(Token = "0x4000C2F")]
	public VCItem ItemPrefab; //Field offset: 0xA0
	[FieldOffset(Offset = "0xA8")]
	[Token(Token = "0x4000C30")]
	public VCItem FreeItemPrefab; //Field offset: 0xA8
	[FieldOffset(Offset = "0xB0")]
	[Token(Token = "0x4000C31")]
	public VCItem NoAdItemPrefab; //Field offset: 0xB0
	[FieldOffset(Offset = "0xB8")]
	[Token(Token = "0x4000C32")]
	public VCItem RestorePurchaseItem; //Field offset: 0xB8
	[FieldOffset(Offset = "0xC0")]
	[Token(Token = "0x4000C33")]
	public GameObject FreeOffersSection; //Field offset: 0xC0
	[FieldOffset(Offset = "0xC8")]
	[Token(Token = "0x4000C34")]
	public UIPanel ScrollViewPanel; //Field offset: 0xC8
	[FieldOffset(Offset = "0xD0")]
	[Token(Token = "0x4000C35")]
	public Transform ScrollContent; //Field offset: 0xD0
	[FieldOffset(Offset = "0xD8")]
	[Token(Token = "0x4000C36")]
	private int OnItem; //Field offset: 0xD8
	[FieldOffset(Offset = "0xDC")]
	[Token(Token = "0x4000C37")]
	private int lastCoins; //Field offset: 0xDC
	[FieldOffset(Offset = "0xE0")]
	[Token(Token = "0x4000C38")]
	private bool ListAcquired; //Field offset: 0xE0
	[FieldOffset(Offset = "0xE1")]
	[Token(Token = "0x4000C39")]
	private bool FreeOffersSetionAdded; //Field offset: 0xE1
	[FieldOffset(Offset = "0xE2")]
	[Token(Token = "0x4000C3B")]
	private bool _FirstSlide; //Field offset: 0xE2

	[Address(RVA = "0x1305D70", Offset = "0x1305D70", Length = "0x1C")]
	[Token(Token = "0x6000A2A")]
	public VCGUI() { }

	[Address(RVA = "0x1305B9C", Offset = "0x1305B9C", Length = "0x168")]
	[Token(Token = "0x6000A26")]
	public void AddFreeOffer(string icon, string offer, string price, string code, float leftShiftAmount = -50) { }

	[Address(RVA = "0x1305ADC", Offset = "0x1305ADC", Length = "0xC0")]
	[Token(Token = "0x6000A25")]
	private void AddFreeOfferSection() { }

	[Address(RVA = "0x1305994", Offset = "0x1305994", Length = "0x148")]
	[Token(Token = "0x6000A24")]
	public void AddNoAdItem(string icon, string offer, string price, string code) { }

	[Address(RVA = "0x1305670", Offset = "0x1305670", Length = "0x148")]
	[Token(Token = "0x6000A22")]
	public void AddVCItem(string icon, string offer, string price, string code) { }

	[Address(RVA = "0x130584C", Offset = "0x130584C", Length = "0x148")]
	[Token(Token = "0x6000A23")]
	public void AddVCRestoreItem(string icon, string offer, string price, string code) { }

	[Address(RVA = "0x1304BC0", Offset = "0x1304BC0", Length = "0x70")]
	[Token(Token = "0x6000A19")]
	private void Awake() { }

	[Address(RVA = "0x1304F24", Offset = "0x1304F24", Length = "0x8")]
	[Token(Token = "0x6000A29")]
	private void BackButtonClicked() { }

	[Address(RVA = "0x1305170", Offset = "0x1305170", Length = "0x4E8")]
	[Token(Token = "0x6000A1F")]
	private void ClearList() { }

	[Address(RVA = "0x13057B8", Offset = "0x13057B8", Length = "0x20")]
	[Token(Token = "0x6000A27")]
	public void DisableLoading() { }

	[Address(RVA = "0x1305D50", Offset = "0x1305D50", Length = "0x20")]
	[Token(Token = "0x6000A28")]
	public void EnableComingSoon() { }

	[Address(RVA = "0x130506C", Offset = "0x130506C", Length = "0x104")]
	[Token(Token = "0x6000A20")]
	private void FillMeuItems() { }

	[Address(RVA = "0x1304E98", Offset = "0x1304E98", Length = "0x8C")]
	[Token(Token = "0x6000A1C")]
	private void OnStoreUnavailableButton(string inButtonName) { }

	[Address(RVA = "0x1305658", Offset = "0x1305658", Length = "0x18")]
	[Token(Token = "0x6000A21")]
	public void RefreshList() { }

	[Address(RVA = "0x1304C54", Offset = "0x1304C54", Length = "0x1E4")]
	[Token(Token = "0x6000A1B")]
	public virtual void SlideIn(BasePanel returnTo) { }

	[Address(RVA = "0x1304E38", Offset = "0x1304E38", Length = "0x60")]
	[IteratorStateMachine(typeof(<SlideInAnimation>d__28))]
	[Token(Token = "0x6000A1D")]
	private IEnumerator SlideInAnimation() { }

	[Address(RVA = "0x1304C30", Offset = "0x1304C30", Length = "0x24")]
	[Token(Token = "0x6000A1A")]
	public virtual void Start() { }

	[Address(RVA = "0x1304F54", Offset = "0x1304F54", Length = "0x118")]
	[Token(Token = "0x6000A1E")]
	private void Update() { }

}

