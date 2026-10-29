namespace Imangi.Store;

[Token(Token = "0x20001BA")]
public class UnityStoreManager : MonoBehaviour, IDetailedStoreListener, IStoreListener
{
	[Token(Token = "0x20001BE")]
	internal sealed class CompletedPurchaseCallback : MulticastDelegate
	{

		[Address(RVA = "0x12195F0", Offset = "0x12195F0", Length = "0x9C")]
		[Token(Token = "0x6000CAD")]
		public CompletedPurchaseCallback(object object, IntPtr method) { }

		[Address(RVA = "0x12196A0", Offset = "0x12196A0", Length = "0x20")]
		[Token(Token = "0x6000CAF")]
		public override IAsyncResult BeginInvoke(string productId, AsyncCallback callback, object object) { }

		[Address(RVA = "0x12196C0", Offset = "0x12196C0", Length = "0xC")]
		[Token(Token = "0x6000CB0")]
		public override void EndInvoke(IAsyncResult result) { }

		[Address(RVA = "0x121968C", Offset = "0x121968C", Length = "0x14")]
		[Token(Token = "0x6000CAE")]
		public override void Invoke(string productId) { }

	}

	[Token(Token = "0x20001BF")]
	internal sealed class FailedPurchaseCallback : MulticastDelegate
	{

		[Address(RVA = "0x12196CC", Offset = "0x12196CC", Length = "0xA0")]
		[Token(Token = "0x6000CB1")]
		public FailedPurchaseCallback(object object, IntPtr method) { }

		[Address(RVA = "0x1219780", Offset = "0x1219780", Length = "0x98")]
		[Token(Token = "0x6000CB3")]
		public override IAsyncResult BeginInvoke(string productId, PurchaseFailureReason failureReason, string message, AsyncCallback callback, object object) { }

		[Address(RVA = "0x1219818", Offset = "0x1219818", Length = "0xC")]
		[Token(Token = "0x6000CB4")]
		public override void EndInvoke(IAsyncResult result) { }

		[Address(RVA = "0x121976C", Offset = "0x121976C", Length = "0x14")]
		[Token(Token = "0x6000CB2")]
		public override void Invoke(string productId, PurchaseFailureReason failureReason, string message) { }

	}

	[Token(Token = "0x20001BC")]
	internal enum IAPPurchaseState
	{
		Idle = 0,
		InProgress = 1,
		ProcessingPurchase = 2,
	}

	[Token(Token = "0x20001BD")]
	internal sealed class InitializationCallback : MulticastDelegate
	{

		[Address(RVA = "0x12194A8", Offset = "0x12194A8", Length = "0x8C")]
		[Token(Token = "0x6000CA9")]
		public InitializationCallback(object object, IntPtr method) { }

		[Address(RVA = "0x121954C", Offset = "0x121954C", Length = "0x98")]
		[Token(Token = "0x6000CAB")]
		public override IAsyncResult BeginInvoke(bool success, string message, AsyncCallback callback, object object) { }

		[Address(RVA = "0x12195E4", Offset = "0x12195E4", Length = "0xC")]
		[Token(Token = "0x6000CAC")]
		public override void EndInvoke(IAsyncResult result) { }

		[Address(RVA = "0x1219534", Offset = "0x1219534", Length = "0x18")]
		[Token(Token = "0x6000CAA")]
		public override void Invoke(bool success, string message = "") { }

	}

	[Token(Token = "0x20001BB")]
	internal enum InitializeState
	{
		PendingInitialize = 0,
		Initializing = 1,
		SuccessfullyInitialized = 2,
		FailedToInitialize = 3,
	}

	[Token(Token = "0x20001C0")]
	internal sealed class NativeIAPWindowClosedCallback : MulticastDelegate
	{

		[Address(RVA = "0x1219824", Offset = "0x1219824", Length = "0x88")]
		[Token(Token = "0x6000CB5")]
		public NativeIAPWindowClosedCallback(object object, IntPtr method) { }

		[Address(RVA = "0x12198C0", Offset = "0x12198C0", Length = "0x20")]
		[Token(Token = "0x6000CB7")]
		public override IAsyncResult BeginInvoke(AsyncCallback callback, object object) { }

		[Address(RVA = "0x12198E0", Offset = "0x12198E0", Length = "0xC")]
		[Token(Token = "0x6000CB8")]
		public override void EndInvoke(IAsyncResult result) { }

		[Address(RVA = "0x12198AC", Offset = "0x12198AC", Length = "0x14")]
		[Token(Token = "0x6000CB6")]
		public override void Invoke() { }

	}

