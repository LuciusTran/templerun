namespace Imangi.Ad;

[Token(Token = "0x200028E")]
public class AdPlacementManager
{
	[Token(Token = "0x2000290")]
	internal sealed class AdPlacementDismissedDelegate : MulticastDelegate
	{

		[Address(RVA = "0x12744C4", Offset = "0x12744C4", Length = "0xA0")]
		[Token(Token = "0x60013B6")]
		public AdPlacementDismissedDelegate(object object, IntPtr method) { }

		[Address(RVA = "0x1274B20", Offset = "0x1274B20", Length = "0x104")]
		[Token(Token = "0x60013B8")]
		public override IAsyncResult BeginInvoke(string inPlacementName, AdService inService, AdType inType, string inAdSpaceName, bool inError, AsyncCallback callback, object object) { }

		[Address(RVA = "0x1274C24", Offset = "0x1274C24", Length = "0xC")]
		[Token(Token = "0x60013B9")]
		public override void EndInvoke(IAsyncResult result) { }

		[Address(RVA = "0x1274B08", Offset = "0x1274B08", Length = "0x18")]
		[Token(Token = "0x60013B7")]
		public override void Invoke(string inPlacementName, AdService inService, AdType inType, string inAdSpaceName, bool inError) { }

	}

	[Token(Token = "0x200028F")]
	internal sealed class AdPlacementFailedDelegate : MulticastDelegate
	{

		[Address(RVA = "0x1274424", Offset = "0x1274424", Length = "0xA0")]
		[Token(Token = "0x60013B2")]
		public AdPlacementFailedDelegate(object object, IntPtr method) { }

		[Address(RVA = "0x1274A24", Offset = "0x1274A24", Length = "0xD8")]
		[Token(Token = "0x60013B4")]
		public override IAsyncResult BeginInvoke(string inPlacementName, AdService inService, AdType inType, string inAdSpaceName, string inError, AsyncCallback callback, object object) { }

		[Address(RVA = "0x1274AFC", Offset = "0x1274AFC", Length = "0xC")]
		[Token(Token = "0x60013B5")]
		public override void EndInvoke(IAsyncResult result) { }

		[Address(RVA = "0x1274A10", Offset = "0x1274A10", Length = "0x14")]
		[Token(Token = "0x60013B3")]
		public override void Invoke(string inPlacementName, AdService inService, AdType inType, string inAdSpaceName, string inError) { }

	}

	[Token(Token = "0x4001388")]
	public const string LogChannel = "AdPlacement"; //Field offset: 0x0
	[Token(Token = "0x400138F")]
	public const string PlacementsKey = "P"; //Field offset: 0x0
	[Token(Token = "0x400138D")]
	public const string GlobalConditionsKey = "GC"; //Field offset: 0x0
	[Token(Token = "0x400138C")]
	private const string _PlacementConditionRemoteConfigPrefix = "AP_PC_"; //Field offset: 0x0
	[Token(Token = "0x4001392")]
	public static readonly AdPlacementManager Instance; //Field offset: 0x0
	[Token(Token = "0x400138A")]
	private const string _GlobalConditionRemoteConfigPrefix = "AP_GC_"; //Field offset: 0x0
	[Token(Token = "0x4001389")]
	public const string RemoteConfigKey = "AdPlacements"; //Field offset: 0x0
	[Token(Token = "0x400138B")]
	private const string _PlacementRemoteConfigPrefix = "AP_P_"; //Field offset: 0x0
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x400138E")]
	private readonly Dictionary<String, AdPlacementCondition> _GlobalConditions; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x4001390")]
	private readonly Dictionary<String, AdPlacement> _Placements; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4001391")]
	private string _ActivePlacement; //Field offset: 0x20
	[CompilerGenerated]
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4001393")]
	private Action<AdType, String, Boolean> OnAdAvailableEvent; //Field offset: 0x28
	[CompilerGenerated]
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4001394")]
	private Action<AdType, String> OnFetchEvent; //Field offset: 0x30
	[CompilerGenerated]
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4001395")]
	private Action<String, AdService, AdType, String> OnAdPlacementClickedEvent; //Field offset: 0x38
	[CompilerGenerated]
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4001396")]
	private Action<String, AdService, AdType, String> OnAdPlacementOpenedEvent; //Field offset: 0x40
	[CompilerGenerated]
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4001397")]
	private AdPlacementFailedDelegate OnAdPlacementFailedEvent; //Field offset: 0x48
	[CompilerGenerated]
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4001398")]
	private Action<String, AdService, AdType, String> OnAdPlacementReceivedEvent; //Field offset: 0x50
	[CompilerGenerated]
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4001399")]
	private Action<String, AdService, AdType, String> OnAdPlacementFailedToReceiveEvent; //Field offset: 0x58
	[CompilerGenerated]
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x400139A")]
	private Action<String, AdService, AdType, String> OnAdPlacementWillLeaveApplicationEvent; //Field offset: 0x60
	[CompilerGenerated]
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x400139B")]
	private AdPlacementDismissedDelegate OnAdPlacementDismissedEvent; //Field offset: 0x68
	[CompilerGenerated]
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x400139C")]
	private Action<String, Boolean, Boolean> OnAdPlacementFinishedEvent; //Field offset: 0x70

