namespace Imangi.GooglePlayServices;

[Token(Token = "0x2000265")]
public class ImangiGooglePlayServicesPlayer
{
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x40012A8")]
	public string DisplayName; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x40012A9")]
	public string PlayerId; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40012AA")]
	public long RetrievedTimestamp; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40012AB")]
	public string Title; //Field offset: 0x28

	[Address(RVA = "0x12512C0", Offset = "0x12512C0", Length = "0x8")]
	[Token(Token = "0x600113A")]
	public ImangiGooglePlayServicesPlayer() { }

	[Address(RVA = "0x12556A8", Offset = "0x12556A8", Length = "0x154")]
	[Token(Token = "0x6001138")]
	public static ImangiGooglePlayServicesPlayer BuildGPSPlayerFromDictionary(Dictionary<String, Object> dict) { }

	[Address(RVA = "0x124C01C", Offset = "0x124C01C", Length = "0x84")]
	[Token(Token = "0x6001137")]
	public static ImangiGooglePlayServicesPlayer BuildGPSPlayerFromJsonString(string jsonStr) { }

	[Address(RVA = "0x12557FC", Offset = "0x12557FC", Length = "0x20")]
	[Token(Token = "0x6001139")]
	public bool IsValidPlayer() { }

}