	[Token(Token = "0x20001C1")]
	internal sealed class RestorePurchaseCompletedCallback : MulticastDelegate
	{

		[Address(RVA = "0x12198EC", Offset = "0x12198EC", Length = "0x8C")]
		[Token(Token = "0x6000CB9")]
		public RestorePurchaseCompletedCallback(object object, IntPtr method) { }

		[Address(RVA = "0x1219990", Offset = "0x1219990", Length = "0x98")]
		[Token(Token = "0x6000CBB")]
		public override IAsyncResult BeginInvoke(bool success, string message, AsyncCallback callback, object object) { }

		[Address(RVA = "0x1219A28", Offset = "0x1219A28", Length = "0xC")]
		[Token(Token = "0x6000CBC")]
		public override void EndInvoke(IAsyncResult result) { }

		[Address(RVA = "0x1219978", Offset = "0x1219978", Length = "0x18")]
		[Token(Token = "0x6000CBA")]
		public override void Invoke(bool success, string message) { }

	}

	[Token(Token = "0x4000FD6")]
	private const string _LogChannel = "UnityStoreManager"; //Field offset: 0x0
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000FD7")]
	private bool _VerboseLogging; //Field offset: 0x20
	[FieldOffset(Offset = "0x24")]
	[Token(Token = "0x4000FD8")]
	protected InitializeState _InitializationState; //Field offset: 0x24
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000FD9")]
	protected IAPPurchaseState _StorePurchasingState; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000FDA")]
	protected InitializationCallback _OnInitializationComplete; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000FDB")]
	public CompletedPurchaseCallback OnPurchaseCompleted; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000FDC")]
	public FailedPurchaseCallback OnPurchaseFailure; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4000FDD")]
	public RestorePurchaseCompletedCallback OnRestorePurchaseFinished; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4000FDE")]
	protected NativeIAPWindowClosedCallback onIAPWindowClosed; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4000FDF")]
	protected IStoreController _StoreController; //Field offset: 0x58
	[FieldOffset(Offset = "0x60")]
	[Token(Token = "0x4000FE0")]
	protected IExtensionProvider _StoreExtensions; //Field offset: 0x60
	[FieldOffset(Offset = "0x68")]
	[Token(Token = "0x4000FE1")]
	protected CrossPlatformValidator _PurchaseValidator; //Field offset: 0x68
	[FieldOffset(Offset = "0x70")]
	[Token(Token = "0x4000FE2")]
	protected bool _UseClientValidator; //Field offset: 0x70

	[Token(Token = "0x14000008")]
	public event InitializationCallback OnInitializationComplete
	{
		[Address(RVA = "0x12181C0", Offset = "0x12181C0", Length = "0xCC")]
		[Token(Token = "0x6000C91")]
		 add { } //Length: 204
		[Address(RVA = "0x121828C", Offset = "0x121828C", Length = "0x80")]
		[Token(Token = "0x6000C92")]
		 remove { } //Length: 128
	}

