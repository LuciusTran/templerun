//Type is in global namespace

[Token(Token = "0x2000121")]
public class GCGUI : BasePanel
{
	[CompilerGenerated]
	[Token(Token = "0x2000122")]
	private sealed class <AnimateText>d__69 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000A33")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000A34")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000A35")]
		public GCGUI <>4__this; //Field offset: 0x20
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x4000A36")]
		public int index; //Field offset: 0x28

		[Token(Token = "0x17000157")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x12ECC00", Offset = "0x12ECC00", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000894")]
			private get { } //Length: 8
		}

		[Token(Token = "0x17000158")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x12ECC40", Offset = "0x12ECC40", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x6000896")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x12EC304", Offset = "0x12EC304", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x6000891")]
		public <AnimateText>d__69(int <>1__state) { }

		[Address(RVA = "0x12ECAD4", Offset = "0x12ECAD4", Length = "0x12C")]
		[Token(Token = "0x6000893")]
		private override bool MoveNext() { }

		[Address(RVA = "0x12ECC00", Offset = "0x12ECC00", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000894")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x12ECC40", Offset = "0x12ECC40", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x6000896")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x12ECC08", Offset = "0x12ECC08", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x6000895")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x12ECAD0", Offset = "0x12ECAD0", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x6000892")]
		private override void System.IDisposable.Dispose() { }

	}

	[CompilerGenerated]
	[Token(Token = "0x2000123")]
	private sealed class <SlideInAnimation>d__52 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000A37")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000A38")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000A39")]
		public GCGUI <>4__this; //Field offset: 0x20
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x4000A3A")]
		private Vector3 <mm>5__2; //Field offset: 0x28

		[Token(Token = "0x17000159")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x12ECED4", Offset = "0x12ECED4", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x600089A")]
			private get { } //Length: 8
		}

		[Token(Token = "0x1700015A")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x12ECF14", Offset = "0x12ECF14", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x600089C")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x12EBAB8", Offset = "0x12EBAB8", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x6000897")]
		public <SlideInAnimation>d__52(int <>1__state) { }

		[Address(RVA = "0x12ECC4C", Offset = "0x12ECC4C", Length = "0x288")]
		[Token(Token = "0x6000899")]
		private override bool MoveNext() { }

		[Address(RVA = "0x12ECED4", Offset = "0x12ECED4", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x600089A")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x12ECF14", Offset = "0x12ECF14", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x600089C")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x12ECEDC", Offset = "0x12ECEDC", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x600089B")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x12ECC48", Offset = "0x12ECC48", Length = "0x4")]
		[DebuggerHidden]
		[Token(Token = "0x6000898")]
		private override void System.IDisposable.Dispose() { }

	}

	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000A02")]
	public GameObject SlideInOffset; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000A03")]
	public GameObject MainMenuButton; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000A04")]
	public List<UISprite> rewardSprites; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000A05")]
	public List<UISprite> rewardSpritesForAnim; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x4000A06")]
	public List<UILabel> rewardConditions; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4000A07")]
	public List<GameObject> rewardButtons; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x4000A08")]
	public List<GameObject> rewardButtonsParents; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x4000A09")]
	public List<UILabel> rewardTitles; //Field offset: 0x88
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x4000A0A")]
	public List<UISprite> rewardedCheckMarkSprites; //Field offset: 0x90
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x4000A0B")]
	public UIAtlas spriteAtlas; //Field offset: 0x98
	[FieldOffset(Offset = "0xA0")]
	[Token(Token = "0x4000A0C")]
	public UILabel timeIndicatorLabel; //Field offset: 0xA0
	[FieldOffset(Offset = "0xA8")]
	[Token(Token = "0x4000A0D")]
	public UILabel nextRewardReqLabel; //Field offset: 0xA8
	[FieldOffset(Offset = "0xB0")]
	[Token(Token = "0x4000A0E")]
	public GameObject currentPositionVisualIndicator; //Field offset: 0xB0
	[FieldOffset(Offset = "0xB8")]
	[Token(Token = "0x4000A0F")]
	public GameObject tierStart; //Field offset: 0xB8
	[FieldOffset(Offset = "0xC0")]
	[Token(Token = "0x4000A10")]
	public float tierPositionYDiff; //Field offset: 0xC0
	[FieldOffset(Offset = "0xC4")]
	[Token(Token = "0x4000A11")]
	public float tierSizeOffset; //Field offset: 0xC4
	[FieldOffset(Offset = "0xC8")]
	[Token(Token = "0x4000A12")]
	public UILabel tierBase; //Field offset: 0xC8
	[FieldOffset(Offset = "0xD0")]
	[Token(Token = "0x4000A13")]
	private Dictionary<Enum, String> spriteNameDict; //Field offset: 0xD0
	[FieldOffset(Offset = "0xD8")]
	[Token(Token = "0x4000A14")]
	private bool _FirstSlide; //Field offset: 0xD8
	[FieldOffset(Offset = "0xE0")]
	[Token(Token = "0x4000A15")]
	public GameObject Header; //Field offset: 0xE0
	[FieldOffset(Offset = "0xE8")]
	[Token(Token = "0x4000A16")]
	public GameObject Tiers; //Field offset: 0xE8
	[FieldOffset(Offset = "0xF0")]
	[Token(Token = "0x4000A17")]
	public GameObject nextReward; //Field offset: 0xF0
	[FieldOffset(Offset = "0xF8")]
	[Token(Token = "0x4000A18")]
	public GameObject tiersScroller; //Field offset: 0xF8
	[FieldOffset(Offset = "0x100")]
	[Token(Token = "0x4000A19")]
	private Vector3 tierScrollerInitialPos; //Field offset: 0x100
	[FieldOffset(Offset = "0x10C")]
	[Token(Token = "0x4000A1A")]
	private float tiersInitialCenterY; //Field offset: 0x10C
	[FieldOffset(Offset = "0x110")]
	[Token(Token = "0x4000A1B")]
	private Vector3 tiersIniitialPos; //Field offset: 0x110
	[FieldOffset(Offset = "0x11C")]
	[Token(Token = "0x4000A1C")]
	private bool isSlidingEndGameNext; //Field offset: 0x11C
	[FieldOffset(Offset = "0x120")]
	[Token(Token = "0x4000A1D")]
	public EndGameUI EndGameInterface; //Field offset: 0x120
	[FieldOffset(Offset = "0x128")]
	[Token(Token = "0x4000A1E")]
	public UILabel backButtonLabel; //Field offset: 0x128
	[FieldOffset(Offset = "0x130")]
	[Token(Token = "0x4000A1F")]
	public int rewardClaimedCount; //Field offset: 0x130
	[FieldOffset(Offset = "0x134")]
	[Token(Token = "0x4000A20")]
	public float rewardClaimOverflowAmount; //Field offset: 0x134
	[FieldOffset(Offset = "0x138")]
	[Token(Token = "0x4000A21")]
	public UILabel gcType; //Field offset: 0x138
	[FieldOffset(Offset = "0x140")]
	[Token(Token = "0x4000A22")]
	private Vector3 oldPanelPos; //Field offset: 0x140
	[FieldOffset(Offset = "0x14C")]
	[Token(Token = "0x4000A23")]
	private Vector3 newPanelPos; //Field offset: 0x14C
	[FieldOffset(Offset = "0x158")]
	[Token(Token = "0x4000A24")]
	public GameObject scrollBarIndicator; //Field offset: 0x158
	[FieldOffset(Offset = "0x160")]
	[Token(Token = "0x4000A25")]
	public GameObject scrollBarParent; //Field offset: 0x160
	[FieldOffset(Offset = "0x168")]
	[Token(Token = "0x4000A26")]
	public int scrollBarIndicatorFirstInitialPos; //Field offset: 0x168
	[FieldOffset(Offset = "0x16C")]
	[Token(Token = "0x4000A27")]
	public int scrollBarIndicatorInitialPosDiff; //Field offset: 0x16C
	[FieldOffset(Offset = "0x170")]
	[Token(Token = "0x4000A28")]
	public GameObject backButtonRef; //Field offset: 0x170
	[FieldOffset(Offset = "0x178")]
	[Token(Token = "0x4000A29")]
	public int rewardsLeftToClaim; //Field offset: 0x178
	[FieldOffset(Offset = "0x180")]
	[SerializeField]
	[Token(Token = "0x4000A2A")]
	private GameObject[] rewardClaimAnimsParent; //Field offset: 0x180
	[FieldOffset(Offset = "0x188")]
	[SerializeField]
	[Token(Token = "0x4000A2B")]
	private Vector3 defaultLocalRewardAnimPos; //Field offset: 0x188
	[FieldOffset(Offset = "0x198")]
	[Token(Token = "0x4000A2C")]
	public UILabel CoinLabel; //Field offset: 0x198
	[FieldOffset(Offset = "0x1A0")]
	[Token(Token = "0x4000A2D")]
	private int _CoinsCount; //Field offset: 0x1A0
	[FieldOffset(Offset = "0x1A4")]
	[Token(Token = "0x4000A2E")]
	private int _CoinCountBeforeReward; //Field offset: 0x1A4
	[FieldOffset(Offset = "0x1A8")]
	[Token(Token = "0x4000A2F")]
	private int _CoinRewardAmount; //Field offset: 0x1A8
	[FieldOffset(Offset = "0x1AC")]
	[Token(Token = "0x4000A30")]
	private bool _OpenedFromEndGame; //Field offset: 0x1AC
	[FieldOffset(Offset = "0x1B0")]
	[Token(Token = "0x4000A31")]
	public GameObject TempCoin; //Field offset: 0x1B0
	[FieldOffset(Offset = "0x1B8")]
	[Token(Token = "0x4000A32")]
	public GameObject WalletCoin; //Field offset: 0x1B8

	[Address(RVA = "0x12EC910", Offset = "0x12EC910", Length = "0x1C0")]
	[Token(Token = "0x6000890")]
	public GCGUI() { }

	[Address(RVA = "0x12EB5AC", Offset = "0x12EB5AC", Length = "0x258")]
	[Token(Token = "0x600088D")]
	private void AdjustCoins() { }

	[Address(RVA = "0x12EC1A4", Offset = "0x12EC1A4", Length = "0x70")]
	[IteratorStateMachine(typeof(<AnimateText>d__69))]
	[Token(Token = "0x600087D")]
	private IEnumerator AnimateText(int index) { }

	[Address(RVA = "0x12E9280", Offset = "0x12E9280", Length = "0xC")]
	[Token(Token = "0x6000869")]
	public void Awake() { }

	[Address(RVA = "0x12EC5F4", Offset = "0x12EC5F4", Length = "0x8")]
	[Token(Token = "0x6000885")]
	public void BounceClaimButtomDown_0() { }

	[Address(RVA = "0x12EC6BC", Offset = "0x12EC6BC", Length = "0x8")]
	[Token(Token = "0x6000886")]
	public void BounceClaimButtomDown_1() { }

	[Address(RVA = "0x12EC6C4", Offset = "0x12EC6C4", Length = "0x8")]
	[Token(Token = "0x6000887")]
	public void BounceClaimButtomDown_2() { }

	[Address(RVA = "0x12EC6CC", Offset = "0x12EC6CC", Length = "0x8")]
	[Token(Token = "0x6000888")]
	public void BounceClaimButtomDown_3() { }

	[Address(RVA = "0x12EC6D4", Offset = "0x12EC6D4", Length = "0x8")]
	[Token(Token = "0x6000889")]
	public void BounceClaimButtomDown_4() { }

	[Address(RVA = "0x12EC6DC", Offset = "0x12EC6DC", Length = "0x8")]
	[Token(Token = "0x600088A")]
	public void BounceClaimButtomDown_5() { }

	[Address(RVA = "0x12EC5FC", Offset = "0x12EC5FC", Length = "0xC0")]
	[Token(Token = "0x600088B")]
	private void BounceClaimButtonDown(int index) { }

	[Address(RVA = "0x12EB864", Offset = "0x12EB864", Length = "0x254")]
	[Token(Token = "0x600086B")]
	private void ChangeGCTimeIndicator() { }

	[Address(RVA = "0x12EBB94", Offset = "0x12EBB94", Length = "0x5E8")]
	[Token(Token = "0x6000875")]
	private void ClaimButtonClicked(int index) { }

	[Address(RVA = "0x12EBB8C", Offset = "0x12EBB8C", Length = "0x8")]
	[Token(Token = "0x600086F")]
	public void ClaimButtonClicked_ms1() { }

	[Address(RVA = "0x12EC17C", Offset = "0x12EC17C", Length = "0x8")]
	[Token(Token = "0x6000870")]
	public void ClaimButtonClicked_ms2() { }

	[Address(RVA = "0x12EC184", Offset = "0x12EC184", Length = "0x8")]
	[Token(Token = "0x6000871")]
	public void ClaimButtonClicked_ms3() { }

	[Address(RVA = "0x12EC18C", Offset = "0x12EC18C", Length = "0x8")]
	[Token(Token = "0x6000872")]
	public void ClaimButtonClicked_ms4() { }

	[Address(RVA = "0x12EC194", Offset = "0x12EC194", Length = "0x8")]
	[Token(Token = "0x6000873")]
	public void ClaimButtonClicked_ms5() { }

	[Address(RVA = "0x12EC19C", Offset = "0x12EC19C", Length = "0x8")]
	[Token(Token = "0x6000874")]
	public void ClaimButtonClicked_ms6() { }

	[Address(RVA = "0x12EC8F8", Offset = "0x12EC8F8", Length = "0x18")]
	[Token(Token = "0x600088E")]
	public virtual void HideAll() { }

	[Address(RVA = "0x12EBAE0", Offset = "0x12EBAE0", Length = "0xAC")]
	[Token(Token = "0x600086D")]
	public void MainMenuClicked() { }

	[Address(RVA = "0x12DEF68", Offset = "0x12DEF68", Length = "0xC")]
	[Token(Token = "0x600088F")]
	public void OpenedFromEndGame() { }

	[Address(RVA = "0x12EC334", Offset = "0x12EC334", Length = "0x298")]
	[Token(Token = "0x6000884")]
	private void RewardAnimComplete(int index) { }

	[Address(RVA = "0x12EC32C", Offset = "0x12EC32C", Length = "0x8")]
	[Token(Token = "0x600087E")]
	public void RewardAnimComplete_0() { }

	[Address(RVA = "0x12EC5CC", Offset = "0x12EC5CC", Length = "0x8")]
	[Token(Token = "0x600087F")]
	public void RewardAnimComplete_1() { }

	[Address(RVA = "0x12EC5D4", Offset = "0x12EC5D4", Length = "0x8")]
	[Token(Token = "0x6000880")]
	public void RewardAnimComplete_2() { }

	[Address(RVA = "0x12EC5DC", Offset = "0x12EC5DC", Length = "0x8")]
	[Token(Token = "0x6000881")]
	public void RewardAnimComplete_3() { }

	[Address(RVA = "0x12EC5E4", Offset = "0x12EC5E4", Length = "0x8")]
	[Token(Token = "0x6000882")]
	public void RewardAnimComplete_4() { }

	[Address(RVA = "0x12EC5EC", Offset = "0x12EC5EC", Length = "0x8")]
	[Token(Token = "0x6000883")]
	public void RewardAnimComplete_5() { }

	[Address(RVA = "0x12EC2D4", Offset = "0x12EC2D4", Length = "0x8")]
	[Token(Token = "0x6000877")]
	public void RewardIconScale_0() { }

	[Address(RVA = "0x12EC2DC", Offset = "0x12EC2DC", Length = "0x8")]
	[Token(Token = "0x6000878")]
	public void RewardIconScale_1() { }

	[Address(RVA = "0x12EC2E4", Offset = "0x12EC2E4", Length = "0x8")]
	[Token(Token = "0x6000879")]
	public void RewardIconScale_2() { }

	[Address(RVA = "0x12EC2EC", Offset = "0x12EC2EC", Length = "0x8")]
	[Token(Token = "0x600087A")]
	public void RewardIconScale_3() { }

	[Address(RVA = "0x12EC2F4", Offset = "0x12EC2F4", Length = "0x8")]
	[Token(Token = "0x600087B")]
	public void RewardIconScale_4() { }

	[Address(RVA = "0x12EC2FC", Offset = "0x12EC2FC", Length = "0x8")]
	[Token(Token = "0x600087C")]
	public void RewardIconScale_5() { }

	[Address(RVA = "0x12EC214", Offset = "0x12EC214", Length = "0xC0")]
	[Token(Token = "0x6000876")]
	public void RewardIconScaleFinished(int index) { }

	[Address(RVA = "0x12DEEF8", Offset = "0x12DEEF8", Length = "0x70")]
	[Token(Token = "0x600086E")]
	public void SlideEndGameNext() { }

	[Address(RVA = "0x12E928C", Offset = "0x12E928C", Length = "0x2320")]
	[Token(Token = "0x600086A")]
	public virtual void SlideIn(BasePanel returnTo) { }

	[Address(RVA = "0x12EB804", Offset = "0x12EB804", Length = "0x60")]
	[IteratorStateMachine(typeof(<SlideInAnimation>d__52))]
	[Token(Token = "0x600086C")]
	private IEnumerator SlideInAnimation() { }

	[Address(RVA = "0x12EC6E4", Offset = "0x12EC6E4", Length = "0x214")]
	[Token(Token = "0x600088C")]
	private void Update() { }

}

