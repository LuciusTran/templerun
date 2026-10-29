namespace Imangi.GooglePlayServices;

[Token(Token = "0x2000268")]
public class ImangiGooglePlayServicesSnapshotContents
{
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x40012B9")]
	protected string DataAsUtf8EncodedString; //Field offset: 0x10

	[Address(RVA = "0x1255ED8", Offset = "0x1255ED8", Length = "0x8")]
	[Token(Token = "0x6001149")]
	public ImangiGooglePlayServicesSnapshotContents() { }

	[Address(RVA = "0x1255DF0", Offset = "0x1255DF0", Length = "0xE8")]
	[Token(Token = "0x6001148")]
	public static bool BuildFromDictionary(Dictionary<String, Object> dict, out ImangiGooglePlayServicesSnapshotContents gpsSnapshotContents) { }

	[Address(RVA = "0x12559D8", Offset = "0x12559D8", Length = "0x74")]
	[Token(Token = "0x6001147")]
	public static ImangiGooglePlayServicesSnapshotContents BuildFromDictionaryNoNullReturn(Dictionary<String, Object> dict) { }

	[Address(RVA = "0x1255D6C", Offset = "0x1255D6C", Length = "0x84")]
	[Token(Token = "0x6001146")]
	public static ImangiGooglePlayServicesSnapshotContents BuildFromJsonStringNoNullReturn(string jsonStr) { }

	[Address(RVA = "0x1255D28", Offset = "0x1255D28", Length = "0x1C")]
	[Token(Token = "0x6001144")]
	public bool GetDataContentsAsByteArray(ref Byte[] refDataBytes) { }

	[Address(RVA = "0x1255D44", Offset = "0x1255D44", Length = "0x28")]
	[Token(Token = "0x6001145")]
	public Byte[] GetDataContentsAsByteArray() { }

	[Address(RVA = "0x1255D20", Offset = "0x1255D20", Length = "0x8")]
	[Token(Token = "0x6001143")]
	public string GetDataContentsAsUtf8EncodedString() { }

	[Address(RVA = "0x1255D00", Offset = "0x1255D00", Length = "0x20")]
	[Token(Token = "0x6001142")]
	public bool HasDataContents() { }

}

