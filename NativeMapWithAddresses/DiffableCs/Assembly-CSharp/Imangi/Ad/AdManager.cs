namespace Imangi.Ad;

[Token(Token = "0x20002A3")]
public class AdManager : MonoBehaviour
{
	[Token(Token = "0x20002A4")]
	internal sealed class AdEventDelegate_String : MulticastDelegate
	{

		[Address(RVA = "0x127D834", Offset = "0x127D834", Length = "0x8C")]
		[Token(Token = "0x6001494")]
		public AdEventDelegate_String(object object, IntPtr method) { }

		[Address(RVA = "0x127D8D4", Offset = "0x127D8D4", Length = "0xBC")]
		[Token(Token = "0x6001496")]
		public override IAsyncResult BeginInvoke(AdService inService, AdType inType, string inString, AsyncCallback callback, object object) { }

		[Address(RVA = "0x127D990", Offset = "0x127D990", Length = "0xC")]
		[Token(Token = "0x6001497")]
		public override void EndInvoke(IAsyncResult result) { }

		[Address(RVA = "0x127D8C0", Offset = "0x127D8C0", Length = "0x14")]
		[Token(Token = "0x6001495")]
		public override void Invoke(AdService inService, AdType inType, string inString) { }

	}

	[Token(Token = "0x20002A6")]
	internal sealed class AdEventDelegate_StringBool : MulticastDelegate
	{

		[Address(RVA = "0x127DB18", Offset = "0x127DB18", Length = "0x8C")]
		[Token(Token = "0x600149C")]
		public AdEventDelegate_StringBool(object object, IntPtr method) { }

		[Address(RVA = "0x127DBBC", Offset = "0x127DBBC", Length = "0xF8")]
		[Token(Token = "0x600149E")]
		public override IAsyncResult BeginInvoke(AdService inService, AdType inAdType, string inString, bool inBool, AsyncCallback callback, object object) { }

		[Address(RVA = "0x127DCB4", Offset = "0x127DCB4", Length = "0xC")]
		[Token(Token = "0x600149F")]
		public override void EndInvoke(IAsyncResult result) { }

		[Address(RVA = "0x127DBA4", Offset = "0x127DBA4", Length = "0x18")]
		[Token(Token = "0x600149D")]
		public override void Invoke(AdService inService, AdType inAdType, string inString, bool inBool) { }

	}

	[Token(Token = "0x20002A5")]
	internal sealed class AdEventDelegate_StringString : MulticastDelegate
	{

		[Address(RVA = "0x127D99C", Offset = "0x127D99C", Length = "0x8C")]
		[Token(Token = "0x6001498")]
		public AdEventDelegate_StringString(object object, IntPtr method) { }

		[Address(RVA = "0x127DA3C", Offset = "0x127DA3C", Length = "0xD0")]
		[Token(Token = "0x600149A")]
		public override IAsyncResult BeginInvoke(AdService inService, AdType inType, string inString0, string inString1, AsyncCallback callback, object object) { }

		[Address(RVA = "0x127DB0C", Offset = "0x127DB0C", Length = "0xC")]
		[Token(Token = "0x600149B")]
		public override void EndInvoke(IAsyncResult result) { }

		[Address(RVA = "0x127DA28", Offset = "0x127DA28", Length = "0x14")]
		[Token(Token = "0x6001499")]
		public override void Invoke(AdService inService, AdType inType, string inString0, string inString1) { }

	}

