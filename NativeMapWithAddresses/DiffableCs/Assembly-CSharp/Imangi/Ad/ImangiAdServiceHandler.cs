namespace Imangi.Ad;

[Token(Token = "0x20002AB")]
public class ImangiAdServiceHandler : MonoBehaviour
{
	[Token(Token = "0x4001409")]
	public const string TestAdSpaceName_Video = "NetworkTest_Video"; //Field offset: 0x0
	[Token(Token = "0x400140C")]
	public const string TestAdSpaceName_Card = "NetworkTest"; //Field offset: 0x0
	[Token(Token = "0x400140F")]
	public const string TestAdSpaceName_Banner = "NetworkTest_Banner"; //Field offset: 0x0
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4001402")]
	public AdManager AdMngr; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4001403")]
	protected AdService _Service; //Field offset: 0x28
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x4001404")]
	protected bool _Initialized; //Field offset: 0x2C
	[FieldOffset(Offset = "0x2D")]
	[Token(Token = "0x4001405")]
	protected bool _IsEnabled; //Field offset: 0x2D
	[FieldOffset(Offset = "0x2E")]
	[Token(Token = "0x4001406")]
	protected bool _VerboseLogging; //Field offset: 0x2E
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4001407")]
	public Dictionary<String, String> AdSpaceNameMappings; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4001408")]
	public Dictionary<String, String> AdSpaceNameUnmappings; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x400140A")]
	protected string _TestMappedAdSpaceName_Video; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x400140B")]
	protected string _CurrentAdSpaceName_Video; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x400140D")]
	protected string _TestMappedAdSpaceName_Card; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x400140E")]
	protected string _CurrentAdSpaceName_Card; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4001410")]
	protected string _TestMappedAdSpaceName_Banner; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4001411")]
	protected string _CurrentAdSpaceName_Banner; //Field offset: 0x68

	[Token(Token = "0x17000248")]
	public bool Initialized
	{
		[Address(RVA = "0x1280974", Offset = "0x1280974", Length = "0x8")]
		[Token(Token = "0x60014BD")]
		 get { } //Length: 8
	}

	[Token(Token = "0x17000249")]
	public bool IsEnabled
	{
		[Address(RVA = "0x128097C", Offset = "0x128097C", Length = "0x8")]
		[Token(Token = "0x60014BE")]
		 get { } //Length: 8
	}

	[Address(RVA = "0x127927C", Offset = "0x127927C", Length = "0xC8")]
	[Token(Token = "0x60014E7")]
	public ImangiAdServiceHandler() { }

	[Address(RVA = "0x12816E8", Offset = "0x12816E8", Length = "0x4")]
	[Token(Token = "0x60014E0")]
	public override void AdClicked(bool inPreGameCall, AdType inAdType, string inMappedAdSpaceName) { }

	[Address(RVA = "0x1281700", Offset = "0x1281700", Length = "0x4")]
	[Token(Token = "0x60014E6")]
	public override void AdDismissed(bool inPreGameCall, AdType inAdType, string inMappedAdSpaceName, bool inCompleted) { }

	[Address(RVA = "0x12816F0", Offset = "0x12816F0", Length = "0x4")]
	[Token(Token = "0x60014E2")]
	public override void AdFailed(bool inPreGameCall, AdType inAdType, string inMappedAdSpaceName, string inError) { }

	[Address(RVA = "0x12816F8", Offset = "0x12816F8", Length = "0x4")]
	[Token(Token = "0x60014E4")]
	public override void AdFailedToReceive(bool inPreGameCall, AdType inAdType, string inMappedAdSpaceName) { }

	[Address(RVA = "0x12816EC", Offset = "0x12816EC", Length = "0x4")]
	[Token(Token = "0x60014E1")]
	public override void AdOpened(bool inPreGameCall, AdType inAdType, string inMappedAdSpaceName) { }

	[Address(RVA = "0x12816F4", Offset = "0x12816F4", Length = "0x4")]
	[Token(Token = "0x60014E3")]
	public override void AdReceived(bool inPreGameCall, AdType inAdType, string inMappedAdSpaceName) { }

