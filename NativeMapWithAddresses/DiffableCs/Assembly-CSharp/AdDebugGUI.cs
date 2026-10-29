//Type is in global namespace

[Token(Token = "0x2000003")]
public class AdDebugGUI : MonoBehaviour
{
	[Token(Token = "0x2000005")]
	internal class AdSpaceTrackingInfo
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000024")]
		public AdType Type; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000025")]
		public string AdSpaceName; //Field offset: 0x18
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000026")]
		public AdStatus Status; //Field offset: 0x20
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x4000027")]
		public UILabel Label; //Field offset: 0x28
		[FieldOffset(Offset = "0x30")]
		[Token(Token = "0x4000028")]
		public string LabelRootText; //Field offset: 0x30
		[FieldOffset(Offset = "0x38")]
		[Token(Token = "0x4000029")]
		public float UpdateDelta; //Field offset: 0x38

		[Address(RVA = "0x11EAD60", Offset = "0x11EAD60", Length = "0x80")]
		[Token(Token = "0x6000019")]
		public AdSpaceTrackingInfo(AdType inAdType, string inAdSpaceName, UILabel inLabel, string inLabelRootText) { }

	}

	[Token(Token = "0x2000004")]
	internal enum AdStatus
	{
		Unknown = 0,
		WaitingForFetch = 1,
		Fetching = 2,
		Available = 3,
		NotAvailable = 4,
		Playing = 5,
		WatchedComplete = 6,
		WatchFailed = 7,
	}

	[Token(Token = "0x4000004")]
	protected const string _LogChannel = "AdDebugGUI"; //Field offset: 0x0
	[Token(Token = "0x4000015")]
	protected const string _AdSpaceName_VideoAdTest = "SaveMe"; //Field offset: 0x0
	[Token(Token = "0x4000014")]
	protected const string _AdSpaceName_VideoAd = "SaveMe"; //Field offset: 0x0
	[Token(Token = "0x4000013")]
	protected const string _AdSpaceName_CardAdTest = "NetworkTest"; //Field offset: 0x0
	[Token(Token = "0x4000012")]
	protected const string _AdSpaceName_CardAd = "PostGameMenu"; //Field offset: 0x0
	[Token(Token = "0x400000F")]
	protected static GameObject _AdDebugGO; //Field offset: 0x0
	[Token(Token = "0x4000005")]
	private const string _AdPlacement = "DebugGUI"; //Field offset: 0x0
	[Token(Token = "0x4000010")]
	protected static AdDebugGUI _Instance; //Field offset: 0x8
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000006")]
	public GameObject Button_CardAd; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000007")]
	public UILabel Label_CardAd; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000008")]
	public GameObject Button_CardAdTest; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000009")]
	public UILabel Label_CardAdTest; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x400000A")]
	public GameObject Button_VideoAd; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x400000B")]
	public UILabel Label_VideoAd; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x400000C")]
	public GameObject Button_VideoAdTest; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x400000D")]
	public UILabel Label_VideoAdTest; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x400000E")]
	public GameObject Button_Close; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000011")]
	protected bool _AdEventsHooked; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x4000016")]
	protected List<AdSpaceTrackingInfo> _TrackingInfos; //Field offset: 0x70
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4000017")]
	protected AdSpaceTrackingInfo _Info_CardAd; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x4000018")]
	protected AdSpaceTrackingInfo _Info_CardAdTest; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x4000019")]
	protected AdSpaceTrackingInfo _Info_VideoAd; //Field offset: 0x88
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x400001A")]
	protected AdSpaceTrackingInfo _Info_VideoAdTest; //Field offset: 0x90

	[Address(RVA = "0x11EB9F0", Offset = "0x11EB9F0", Length = "0x7C")]
	[Token(Token = "0x6000018")]
	public AdDebugGUI() { }

	[Address(RVA = "0x11EADE0", Offset = "0x11EADE0", Length = "0x204")]
	[Token(Token = "0x6000006")]
	protected void ChangeStatus(AdStatus inNewStatus, ref AdSpaceTrackingInfo refInfo) { }

	[Address(RVA = "0x11EB298", Offset = "0x11EB298", Length = "0xB0")]
	[Token(Token = "0x6000005")]
	protected AdSpaceTrackingInfo GetTrackingInfo(string inAdSpaceName) { }

	[Address(RVA = "0x11EB348", Offset = "0x11EB348", Length = "0x148")]
	[Token(Token = "0x6000007")]
	protected void HandleButtonClick(ref AdSpaceTrackingInfo refInfo) { }

	[Address(RVA = "0x11EAFE4", Offset = "0x11EAFE4", Length = "0x2B4")]
	[Token(Token = "0x600000A")]
	protected void HookAdEvents() { }

	[Address(RVA = "0x11EB978", Offset = "0x11EB978", Length = "0x4")]
	[Token(Token = "0x6000011")]
	protected void OnAdClickedEvent(AdService inService, AdType inAdType, string inAdSpaceName) { }

	[Address(RVA = "0x11EB9B4", Offset = "0x11EB9B4", Length = "0x3C")]
	[Token(Token = "0x6000017")]
	protected void OnAdDismissedEvent(AdService inService, AdType inAdType, string inAdSpaceName, bool inComplete) { }

	[Address(RVA = "0x11EB980", Offset = "0x11EB980", Length = "0x28")]
	[Token(Token = "0x6000013")]
	protected void OnAdFailedEvent(AdService inService, AdType inAdType, string inAdSpaceName, string inError) { }

	[Address(RVA = "0x11EB9AC", Offset = "0x11EB9AC", Length = "0x4")]
	[Token(Token = "0x6000015")]
	protected void OnAdFailedToReceiveEvent(AdService inService, AdType inAdType, string inAdSpaceName) { }

	[Address(RVA = "0x11EB97C", Offset = "0x11EB97C", Length = "0x4")]
	[Token(Token = "0x6000012")]
	protected void OnAdOpenedEvent(AdService inService, AdType inAdType, string inAdSpaceName) { }

	[Address(RVA = "0x11EB9A8", Offset = "0x11EB9A8", Length = "0x4")]
	[Token(Token = "0x6000014")]
	protected void OnAdReceivedEvent(AdService inService, AdType inAdType, string inAdSpaceName) { }

	[Address(RVA = "0x11EB9B0", Offset = "0x11EB9B0", Length = "0x4")]
	[Token(Token = "0x6000016")]
	protected void OnAdWillLeaveApplicationEvent(AdService inService, AdType inAdType, string inAdSpaceName) { }

	[Address(RVA = "0x11EB958", Offset = "0x11EB958", Length = "0x8")]
	[Token(Token = "0x600000D")]
	public void OnClick_CardAd() { }

	[Address(RVA = "0x11EB960", Offset = "0x11EB960", Length = "0x8")]
	[Token(Token = "0x600000E")]
	public void OnClick_CardAdTest() { }

	[Address(RVA = "0x11EB89C", Offset = "0x11EB89C", Length = "0xBC")]
	[Token(Token = "0x600000C")]
	public void OnClick_Close() { }

	[Address(RVA = "0x11EB968", Offset = "0x11EB968", Length = "0x8")]
	[Token(Token = "0x600000F")]
	public void OnClick_VideoAd() { }

	[Address(RVA = "0x11EB970", Offset = "0x11EB970", Length = "0x8")]
	[Token(Token = "0x6000010")]
	public void OnClick_VideoAdTest() { }

	[Address(RVA = "0x11EA404", Offset = "0x11EA404", Length = "0x95C")]
	[Token(Token = "0x6000004")]
	public static void ShowAdDebugGUI() { }

	[Address(RVA = "0x11EB5EC", Offset = "0x11EB5EC", Length = "0x2B0")]
	[Token(Token = "0x600000B")]
	protected void UnhookAdEvents() { }

	[Address(RVA = "0x11EB5C0", Offset = "0x11EB5C0", Length = "0x2C")]
	[Token(Token = "0x6000009")]
	private void Update() { }

	[Address(RVA = "0x11EB490", Offset = "0x11EB490", Length = "0x130")]
	[Token(Token = "0x6000008")]
	protected void UpdateAdStatus(ref AdSpaceTrackingInfo refInfo) { }

}