	[Token(Token = "0x40013C9")]
	public const string LogChannel = "Ad"; //Field offset: 0x0
	[Token(Token = "0x40013EB")]
	public const string AdError_AdNotAvailable = "AdNotAvailable"; //Field offset: 0x0
	[Token(Token = "0x40013EA")]
	public const string AdError_InvalidType = "InvalidType"; //Field offset: 0x0
	[Token(Token = "0x40013E9")]
	public const string AdError_NoConnection = "NoConnection"; //Field offset: 0x0
	[Token(Token = "0x40013E8")]
	public const string AdError_NotPrivacyCompliant = "NotPrivacyCompliant"; //Field offset: 0x0
	[Token(Token = "0x40013E7")]
	public const string AdError_ServiceDisabled = "ServiceDisabled"; //Field offset: 0x0
	[Token(Token = "0x40013E6")]
	public const string AdError_ServiceNotFound = "ServiceNotFound"; //Field offset: 0x0
	[Token(Token = "0x40013E2")]
	protected const float _InitializationDelay = 1.5; //Field offset: 0x0
	[Token(Token = "0x40013EE")]
	public const string AdError_ClassNotFound = "ClassNotFound"; //Field offset: 0x0
	[Token(Token = "0x40013EF")]
	public const string AdError_VideoAdsDisabled = "VideoAdsDisabled"; //Field offset: 0x0
	[Token(Token = "0x40013F0")]
	public const string AdError_CardAdsDisabled = "CardAdsDisabled"; //Field offset: 0x0
	[Token(Token = "0x40013F1")]
	public const string AdError_NotInitialized = "NotInitialized"; //Field offset: 0x0
	[Token(Token = "0x40013EC")]
	public const string AdError_ProviderInternal = "ProviderInternal"; //Field offset: 0x0
	[Token(Token = "0x40013ED")]
	public const string AdError_MissingImplementation = "MissingImplementation"; //Field offset: 0x0
	[Token(Token = "0x40013CA")]
	public const string RemoteConfigKey = "AdManager"; //Field offset: 0x0
	[Token(Token = "0x40013CB")]
	public const string AdServiceInfosKey = "AdServiceInfos"; //Field offset: 0x0
	[Token(Token = "0x40013CC")]
	protected static AdServicePlatform CurrentPlatform; //Field offset: 0x0
	[Token(Token = "0x40013D0")]
	protected static AdManager Instance; //Field offset: 0x8
	[Token(Token = "0x40013D1")]
	protected static GameObject ImangiAdGameObj; //Field offset: 0x10
	[Token(Token = "0x40013E3")]
	protected static bool _UseTestAdSpaceNames; //Field offset: 0x18
	[Token(Token = "0x40013E4")]
	protected static bool _UseTestDevicesIfAvailable; //Field offset: 0x19
	[Token(Token = "0x40013E5")]
	protected static bool ImangiAd_VerboseLogging; //Field offset: 0x1A
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40013CD")]
	public AdService ActiveService; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40013CE")]
	public ImangiAdServiceHandler ActiveServiceHandler; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40013CF")]
	public AdServiceInitInfo ServiceInitInfo; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x40013D2")]
	protected bool _RequirePrivacyCompliantNetworks; //Field offset: 0x38
	[FieldOffset(Offset = "0x39")]
	[Token(Token = "0x40013D3")]
	protected bool _IsCCPA; //Field offset: 0x39
	[FieldOffset(Offset = "0x3A")]
	[Token(Token = "0x40013D4")]
	protected bool _HasConsent; //Field offset: 0x3A
	[FieldOffset(Offset = "0x3B")]
	[Token(Token = "0x40013D5")]
	protected bool _IsAgeRestricted; //Field offset: 0x3B
	[FieldOffset(Offset = "0x3C")]
	[Token(Token = "0x40013D6")]
	protected bool _adMobInitStatusPrivacyFlow; //Field offset: 0x3C
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x40013D7")]
	public List<String> PrefetchVideoNames; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x40013D8")]
	public List<String> PrefetchCardNames; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x40013D9")]
	public List<String> PrefetchBannerNames; //Field offset: 0x50
	[CompilerGenerated]
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x40013DA")]
	private AdEventDelegate_String OnAdClickedEvent; //Field offset: 0x58
	[CompilerGenerated]
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x40013DB")]
	private AdEventDelegate_String OnAdOpenedEvent; //Field offset: 0x60
	[CompilerGenerated]
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x40013DC")]
	private AdEventDelegate_StringString OnAdFailedEvent; //Field offset: 0x68
	[CompilerGenerated]
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x40013DD")]
	private AdEventDelegate_String OnAdReceivedEvent; //Field offset: 0x70
	[CompilerGenerated]
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x40013DE")]
	private AdEventDelegate_String OnAdFailedToReceiveEvent; //Field offset: 0x78
	[CompilerGenerated]
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x40013DF")]
	private AdEventDelegate_String OnAdWillLeaveApplicationEvent; //Field offset: 0x80
	[CompilerGenerated]
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x40013E0")]
	private AdEventDelegate_StringBool OnAdDismissedEvent; //Field offset: 0x88
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x40013E1")]
	protected bool _InitializationCompleted; //Field offset: 0x90
	[FieldOffset(Offset = "0x91")]
	[Token(Token = "0x40013F2")]
	private bool _ActiveServiceExplicitlySet; //Field offset: 0x91
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x40013F3")]
	private readonly Dictionary<AdType, String> _LastAdLoadError; //Field offset: 0x98

