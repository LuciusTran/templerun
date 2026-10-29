using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Purchasing;
using UnityEngine.Purchasing.Extension;
using UnityEngine.Purchasing.Security;

namespace Imangi.Store
{
	public class UnityStoreManager : MonoBehaviour, IDetailedStoreListener, IStoreListener
	{
		public enum InitializeState
		{
			PendingInitialize = 0,
			Initializing = 1,
			SuccessfullyInitialized = 2,
			FailedToInitialize = 3
		}

		public enum IAPPurchaseState
		{
			Idle = 0,
			InProgress = 1,
			ProcessingPurchase = 2
		}

		public delegate void InitializationCallback(bool success, string message = "");

		public delegate void CompletedPurchaseCallback(string productId);

		public delegate void FailedPurchaseCallback(string productId, PurchaseFailureReason failureReason, string message);

		public delegate void NativeIAPWindowClosedCallback();

		public delegate void RestorePurchaseCompletedCallback(bool success, string message);

		private const string _LogChannel = "UnityStoreManager";

		private bool _VerboseLogging;

		protected InitializeState _InitializationState;

		protected IAPPurchaseState _StorePurchasingState;

		protected InitializationCallback _OnInitializationComplete;

		public CompletedPurchaseCallback OnPurchaseCompleted;

		public FailedPurchaseCallback OnPurchaseFailure;

		public RestorePurchaseCompletedCallback OnRestorePurchaseFinished;

		protected NativeIAPWindowClosedCallback onIAPWindowClosed;

		protected IStoreController _StoreController;

		protected IExtensionProvider _StoreExtensions;

		protected CrossPlatformValidator _PurchaseValidator;

		protected bool _UseClientValidator;

		public InitializeState InitializationState => InitializeState.PendingInitialize;

		public bool IsInitialized => false;

		public IAPPurchaseState StorePurchasingState => IAPPurchaseState.Idle;

		public event InitializationCallback OnInitializationComplete
		{
			add
			{
			}
			remove
			{
			}
		}

		public virtual void InitializeStore()
		{
		}

		public virtual void InitializeStore(params ProductDefinition[] products)
		{
		}

		public virtual void InitializeStore(IEnumerable<ProductDefinition> products)
		{
		}

		private void InitializeStore(IEnumerable<ProductDefinition> products, bool initializeWithIAPCatalog)
		{
		}

		public virtual void OnInitialized(IStoreController storeController, IExtensionProvider storeExtensions)
		{
		}

		public virtual void OnInitializeFailed(InitializationFailureReason error)
		{
		}

		public virtual void OnInitializeFailed(InitializationFailureReason error, string message)
		{
		}

		public virtual void OnPurchaseFailed(Product product, PurchaseFailureDescription failureDescription)
		{
		}

		public virtual void OnPurchaseFailed(Product product, PurchaseFailureReason failureReason)
		{
		}

		public virtual PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs purchaseEvent)
		{
			return PurchaseProcessingResult.Complete;
		}

		public virtual void Purchase(string productID, NativeIAPWindowClosedCallback onIAPWindowClosed = null)
		{
		}

		protected virtual void ProcessProductList()
		{
		}

		public virtual void RestorePurchases()
		{
		}

		protected virtual void OnDeferredPurchase(Product product)
		{
		}

		protected virtual void OnNativeIAPWindowClosed()
		{
		}

		protected virtual void OnRestore(bool success, string inString)
		{
		}

		public bool IsNonConsumablePurchased(string productID)
		{
			return false;
		}

		protected bool IsPurchaseValid(Product product)
		{
			return false;
		}

		private bool IsStoreFeatureEnabled()
		{
			return false;
		}

		public List<string> GetStoreProductIds()
		{
			return null;
		}

		private void DumpProductDetails()
		{
		}
	}
}
