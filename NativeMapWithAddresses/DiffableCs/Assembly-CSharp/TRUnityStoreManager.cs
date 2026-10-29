//Type is in global namespace

[Token(Token = "0x2000127")]
public class TRUnityStoreManager : UnityStoreManager
{
	[Token(Token = "0x4000A58")]
	public const string FeatureNameIapStore = "TRIapStore"; //Field offset: 0x0
	[Token(Token = "0x4000A73")]
	public const string AdjustEventToken = "7e9viq"; //Field offset: 0x0
	[Token(Token = "0x4000A6C")]
	protected const string _TWFollowUsProductName = "twfollowus"; //Field offset: 0x0
	[Token(Token = "0x4000A6B")]
	protected const string _FBLikeUsProductName = "fblikeus"; //Field offset: 0x0
	[Token(Token = "0x4000A6A")]
	private const int _TempleCoinsProductAmountD = 200000; //Field offset: 0x0
	[Token(Token = "0x4000A69")]
	private const int _TempleCoinsProductAmountC = 75000; //Field offset: 0x0
	[Token(Token = "0x4000A68")]
	private const int _TempleCoinsProductAmountB = 25000; //Field offset: 0x0
	[Token(Token = "0x4000A66")]
	public const string NoAdsProductID = "com.imangi.templerun.adremoval"; //Field offset: 0x0
	[Token(Token = "0x4000A65")]
	protected const string _TempleCoinsProductNameD = "com.imangi.templerun.iap.coinpack.d"; //Field offset: 0x0
	[Token(Token = "0x4000A64")]
	protected const string _TempleCoinsProductNameC = "com.imangi.templerun.iap.coinpack.c"; //Field offset: 0x0
	[Token(Token = "0x4000A63")]
	protected const string _TempleCoinsProductNameB = "com.imangi.templerun.iap.coinpack.b"; //Field offset: 0x0
	[Token(Token = "0x4000A67")]
	private const int _TempleCoinsProductAmountA = 2500; //Field offset: 0x0
	[Token(Token = "0x4000A62")]
	protected const string _TempleCoinsProductNameA = "com.imangi.templerun.iap.coinpack.a"; //Field offset: 0x0
	[Token(Token = "0x4000A59")]
	private static IAPConfigData IAPConfig; //Field offset: 0x0
	[Token(Token = "0x4000A5C")]
	private static List<String> ProductIDs; //Field offset: 0x8
	[Token(Token = "0x4000A5D")]
	private static Dictionary<String, String> ProductPrices; //Field offset: 0x10
	[Token(Token = "0x4000A5E")]
	private static Dictionary<String, String> ProductIcons; //Field offset: 0x18
	[Token(Token = "0x4000A74")]
	public static TRUnityStoreManager Instance; //Field offset: 0x20
	[Token(Token = "0x4000A76")]
	private static string GiveCoinsProductID; //Field offset: 0x28
	[Token(Token = "0x4000A77")]
	private static VCGUI CallBackGUI; //Field offset: 0x30
	[FieldOffset(Offset = "0x78")]
	[Token(Token = "0x4000A5A")]
	protected string _LogChannel; //Field offset: 0x78
	[FieldOffset(Offset = "0x80")]
	[Token(Token = "0x4000A5B")]
	protected bool _VerboseLogging; //Field offset: 0x80
	[FieldOffset(Offset = "0x88")]
	[Token(Token = "0x4000A5F")]
	private string url_fblikeus; //Field offset: 0x88
	[FieldOffset(Offset = "0x90")]
	[Token(Token = "0x4000A60")]
	private string url_followus; //Field offset: 0x90
	[FieldOffset(Offset = "0x98")]
	[Token(Token = "0x4000A61")]
	protected string _APIKey; //Field offset: 0x98
	[FieldOffset(Offset = "0xA0")]
	[Token(Token = "0x4000A6D")]
	protected bool _HasAlreadyPurchasedItems; //Field offset: 0xA0
	[FieldOffset(Offset = "0xA8")]
	[Token(Token = "0x4000A6E")]
	protected string _CurrentPurchaseProductID; //Field offset: 0xA8
	[FieldOffset(Offset = "0xB0")]
	[Token(Token = "0x4000A6F")]
	protected List<Product> _PendingProductRequests; //Field offset: 0xB0
	[FieldOffset(Offset = "0xB8")]
	[Token(Token = "0x4000A70")]
	protected string _CurrentConsumableProductID; //Field offset: 0xB8
	[FieldOffset(Offset = "0xC0")]
	[Token(Token = "0x4000A71")]
	protected List<String> _PendingConsumeProductItems; //Field offset: 0xC0
	[FieldOffset(Offset = "0xC8")]
	[Token(Token = "0x4000A72")]
	protected int _InputBlockingCount; //Field offset: 0xC8
	[FieldOffset(Offset = "0xCC")]
	[Token(Token = "0x4000A75")]
	private bool AlertUp; //Field offset: 0xCC

