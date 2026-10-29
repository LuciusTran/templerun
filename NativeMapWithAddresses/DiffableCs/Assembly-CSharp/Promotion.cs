//Type is in global namespace

[Token(Token = "0x2000183")]
public class Promotion : MonoBehaviour
{
	[Token(Token = "0x4000DEB")]
	public static readonly string LogChannel; //Field offset: 0x0
	[Token(Token = "0x4000DEC")]
	public const string NextPromoCheckPrefKey = "TR NextPromoCheck"; //Field offset: 0x0
	[Token(Token = "0x4000DF0")]
	public static Promotion Instance; //Field offset: 0x8
	[CompilerGenerated]
	[Token(Token = "0x4000DF2")]
	private static Action OnPromoLoadStartEvent; //Field offset: 0x10
	[CompilerGenerated]
	[Token(Token = "0x4000DF3")]
	private static Action<Single> OnPromoLoadProgressEvent; //Field offset: 0x18
	[CompilerGenerated]
	[Token(Token = "0x4000DF4")]
	private static Action OnPromoLoadCompletedEvent; //Field offset: 0x20
	[CompilerGenerated]
	[Token(Token = "0x4000DF5")]
	private static Action OnPromoProcessedCompletedEvent; //Field offset: 0x28
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000DED")]
	protected bool _TestMode; //Field offset: 0x20
	[FieldOffset(Offset = "0x21")]
	[Token(Token = "0x4000DEE")]
	private bool _HasFetchedRemoteConfigData; //Field offset: 0x21
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000DEF")]
	public string url; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000DF1")]
	protected PromoFile PromoFileInstance; //Field offset: 0x30

	[Token(Token = "0x14000006")]
	private static event Action OnPromoLoadCompletedEvent
	{
		[Address(RVA = "0x131D324", Offset = "0x131D324", Length = "0xDC")]
		[CompilerGenerated]
		[Token(Token = "0x6000B56")]
		private add { } //Length: 220
		[Address(RVA = "0x131D400", Offset = "0x131D400", Length = "0xDC")]
		[CompilerGenerated]
		[Token(Token = "0x6000B57")]
		private remove { } //Length: 220
	}

