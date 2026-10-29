namespace Imangi.GooglePlayServices;

[Token(Token = "0x2000262")]
public class ImangiGooglePlayServicesScoreSubmissionDataResult
{
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x4001285")]
	public string FormattedScore; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x4001286")]
	public bool NewBest; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4001287")]
	public long RawScore; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4001288")]
	public string ScoreTag; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4001289")]
	public LeaderboardTimeSpan TimeSpanType; //Field offset: 0x30

	[Address(RVA = "0x124DDD0", Offset = "0x124DDD0", Length = "0x5C")]
	[Token(Token = "0x60010C9")]
	public ImangiGooglePlayServicesScoreSubmissionDataResult() { }

	[Address(RVA = "0x124DC04", Offset = "0x124DC04", Length = "0x1CC")]
	[Token(Token = "0x60010C7")]
	public static bool BuildFromDictionary(Dictionary<String, Object> dict, out ImangiGooglePlayServicesScoreSubmissionDataResult outGpsScoreSubmissionDataResult) { }

	[Address(RVA = "0x124D9B0", Offset = "0x124D9B0", Length = "0x70")]
	[Token(Token = "0x60010C6")]
	public static ImangiGooglePlayServicesScoreSubmissionDataResult BuildFromDictionaryNoNullReturn(Dictionary<String, Object> dict) { }

	[Address(RVA = "0x124DB80", Offset = "0x124DB80", Length = "0x84")]
	[Token(Token = "0x60010C5")]
	public static ImangiGooglePlayServicesScoreSubmissionDataResult BuildFromJsonStringNoNullReturn(string jsonStr) { }

	[Address(RVA = "0x124DE2C", Offset = "0x124DE2C", Length = "0x1EC")]
	[Token(Token = "0x60010C8")]
	public virtual string ToString() { }

}

