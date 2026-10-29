using System.Collections.Generic;

namespace Imangi.Store
{
	public class ImangiStoreTransaction
	{
		public enum StoreTransactionState
		{
			Invalid = -1,
			Purchasing = 0,
			Purchased = 1,
			Failed = 2,
			Restored = 3
		}

		public string ProductIdentifier;

		public string TransactionIdentifier;

		public StoreTransactionState TransactionState;

		public string PackageName;

		public string OrderID;

		public bool IsAcknowledged;

		public string AppReceipt;

		public ImangiStoreTransaction()
		{
		}

		public ImangiStoreTransaction(Dictionary<string, object> inDict)
		{
		}
	}
}
