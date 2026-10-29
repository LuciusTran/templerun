namespace Imangi.GooglePlayServices;

[Token(Token = "0x200025C")]
public class ImangiGooglePlayServicesAchievement
{
	[Token(Token = "0x200025D")]
	internal enum AchievementStateEnum
	{
		Uninitialized = -1,
		Unlocked = 0,
		Revealed = 1,
		Hidden = 2,
	}

	[Token(Token = "0x200025E")]
	internal enum AchievementTypeEnum
	{
		Uninitialized = -1,
		Standard = 0,
		Incremental = 1,
	}

	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x4001267")]
	public string AchievementId; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x4001268")]
	public int CurrentSteps; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4001269")]
	public string FormattedCurrentStepsString; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x400126A")]
	public string Description; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x400126B")]
	public long LastUpdatedTimestamp; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x400126C")]
	public string AchievementName; //Field offset: 0x38
	[FieldOffset(Offset = "0x40")]
	[Token(Token = "0x400126D")]
	public AchievementStateEnum AchievementState; //Field offset: 0x40
	[FieldOffset(Offset = "0x44")]
	[Token(Token = "0x400126E")]
	public AchievementTypeEnum AchievementType; //Field offset: 0x44
	[FieldOffset(Offset = "0x48")]
	[Token(Token = "0x400126F")]
	public int TotalSteps; //Field offset: 0x48
	[FieldOffset(Offset = "0x50")]
	[Token(Token = "0x4001270")]
	public string FormattedTotalStepsString; //Field offset: 0x50
	[FieldOffset(Offset = "0x58")]
	[Token(Token = "0x4001271")]
	public long XpValue; //Field offset: 0x58

	[Address(RVA = "0x124D1D4", Offset = "0x124D1D4", Length = "0x64")]
	[Token(Token = "0x60010BE")]
	public ImangiGooglePlayServicesAchievement() { }

	[Address(RVA = "0x124CB5C", Offset = "0x124CB5C", Length = "0x250")]
	[Token(Token = "0x60010B9")]
	public static List<ImangiGooglePlayServicesAchievement> BuildAchievementListFromList(List<Object> inList) { }

	[Address(RVA = "0x124CEA0", Offset = "0x124CEA0", Length = "0x334")]
	[Token(Token = "0x60010BC")]
	public static bool BuildFromDictionary(Dictionary<String, Object> dict, out ImangiGooglePlayServicesAchievement outAchievement) { }

	[Address(RVA = "0x124CDAC", Offset = "0x124CDAC", Length = "0x70")]
	[Token(Token = "0x60010BB")]
	public static ImangiGooglePlayServicesAchievement BuildFromDictionaryNoNullReturn(Dictionary<String, Object> dict) { }

	[Address(RVA = "0x124CE1C", Offset = "0x124CE1C", Length = "0x84")]
	[Token(Token = "0x60010BA")]
	public static ImangiGooglePlayServicesAchievement BuildFromJsonStringNoNullReturn(string jsonStr) { }

	[Address(RVA = "0x124D238", Offset = "0x124D238", Length = "0x3CC")]
	[Token(Token = "0x60010BD")]
	public virtual string ToString() { }

}