	[Token(Token = "0x14000074")]
	public event AdEventDelegate_String OnAdClickedEvent
	{
		[Address(RVA = "0x127A2BC", Offset = "0x127A2BC", Length = "0x9C")]
		[CompilerGenerated]
		[Token(Token = "0x6001447")]
		 add { } //Length: 156
		[Address(RVA = "0x127A358", Offset = "0x127A358", Length = "0x9C")]
		[CompilerGenerated]
		[Token(Token = "0x6001448")]
		 remove { } //Length: 156
	}

	[Token(Token = "0x1400007A")]
	public event AdEventDelegate_StringBool OnAdDismissedEvent
	{
		[Address(RVA = "0x127AA0C", Offset = "0x127AA0C", Length = "0x9C")]
		[CompilerGenerated]
		[Token(Token = "0x6001453")]
		 add { } //Length: 156
		[Address(RVA = "0x127AAA8", Offset = "0x127AAA8", Length = "0x9C")]
		[CompilerGenerated]
		[Token(Token = "0x6001454")]
		 remove { } //Length: 156
	}

	[Token(Token = "0x14000076")]
	public event AdEventDelegate_StringString OnAdFailedEvent
	{
		[Address(RVA = "0x127A52C", Offset = "0x127A52C", Length = "0x9C")]
		[CompilerGenerated]
		[Token(Token = "0x600144B")]
		 add { } //Length: 156
		[Address(RVA = "0x127A5C8", Offset = "0x127A5C8", Length = "0x9C")]
		[CompilerGenerated]
		[Token(Token = "0x600144C")]
		 remove { } //Length: 156
	}

	[Token(Token = "0x14000078")]
	public event AdEventDelegate_String OnAdFailedToReceiveEvent
	{
		[Address(RVA = "0x127A79C", Offset = "0x127A79C", Length = "0x9C")]
		[CompilerGenerated]
		[Token(Token = "0x600144F")]
		 add { } //Length: 156
		[Address(RVA = "0x127A838", Offset = "0x127A838", Length = "0x9C")]
		[CompilerGenerated]
		[Token(Token = "0x6001450")]
		 remove { } //Length: 156
	}

	[Token(Token = "0x14000075")]
	public event AdEventDelegate_String OnAdOpenedEvent
	{
		[Address(RVA = "0x127A3F4", Offset = "0x127A3F4", Length = "0x9C")]
		[CompilerGenerated]
		[Token(Token = "0x6001449")]
		 add { } //Length: 156
		[Address(RVA = "0x127A490", Offset = "0x127A490", Length = "0x9C")]
		[CompilerGenerated]
		[Token(Token = "0x600144A")]
		 remove { } //Length: 156
	}

	[Token(Token = "0x14000077")]
	public event AdEventDelegate_String OnAdReceivedEvent
	{
		[Address(RVA = "0x127A664", Offset = "0x127A664", Length = "0x9C")]
		[CompilerGenerated]
		[Token(Token = "0x600144D")]
		 add { } //Length: 156
		[Address(RVA = "0x127A700", Offset = "0x127A700", Length = "0x9C")]
		[CompilerGenerated]
		[Token(Token = "0x600144E")]
		 remove { } //Length: 156
	}

