//Type is in global namespace

[Token(Token = "0x2000007")]
public class TRStoreTransaction
{
	[Token(Token = "0x2000008")]
	internal enum StoreTransactionState
	{
		Invalid = -1,
		Purchasing = 0,
		Purchased = 1,
		Failed = 2,
		Restored = 3,
	}

	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x400002B")]
	public string ProductIdentifier; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x400002C")]
	public string TransactionIdentifier; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x400002D")]
	public StoreTransactionState TransactionState; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x400002E")]
	public string PackageName; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x400002F")]
	public string OrderID; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000030")]
	public bool IsAcknowledged; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000031")]
	public string AppReceipt; //Field offset: 0x40

	[Address(RVA = "0x11EBA9C", Offset = "0x11EBA9C", Length = "0x60")]
	[Token(Token = "0x600001C")]
	public TRStoreTransaction() { }

	[Address(RVA = "0x11EBAFC", Offset = "0x11EBAFC", Length = "0x168")]
	[Token(Token = "0x600001D")]
	public TRStoreTransaction(Dictionary<String, Object> inDict) { }

}