	[Token(Token = "0x14000005")]
	private static event Action<Single> OnPromoLoadProgressEvent
	{
		[Address(RVA = "0x131D13C", Offset = "0x131D13C", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x6000B54")]
		private add { } //Length: 244
		[Address(RVA = "0x131D230", Offset = "0x131D230", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x6000B55")]
		private remove { } //Length: 244
	}

	[Token(Token = "0x14000004")]
	private static event Action OnPromoLoadStartEvent
	{
		[Address(RVA = "0x131CF84", Offset = "0x131CF84", Length = "0xDC")]
		[CompilerGenerated]
		[Token(Token = "0x6000B52")]
		private add { } //Length: 220
		[Address(RVA = "0x131D060", Offset = "0x131D060", Length = "0xDC")]
		[CompilerGenerated]
		[Token(Token = "0x6000B53")]
		private remove { } //Length: 220
	}

	[Token(Token = "0x14000007")]
	private static event Action OnPromoProcessedCompletedEvent
	{
		[Address(RVA = "0x131D4DC", Offset = "0x131D4DC", Length = "0xDC")]
		[CompilerGenerated]
		[Token(Token = "0x6000B58")]
		private add { } //Length: 220
		[Address(RVA = "0x131D5B8", Offset = "0x131D5B8", Length = "0xDC")]
		[CompilerGenerated]
		[Token(Token = "0x6000B59")]
		private remove { } //Length: 220
	}

	[Token(Token = "0x17000184")]
	public bool TestMode
	{
		[Address(RVA = "0x131CF7C", Offset = "0x131CF7C", Length = "0x8")]
		[Token(Token = "0x6000B51")]
		 get { } //Length: 8
	}

	[Address(RVA = "0x131DF28", Offset = "0x131DF28", Length = "0x60")]
	[Token(Token = "0x6000B65")]
	private static Promotion() { }

	[Address(RVA = "0x131DED8", Offset = "0x131DED8", Length = "0x50")]
	[Token(Token = "0x6000B64")]
	public Promotion() { }

	[Address(RVA = "0x131D324", Offset = "0x131D324", Length = "0xDC")]
	[CompilerGenerated]
	[Token(Token = "0x6000B56")]
	private static void add_OnPromoLoadCompletedEvent(Action value) { }

	[Address(RVA = "0x131D13C", Offset = "0x131D13C", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x6000B54")]
	private static void add_OnPromoLoadProgressEvent(Action<Single> value) { }

	[Address(RVA = "0x131CF84", Offset = "0x131CF84", Length = "0xDC")]
	[CompilerGenerated]
	[Token(Token = "0x6000B52")]
	private static void add_OnPromoLoadStartEvent(Action value) { }

	[Address(RVA = "0x131D4DC", Offset = "0x131D4DC", Length = "0xDC")]
	[CompilerGenerated]
	[Token(Token = "0x6000B58")]
	private static void add_OnPromoProcessedCompletedEvent(Action value) { }

	[Address(RVA = "0x131DC50", Offset = "0x131DC50", Length = "0xD0")]
	[Token(Token = "0x6000B62")]
	private bool FetchNewRemoteConfigData() { }

	[Address(RVA = "0x131CF7C", Offset = "0x131CF7C", Length = "0x8")]
	[Token(Token = "0x6000B51")]
	public bool get_TestMode() { }

	[Address(RVA = "0x131DA64", Offset = "0x131DA64", Length = "0x1EC")]
	[Token(Token = "0x6000B61")]
	public void LoadPromo(bool inForce, bool inloadingAfterRun) { }

	[Address(RVA = "0x131D93C", Offset = "0x131D93C", Length = "0x94")]
	[Token(Token = "0x6000B5F")]
	private void OnPromoLoadComplete() { }

	[Address(RVA = "0x131D894", Offset = "0x131D894", Length = "0xA8")]
	[Token(Token = "0x6000B5E")]
	private void OnPromoLoadProgress(float inProgress) { }

	[Address(RVA = "0x131D800", Offset = "0x131D800", Length = "0x94")]
	[Token(Token = "0x6000B5D")]
	private void OnPromoLoadStart() { }

	[Address(RVA = "0x131D9D0", Offset = "0x131D9D0", Length = "0x94")]
	[Token(Token = "0x6000B60")]
	private void OnPromoProcessingComplete() { }

	[Address(RVA = "0x131DECC", Offset = "0x131DECC", Length = "0xC")]
	[Token(Token = "0x6000B63")]
	private void OnRemoteConfigActivateComplete(bool inSuccess) { }

	[Address(RVA = "0x131D694", Offset = "0x131D694", Length = "0x88")]
	[Token(Token = "0x6000B5A")]
	public static void RegisterCallbacks(Action inStartEvent, Action<Single> inProgressEvent, Action inCompletedEvent, Action inProcessedEvent) { }

	[Address(RVA = "0x131D400", Offset = "0x131D400", Length = "0xDC")]
	[CompilerGenerated]
	[Token(Token = "0x6000B57")]
	private static void remove_OnPromoLoadCompletedEvent(Action value) { }

	[Address(RVA = "0x131D230", Offset = "0x131D230", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x6000B55")]
	private static void remove_OnPromoLoadProgressEvent(Action<Single> value) { }

	[Address(RVA = "0x131D060", Offset = "0x131D060", Length = "0xDC")]
	[CompilerGenerated]
	[Token(Token = "0x6000B53")]
	private static void remove_OnPromoLoadStartEvent(Action value) { }

	[Address(RVA = "0x131D5B8", Offset = "0x131D5B8", Length = "0xDC")]
	[CompilerGenerated]
	[Token(Token = "0x6000B59")]
	private static void remove_OnPromoProcessedCompletedEvent(Action value) { }

	[Address(RVA = "0x131D7A4", Offset = "0x131D7A4", Length = "0x5C")]
	[Token(Token = "0x6000B5C")]
	private void Start() { }

	[Address(RVA = "0x131D71C", Offset = "0x131D71C", Length = "0x88")]
	[Token(Token = "0x6000B5B")]
	public static void UnregisterCallbacks(Action inStartEvent, Action<Single> inProgressEvent, Action inCompletedEvent, Action inProcessedEvent) { }

}