	[Token(Token = "0x14000079")]
	public event AdEventDelegate_String OnAdWillLeaveApplicationEvent
	{
		[Address(RVA = "0x127A8D4", Offset = "0x127A8D4", Length = "0x9C")]
		[CompilerGenerated]
		[Token(Token = "0x6001451")]
		 add { } //Length: 156
		[Address(RVA = "0x127A970", Offset = "0x127A970", Length = "0x9C")]
		[CompilerGenerated]
		[Token(Token = "0x6001452")]
		 remove { } //Length: 156
	}

	[Token(Token = "0x17000241")]
	public bool Initialized
	{
		[Address(RVA = "0x127AB44", Offset = "0x127AB44", Length = "0x8")]
		[Token(Token = "0x6001455")]
		 get { } //Length: 8
	}

	[Token(Token = "0x17000242")]
	public static bool UseTestAdSpaceNames
	{
		[Address(RVA = "0x127AB4C", Offset = "0x127AB4C", Length = "0x8")]
		[Token(Token = "0x6001456")]
		 get { } //Length: 8
		[Address(RVA = "0x127AB54", Offset = "0x127AB54", Length = "0x104")]
		[Token(Token = "0x6001457")]
		 set { } //Length: 260
	}

	[Token(Token = "0x17000243")]
	public static bool UseTestDevicesIfAvailable
	{
		[Address(RVA = "0x127AC58", Offset = "0x127AC58", Length = "0x8")]
		[Token(Token = "0x6001458")]
		 get { } //Length: 8
		[Address(RVA = "0x127AC60", Offset = "0x127AC60", Length = "0x130")]
		[Token(Token = "0x6001459")]
		 set { } //Length: 304
	}

	[Address(RVA = "0x127D7E0", Offset = "0x127D7E0", Length = "0x54")]
	[Token(Token = "0x6001493")]
	private static AdManager() { }

	[Address(RVA = "0x127B0D4", Offset = "0x127B0D4", Length = "0x104")]
	[Token(Token = "0x600145C")]
	protected AdManager() { }

	[Address(RVA = "0x127D18C", Offset = "0x127D18C", Length = "0x1C8")]
	[Token(Token = "0x6001489")]
	public void Ad_ServiceInitializeFailed(AdService inService, string inError) { }

	[Address(RVA = "0x127648C", Offset = "0x127648C", Length = "0x35C")]
	[Token(Token = "0x6001488")]
	public void Ad_ServiceInitializeSuccessful(AdService inService) { }

	[Address(RVA = "0x127D354", Offset = "0x127D354", Length = "0xF8")]
	[Token(Token = "0x600148A")]
	public void AdClicked(AdService inService, AdType inType, string inAdSpaceName) { }

	[Address(RVA = "0x127A2BC", Offset = "0x127A2BC", Length = "0x9C")]
	[CompilerGenerated]
	[Token(Token = "0x6001447")]
	public void add_OnAdClickedEvent(AdEventDelegate_String value) { }

	[Address(RVA = "0x127AA0C", Offset = "0x127AA0C", Length = "0x9C")]
	[CompilerGenerated]
	[Token(Token = "0x6001453")]
	public void add_OnAdDismissedEvent(AdEventDelegate_StringBool value) { }

	[Address(RVA = "0x127A52C", Offset = "0x127A52C", Length = "0x9C")]
	[CompilerGenerated]
	[Token(Token = "0x600144B")]
	public void add_OnAdFailedEvent(AdEventDelegate_StringString value) { }

	[Address(RVA = "0x127A79C", Offset = "0x127A79C", Length = "0x9C")]
	[CompilerGenerated]
	[Token(Token = "0x600144F")]
	public void add_OnAdFailedToReceiveEvent(AdEventDelegate_String value) { }

