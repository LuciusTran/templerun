namespace Imangi.AdjustSDK;

[Token(Token = "0x2000286")]
public class AdjustManager
{
	[Token(Token = "0x4001360")]
	public const string LogChannel = "AdjustManager"; //Field offset: 0x0
	[Token(Token = "0x4001361")]
	public const string LogDelegateChannel = "ImangiAdjust"; //Field offset: 0x0
	[Token(Token = "0x4001362")]
	public const string AdjustPrefabPath = "ImangiAdjustPrefab"; //Field offset: 0x0
	[CompilerGenerated]
	[Token(Token = "0x4001363")]
	private static GameObject <AdjustObject>k__BackingField; //Field offset: 0x0
	[CompilerGenerated]
	[Token(Token = "0x4001364")]
	private static Adjust <AdjustComponent>k__BackingField; //Field offset: 0x8
	[Token(Token = "0x4001365")]
	private static Action<AdjustSessionSuccess> OnSessionSuccess; //Field offset: 0x10
	[Token(Token = "0x4001366")]
	private static Action<AdjustSessionFailure> OnSessionFailure; //Field offset: 0x18
	[Token(Token = "0x4001367")]
	private static Action<AdjustEventSuccess> OnEventSuccess; //Field offset: 0x20
	[Token(Token = "0x4001368")]
	private static Action<AdjustEventFailure> OnEventFailure; //Field offset: 0x28
	[Token(Token = "0x4001369")]
	private static AdjustConfig config; //Field offset: 0x30

	[Token(Token = "0x1700022B")]
	public private static Adjust AdjustComponent
	{
		[Address(RVA = "0x126B7D8", Offset = "0x126B7D8", Length = "0x48")]
		[CompilerGenerated]
		[Token(Token = "0x6001321")]
		 get { } //Length: 72
		[Address(RVA = "0x126B820", Offset = "0x126B820", Length = "0x4C")]
		[CompilerGenerated]
		[Token(Token = "0x6001322")]
		private set { } //Length: 76
	}

	[Token(Token = "0x1700022A")]
	public private static GameObject AdjustObject
	{
		[Address(RVA = "0x126B744", Offset = "0x126B744", Length = "0x48")]
		[CompilerGenerated]
		[Token(Token = "0x600131F")]
		 get { } //Length: 72
		[Address(RVA = "0x126B78C", Offset = "0x126B78C", Length = "0x4C")]
		[CompilerGenerated]
		[Token(Token = "0x6001320")]
		private set { } //Length: 76
	}

	[Address(RVA = "0x126CD04", Offset = "0x126CD04", Length = "0x8")]
	[Token(Token = "0x6001332")]
	public AdjustManager() { }

	[Address(RVA = "0x126C5B8", Offset = "0x126C5B8", Length = "0x84")]
	[Token(Token = "0x600132D")]
	private static void AdjustDeferredDeeplinkCallback(string inDeeplink) { }

	[Address(RVA = "0x126C54C", Offset = "0x126C54C", Length = "0x6C")]
	[Token(Token = "0x600132C")]
	private static void AdjustEventFailureDelegate(AdjustEventFailure inFailure) { }

	[Address(RVA = "0x126C4E0", Offset = "0x126C4E0", Length = "0x6C")]
	[Token(Token = "0x600132B")]
	private static void AdjustEventSuccessDelegate(AdjustEventSuccess inSuccess) { }

	[Address(RVA = "0x126C2B0", Offset = "0x126C2B0", Length = "0x4")]
	[Token(Token = "0x6001328")]
	private static void AdjustLogDelegate(string inMessage) { }

	[Address(RVA = "0x126C320", Offset = "0x126C320", Length = "0x1C0")]
	[Token(Token = "0x600132A")]
	private static void AdjustSessionFailureDelegate(AdjustSessionFailure inFailure) { }

	[Address(RVA = "0x126C2B4", Offset = "0x126C2B4", Length = "0x6C")]
	[Token(Token = "0x6001329")]
	private static void AdjustSessionSuccessDelegate(AdjustSessionSuccess inSuccess) { }

	[Address(RVA = "0x126C148", Offset = "0x126C148", Length = "0x10")]
	[Token(Token = "0x6001324")]
	public static void AttributionChangedCallback(AdjustAttribution attributionData) { }

	[Address(RVA = "0x126C158", Offset = "0x126C158", Length = "0x7C")]
	[Token(Token = "0x6001326")]
	public static void FireAdjustEvent(string ID) { }

	[Address(RVA = "0x126C1D4", Offset = "0x126C1D4", Length = "0xDC")]
	[Token(Token = "0x6001327")]
	public static void FireAdjustRevenueEvent(string ID, string currency, double amount, string transactionID) { }

	[Address(RVA = "0x126B7D8", Offset = "0x126B7D8", Length = "0x48")]
	[CompilerGenerated]
	[Token(Token = "0x6001321")]
	public static Adjust get_AdjustComponent() { }

	[Address(RVA = "0x126B744", Offset = "0x126B744", Length = "0x48")]
	[CompilerGenerated]
	[Token(Token = "0x600131F")]
	public static GameObject get_AdjustObject() { }

	[Address(RVA = "0x126B86C", Offset = "0x126B86C", Length = "0x518")]
	[Token(Token = "0x6001323")]
	public static bool Initialize(string AnalyticsID = null, Action<AdjustAttribution> OnAttributionChanged = null) { }

	[Address(RVA = "0x126BD84", Offset = "0x126BD84", Length = "0x3C4")]
	[Token(Token = "0x6001325")]
	private static bool InstantiateAdjustPrefab() { }

	[Address(RVA = "0x126C9A0", Offset = "0x126C9A0", Length = "0x21C")]
	[Token(Token = "0x6001330")]
	public static void RegisterEventCallbacks(Action<AdjustEventSuccess> inOnSuccess, Action<AdjustEventFailure> inOnFailure) { }

	[Address(RVA = "0x126C63C", Offset = "0x126C63C", Length = "0x21C")]
	[Token(Token = "0x600132E")]
	public static void RegisterSessionInitCallbacks(Action<AdjustSessionSuccess> inOnSuccess, Action<AdjustSessionFailure> inOnFailure) { }

	[Address(RVA = "0x126B820", Offset = "0x126B820", Length = "0x4C")]
	[CompilerGenerated]
	[Token(Token = "0x6001322")]
	private static void set_AdjustComponent(Adjust value) { }

	[Address(RVA = "0x126B78C", Offset = "0x126B78C", Length = "0x4C")]
	[CompilerGenerated]
	[Token(Token = "0x6001320")]
	private static void set_AdjustObject(GameObject value) { }

	[Address(RVA = "0x126CBBC", Offset = "0x126CBBC", Length = "0x148")]
	[Token(Token = "0x6001331")]
	public static void UnregisterEventCallbacks(Action<AdjustEventSuccess> inOnSuccess, Action<AdjustEventFailure> inOnFailure) { }

	[Address(RVA = "0x126C858", Offset = "0x126C858", Length = "0x148")]
	[Token(Token = "0x600132F")]
	public static void UnregisterSessionInitCallbacks(Action<AdjustSessionSuccess> inOnSuccess, Action<AdjustSessionFailure> inOnFailure) { }

}