	[Token(Token = "0x1400006A")]
	public event Action<AdType, String, Boolean> OnAdAvailableEvent
	{
		[Address(RVA = "0x1272A60", Offset = "0x1272A60", Length = "0xB0")]
		[CompilerGenerated]
		[Token(Token = "0x6001389")]
		 add { } //Length: 176
		[Address(RVA = "0x1272B10", Offset = "0x1272B10", Length = "0xB0")]
		[CompilerGenerated]
		[Token(Token = "0x600138A")]
		 remove { } //Length: 176
	}

	[Token(Token = "0x1400006C")]
	public event Action<String, AdService, AdType, String> OnAdPlacementClickedEvent
	{
		[Address(RVA = "0x1272D20", Offset = "0x1272D20", Length = "0xB0")]
		[CompilerGenerated]
		[Token(Token = "0x600138D")]
		 add { } //Length: 176
		[Address(RVA = "0x1272DD0", Offset = "0x1272DD0", Length = "0xB0")]
		[CompilerGenerated]
		[Token(Token = "0x600138E")]
		 remove { } //Length: 176
	}

	[Token(Token = "0x14000072")]
	public event AdPlacementDismissedDelegate OnAdPlacementDismissedEvent
	{
		[Address(RVA = "0x1273538", Offset = "0x1273538", Length = "0x9C")]
		[CompilerGenerated]
		[Token(Token = "0x6001399")]
		 add { } //Length: 156
		[Address(RVA = "0x12735D4", Offset = "0x12735D4", Length = "0x9C")]
		[CompilerGenerated]
		[Token(Token = "0x600139A")]
		 remove { } //Length: 156
	}

	[Token(Token = "0x1400006E")]
	public event AdPlacementFailedDelegate OnAdPlacementFailedEvent
	{
		[Address(RVA = "0x1272FE0", Offset = "0x1272FE0", Length = "0x9C")]
		[CompilerGenerated]
		[Token(Token = "0x6001391")]
		 add { } //Length: 156
		[Address(RVA = "0x127307C", Offset = "0x127307C", Length = "0x9C")]
		[CompilerGenerated]
		[Token(Token = "0x6001392")]
		 remove { } //Length: 156
	}

	[Token(Token = "0x14000070")]
	public event Action<String, AdService, AdType, String> OnAdPlacementFailedToReceiveEvent
	{
		[Address(RVA = "0x1273278", Offset = "0x1273278", Length = "0xB0")]
		[CompilerGenerated]
		[Token(Token = "0x6001395")]
		 add { } //Length: 176
		[Address(RVA = "0x1273328", Offset = "0x1273328", Length = "0xB0")]
		[CompilerGenerated]
		[Token(Token = "0x6001396")]
		 remove { } //Length: 176
	}

	[Token(Token = "0x14000073")]
	public event Action<String, Boolean, Boolean> OnAdPlacementFinishedEvent
	{
		[Address(RVA = "0x1273670", Offset = "0x1273670", Length = "0xB0")]
		[CompilerGenerated]
		[Token(Token = "0x600139B")]
		 add { } //Length: 176
		[Address(RVA = "0x1273720", Offset = "0x1273720", Length = "0xB0")]
		[CompilerGenerated]
		[Token(Token = "0x600139C")]
		 remove { } //Length: 176
	}