	[Address(RVA = "0x127A3F4", Offset = "0x127A3F4", Length = "0x9C")]
	[CompilerGenerated]
	[Token(Token = "0x6001449")]
	public void add_OnAdOpenedEvent(AdEventDelegate_String value) { }

	[Address(RVA = "0x127A664", Offset = "0x127A664", Length = "0x9C")]
	[CompilerGenerated]
	[Token(Token = "0x600144D")]
	public void add_OnAdReceivedEvent(AdEventDelegate_String value) { }

	[Address(RVA = "0x127A8D4", Offset = "0x127A8D4", Length = "0x9C")]
	[CompilerGenerated]
	[Token(Token = "0x6001451")]
	public void add_OnAdWillLeaveApplicationEvent(AdEventDelegate_String value) { }

	[Address(RVA = "0x127D6D8", Offset = "0x127D6D8", Length = "0x108")]
	[Token(Token = "0x6001492")]
	public void AdDismissed(AdService inService, AdType inType, string inAdSpaceName, bool inCompleted) { }

	[Address(RVA = "0x127C8BC", Offset = "0x127C8BC", Length = "0x108")]
	[Token(Token = "0x600148C")]
	public void AdFailed(AdService inService, AdType inType, string inAdSpaceName, string inError) { }

	[Address(RVA = "0x1277FE4", Offset = "0x1277FE4", Length = "0xF8")]
	[Token(Token = "0x6001490")]
	public void AdFailedToReceive(AdService inService, AdType inType, string inAdSpaceName) { }

	[Address(RVA = "0x127D44C", Offset = "0x127D44C", Length = "0xF8")]
	[Token(Token = "0x600148B")]
	public void AdOpened(AdService inService, AdType inType, string inAdSpaceName) { }

	[Address(RVA = "0x1277D80", Offset = "0x1277D80", Length = "0x124")]
	[Token(Token = "0x600148F")]
	public void AdReceived(AdService inService, AdType inType, string inAdSpaceName) { }

	[Address(RVA = "0x127D5E0", Offset = "0x127D5E0", Length = "0xF8")]
	[Token(Token = "0x6001491")]
	public void AdWillLeaveApplication(AdService inService, AdType inType, string inAdSpaceName) { }

	[Address(RVA = "0x127B434", Offset = "0x127B434", Length = "0xBC")]
	[Token(Token = "0x6001462")]
	protected static ImangiAdServiceHandler CreateAdServiceHandler(AdService inService) { }

	[Address(RVA = "0x127B258", Offset = "0x127B258", Length = "0x1DC")]
	[Token(Token = "0x6001461")]
	protected static void DestroyAdService(AdService inRemoveService, string inReason) { }

	[Address(RVA = "0x127C9C4", Offset = "0x127C9C4", Length = "0x214")]
	[Token(Token = "0x6001480")]
	public override void DisplayAd(AdType inType, string inAdSpaceName, string inPlacement = "") { }

	[Address(RVA = "0x127C43C", Offset = "0x127C43C", Length = "0x20")]
	[Token(Token = "0x6001477")]
	public override void DisplayAd_Banner(string inAdSpaceName, string inPlacement = "") { }

	[Address(RVA = "0x127C2C8", Offset = "0x127C2C8", Length = "0x20")]
	[Token(Token = "0x6001472")]
	public override void DisplayAd_Card(string inAdSpaceName, string inPlacement = "") { }

	[Address(RVA = "0x127D06C", Offset = "0x127D06C", Length = "0x120")]
	[Token(Token = "0x6001487")]
	protected override void DisplayAd_Internal(AdType inType, string inAdSpaceName, string inPlacement = "", bool forced = false) { }

	[Address(RVA = "0x127C160", Offset = "0x127C160", Length = "0x1C")]
	[Token(Token = "0x600146D")]
	public override void DisplayAd_Video(string inAdSpaceName, string inPlacement = "") { }

	[Address(RVA = "0x127C818", Offset = "0x127C818", Length = "0xA4")]
	[Token(Token = "0x600147F")]
	public override void DisplayAdForced(AdType inType, string inAdSpaceName, string inPlacement = "") { }

