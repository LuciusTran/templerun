namespace Imangi.GooglePlayServices;

[Token(Token = "0x2000267")]
public class ImangiGooglePlayServicesSnapshotMetadata
{
	[Token(Token = "0x40012AF")]
	public const long PLAYED_TIME_UNKNOWN = -1; //Field offset: 0x0
	[Token(Token = "0x40012B0")]
	public const long PROGRESS_VALUE_UNKNOWN = -1; //Field offset: 0x0
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x40012B1")]
	public float CoverImageAspectRatio; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x40012B2")]
	public string CoverImageUri; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40012B3")]
	public string Description; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40012B4")]
	public long LastModifiedTimestamp; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40012B5")]
	public ImangiGooglePlayServicesPlayer Owner; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x40012B6")]
	public long PlayedTime; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x40012B7")]
	public long ProgressValue; //Field offset: 0x40
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x40012B8")]
	public string UniqueName; //Field offset: 0x48

	[Address(RVA = "0x1255CAC", Offset = "0x1255CAC", Length = "0x54")]
	[Token(Token = "0x6001141")]
	public ImangiGooglePlayServicesSnapshotMetadata() { }

	[Address(RVA = "0x1255A4C", Offset = "0x1255A4C", Length = "0x260")]
	[Token(Token = "0x6001140")]
	public static bool BuildFromDictionary(Dictionary<String, Object> dict, out ImangiGooglePlayServicesSnapshotMetadata gpsSnapshotMetadata) { }

	[Address(RVA = "0x1255968", Offset = "0x1255968", Length = "0x70")]
	[Token(Token = "0x600113F")]
	public static ImangiGooglePlayServicesSnapshotMetadata BuildFromDictionaryNoNullReturn(Dictionary<String, Object> dict) { }

	[Address(RVA = "0x1254214", Offset = "0x1254214", Length = "0x84")]
	[Token(Token = "0x600113E")]
	public static ImangiGooglePlayServicesSnapshotMetadata BuildFromJsonStringNoNullReturn(string jsonStr) { }

}