	[Address(RVA = "0x12F0370", Offset = "0x12F0370", Length = "0x154")]
	[Token(Token = "0x60008C6")]
	private static TRUnityStoreManager() { }

	[Address(RVA = "0x12F0208", Offset = "0x12F0208", Length = "0x168")]
	[Token(Token = "0x60008C5")]
	public TRUnityStoreManager() { }

	[Address(RVA = "0x12EE7C8", Offset = "0x12EE7C8", Length = "0x8")]
	[Token(Token = "0x60008B4")]
	public void AlertCancelledEvent() { }

	[Address(RVA = "0x12EE294", Offset = "0x12EE294", Length = "0x3FC")]
	[Token(Token = "0x60008B3")]
	public void AlertOK() { }

	[Address(RVA = "0x12EEBB4", Offset = "0x12EEBB4", Length = "0xB4")]
	[Token(Token = "0x60008B6")]
	private void Awake() { }

	[Address(RVA = "0x12EE270", Offset = "0x12EE270", Length = "0x1C")]
	[Token(Token = "0x60008B8")]
	protected void DisableInput() { }

	[Address(RVA = "0x12EE690", Offset = "0x12EE690", Length = "0x138")]
	[Token(Token = "0x60008B9")]
	protected void EnableInput() { }

	[Address(RVA = "0x12EF4FC", Offset = "0x12EF4FC", Length = "0x114")]
	[Token(Token = "0x60008C4")]
	public void FirePurchaseSuccessfullAdjustEvent(Product purchasedProduct) { }

	[Address(RVA = "0x12ED968", Offset = "0x12ED968", Length = "0x1D4")]
	[Token(Token = "0x60008AA")]
	public static string GetAnalyticsNameForProductID(string inProductID) { }

	[Address(RVA = "0x12ED718", Offset = "0x12ED718", Length = "0x250")]
	[Token(Token = "0x60008A9")]
	public static int GetCoinAwardAmountForProductID(string productID) { }

	[Address(RVA = "0x12EF824", Offset = "0x12EF824", Length = "0x6F8")]
	[Token(Token = "0x60008C2")]
	public void GetProducts(VCGUI callBack) { }

	[Address(RVA = "0x12EF180", Offset = "0x12EF180", Length = "0x37C")]
	[Token(Token = "0x60008C1")]
	private bool GrantProduct(string productID, string source) { }

	[Address(RVA = "0x12EDF58", Offset = "0x12EDF58", Length = "0x260")]
	[Token(Token = "0x60008BD")]
	private void HandlePurchaseFailure(string inProductId, PurchaseFailureReason inReason, string inMessage) { }

	[Address(RVA = "0x12ED59C", Offset = "0x12ED59C", Length = "0xB8")]
	[Token(Token = "0x60008A7")]
	public static void InitializeConfig(PromoFile inPromoFile) { }