	[Address(RVA = "0x12816FC", Offset = "0x12816FC", Length = "0x4")]
	[Token(Token = "0x60014E5")]
	public override void AdWillLeaveApplication(bool inPreGameCall, AdType inAdType, string inMappedAdSpaceName) { }

	[Address(RVA = "0x1280E38", Offset = "0x1280E38", Length = "0x3C")]
	[Token(Token = "0x60014C8")]
	protected bool DeviceHasSufficientMemory() { }

	[Address(RVA = "0x1280EB0", Offset = "0x1280EB0", Length = "0x8")]
	[Token(Token = "0x60014CD")]
	public override void DisableAdServiceHandler() { }

	[Address(RVA = "0x1281684", Offset = "0x1281684", Length = "0x60")]
	[Token(Token = "0x60014D9")]
	public override void DisplayAd(AdType inType, string inAdSpaceName, string inPlacement = "") { }

	[Address(RVA = "0x1281680", Offset = "0x1281680", Length = "0x4")]
	[Token(Token = "0x60014D8")]
	public override void DisplayAdForced(AdType inType, string inAdSpaceName, string inPlacement = "") { }

	[Address(RVA = "0x1280EA4", Offset = "0x1280EA4", Length = "0xC")]
	[Token(Token = "0x60014CC")]
	public override void EnableAdServiceHandler() { }

	[Address(RVA = "0x128166C", Offset = "0x128166C", Length = "0x4")]
	[Token(Token = "0x60014D4")]
	public override void FetchAd(AdType inType, string inAdSpaceName, BannerPosition inBannerPosition = 5) { }

	[Address(RVA = "0x1280974", Offset = "0x1280974", Length = "0x8")]
	[Token(Token = "0x60014BD")]
	public bool get_Initialized() { }

	[Address(RVA = "0x128097C", Offset = "0x128097C", Length = "0x8")]
	[Token(Token = "0x60014BE")]
	public bool get_IsEnabled() { }

	[Address(RVA = "0x1281544", Offset = "0x1281544", Length = "0x94")]
	[Token(Token = "0x60014D2")]
	public override string GetMappedAdSpaceName(AdType inAdType, string inAdSpaceName, bool inIsFetch) { }

	[Address(RVA = "0x1280E7C", Offset = "0x1280E7C", Length = "0x8")]
	[Token(Token = "0x60014C5")]
	protected override ApplicationVersionInfo GetMaximumCompatibleOSVersion() { }

	[Address(RVA = "0x1280E74", Offset = "0x1280E74", Length = "0x8")]
	[Token(Token = "0x60014C4")]
	protected override ApplicationVersionInfo GetMinimumCompatibleOSVersion() { }

	[Address(RVA = "0x1280E84", Offset = "0x1280E84", Length = "0x8")]
	[Token(Token = "0x60014C7")]
	protected override int GetRequiredMinimumDeviceMemoryInMegabytes() { }

	[Address(RVA = "0x12815D8", Offset = "0x12815D8", Length = "0x94")]
	[Token(Token = "0x60014D3")]
	public override string GetUnmappedAdSpaceName(AdType inAdType, string inMappedAdSpaceName) { }

	[Address(RVA = "0x1281674", Offset = "0x1281674", Length = "0x4")]
	[Token(Token = "0x60014D6")]
	public override void HideAd(AdType inType, string inAdSpaceName) { }

	[Address(RVA = "0x1275D10", Offset = "0x1275D10", Length = "0x28")]
	[Token(Token = "0x60014CA")]
	public override bool InitializeAdServiceHandler(AdManager inAdMngr, bool inPrivacyCompliantRequired, bool inHasConsent, bool inIsAgeRestricted, bool isCCPA, AdServiceInitializationInfo inInitInfo, bool adMobInitStatusPrivacyFlow = false) { }

	[Address(RVA = "0x1281678", Offset = "0x1281678", Length = "0x8")]
	[Token(Token = "0x60014D7")]
	public override bool IsAdAvailable(AdType inType, string inAdSpaceName) { }

	[Address(RVA = "0x1280984", Offset = "0x1280984", Length = "0x42C")]
	[Token(Token = "0x60014C3")]
	public override bool IsAvailableOnDevice(AdType inType, bool inAnyAdType = false) { }

