namespace Imangi.Store;

[Token(Token = "0x20001B7")]
public class ImangiStoreProduct
{
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x4000FC1")]
	public string ProductIdentifier; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x4000FC2")]
	public string Title; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000FC3")]
	public string Description; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000FC4")]
	public string FormattedPrice; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4000FC5")]
	public string Price; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4000FC6")]
	public string CurrencySymbol; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4000FC7")]
	public string CurrencyCode; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x4000FC8")]
	public string CountryCode; //Field offset: 0x48

	[Address(RVA = "0x1217D10", Offset = "0x1217D10", Length = "0x140")]
	[Token(Token = "0x6000C89")]
	public ImangiStoreProduct(List<String> inProducts) { }

	[Address(RVA = "0x1217E50", Offset = "0x1217E50", Length = "0x5C")]
	[Token(Token = "0x6000C8A")]
	public ImangiStoreProduct() { }

	[Address(RVA = "0x1217EAC", Offset = "0x1217EAC", Length = "0x134")]
	[Token(Token = "0x6000C8B")]
	public virtual string ToString() { }

}