	[Address(RVA = "0x127B9EC", Offset = "0x127B9EC", Length = "0x24")]
	[Token(Token = "0x6001469")]
	public void EnableAdMobFallback() { }

	[Address(RVA = "0x127C590", Offset = "0x127C590", Length = "0x198")]
	[Token(Token = "0x600147B")]
	public override void FetchAd(AdType inType, string inAdSpaceName, BannerPosition inBannerPosition = 5) { }

	[Address(RVA = "0x127C404", Offset = "0x127C404", Length = "0x20")]
	[Token(Token = "0x6001475")]
	public override void FetchAd_Banner(string inAdSpaceName, BannerPosition inBannerPosition) { }

	[Address(RVA = "0x127C294", Offset = "0x127C294", Length = "0x1C")]
	[Token(Token = "0x6001470")]
	public override void FetchAd_Card(string inAdSpaceName) { }

	[Address(RVA = "0x127CDE8", Offset = "0x127CDE8", Length = "0xE4")]
	[Token(Token = "0x6001484")]
	protected override void FetchAd_Internal(AdType inType, string inAdSpaceName, BannerPosition inBannerPosition = 5) { }

	[Address(RVA = "0x127C12C", Offset = "0x127C12C", Length = "0x1C")]
	[Token(Token = "0x600146B")]
	public override void FetchAd_Video(string inAdSpaceName) { }

	[Address(RVA = "0x127BF90", Offset = "0x127BF90", Length = "0x10")]
	[Token(Token = "0x6001468")]
	public void ForceActiveService(AdService inService) { }

	[Address(RVA = "0x127AB44", Offset = "0x127AB44", Length = "0x8")]
	[Token(Token = "0x6001455")]
	public bool get_Initialized() { }

	[Address(RVA = "0x127AB4C", Offset = "0x127AB4C", Length = "0x8")]
	[Token(Token = "0x6001456")]
	public static bool get_UseTestAdSpaceNames() { }

	[Address(RVA = "0x127AC58", Offset = "0x127AC58", Length = "0x8")]
	[Token(Token = "0x6001458")]
	public static bool get_UseTestDevicesIfAvailable() { }

	[Address(RVA = "0x127B1D8", Offset = "0x127B1D8", Length = "0x80")]
	[Token(Token = "0x600145E")]
	public static string GetAdServiceAnalyticCode(AdService inService) { }

	[Address(RVA = "0x127A264", Offset = "0x127A264", Length = "0x58")]
	[Token(Token = "0x6001446")]
	public static AdServicePlatform GetCurrentPlatform() { }

	[Address(RVA = "0x1273F6C", Offset = "0x1273F6C", Length = "0x320")]
	[Token(Token = "0x600145D")]
	public static AdManager GetInstance() { }

	[Address(RVA = "0x127D544", Offset = "0x127D544", Length = "0x9C")]
	[Token(Token = "0x600148E")]
	public string GetLastAdLoadError(AdType inType) { }

	[Address(RVA = "0x127AD90", Offset = "0x127AD90", Length = "0x58")]
	[Token(Token = "0x600145A")]
	public static bool GetVerboseLogging() { }

	[Address(RVA = "0x127C774", Offset = "0x127C774", Length = "0x4C")]
	[Token(Token = "0x600147D")]
	public override void HideAd(AdType inType, string inAdSpaceName) { }

	[Address(RVA = "0x127C45C", Offset = "0x127C45C", Length = "0x18")]
	[Token(Token = "0x6001478")]
	public override void HideAd_Banner(string inAdSpaceName) { }

	[Address(RVA = "0x127CF9C", Offset = "0x127CF9C", Length = "0xD0")]
	[Token(Token = "0x6001486")]
	protected override void HideAd_Internal(AdType inType, string inAdSpaceName) { }

	[Address(RVA = "0x127B4F0", Offset = "0x127B4F0", Length = "0x370")]
	[Token(Token = "0x6001463")]
	protected override bool InitializeAdService(AdService inService, AdPlatformInitializationInfo inPlatformInitInfo) { }