	[Address(RVA = "0x12EF7E0", Offset = "0x12EF7E0", Length = "0x8")]
	[Token(Token = "0x60008BE")]
	protected virtual void OnDeferredPurchase(Product product) { }

	[Address(RVA = "0x12EDB3C", Offset = "0x12EDB3C", Length = "0x28")]
	[Token(Token = "0x60008AB")]
	public virtual void OnInitialized(IStoreController storeController, IExtensionProvider storeExtensions) { }

	[Address(RVA = "0x12EDB64", Offset = "0x12EDB64", Length = "0x8")]
	[Token(Token = "0x60008AC")]
	public virtual void OnInitializeFailed(InitializationFailureReason error) { }

	[Address(RVA = "0x12EDB6C", Offset = "0x12EDB6C", Length = "0x8")]
	[Token(Token = "0x60008AD")]
	public virtual void OnInitializeFailed(InitializationFailureReason error, string message) { }

	[Address(RVA = "0x12EF7E8", Offset = "0x12EF7E8", Length = "0x1C")]
	[Token(Token = "0x60008BF")]
	protected virtual void OnNativeIAPWindowClosed() { }

	[Address(RVA = "0x12EDEE8", Offset = "0x12EDEE8", Length = "0x70")]
	[Token(Token = "0x60008AF")]
	public virtual void OnPurchaseFailed(Product product, PurchaseFailureReason failureReason) { }

	[Address(RVA = "0x12EE1B8", Offset = "0x12EE1B8", Length = "0x30")]
	[Token(Token = "0x60008B0")]
	public virtual void OnPurchaseFailed(Product product, PurchaseFailureDescription failureDescription) { }

	[Address(RVA = "0x12EF804", Offset = "0x12EF804", Length = "0x20")]
	[Token(Token = "0x60008C0")]
	protected virtual void OnRestore(bool success, string inString) { }

	[Address(RVA = "0x12EF610", Offset = "0x12EF610", Length = "0x78")]
	[Token(Token = "0x60008BB")]
	private void ProcessCurrencyProduct(string inProductId) { }

	[Address(RVA = "0x12ED654", Offset = "0x12ED654", Length = "0xC4")]
	[Token(Token = "0x60008A8")]
	private static bool ProcessIAPConfigData(ConfigData inConfigData) { }

	[Address(RVA = "0x12EF688", Offset = "0x12EF688", Length = "0x158")]
	[Token(Token = "0x60008BC")]
	private void ProcessPendingRequests() { }

	[Address(RVA = "0x12EFF1C", Offset = "0x12EFF1C", Length = "0x2EC")]
	[Token(Token = "0x60008C3")]
	protected virtual void ProcessProductList() { }

	[Address(RVA = "0x12EDB74", Offset = "0x12EDB74", Length = "0x170")]
	[Token(Token = "0x60008AE")]
	public virtual PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs purchaseEvent) { }

	[Address(RVA = "0x12EDCE4", Offset = "0x12EDCE4", Length = "0x204")]
	[Token(Token = "0x60008BA")]
	private bool ProcessRealMoneyProduct(Product inProduct) { }

	[Address(RVA = "0x12EE1E8", Offset = "0x12EE1E8", Length = "0x88")]
	[Token(Token = "0x60008B1")]
	public virtual void Purchase(string productID, NativeIAPWindowClosedCallback onIAPWindowClosed = null) { }

	[Address(RVA = "0x12EE7D0", Offset = "0x12EE7D0", Length = "0x3E4")]
	[Token(Token = "0x60008B5")]
	public void PurchaseProduct(string productId, VCGUI callBack = null) { }

	[Address(RVA = "0x12EE28C", Offset = "0x12EE28C", Length = "0x8")]
	[Token(Token = "0x60008B2")]
	public virtual void RestorePurchases() { }

	[Address(RVA = "0x12EEC68", Offset = "0x12EEC68", Length = "0x518")]
	[Token(Token = "0x60008B7")]
	private void Start() { }

}

