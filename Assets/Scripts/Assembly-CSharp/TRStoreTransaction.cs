using System.Collections.Generic;

public class TRStoreTransaction
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

	public TRStoreTransaction()
	{
	}

	public TRStoreTransaction(Dictionary<string, object> inDict)
	{
	}
}
