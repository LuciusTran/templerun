namespace Imangi.GooglePlayServices;

[Token(Token = "0x2000261")]
public class ImangiGooglePlayServicesScoreSubmissionData
{
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x4001280")]
	public string LeaderboardId; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x4001281")]
	public string PlayerId; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4001282")]
	public ImangiGooglePlayServicesScoreSubmissionDataResult ScoreResultTimeSpanDaily; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4001283")]
	public ImangiGooglePlayServicesScoreSubmissionDataResult ScoreResultTimeSpanWeekly; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4001284")]
	public ImangiGooglePlayServicesScoreSubmissionDataResult ScoreResultTimeSpawnAllTime; //Field offset: 0x30

	[Address(RVA = "0x124D960", Offset = "0x124D960", Length = "0x50")]
	[Token(Token = "0x60010C4")]
	public ImangiGooglePlayServicesScoreSubmissionData() { }

	[Address(RVA = "0x124D700", Offset = "0x124D700", Length = "0x260")]
	[Token(Token = "0x60010C2")]
	public static bool BuildFromDictionary(Dictionary<String, Object> dict, out ImangiGooglePlayServicesScoreSubmissionData outGpsScoreSubmissionData) { }

	[Address(RVA = "0x124D690", Offset = "0x124D690", Length = "0x70")]
	[Token(Token = "0x60010C1")]
	public static ImangiGooglePlayServicesScoreSubmissionData BuildFromDictionaryNoNullReturn(Dictionary<String, Object> dict) { }

	[Address(RVA = "0x124D60C", Offset = "0x124D60C", Length = "0x84")]
	[Token(Token = "0x60010C0")]
	public static ImangiGooglePlayServicesScoreSubmissionData BuildFromJsonStringNoNullReturn(string jsonStr) { }

	[Address(RVA = "0x124DA20", Offset = "0x124DA20", Length = "0x160")]
	[Token(Token = "0x60010C3")]
	public virtual string ToString() { }

}