	[Token(Token = "0x1400006D")]
	public event Action<String, AdService, AdType, String> OnAdPlacementOpenedEvent
	{
		[Address(RVA = "0x1272E80", Offset = "0x1272E80", Length = "0xB0")]
		[CompilerGenerated]
		[Token(Token = "0x600138F")]
		 add { } //Length: 176
		[Address(RVA = "0x1272F30", Offset = "0x1272F30", Length = "0xB0")]
		[CompilerGenerated]
		[Token(Token = "0x6001390")]
		 remove { } //Length: 176
	}

	[Token(Token = "0x1400006F")]
	public event Action<String, AdService, AdType, String> OnAdPlacementReceivedEvent
	{
		[Address(RVA = "0x1273118", Offset = "0x1273118", Length = "0xB0")]
		[CompilerGenerated]
		[Token(Token = "0x6001393")]
		 add { } //Length: 176
		[Address(RVA = "0x12731C8", Offset = "0x12731C8", Length = "0xB0")]
		[CompilerGenerated]
		[Token(Token = "0x6001394")]
		 remove { } //Length: 176
	}

	[Token(Token = "0x14000071")]
	public event Action<String, AdService, AdType, String> OnAdPlacementWillLeaveApplicationEvent
	{
		[Address(RVA = "0x12733D8", Offset = "0x12733D8", Length = "0xB0")]
		[CompilerGenerated]
		[Token(Token = "0x6001397")]
		 add { } //Length: 176
		[Address(RVA = "0x1273488", Offset = "0x1273488", Length = "0xB0")]
		[CompilerGenerated]
		[Token(Token = "0x6001398")]
		 remove { } //Length: 176
	}

	[Token(Token = "0x1400006B")]
	public event Action<AdType, String> OnFetchEvent
	{
		[Address(RVA = "0x1272BC0", Offset = "0x1272BC0", Length = "0xB0")]
		[CompilerGenerated]
		[Token(Token = "0x600138B")]
		 add { } //Length: 176
		[Address(RVA = "0x1272C70", Offset = "0x1272C70", Length = "0xB0")]
		[CompilerGenerated]
		[Token(Token = "0x600138C")]
		 remove { } //Length: 176
	}

	[Address(RVA = "0x12749B8", Offset = "0x12749B8", Length = "0x58")]
	[Token(Token = "0x60013B1")]
	private static AdPlacementManager() { }

	[Address(RVA = "0x12748D0", Offset = "0x12748D0", Length = "0xE8")]
	[Token(Token = "0x60013B0")]
	public AdPlacementManager() { }

	[Address(RVA = "0x1272A60", Offset = "0x1272A60", Length = "0xB0")]
	[CompilerGenerated]
	[Token(Token = "0x6001389")]
	public void add_OnAdAvailableEvent(Action<AdType, String, Boolean> value) { }

	[Address(RVA = "0x1272D20", Offset = "0x1272D20", Length = "0xB0")]
	[CompilerGenerated]
	[Token(Token = "0x600138D")]
	public void add_OnAdPlacementClickedEvent(Action<String, AdService, AdType, String> value) { }

	[Address(RVA = "0x1273538", Offset = "0x1273538", Length = "0x9C")]
	[CompilerGenerated]
	[Token(Token = "0x6001399")]
	public void add_OnAdPlacementDismissedEvent(AdPlacementDismissedDelegate value) { }

	[Address(RVA = "0x1272FE0", Offset = "0x1272FE0", Length = "0x9C")]
	[CompilerGenerated]
	[Token(Token = "0x6001391")]
	public void add_OnAdPlacementFailedEvent(AdPlacementFailedDelegate value) { }

	[Address(RVA = "0x1273278", Offset = "0x1273278", Length = "0xB0")]
	[CompilerGenerated]
	[Token(Token = "0x6001395")]
	public void add_OnAdPlacementFailedToReceiveEvent(Action<String, AdService, AdType, String> value) { }

	[Address(RVA = "0x1273670", Offset = "0x1273670", Length = "0xB0")]
	[CompilerGenerated]
	[Token(Token = "0x600139B")]
	public void add_OnAdPlacementFinishedEvent(Action<String, Boolean, Boolean> value) { }

