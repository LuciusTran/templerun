namespace Imangi.Notifications;

[Token(Token = "0x2000259")]
public class DeliveredLocalNotification : IParsableJSONListElement
{
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x400125D")]
	public string Title; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x400125E")]
	public string Body; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x400125F")]
	public string AnalyticNotifyType; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4001260")]
	public int Category; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4001261")]
	public string ChannelId; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x4001262")]
	public DateTime UtcTimeToDeliver; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x4001263")]
	public Dictionary<String, String> ExtrasData; //Field offset: 0x40

	[Address(RVA = "0x124AF04", Offset = "0x124AF04", Length = "0xE4")]
	[Token(Token = "0x60010A0")]
	public DeliveredLocalNotification() { }

	[Address(RVA = "0x124AE84", Offset = "0x124AE84", Length = "0x80")]
	[Token(Token = "0x600109C")]
	public static bool BuildFromDictionary(Dictionary<String, Object> dict, out DeliveredLocalNotification outNotification) { }

	[Address(RVA = "0x124AA90", Offset = "0x124AA90", Length = "0x3F4")]
	[Token(Token = "0x600109B")]
	public bool CopyIDictionaryDataIntoExtrasData(IDictionary inDictInterface) { }

	[Address(RVA = "0x124AFE8", Offset = "0x124AFE8", Length = "0x22C")]
	[Token(Token = "0x600109D")]
	public override bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x124B320", Offset = "0x124B320", Length = "0x268")]
	[Token(Token = "0x600109E")]
	public override Dictionary<String, Object> ToDict() { }

	[Address(RVA = "0x124B214", Offset = "0x124B214", Length = "0x10C")]
	[Token(Token = "0x600109F")]
	private bool VerifyRequiredProperties() { }

}