	[Address(RVA = "0x127B8D0", Offset = "0x127B8D0", Length = "0x11C")]
	[Token(Token = "0x6001464")]
	protected void InitializeAdServiceHandler(bool bypass = false) { }

	[Address(RVA = "0x127BB34", Offset = "0x127BB34", Length = "0x258")]
	[Token(Token = "0x6001465")]
	public override void InitializeAdServices(AdServicePlatform inPlatform, bool inRequirePrivacyCompliantNetworks = false, bool inHasConsent = true, bool inIsAgeRestricted = false, bool isCCPA = false, String[] inPrefetchVideoNames = null, String[] inPrefetchCardNames = null, String[] inPrefetchBannerNames = null, string inAdInitFilename = "", bool bypass = false, bool adMobInitStatusPrivacyFlow = false) { }

	[Address(RVA = "0x137216C", Offset = "0x137216C", Length = "0x72C")]
	[Token(Token = "0x6001460")]
	protected static T InstanceAdServiceHandler(AdService inService) { }

	[Address(RVA = "0x127C7C0", Offset = "0x127C7C0", Length = "0x58")]
	[Token(Token = "0x600147E")]
	public override bool IsAdAvailable(AdType inType, string inAdSpaceName) { }

	[Address(RVA = "0x127C580", Offset = "0x127C580", Length = "0x10")]
	[Token(Token = "0x600147A")]
	protected override bool IsAdAvailable_Banner(string inAdSpaceName) { }

	[Address(RVA = "0x127C474", Offset = "0x127C474", Length = "0x10C")]
	[Token(Token = "0x6001479")]
	protected override bool IsAdAvailable_Banner_Internal(string inAdSpaceName) { }

	[Address(RVA = "0x127C3F4", Offset = "0x127C3F4", Length = "0x10")]
	[Token(Token = "0x6001474")]
	protected override bool IsAdAvailable_Card(string inAdSpaceName) { }

	[Address(RVA = "0x127C2E8", Offset = "0x127C2E8", Length = "0x10C")]
	[Token(Token = "0x6001473")]
	protected override bool IsAdAvailable_Card_Internal(string inAdSpaceName) { }

	[Address(RVA = "0x127C288", Offset = "0x127C288", Length = "0xC")]
	[Token(Token = "0x600146F")]
	protected override bool IsAdAvailable_Video(string inAdSpaceName) { }

	[Address(RVA = "0x127C17C", Offset = "0x127C17C", Length = "0x10C")]
	[Token(Token = "0x600146E")]
	protected override bool IsAdAvailable_Video_Internal(string inAdSpaceName) { }

	[Address(RVA = "0x127BFA0", Offset = "0x127BFA0", Length = "0x18C")]
	[Token(Token = "0x600146A")]
	public bool IsAdServiceEnabled(AdType inType) { }

	[Address(RVA = "0x127CD38", Offset = "0x127CD38", Length = "0xB0")]
	[Token(Token = "0x6001483")]
	public void PrefetchBanners() { }

	[Address(RVA = "0x127CC88", Offset = "0x127CC88", Length = "0xB0")]
	[Token(Token = "0x6001482")]
	public void PrefetchCards() { }

	[Address(RVA = "0x127CBD8", Offset = "0x127CBD8", Length = "0xB0")]
	[Token(Token = "0x6001481")]
	public void PrefetchVideos() { }

	[Address(RVA = "0x127BE5C", Offset = "0x127BE5C", Length = "0x10C")]
	[Token(Token = "0x6001466")]
	public override bool ReapplyConsentSettings(bool inRequirePrivacyCompliantNetworks, bool inHasConsent, bool inIsAgeRestricted, bool isCCPA) { }

	[Address(RVA = "0x1277F7C", Offset = "0x1277F7C", Length = "0x68")]
	[Token(Token = "0x600148D")]
	public void RecordAdLoadError(AdType inType, string inError) { }