	[Token(Token = "0x170001A1")]
	public InitializeState InitializationState
	{
		[Address(RVA = "0x12181A0", Offset = "0x12181A0", Length = "0x8")]
		[Token(Token = "0x6000C8E")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170001A2")]
	public bool IsInitialized
	{
		[Address(RVA = "0x12181A8", Offset = "0x12181A8", Length = "0x10")]
		[Token(Token = "0x6000C8F")]
		 get { } //Length: 16
	}

	[Token(Token = "0x170001A3")]
	public IAPPurchaseState StorePurchasingState
	{
		[Address(RVA = "0x12181B8", Offset = "0x12181B8", Length = "0x8")]
		[Token(Token = "0x6000C90")]
		 get { } //Length: 8
	}

	[Address(RVA = "0x12194A0", Offset = "0x12194A0", Length = "0x8")]
	[Token(Token = "0x6000CA8")]
	public UnityStoreManager() { }

	[Address(RVA = "0x12181C0", Offset = "0x12181C0", Length = "0xCC")]
	[Token(Token = "0x6000C91")]
	public void add_OnInitializationComplete(InitializationCallback value) { }

	[Address(RVA = "0x121949C", Offset = "0x121949C", Length = "0x4")]
	[Token(Token = "0x6000CA7")]
	private void DumpProductDetails() { }

	[Address(RVA = "0x12181A0", Offset = "0x12181A0", Length = "0x8")]
	[Token(Token = "0x6000C8E")]
	public InitializeState get_InitializationState() { }

	[Address(RVA = "0x12181A8", Offset = "0x12181A8", Length = "0x10")]
	[Token(Token = "0x6000C8F")]
	public bool get_IsInitialized() { }

	[Address(RVA = "0x12181B8", Offset = "0x12181B8", Length = "0x8")]
	[Token(Token = "0x6000C90")]
	public IAPPurchaseState get_StorePurchasingState() { }

	[Address(RVA = "0x12192F8", Offset = "0x12192F8", Length = "0x1A4")]
	[Token(Token = "0x6000CA6")]
	public List<String> GetStoreProductIds() { }

	[Address(RVA = "0x121830C", Offset = "0x121830C", Length = "0xC")]
	[Token(Token = "0x6000C93")]
	public override void InitializeStore() { }

	[Address(RVA = "0x12185D0", Offset = "0x12185D0", Length = "0x8")]
	[Token(Token = "0x6000C94")]
	public override void InitializeStore(ProductDefinition[] products) { }

	[Address(RVA = "0x12185D8", Offset = "0x12185D8", Length = "0x8")]
	[Token(Token = "0x6000C95")]
	public override void InitializeStore(IEnumerable<ProductDefinition> products) { }

	[Address(RVA = "0x1218318", Offset = "0x1218318", Length = "0x2B8")]
	[Token(Token = "0x6000C96")]
	private void InitializeStore(IEnumerable<ProductDefinition> products, bool initializeWithIAPCatalog) { }

	[Address(RVA = "0x1219134", Offset = "0x1219134", Length = "0x100")]
	[Token(Token = "0x6000CA3")]
	public bool IsNonConsumablePurchased(string productID) { }

	[Address(RVA = "0x1219234", Offset = "0x1219234", Length = "0xC4")]
	[Token(Token = "0x6000CA4")]
	protected bool IsPurchaseValid(Product product) { }

	[Address(RVA = "0x12185E0", Offset = "0x12185E0", Length = "0xC0")]
	[Token(Token = "0x6000CA5")]
	private bool IsStoreFeatureEnabled() { }

	[Address(RVA = "0x1218E20", Offset = "0x1218E20", Length = "0x10")]
	[Token(Token = "0x6000CA0")]
	protected override void OnDeferredPurchase(Product product) { }

	[Address(RVA = "0x12186A0", Offset = "0x12186A0", Length = "0x238")]
	[Token(Token = "0x6000C97")]
	public override void OnInitialized(IStoreController storeController, IExtensionProvider storeExtensions) { }

	[Address(RVA = "0x1218948", Offset = "0x1218948", Length = "0x28")]
	[Token(Token = "0x6000C99")]
	public override void OnInitializeFailed(InitializationFailureReason error, string message) { }

	[Address(RVA = "0x12188D8", Offset = "0x12188D8", Length = "0x70")]
	[Token(Token = "0x6000C98")]
	public override void OnInitializeFailed(InitializationFailureReason error) { }

	[Address(RVA = "0x1218E30", Offset = "0x1218E30", Length = "0x170")]
	[Token(Token = "0x6000CA1")]
	protected override void OnNativeIAPWindowClosed() { }

	[Address(RVA = "0x1218970", Offset = "0x1218970", Length = "0x38")]
	[Token(Token = "0x6000C9A")]
	public override void OnPurchaseFailed(Product product, PurchaseFailureDescription failureDescription) { }

	[Address(RVA = "0x12189A8", Offset = "0x12189A8", Length = "0x38")]
	[Token(Token = "0x6000C9B")]
	public override void OnPurchaseFailed(Product product, PurchaseFailureReason failureReason) { }

	[Address(RVA = "0x1218FA0", Offset = "0x1218FA0", Length = "0x194")]
	[Token(Token = "0x6000CA2")]
	protected override void OnRestore(bool success, string inString) { }

	[Address(RVA = "0x1218B0C", Offset = "0x1218B0C", Length = "0x4")]
	[Token(Token = "0x6000C9E")]
	protected override void ProcessProductList() { }

	[Address(RVA = "0x12189E0", Offset = "0x12189E0", Length = "0x38")]
	[Token(Token = "0x6000C9C")]
	public override PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs purchaseEvent) { }

	[Address(RVA = "0x1218A18", Offset = "0x1218A18", Length = "0xF4")]
	[Token(Token = "0x6000C9D")]
	public override void Purchase(string productID, NativeIAPWindowClosedCallback onIAPWindowClosed = null) { }

	[Address(RVA = "0x121828C", Offset = "0x121828C", Length = "0x80")]
	[Token(Token = "0x6000C92")]
	public void remove_OnInitializationComplete(InitializationCallback value) { }

	[Address(RVA = "0x1218B10", Offset = "0x1218B10", Length = "0x310")]
	[Token(Token = "0x6000C9F")]
	public override void RestorePurchases() { }

}