	[Address(RVA = "0x1272E80", Offset = "0x1272E80", Length = "0xB0")]
	[CompilerGenerated]
	[Token(Token = "0x600138F")]
	public void add_OnAdPlacementOpenedEvent(Action<String, AdService, AdType, String> value) { }

	[Address(RVA = "0x1273118", Offset = "0x1273118", Length = "0xB0")]
	[CompilerGenerated]
	[Token(Token = "0x6001393")]
	public void add_OnAdPlacementReceivedEvent(Action<String, AdService, AdType, String> value) { }

	[Address(RVA = "0x12733D8", Offset = "0x12733D8", Length = "0xB0")]
	[CompilerGenerated]
	[Token(Token = "0x6001397")]
	public void add_OnAdPlacementWillLeaveApplicationEvent(Action<String, AdService, AdType, String> value) { }

	[Address(RVA = "0x1272BC0", Offset = "0x1272BC0", Length = "0xB0")]
	[CompilerGenerated]
	[Token(Token = "0x600138B")]
	public void add_OnFetchEvent(Action<AdType, String> value) { }

	[Address(RVA = "0x1274650", Offset = "0x1274650", Length = "0x68")]
	[Token(Token = "0x60013AC")]
	public void AddCondition(string inName, AdPlacementCondition inCondition) { }

	[Address(RVA = "0x1274710", Offset = "0x1274710", Length = "0xE4")]
	[Token(Token = "0x60013AE")]
	public void AddCondition(string inPlacementName, string inConditionName, AdPlacementCondition inCondition) { }

	[Address(RVA = "0x1270FB0", Offset = "0x1270FB0", Length = "0x3D8")]
	[Token(Token = "0x600137C")]
	public void ApplyOverrides(Action<String> inGlobalConditionOverrideCallback, Action<String> inPlacementOverrideCallback, Action<String, String> inPlacementConditionOverrideCallback) { }

	[Address(RVA = "0x12706F8", Offset = "0x12706F8", Length = "0x1A8")]
	[Token(Token = "0x6001378")]
	private static void DeserializeConditions(Dictionary<String, String> inDict, Dictionary<String, AdPlacementCondition> inGlobalConditions) { }

	[Address(RVA = "0x127056C", Offset = "0x127056C", Length = "0x18C")]
	[Token(Token = "0x6001376")]
	public static void DeserializeConfig(Dictionary<String, Object> inDict, Dictionary<String, AdPlacementCondition> inGlobalConditions, Dictionary<String, AdPlacement> inPlacements) { }

	[Address(RVA = "0x12708A0", Offset = "0x12708A0", Length = "0x224")]
	[Token(Token = "0x6001377")]
	private static void DeserializePlacements(Dictionary<String, Object> inDict, Dictionary<String, AdPlacement> inPlacements) { }

