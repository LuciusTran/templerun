namespace Imangi.GooglePlayServices;

[Token(Token = "0x2000266")]
public class ImangiGooglePlayServicesSnapshot
{
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x40012AC")]
	public string SnapshotName; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x40012AD")]
	public ImangiGooglePlayServicesSnapshotMetadata Metadata; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40012AE")]
	public ImangiGooglePlayServicesSnapshotContents Contents; //Field offset: 0x20

	[Address(RVA = "0x1255960", Offset = "0x1255960", Length = "0x8")]
	[Token(Token = "0x600113D")]
	public ImangiGooglePlayServicesSnapshot() { }

	[Address(RVA = "0x125581C", Offset = "0x125581C", Length = "0x144")]
	[Token(Token = "0x600113C")]
	public static ImangiGooglePlayServicesSnapshot BuildFromDictionary(Dictionary<String, Object> dict) { }

	[Address(RVA = "0x1254D00", Offset = "0x1254D00", Length = "0x84")]
	[Token(Token = "0x600113B")]
	public static ImangiGooglePlayServicesSnapshot BuildFromJsonString(string jsonStr) { }

}

