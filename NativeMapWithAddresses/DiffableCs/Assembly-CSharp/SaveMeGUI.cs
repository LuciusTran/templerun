//Type is in global namespace

[Token(Token = "0x2000145")]
public class SaveMeGUI : BasePanel
{
	[Token(Token = "0x4000B44")]
	private const string _LogChannel = "SaveMeGUI"; //Field offset: 0x0
	[Token(Token = "0x4000B53")]
	private const string _DismissSourceAttribute = "Source"; //Field offset: 0x0
	[Token(Token = "0x4000B54")]
	public static SaveMeGUI Instance; //Field offset: 0x0
	[Token(Token = "0x4000B55")]
	private const string _PanelName = "Play_SaveMe"; //Field offset: 0x0
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000B45")]
	public UISlider ProgressBar; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000B46")]
	public GameObject SkipButton; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000B47")]
	public GameObject PlateSpriteObject; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000B48")]
	public GameObject PlateWithSkipSpriteObject; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x4000B49")]
	public UILabel TitleLabel; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4000B4A")]
	public UISprite PlayAdSprite; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x4000B4B")]
	public UISprite CancelSprite; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x4000B4C")]
	protected bool _IsShowing; //Field offset: 0x88
	[FieldOffset(Offset = "0x8C")]
	[Token(Token = "0x4000B4D")]
	protected float _TimeoutInSeconds; //Field offset: 0x8C
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x4000B4E")]
	protected float _CurrentTimeoutTime; //Field offset: 0x90
	[FieldOffset(Offset = "0x94")]
	[Token(Token = "0x4000B4F")]
	protected bool _SkipButtonActive; //Field offset: 0x94
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x4000B50")]
	protected Action _OnWatchVideo; //Field offset: 0x98
	[FieldOffset(Offset = "0xA0")]
	[Token(Token = "0x4000B51")]
	protected Action _OnTimeout; //Field offset: 0xA0
	[FieldOffset(Offset = "0xA8")]
	[Token(Token = "0x4000B52")]
	protected Action _OnSkipVideo; //Field offset: 0xA8

	[Address(RVA = "0x12F8438", Offset = "0x12F8438", Length = "0x8")]
	[Token(Token = "0x600096B")]
	public SaveMeGUI() { }

	[Address(RVA = "0x12F7C08", Offset = "0x12F7C08", Length = "0x84")]
	[Token(Token = "0x6000963")]
	public void Awake() { }

	[Address(RVA = "0x12F8088", Offset = "0x12F8088", Length = "0x4")]
	[Token(Token = "0x6000965")]
	public void Hide() { }

	[Address(RVA = "0x12F8338", Offset = "0x12F8338", Length = "0x88")]
	[Token(Token = "0x600096A")]
	protected void LogDismissEvent(string inSourceName) { }

	[Address(RVA = "0x12F83C0", Offset = "0x12F83C0", Length = "0x78")]
	[Token(Token = "0x6000968")]
	public void OnClickSkip() { }

	[Address(RVA = "0x12F82C0", Offset = "0x12F82C0", Length = "0x78")]
	[Token(Token = "0x6000967")]
	public void OnClickWatch() { }

	[Address(RVA = "0x12F8248", Offset = "0x12F8248", Length = "0x78")]
	[Token(Token = "0x6000969")]
	protected void OnTimeout() { }

	[Address(RVA = "0x12F7C8C", Offset = "0x12F7C8C", Length = "0x3FC")]
	[Token(Token = "0x6000964")]
	public void ShowWithOptions(Action inOnWatchVideo, Action inOnTimeout, Action inOnSkipVideo) { }

	[Address(RVA = "0x12F808C", Offset = "0x12F808C", Length = "0x1BC")]
	[Token(Token = "0x6000966")]
	public void Update() { }

}