	[Address(RVA = "0x1271A30", Offset = "0x1271A30", Length = "0x494")]
	[Token(Token = "0x6001381")]
	public void DeserializeSaveData(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x127433C", Offset = "0x127433C", Length = "0xE8")]
	[Token(Token = "0x60013A1")]
	public void Fetch(AdType inType, string inAdSpaceName, BannerPosition inBannerPosition = 5) { }

	[Address(RVA = "0x1272838", Offset = "0x1272838", Length = "0xDC")]
	[Token(Token = "0x6001385")]
	public AdPlacementCondition GetCondition(string inPlacementName, string inConditionName) { }

	[Address(RVA = "0x1272778", Offset = "0x1272778", Length = "0xC0")]
	[Token(Token = "0x6001384")]
	public AdPlacementCondition GetCondition(string inName) { }

	[Address(RVA = "0x1272914", Offset = "0x1272914", Length = "0x6C")]
	[Token(Token = "0x6001386")]
	public static string GetGlobalConditionRemoteConfigKey(string inConditionName) { }

	[Address(RVA = "0x12729EC", Offset = "0x12729EC", Length = "0x74")]
	[Token(Token = "0x6001388")]
	public static string GetPlacementConditionRemoteConfigKey(string inPlacementName, string inConditionName) { }

	[Address(RVA = "0x1272980", Offset = "0x1272980", Length = "0x6C")]
	[Token(Token = "0x6001387")]
	public static string GetPlacementRemoteConfigKey(string inPlacementName) { }

	[Address(RVA = "0x1273B88", Offset = "0x1273B88", Length = "0x23C")]
	[Token(Token = "0x600139E")]
	public bool HidePlacement(string inPlacementName) { }

	[Address(RVA = "0x1272090", Offset = "0x1272090", Length = "0x29C")]
	[Token(Token = "0x60013A2")]
	private void HookPlacementEvents(AdPlacement inPlacement) { }

	[Address(RVA = "0x1271EC4", Offset = "0x1271EC4", Length = "0x1CC")]
	[Token(Token = "0x6001382")]
	public bool Initialize(string inJson) { }

	[Address(RVA = "0x127428C", Offset = "0x127428C", Length = "0xB0")]
	[Token(Token = "0x60013A0")]
	public bool IsAdAvailable(AdType inType, string inAdSpaceName) { }

	[Address(RVA = "0x1273DC4", Offset = "0x1273DC4", Length = "0x1A8")]
	[Token(Token = "0x600139F")]
	public bool IsAdAvailable(string inPlacementName) { }

	[Address(RVA = "0x1274564", Offset = "0x1274564", Length = "0x1C")]
	[Token(Token = "0x60013A4")]
	private void OnAdPlacementClicked(string inPlacementName, AdService inService, AdType inAdType, string inAdSpaceName) { }

	[Address(RVA = "0x127460C", Offset = "0x127460C", Length = "0x20")]
	[Token(Token = "0x60013AA")]
	private void OnAdPlacementDismissed(string inPlacementName, AdService inService, AdType inAdType, string inAdSpaceName, bool inCompleted) { }

	[Address(RVA = "0x127459C", Offset = "0x127459C", Length = "0x1C")]
	[Token(Token = "0x60013A6")]
	private void OnAdPlacementFailed(string inPlacementName, AdService inService, AdType inAdType, string inAdSpaceName, string inError) { }

	[Address(RVA = "0x12745D4", Offset = "0x12745D4", Length = "0x1C")]
	[Token(Token = "0x60013A8")]
	private void OnAdPlacementFailedToReceive(string inPlacementName, AdService inService, AdType inAdType, string inAdSpaceName) { }

	[Address(RVA = "0x127462C", Offset = "0x127462C", Length = "0x24")]
	[Token(Token = "0x60013AB")]
	private void OnAdPlacementFinished(string inPlacementName, bool inFailed, bool inCompleted) { }

	[Address(RVA = "0x1274580", Offset = "0x1274580", Length = "0x1C")]
	[Token(Token = "0x60013A5")]
	private void OnAdPlacementOpened(string inPlacementName, AdService inService, AdType inAdType, string inAdSpaceName) { }

	[Address(RVA = "0x12745B8", Offset = "0x12745B8", Length = "0x1C")]
	[Token(Token = "0x60013A7")]
	private void OnAdPlacementReceived(string inPlacementName, AdService inService, AdType inAdType, string inAdSpaceName) { }

	[Address(RVA = "0x12745F0", Offset = "0x12745F0", Length = "0x1C")]
	[Token(Token = "0x60013A9")]
	private void OnAdPlacementWillLeaveApplication(string inPlacementName, AdService inService, AdType inAdType, string inAdSpaceName) { }

	[Address(RVA = "0x1271388", Offset = "0x1271388", Length = "0xEC")]
	[Token(Token = "0x600137D")]
	public void OverrideGlobalCondition(string inName, string inJson) { }

	[Address(RVA = "0x1271558", Offset = "0x1271558", Length = "0xDC")]
	[Token(Token = "0x600137F")]
	public void OverridePlacement(string inPlacementName, string inJson) { }

	[Address(RVA = "0x1271474", Offset = "0x1271474", Length = "0xE4")]
	[Token(Token = "0x600137E")]
	public void OverridePlacementCondition(string inPlacementName, string inConditionName, string inJson) { }

	[Address(RVA = "0x1272B10", Offset = "0x1272B10", Length = "0xB0")]
	[CompilerGenerated]
	[Token(Token = "0x600138A")]
	public void remove_OnAdAvailableEvent(Action<AdType, String, Boolean> value) { }

	[Address(RVA = "0x1272DD0", Offset = "0x1272DD0", Length = "0xB0")]
	[CompilerGenerated]
	[Token(Token = "0x600138E")]
	public void remove_OnAdPlacementClickedEvent(Action<String, AdService, AdType, String> value) { }

	[Address(RVA = "0x12735D4", Offset = "0x12735D4", Length = "0x9C")]
	[CompilerGenerated]
	[Token(Token = "0x600139A")]
	public void remove_OnAdPlacementDismissedEvent(AdPlacementDismissedDelegate value) { }

	[Address(RVA = "0x127307C", Offset = "0x127307C", Length = "0x9C")]
	[CompilerGenerated]
	[Token(Token = "0x6001392")]
	public void remove_OnAdPlacementFailedEvent(AdPlacementFailedDelegate value) { }

	[Address(RVA = "0x1273328", Offset = "0x1273328", Length = "0xB0")]
	[CompilerGenerated]
	[Token(Token = "0x6001396")]
	public void remove_OnAdPlacementFailedToReceiveEvent(Action<String, AdService, AdType, String> value) { }

	[Address(RVA = "0x1273720", Offset = "0x1273720", Length = "0xB0")]
	[CompilerGenerated]
	[Token(Token = "0x600139C")]
	public void remove_OnAdPlacementFinishedEvent(Action<String, Boolean, Boolean> value) { }

	[Address(RVA = "0x1272F30", Offset = "0x1272F30", Length = "0xB0")]
	[CompilerGenerated]
	[Token(Token = "0x6001390")]
	public void remove_OnAdPlacementOpenedEvent(Action<String, AdService, AdType, String> value) { }

	[Address(RVA = "0x12731C8", Offset = "0x12731C8", Length = "0xB0")]
	[CompilerGenerated]
	[Token(Token = "0x6001394")]
	public void remove_OnAdPlacementReceivedEvent(Action<String, AdService, AdType, String> value) { }

	[Address(RVA = "0x1273488", Offset = "0x1273488", Length = "0xB0")]
	[CompilerGenerated]
	[Token(Token = "0x6001398")]
	public void remove_OnAdPlacementWillLeaveApplicationEvent(Action<String, AdService, AdType, String> value) { }

	[Address(RVA = "0x1272C70", Offset = "0x1272C70", Length = "0xB0")]
	[CompilerGenerated]
	[Token(Token = "0x600138C")]
	public void remove_OnFetchEvent(Action<AdType, String> value) { }

	[Address(RVA = "0x12746B8", Offset = "0x12746B8", Length = "0x58")]
	[Token(Token = "0x60013AD")]
	public void RemoveCondition(string inName) { }

	[Address(RVA = "0x12747F4", Offset = "0x12747F4", Length = "0xDC")]
	[Token(Token = "0x60013AF")]
	public void RemoveCondition(string inPlacementName, string inConditionName) { }

	[Address(RVA = "0x1270BF8", Offset = "0x1270BF8", Length = "0x1E4")]
	[Token(Token = "0x600137B")]
	private static Dictionary<String, String> SerializeConditions(Dictionary<String, AdPlacementCondition> inGlobalConditions) { }

	[Address(RVA = "0x1270AC4", Offset = "0x1270AC4", Length = "0x134")]
	[Token(Token = "0x6001379")]
	public static Dictionary<String, Object> SerializeConfig(Dictionary<String, AdPlacementCondition> inGlobalConditions, Dictionary<String, AdPlacement> inPlacements) { }

	[Address(RVA = "0x1270DDC", Offset = "0x1270DDC", Length = "0x1D4")]
	[Token(Token = "0x600137A")]
	private static Dictionary<String, Object> SerializePlacements(Dictionary<String, AdPlacement> inPlacements) { }

	[Address(RVA = "0x1271634", Offset = "0x1271634", Length = "0x3FC")]
	[Token(Token = "0x6001380")]
	public Dictionary<String, Object> SerializeSaveData() { }

	[Address(RVA = "0x12737D0", Offset = "0x12737D0", Length = "0x3B8")]
	[Token(Token = "0x600139D")]
	public bool ShowPlacement(string inPlacementName) { }

	[Address(RVA = "0x12724DC", Offset = "0x12724DC", Length = "0x29C")]
	[Token(Token = "0x60013A3")]
	private void UnhookPlacementEvents(AdPlacement inPlacement) { }

	[Address(RVA = "0x127232C", Offset = "0x127232C", Length = "0x1B0")]
	[Token(Token = "0x6001383")]
	public void Uninitialize() { }

}

