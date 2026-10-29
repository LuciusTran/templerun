//Type is in global namespace

[ExecuteInEditMode]
[Token(Token = "0x200014B")]
public class StoreItem : MonoBehaviour
{
	[CompilerGenerated]
	[Token(Token = "0x200014D")]
	private sealed class <DownloadImage>d__42 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000BB6")]
		private int <>1__state; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000BB7")]
		private object <>2__current; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000BB8")]
		public string name; //Field offset: 0x20
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x4000BB9")]
		public string url; //Field offset: 0x28
		[FieldOffset(Offset = "0x30")]
		[Token(Token = "0x4000BBA")]
		private string <localPath>5__2; //Field offset: 0x30
		[FieldOffset(Offset = "0x38")]
		[Token(Token = "0x4000BBB")]
		private UnityWebRequest <webRequest>5__3; //Field offset: 0x38

		[Token(Token = "0x1700016B")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[Address(RVA = "0x12FFBBC", Offset = "0x12FFBBC", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x60009BA")]
			private get { } //Length: 8
		}

		[Token(Token = "0x1700016C")]
		private override object System.Collections.IEnumerator.Current
		{
			[Address(RVA = "0x12FFBFC", Offset = "0x12FFBFC", Length = "0x8")]
			[DebuggerHidden]
			[Token(Token = "0x60009BC")]
			private get { } //Length: 8
		}

		[Address(RVA = "0x12FE6B4", Offset = "0x12FE6B4", Length = "0x28")]
		[DebuggerHidden]
		[Token(Token = "0x60009B6")]
		public <DownloadImage>d__42(int <>1__state) { }

		[Address(RVA = "0x12FFB0C", Offset = "0x12FFB0C", Length = "0xB0")]
		[Token(Token = "0x60009B9")]
		private void <>m__Finally1() { }

		[Address(RVA = "0x12FF2CC", Offset = "0x12FF2CC", Length = "0x840")]
		[Token(Token = "0x60009B8")]
		private override bool MoveNext() { }

		[Address(RVA = "0x12FFBBC", Offset = "0x12FFBBC", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x60009BA")]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[Address(RVA = "0x12FFBFC", Offset = "0x12FFBFC", Length = "0x8")]
		[DebuggerHidden]
		[Token(Token = "0x60009BC")]
		private override object System.Collections.IEnumerator.get_Current() { }

		[Address(RVA = "0x12FFBC4", Offset = "0x12FFBC4", Length = "0x38")]
		[DebuggerHidden]
		[Token(Token = "0x60009BB")]
		private override void System.Collections.IEnumerator.Reset() { }

		[Address(RVA = "0x12FF2B0", Offset = "0x12FF2B0", Length = "0x1C")]
		[DebuggerHidden]
		[Token(Token = "0x60009B7")]
		private override void System.IDisposable.Dispose() { }

	}

	[Token(Token = "0x200014C")]
	internal enum StoreItemClass
	{
		None = 0,
		PowerUp = 1,
		Utility = 2,
		Character = 3,
		Wallpaper = 4,
	}

	[Token(Token = "0x4000BAD")]
	protected static bool _IsDownloading; //Field offset: 0x0
	[Token(Token = "0x4000BAC")]
	private const int kStoreItemLevelMax = 5; //Field offset: 0x0
	[Token(Token = "0x4000BAE")]
	private static String[] IconNameByType; //Field offset: 0x8
	[Token(Token = "0x4000BAF")]
	private static StoreItemClass[] ClassByType; //Field offset: 0x10
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000B96")]
	public StoreItemType Type; //Field offset: 0x20
	[FieldOffset(Offset = "0x24")]
	[Token(Token = "0x4000B97")]
	public StoreItemClass Class; //Field offset: 0x24
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000B98")]
	public int Price; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000B99")]
	public Transform ProgressBar; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000B9A")]
	public UILabel CostLabel; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000B9B")]
	public UILabel ButtonLabel; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4000B9C")]
	public Transform Counter; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000B9D")]
	public UILabel CounterLabel; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000B9E")]
	public UISprite UpgradeCoin; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000B9F")]
	public UILabel DescriptionLabel; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000BA0")]
	public UISprite Icon; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x4000BA1")]
	public UISprite Bar1; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4000BA2")]
	public UISprite Bar2; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x4000BA3")]
	public UISprite Bar3; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x4000BA4")]
	public UISprite Bar4; //Field offset: 0x88
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x4000BA5")]
	public UISprite Bar5; //Field offset: 0x90
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x4000BA6")]
	public AlertView AlertView; //Field offset: 0x98
	[FieldOffset(Offset = "0xA0")]
	[Token(Token = "0x4000BA7")]
	public PlayerManager PlayerManager; //Field offset: 0xA0
	[FieldOffset(Offset = "0xA8")]
	[Token(Token = "0x4000BA8")]
	public RecordManager RecordManager; //Field offset: 0xA8
	[FieldOffset(Offset = "0xB0")]
	[Token(Token = "0x4000BA9")]
	private int LastPrice; //Field offset: 0xB0
	[FieldOffset(Offset = "0xB4")]
	[Token(Token = "0x4000BAA")]
	private StoreItemClass LastClass; //Field offset: 0xB4
	[FieldOffset(Offset = "0xB8")]
	[Token(Token = "0x4000BAB")]
	private StoreItemType LastType; //Field offset: 0xB8

	[Address(RVA = "0x12FEC00", Offset = "0x12FEC00", Length = "0x5A0")]
	[Token(Token = "0x60009B4")]
	private static StoreItem() { }

	[Address(RVA = "0x12FEBE8", Offset = "0x12FEBE8", Length = "0x18")]
	[Token(Token = "0x60009B3")]
	public StoreItem() { }

	[Address(RVA = "0x12FF1A0", Offset = "0x12FF1A0", Length = "0x110")]
	[CompilerGenerated]
	[Token(Token = "0x60009B5")]
	private void <BuyItem>b__39_0() { }

	[Address(RVA = "0x12FD2B4", Offset = "0x12FD2B4", Length = "0x1A0")]
	[Token(Token = "0x60009AC")]
	private void ActivateCharacter(StoreItemType type) { }

	[Address(RVA = "0x12FD520", Offset = "0x12FD520", Length = "0xF04")]
	[Token(Token = "0x60009AD")]
	private void BuyItem() { }

	[Address(RVA = "0x12FB958", Offset = "0x12FB958", Length = "0x1DC")]
	[Token(Token = "0x60009A5")]
	public void Configure() { }

	[Address(RVA = "0x12FE648", Offset = "0x12FE648", Length = "0x6C")]
	[IteratorStateMachine(typeof(<DownloadImage>d__42))]
	[Token(Token = "0x60009B0")]
	private IEnumerator DownloadImage(string url, string name) { }

	[Address(RVA = "0x12FD454", Offset = "0x12FD454", Length = "0xCC")]
	[Token(Token = "0x60009AE")]
	private void GrabWallpaper(StoreItemType type) { }

	[Address(RVA = "0x12FE424", Offset = "0x12FE424", Length = "0x224")]
	[Token(Token = "0x60009AF")]
	private void GrabWallPaper(string id) { }

	[Address(RVA = "0x12FE954", Offset = "0x12FE954", Length = "0x294")]
	[Token(Token = "0x60009B2")]
	protected void ImageSaveFailed(string inError) { }

	[Address(RVA = "0x12FE6DC", Offset = "0x12FE6DC", Length = "0x278")]
	[Token(Token = "0x60009B1")]
	protected void ImageSaveSuccessful() { }

	[Address(RVA = "0x12FD0B0", Offset = "0x12FD0B0", Length = "0x204")]
	[Token(Token = "0x60009AB")]
	private void OnClick() { }

	[Address(RVA = "0x12FBB8C", Offset = "0x12FBB8C", Length = "0x14")]
	[Token(Token = "0x60009A4")]
	public void Reconfigure() { }

	[Address(RVA = "0x12FBC24", Offset = "0x12FBC24", Length = "0xB8")]
	[Token(Token = "0x60009A6")]
	private void SetIcon() { }

	[Address(RVA = "0x12FBB6C", Offset = "0x12FBB6C", Length = "0x20")]
	[Token(Token = "0x60009A3")]
	private void SetVisible(GameObject go, bool visible) { }

	[Address(RVA = "0x12FB954", Offset = "0x12FB954", Length = "0x4")]
	[Token(Token = "0x60009A1")]
	private void Start() { }

	[Address(RVA = "0x12FBB34", Offset = "0x12FBB34", Length = "0x38")]
	[Token(Token = "0x60009A2")]
	private void Update() { }

	[Address(RVA = "0x12FCDE8", Offset = "0x12FCDE8", Length = "0x2C8")]
	[Token(Token = "0x60009AA")]
	private void UpdateBar() { }

	[Address(RVA = "0x12FBBA0", Offset = "0x12FBBA0", Length = "0x84")]
	[Token(Token = "0x60009A7")]
	private void UpdateClass() { }

	[Address(RVA = "0x12FC418", Offset = "0x12FC418", Length = "0x9D0")]
	[Token(Token = "0x60009A9")]
	private void UpdateDescription() { }

	[Address(RVA = "0x12FBCDC", Offset = "0x12FBCDC", Length = "0x73C")]
	[Token(Token = "0x60009A8")]
	private void UpdatePrice() { }

}

