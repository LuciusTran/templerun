using System.Collections.Generic;
using Imangi.Store;
using UnityEngine.Purchasing;
using UnityEngine.Purchasing.Extension;

public class TRUnityStoreManager : UnityStoreManager
{
	public const string FeatureNameIapStore = "TRIapStore";

	private static IAPConfigData IAPConfig;

	protected string _LogChannel;

	protected bool _VerboseLogging;

	private static List<string> ProductIDs;

	private static Dictionary<string, string> ProductPrices;

	private static Dictionary<string, string> ProductIcons;

	private string url_fblikeus;

	private string url_followus;

	protected string _APIKey;

	protected const string _TempleCoinsProductNameA = "com.imangi.templerun.iap.coinpack.a";

	protected const string _TempleCoinsProductNameB = "com.imangi.templerun.iap.coinpack.b";

	protected const string _TempleCoinsProductNameC = "com.imangi.templerun.iap.coinpack.c";

	protected const string _TempleCoinsProductNameD = "com.imangi.templerun.iap.coinpack.d";

	public const string NoAdsProductID = "com.imangi.templerun.adremoval";

	private const int _TempleCoinsProductAmountA = 2500;

	private const int _TempleCoinsProductAmountB = 25000;

	private const int _TempleCoinsProductAmountC = 75000;

	private const int _TempleCoinsProductAmountD = 200000;

	protected const string _FBLikeUsProductName = "fblikeus";

	protected const string _TWFollowUsProductName = "twfollowus";

	protected bool _HasAlreadyPurchasedItems;

	protected string _CurrentPurchaseProductID;

	protected List<Product> _PendingProductRequests;

	protected string _CurrentConsumableProductID;

	protected List<string> _PendingConsumeProductItems;

	protected int _InputBlockingCount;

	public const string AdjustEventToken = "7e9viq";

	public static TRUnityStoreManager Instance;

	private bool AlertUp;

	private static string GiveCoinsProductID;

	private static VCGUI CallBackGUI;

	public static void InitializeConfig(PromoFile inPromoFile)
	{
	}

	private static bool ProcessIAPConfigData(ConfigData inConfigData)
	{
		return false;
	}

	public static int GetCoinAwardAmountForProductID(string productID)
	{
		return 0;
	}

	public static string GetAnalyticsNameForProductID(string inProductID)
	{
		return null;
	}

	public override void OnInitialized(IStoreController storeController, IExtensionProvider storeExtensions)
	{
	}

	public override void OnInitializeFailed(InitializationFailureReason error)
	{
	}

	public override void OnInitializeFailed(InitializationFailureReason error, string message)
	{
	}

	public override PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs purchaseEvent)
	{
		return PurchaseProcessingResult.Complete;
	}

	public override void OnPurchaseFailed(Product product, PurchaseFailureReason failureReason)
	{
	}

	public override void OnPurchaseFailed(Product product, PurchaseFailureDescription failureDescription)
	{
	}

	public override void Purchase(string productID, NativeIAPWindowClosedCallback onIAPWindowClosed = null)
	{
	}

	public override void RestorePurchases()
	{
	}

	public void AlertOK()
	{
	}

	public void AlertCancelledEvent()
	{
	}

	public void PurchaseProduct(string productId, VCGUI callBack = null)
	{
	}

	private void Awake()
	{
	}

	private void Start()
	{
	}

	protected void DisableInput()
	{
	}

	protected void EnableInput()
	{
	}

	private bool ProcessRealMoneyProduct(Product inProduct)
	{
		return false;
	}

	private void ProcessCurrencyProduct(string inProductId)
	{
	}

	private void ProcessPendingRequests()
	{
	}

	private void HandlePurchaseFailure(string inProductId, PurchaseFailureReason inReason, string inMessage)
	{
	}

	protected override void OnDeferredPurchase(Product product)
	{
	}

	protected override void OnNativeIAPWindowClosed()
	{
	}

	protected override void OnRestore(bool success, string inString)
	{
	}

	private bool GrantProduct(string productID, string source)
	{
		return false;
	}

	public void GetProducts(VCGUI callBack)
	{
	}

	protected override void ProcessProductList()
	{
	}

	public void FirePurchaseSuccessfullAdjustEvent(Product purchasedProduct)
	{
	}
}