	[Address(RVA = "0x1280DB0", Offset = "0x1280DB0", Length = "0x88")]
	[Token(Token = "0x60014C6")]
	protected bool IsCompatibleWithOSVersion() { }

	[Address(RVA = "0x127B860", Offset = "0x127B860", Length = "0x1C")]
	[Token(Token = "0x60014BF")]
	public static bool IsPrivacyCompliant(AdService inService) { }

	[Address(RVA = "0x12782B4", Offset = "0x12782B4", Length = "0x48")]
	[Token(Token = "0x60014DB")]
	public void OnAdClicked(AdType inType, string inAdSpaceName) { }

	[Address(RVA = "0x127822C", Offset = "0x127822C", Length = "0x50")]
	[Token(Token = "0x60014DC")]
	public void OnAdDismissed(AdType inType, string inAdSpaceName, bool inCompleted) { }

	[Address(RVA = "0x127819C", Offset = "0x127819C", Length = "0x50")]
	[Token(Token = "0x60014DD")]
	public void OnAdFailed(AdType inType, string inAdSpaceName, string inError) { }

	[Address(RVA = "0x1278114", Offset = "0x1278114", Length = "0x48")]
	[Token(Token = "0x60014DA")]
	public void OnAdOpened(AdType inType, string inAdSpaceName) { }

	[Address(RVA = "0x1278304", Offset = "0x1278304", Length = "0x48")]
	[Token(Token = "0x60014DE")]
	public void OnAdWillLeaveApplication(AdType inType, string inAdSpaceName) { }

	[Address(RVA = "0x1280E8C", Offset = "0x1280E8C", Length = "0x14")]
	[Token(Token = "0x60014C9")]
	public override bool PreInit(AdManager inAdMngr, AdService inService) { }

	[Address(RVA = "0x1280EB8", Offset = "0x1280EB8", Length = "0x8")]
	[Token(Token = "0x60014CE")]
	public override bool ReapplyConsentSettings(bool inHasConsent, bool inIsAgeRestricted) { }

	[Address(RVA = "0x1281670", Offset = "0x1281670", Length = "0x4")]
	[Token(Token = "0x60014D5")]
	public override void RemoveAd(AdType inType, string inAdSpaceName) { }

	[Address(RVA = "0x12816E4", Offset = "0x12816E4", Length = "0x4")]
	[Token(Token = "0x60014DF")]
	public override void ServiceInitializeCompleted(bool inPreGameCall, bool inSuccessful) { }

	[Address(RVA = "0x1280ECC", Offset = "0x1280ECC", Length = "0x4")]
	[Token(Token = "0x60014D0")]
	public override void SetPrivacyFlags(bool hasConsent, bool trackingEnabled) { }

	[Address(RVA = "0x1280ED0", Offset = "0x1280ED0", Length = "0x674")]
	[Token(Token = "0x60014D1")]
	public override void SetupAdSpaceNameMappings(AdServiceInitializationInfo inInitInfo) { }

	[Address(RVA = "0x1280EC0", Offset = "0x1280EC0", Length = "0xC")]
	[Token(Token = "0x60014CF")]
	public override void SetVerboseLogging(bool inVerbose) { }

	[Address(RVA = "0x1280EA0", Offset = "0x1280EA0", Length = "0x4")]
	[Token(Token = "0x60014CB")]
	public override void ShutdownAdServiceHandler(AdManager inAdMngr) { }

	[Address(RVA = "0x127B8B4", Offset = "0x127B8B4", Length = "0x1C")]
	[Token(Token = "0x60014C2")]
	public static bool SupportsBannerAds(AdService inService) { }

	[Address(RVA = "0x127B898", Offset = "0x127B898", Length = "0x1C")]
	[Token(Token = "0x60014C1")]
	public static bool SupportsCardAds(AdService inService) { }

	[Address(RVA = "0x127B87C", Offset = "0x127B87C", Length = "0x1C")]
	[Token(Token = "0x60014C0")]
	public static bool SupportsVideoAds(AdService inService) { }

}

