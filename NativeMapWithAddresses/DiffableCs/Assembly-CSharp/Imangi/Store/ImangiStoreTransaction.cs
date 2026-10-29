namespace Imangi.Store;

[Token(Token = "0x20001B8")]
public class ImangiStoreTransaction
{
	[Token(Token = "0x20001B9")]
	internal enum StoreTransactionState
	{
		Invalid = -1,
		Purchasing = 0,
		Purchased = 1,
		Failed = 2,
		Restored = 3,
	}

	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x4000FC9")]
	public string ProductIdentifier; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x4000FCA")]
	public string TransactionIdentifier; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000FCB")]
	public StoreTransactionState TransactionState; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000FCC")]
	public string PackageName; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000FCD")]
	public string OrderID; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000FCE")]
	public bool IsAcknowledged; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000FCF")]
	public string AppReceipt; //Field offset: 0x40

	[Address(RVA = "0x1217FE0", Offset = "0x1217FE0", Length = "0x60")]
	[Token(Token = "0x6000C8C")]
	public ImangiStoreTransaction() { }

	[Address(RVA = "0x1218040", Offset = "0x1218040", Length = "0x160")]
	[Token(Token = "0x6000C8D")]
	public ImangiStoreTransaction(Dictionary<String, Object> inDict) { }

}