	[Address(RVA = "0x127A358", Offset = "0x127A358", Length = "0x9C")]
	[CompilerGenerated]
	[Token(Token = "0x6001448")]
	public void remove_OnAdClickedEvent(AdEventDelegate_String value) { }

	[Address(RVA = "0x127AAA8", Offset = "0x127AAA8", Length = "0x9C")]
	[CompilerGenerated]
	[Token(Token = "0x6001454")]
	public void remove_OnAdDismissedEvent(AdEventDelegate_StringBool value) { }

	[Address(RVA = "0x127A5C8", Offset = "0x127A5C8", Length = "0x9C")]
	[CompilerGenerated]
	[Token(Token = "0x600144C")]
	public void remove_OnAdFailedEvent(AdEventDelegate_StringString value) { }

	[Address(RVA = "0x127A838", Offset = "0x127A838", Length = "0x9C")]
	[CompilerGenerated]
	[Token(Token = "0x6001450")]
	public void remove_OnAdFailedToReceiveEvent(AdEventDelegate_String value) { }

	[Address(RVA = "0x127A490", Offset = "0x127A490", Length = "0x9C")]
	[CompilerGenerated]
	[Token(Token = "0x600144A")]
	public void remove_OnAdOpenedEvent(AdEventDelegate_String value) { }

	[Address(RVA = "0x127A700", Offset = "0x127A700", Length = "0x9C")]
	[CompilerGenerated]
	[Token(Token = "0x600144E")]
	public void remove_OnAdReceivedEvent(AdEventDelegate_String value) { }

	[Address(RVA = "0x127A970", Offset = "0x127A970", Length = "0x9C")]
	[CompilerGenerated]
	[Token(Token = "0x6001452")]
	public void remove_OnAdWillLeaveApplicationEvent(AdEventDelegate_String value) { }

	[Address(RVA = "0x127C728", Offset = "0x127C728", Length = "0x4C")]
	[Token(Token = "0x600147C")]
	public override void RemoveAd(AdType inType, string inAdSpaceName) { }

	[Address(RVA = "0x127C424", Offset = "0x127C424", Length = "0x18")]
	[Token(Token = "0x6001476")]
	public override void RemoveAd_Banner(string inAdSpaceName) { }

	[Address(RVA = "0x127C2B0", Offset = "0x127C2B0", Length = "0x18")]
	[Token(Token = "0x6001471")]
	public override void RemoveAd_Card(string inAdSpaceName) { }

	[Address(RVA = "0x127CECC", Offset = "0x127CECC", Length = "0xD0")]
	[Token(Token = "0x6001485")]
	protected override void RemoveAd_Internal(AdType inType, string inAdSpaceName) { }

	[Address(RVA = "0x127C148", Offset = "0x127C148", Length = "0x18")]
	[Token(Token = "0x600146C")]
	public override void RemoveAd_Video(string inAdSpaceName) { }

	[Address(RVA = "0x127AB54", Offset = "0x127AB54", Length = "0x104")]
	[Token(Token = "0x6001457")]
	public static void set_UseTestAdSpaceNames(bool value) { }

	[Address(RVA = "0x127AC60", Offset = "0x127AC60", Length = "0x130")]
	[Token(Token = "0x6001459")]
	public static void set_UseTestDevicesIfAvailable(bool value) { }

	[Address(RVA = "0x127BF68", Offset = "0x127BF68", Length = "0x28")]
	[Token(Token = "0x6001467")]
	public void SetActiveService(AdService inActiveService) { }

	[Address(RVA = "0x127ADE8", Offset = "0x127ADE8", Length = "0x1FC")]
	[Token(Token = "0x600145B")]
	public static void SetVerboseLogging(bool inVerbose) { }

	[Address(RVA = "0x127AFE4", Offset = "0x127AFE4", Length = "0xF0")]
	[Token(Token = "0x600145F")]
	protected void UpdateVerboseLoggingOnActiveService(bool inOnlyIfEnabled) { }

}

