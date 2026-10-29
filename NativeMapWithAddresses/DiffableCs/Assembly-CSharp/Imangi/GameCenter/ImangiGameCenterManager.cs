namespace Imangi.GameCenter;

[Token(Token = "0x2000273")]
public class ImangiGameCenterManager : MonoBehaviour
{
	[Token(Token = "0x2000274")]
	internal enum ViewControllerState
	{
		Default = -1,
		Leaderboards = 0,
		Achievements = 1,
		Challenges = 2,
	}

	[Token(Token = "0x40012F0")]
	public static readonly string LogChannel; //Field offset: 0x0
	[CompilerGenerated]
	[Token(Token = "0x40012F1")]
	private static Action<ImangiGameCenterPlayer> LocalPlayerAuthenticateSuccessEvent; //Field offset: 0x8
	[CompilerGenerated]
	[Token(Token = "0x40012F2")]
	private static Action<String> LocalPlayerAuthenticateFailedEvent; //Field offset: 0x10
	[CompilerGenerated]
	[Token(Token = "0x40012F3")]
	private static Action LocalPlayerLoggedOutEvent; //Field offset: 0x18
	[CompilerGenerated]
	[Token(Token = "0x40012F4")]
	private static Action LocalPlayerChangedEvent; //Field offset: 0x20
	[CompilerGenerated]
	[Token(Token = "0x40012F5")]
	private static Action<List`1<ImangiGameCenterPlayer>> FriendsListReceivedEvent; //Field offset: 0x28
	[CompilerGenerated]
	[Token(Token = "0x40012F6")]
	private static Action<String> FriendsListFailedEvent; //Field offset: 0x30
	[CompilerGenerated]
	[Token(Token = "0x40012F7")]
	private static Action<ImangiGameCenterPlayer, String> LoadPlayerPhotoSucceededEvent; //Field offset: 0x38
	[CompilerGenerated]
	[Token(Token = "0x40012F8")]
	private static Action<String> LoadPlayerPhotoFailedEvent; //Field offset: 0x40
	[CompilerGenerated]
	[Token(Token = "0x40012F9")]
	private static Action<List`1<ImangiGameCenterLeaderboard>> LoadLeaderboardInfoSucceededEvent; //Field offset: 0x48
	[CompilerGenerated]
	[Token(Token = "0x40012FA")]
	private static Action<String> LoadLeaderboardInfoFailedEvent; //Field offset: 0x50
	[CompilerGenerated]
	[Token(Token = "0x40012FB")]
	private static Action<String> ReportScoreSucceededEvent; //Field offset: 0x58
	[CompilerGenerated]
	[Token(Token = "0x40012FC")]
	private static Action<String, String> ReportScoreFailedEvent; //Field offset: 0x60
	[CompilerGenerated]
	[Token(Token = "0x40012FD")]
	private static Action<String> ShowLeaderboardSucceededEvent; //Field offset: 0x68
	[CompilerGenerated]
	[Token(Token = "0x40012FE")]
	private static Action<String> ShowLeaderboardFailedEvent; //Field offset: 0x70
	[CompilerGenerated]
	[Token(Token = "0x40012FF")]
	private static Action<String> LeaderboardDismissedEvent; //Field offset: 0x78
	[CompilerGenerated]
	[Token(Token = "0x4001300")]
	private static Action<List`1<ImangiGameCenterScore>> RetrieveScoresSucceededEvent; //Field offset: 0x80
	[CompilerGenerated]
	[Token(Token = "0x4001301")]
	private static Action<String> RetrieveScoresFailedEvent; //Field offset: 0x88
	[CompilerGenerated]
	[Token(Token = "0x4001302")]
	private static Action<String> ReportAchievementSucceededEvent; //Field offset: 0x90
	[CompilerGenerated]
	[Token(Token = "0x4001303")]
	private static Action<String> ReportAchievementFailedEvent; //Field offset: 0x98
	[CompilerGenerated]
	[Token(Token = "0x4001304")]
	private static Action<List`1<ImangiGameCenterAchievement>> LoadAchievementsSucceededEvent; //Field offset: 0xA0
	[CompilerGenerated]
	[Token(Token = "0x4001305")]
	private static Action<String> LoadAchievementsFailedEvent; //Field offset: 0xA8
	[CompilerGenerated]
	[Token(Token = "0x4001306")]
	private static Action<List`1<ImangiGameCenterAchievementDescription>> LoadAchievementDescriptionsSucceededEvent; //Field offset: 0xB0
	[CompilerGenerated]
	[Token(Token = "0x4001307")]
	private static Action<String> LoadAchievementDescriptionsFailedEvent; //Field offset: 0xB8
	[CompilerGenerated]
	[Token(Token = "0x4001308")]
	private static Action ResetAchievementsSucceededEvent; //Field offset: 0xC0
	[CompilerGenerated]
	[Token(Token = "0x4001309")]
	private static Action<String> ResetAchievementsFailedEvent; //Field offset: 0xC8
	[CompilerGenerated]
	[Token(Token = "0x400130A")]
	private static Action<String> ShowAchievementsSucceededEvent; //Field offset: 0xD0
	[CompilerGenerated]
	[Token(Token = "0x400130B")]
	private static Action<String> ShowAchievementsFailedEvent; //Field offset: 0xD8
	[CompilerGenerated]
	[Token(Token = "0x400130C")]
	private static Action<String> AchievementsDismissedEvent; //Field offset: 0xE0
	[CompilerGenerated]
	[Token(Token = "0x400130D")]
	private static Action<List`1<ImangiGameCenterChallenge>> GetChallengesSucceededEvent; //Field offset: 0xE8
	[CompilerGenerated]
	[Token(Token = "0x400130E")]
	private static Action<String> GetChallengesFailedEvent; //Field offset: 0xF0
	[CompilerGenerated]
	[Token(Token = "0x400130F")]
	private static Action<String> ShowChallengesSucceededEvent; //Field offset: 0xF8
	[CompilerGenerated]
	[Token(Token = "0x4001310")]
	private static Action<String> ShowChallengesFailedEvent; //Field offset: 0x100
	[CompilerGenerated]
	[Token(Token = "0x4001311")]
	private static Action<String> ChallengesDismissedEvent; //Field offset: 0x108
	[CompilerGenerated]
	[Token(Token = "0x4001312")]
	private static Action<Boolean> SendFriendsChallengeSucceededEvent; //Field offset: 0x110
	[CompilerGenerated]
	[Token(Token = "0x4001313")]
	private static Action<String> SendFriendsChallengeFailedEvent; //Field offset: 0x118
	[CompilerGenerated]
	[Token(Token = "0x4001314")]
	private static Action LocalPlayerDidSelectChallengeEvent; //Field offset: 0x120
	[Token(Token = "0x4001315")]
	protected static ImangiGameCenterManager Instance; //Field offset: 0x128
	[Token(Token = "0x4001316")]
	protected static GameObject GameCenterGameObj; //Field offset: 0x130
	[Token(Token = "0x4001317")]
	public static bool GameCenterVerboseLogging; //Field offset: 0x138
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4001318")]
	protected ImangiGameCenterPlayer CurrentLocalPlayer; //Field offset: 0x20

	[Token(Token = "0x14000059")]
	public static event Action<String> AchievementsDismissedEvent
	{
		[Address(RVA = "0x125E7E8", Offset = "0x125E7E8", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011E9")]
		 add { } //Length: 244
		[Address(RVA = "0x125E8DC", Offset = "0x125E8DC", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011EA")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x1400005E")]
	public static event Action<String> ChallengesDismissedEvent
	{
		[Address(RVA = "0x125F170", Offset = "0x125F170", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011F3")]
		 add { } //Length: 244
		[Address(RVA = "0x125F264", Offset = "0x125F264", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011F4")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000043")]
	public static event Action<String> FriendsListFailedEvent
	{
		[Address(RVA = "0x125BE28", Offset = "0x125BE28", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011BD")]
		 add { } //Length: 244
		[Address(RVA = "0x125BF1C", Offset = "0x125BF1C", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011BE")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000042")]
	public static event Action<List`1<ImangiGameCenterPlayer>> FriendsListReceivedEvent
	{
		[Address(RVA = "0x125BC40", Offset = "0x125BC40", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011BB")]
		 add { } //Length: 244
		[Address(RVA = "0x125BD34", Offset = "0x125BD34", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011BC")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x1400005B")]
	public static event Action<String> GetChallengesFailedEvent
	{
		[Address(RVA = "0x125EBB8", Offset = "0x125EBB8", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011ED")]
		 add { } //Length: 244
		[Address(RVA = "0x125ECAC", Offset = "0x125ECAC", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011EE")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x1400005A")]
	public static event Action<List`1<ImangiGameCenterChallenge>> GetChallengesSucceededEvent
	{
		[Address(RVA = "0x125E9D0", Offset = "0x125E9D0", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011EB")]
		 add { } //Length: 244
		[Address(RVA = "0x125EAC4", Offset = "0x125EAC4", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011EC")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x1400004C")]
	public static event Action<String> LeaderboardDismissedEvent
	{
		[Address(RVA = "0x125CF50", Offset = "0x125CF50", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011CF")]
		 add { } //Length: 244
		[Address(RVA = "0x125D044", Offset = "0x125D044", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011D0")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000054")]
	public static event Action<String> LoadAchievementDescriptionsFailedEvent
	{
		[Address(RVA = "0x125DE90", Offset = "0x125DE90", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011DF")]
		 add { } //Length: 244
		[Address(RVA = "0x125DF84", Offset = "0x125DF84", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011E0")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000053")]
	public static event Action<List`1<ImangiGameCenterAchievementDescription>> LoadAchievementDescriptionsSucceededEvent
	{
		[Address(RVA = "0x125DCA8", Offset = "0x125DCA8", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011DD")]
		 add { } //Length: 244
		[Address(RVA = "0x125DD9C", Offset = "0x125DD9C", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011DE")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000052")]
	public static event Action<String> LoadAchievementsFailedEvent
	{
		[Address(RVA = "0x125DAC0", Offset = "0x125DAC0", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011DB")]
		 add { } //Length: 244
		[Address(RVA = "0x125DBB4", Offset = "0x125DBB4", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011DC")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000051")]
	public static event Action<List`1<ImangiGameCenterAchievement>> LoadAchievementsSucceededEvent
	{
		[Address(RVA = "0x125D8D8", Offset = "0x125D8D8", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011D9")]
		 add { } //Length: 244
		[Address(RVA = "0x125D9CC", Offset = "0x125D9CC", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011DA")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000047")]
	public static event Action<String> LoadLeaderboardInfoFailedEvent
	{
		[Address(RVA = "0x125C5C8", Offset = "0x125C5C8", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011C5")]
		 add { } //Length: 244
		[Address(RVA = "0x125C6BC", Offset = "0x125C6BC", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011C6")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000046")]
	public static event Action<List`1<ImangiGameCenterLeaderboard>> LoadLeaderboardInfoSucceededEvent
	{
		[Address(RVA = "0x125C3E0", Offset = "0x125C3E0", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011C3")]
		 add { } //Length: 244
		[Address(RVA = "0x125C4D4", Offset = "0x125C4D4", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011C4")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000045")]
	public static event Action<String> LoadPlayerPhotoFailedEvent
	{
		[Address(RVA = "0x125C1F8", Offset = "0x125C1F8", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011C1")]
		 add { } //Length: 244
		[Address(RVA = "0x125C2EC", Offset = "0x125C2EC", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011C2")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000044")]
	public static event Action<ImangiGameCenterPlayer, String> LoadPlayerPhotoSucceededEvent
	{
		[Address(RVA = "0x125C010", Offset = "0x125C010", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011BF")]
		 add { } //Length: 244
		[Address(RVA = "0x125C104", Offset = "0x125C104", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011C0")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x1400003F")]
	public static event Action<String> LocalPlayerAuthenticateFailedEvent
	{
		[Address(RVA = "0x125B6E8", Offset = "0x125B6E8", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011B5")]
		 add { } //Length: 244
		[Address(RVA = "0x125B7DC", Offset = "0x125B7DC", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011B6")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x1400003E")]
	public static event Action<ImangiGameCenterPlayer> LocalPlayerAuthenticateSuccessEvent
	{
		[Address(RVA = "0x125B500", Offset = "0x125B500", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011B3")]
		 add { } //Length: 244
		[Address(RVA = "0x125B5F4", Offset = "0x125B5F4", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011B4")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000041")]
	public static event Action LocalPlayerChangedEvent
	{
		[Address(RVA = "0x125BA88", Offset = "0x125BA88", Length = "0xDC")]
		[CompilerGenerated]
		[Token(Token = "0x60011B9")]
		 add { } //Length: 220
		[Address(RVA = "0x125BB64", Offset = "0x125BB64", Length = "0xDC")]
		[CompilerGenerated]
		[Token(Token = "0x60011BA")]
		 remove { } //Length: 220
	}

	[Token(Token = "0x14000061")]
	public static event Action LocalPlayerDidSelectChallengeEvent
	{
		[Address(RVA = "0x125F728", Offset = "0x125F728", Length = "0xDC")]
		[CompilerGenerated]
		[Token(Token = "0x60011F9")]
		 add { } //Length: 220
		[Address(RVA = "0x125F804", Offset = "0x125F804", Length = "0xDC")]
		[CompilerGenerated]
		[Token(Token = "0x60011FA")]
		 remove { } //Length: 220
	}

	[Token(Token = "0x14000040")]
	public static event Action LocalPlayerLoggedOutEvent
	{
		[Address(RVA = "0x125B8D0", Offset = "0x125B8D0", Length = "0xDC")]
		[CompilerGenerated]
		[Token(Token = "0x60011B7")]
		 add { } //Length: 220
		[Address(RVA = "0x125B9AC", Offset = "0x125B9AC", Length = "0xDC")]
		[CompilerGenerated]
		[Token(Token = "0x60011B8")]
		 remove { } //Length: 220
	}

	[Token(Token = "0x14000050")]
	public static event Action<String> ReportAchievementFailedEvent
	{
		[Address(RVA = "0x125D6F0", Offset = "0x125D6F0", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011D7")]
		 add { } //Length: 244
		[Address(RVA = "0x125D7E4", Offset = "0x125D7E4", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011D8")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x1400004F")]
	public static event Action<String> ReportAchievementSucceededEvent
	{
		[Address(RVA = "0x125D508", Offset = "0x125D508", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011D5")]
		 add { } //Length: 244
		[Address(RVA = "0x125D5FC", Offset = "0x125D5FC", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011D6")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000049")]
	public static event Action<String, String> ReportScoreFailedEvent
	{
		[Address(RVA = "0x125C998", Offset = "0x125C998", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011C9")]
		 add { } //Length: 244
		[Address(RVA = "0x125CA8C", Offset = "0x125CA8C", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011CA")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000048")]
	public static event Action<String> ReportScoreSucceededEvent
	{
		[Address(RVA = "0x125C7B0", Offset = "0x125C7B0", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011C7")]
		 add { } //Length: 244
		[Address(RVA = "0x125C8A4", Offset = "0x125C8A4", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011C8")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000056")]
	public static event Action<String> ResetAchievementsFailedEvent
	{
		[Address(RVA = "0x125E230", Offset = "0x125E230", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011E3")]
		 add { } //Length: 244
		[Address(RVA = "0x125E324", Offset = "0x125E324", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011E4")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000055")]
	public static event Action ResetAchievementsSucceededEvent
	{
		[Address(RVA = "0x125E078", Offset = "0x125E078", Length = "0xDC")]
		[CompilerGenerated]
		[Token(Token = "0x60011E1")]
		 add { } //Length: 220
		[Address(RVA = "0x125E154", Offset = "0x125E154", Length = "0xDC")]
		[CompilerGenerated]
		[Token(Token = "0x60011E2")]
		 remove { } //Length: 220
	}

	[Token(Token = "0x1400004E")]
	public static event Action<String> RetrieveScoresFailedEvent
	{
		[Address(RVA = "0x125D320", Offset = "0x125D320", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011D3")]
		 add { } //Length: 244
		[Address(RVA = "0x125D414", Offset = "0x125D414", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011D4")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x1400004D")]
	public static event Action<List`1<ImangiGameCenterScore>> RetrieveScoresSucceededEvent
	{
		[Address(RVA = "0x125D138", Offset = "0x125D138", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011D1")]
		 add { } //Length: 244
		[Address(RVA = "0x125D22C", Offset = "0x125D22C", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011D2")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000060")]
	public static event Action<String> SendFriendsChallengeFailedEvent
	{
		[Address(RVA = "0x125F540", Offset = "0x125F540", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011F7")]
		 add { } //Length: 244
		[Address(RVA = "0x125F634", Offset = "0x125F634", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011F8")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x1400005F")]
	public static event Action<Boolean> SendFriendsChallengeSucceededEvent
	{
		[Address(RVA = "0x125F358", Offset = "0x125F358", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011F5")]
		 add { } //Length: 244
		[Address(RVA = "0x125F44C", Offset = "0x125F44C", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011F6")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000058")]
	public static event Action<String> ShowAchievementsFailedEvent
	{
		[Address(RVA = "0x125E600", Offset = "0x125E600", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011E7")]
		 add { } //Length: 244
		[Address(RVA = "0x125E6F4", Offset = "0x125E6F4", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011E8")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000057")]
	public static event Action<String> ShowAchievementsSucceededEvent
	{
		[Address(RVA = "0x125E418", Offset = "0x125E418", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011E5")]
		 add { } //Length: 244
		[Address(RVA = "0x125E50C", Offset = "0x125E50C", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011E6")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x1400005D")]
	public static event Action<String> ShowChallengesFailedEvent
	{
		[Address(RVA = "0x125EF88", Offset = "0x125EF88", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011F1")]
		 add { } //Length: 244
		[Address(RVA = "0x125F07C", Offset = "0x125F07C", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011F2")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x1400005C")]
	public static event Action<String> ShowChallengesSucceededEvent
	{
		[Address(RVA = "0x125EDA0", Offset = "0x125EDA0", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011EF")]
		 add { } //Length: 244
		[Address(RVA = "0x125EE94", Offset = "0x125EE94", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011F0")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x1400004B")]
	public static event Action<String> ShowLeaderboardFailedEvent
	{
		[Address(RVA = "0x125CD68", Offset = "0x125CD68", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011CD")]
		 add { } //Length: 244
		[Address(RVA = "0x125CE5C", Offset = "0x125CE5C", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011CE")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x1400004A")]
	public static event Action<String> ShowLeaderboardSucceededEvent
	{
		[Address(RVA = "0x125CB80", Offset = "0x125CB80", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011CB")]
		 add { } //Length: 244
		[Address(RVA = "0x125CC74", Offset = "0x125CC74", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60011CC")]
		 remove { } //Length: 244
	}

	[Address(RVA = "0x1265890", Offset = "0x1265890", Length = "0x70")]
	[Token(Token = "0x600125F")]
	private static ImangiGameCenterManager() { }

	[Address(RVA = "0x1265888", Offset = "0x1265888", Length = "0x8")]
	[Token(Token = "0x600125E")]
	public ImangiGameCenterManager() { }

	[Address(RVA = "0x1264F9C", Offset = "0x1264F9C", Length = "0x78")]
	[Token(Token = "0x6001255")]
	public void AchievementsDismissed(string inString) { }

	[Address(RVA = "0x125E7E8", Offset = "0x125E7E8", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011E9")]
	public static void add_AchievementsDismissedEvent(Action<String> value) { }

	[Address(RVA = "0x125F170", Offset = "0x125F170", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011F3")]
	public static void add_ChallengesDismissedEvent(Action<String> value) { }

	[Address(RVA = "0x125BE28", Offset = "0x125BE28", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011BD")]
	public static void add_FriendsListFailedEvent(Action<String> value) { }

	[Address(RVA = "0x125BC40", Offset = "0x125BC40", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011BB")]
	public static void add_FriendsListReceivedEvent(Action<List`1<ImangiGameCenterPlayer>> value) { }

	[Address(RVA = "0x125EBB8", Offset = "0x125EBB8", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011ED")]
	public static void add_GetChallengesFailedEvent(Action<String> value) { }

	[Address(RVA = "0x125E9D0", Offset = "0x125E9D0", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011EB")]
	public static void add_GetChallengesSucceededEvent(Action<List`1<ImangiGameCenterChallenge>> value) { }

	[Address(RVA = "0x125CF50", Offset = "0x125CF50", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011CF")]
	public static void add_LeaderboardDismissedEvent(Action<String> value) { }

	[Address(RVA = "0x125DE90", Offset = "0x125DE90", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011DF")]
	public static void add_LoadAchievementDescriptionsFailedEvent(Action<String> value) { }

	[Address(RVA = "0x125DCA8", Offset = "0x125DCA8", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011DD")]
	public static void add_LoadAchievementDescriptionsSucceededEvent(Action<List`1<ImangiGameCenterAchievementDescription>> value) { }

	[Address(RVA = "0x125DAC0", Offset = "0x125DAC0", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011DB")]
	public static void add_LoadAchievementsFailedEvent(Action<String> value) { }

	[Address(RVA = "0x125D8D8", Offset = "0x125D8D8", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011D9")]
	public static void add_LoadAchievementsSucceededEvent(Action<List`1<ImangiGameCenterAchievement>> value) { }

	[Address(RVA = "0x125C5C8", Offset = "0x125C5C8", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011C5")]
	public static void add_LoadLeaderboardInfoFailedEvent(Action<String> value) { }

	[Address(RVA = "0x125C3E0", Offset = "0x125C3E0", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011C3")]
	public static void add_LoadLeaderboardInfoSucceededEvent(Action<List`1<ImangiGameCenterLeaderboard>> value) { }

	[Address(RVA = "0x125C1F8", Offset = "0x125C1F8", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011C1")]
	public static void add_LoadPlayerPhotoFailedEvent(Action<String> value) { }

	[Address(RVA = "0x125C010", Offset = "0x125C010", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011BF")]
	public static void add_LoadPlayerPhotoSucceededEvent(Action<ImangiGameCenterPlayer, String> value) { }

	[Address(RVA = "0x125B6E8", Offset = "0x125B6E8", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011B5")]
	public static void add_LocalPlayerAuthenticateFailedEvent(Action<String> value) { }

	[Address(RVA = "0x125B500", Offset = "0x125B500", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011B3")]
	public static void add_LocalPlayerAuthenticateSuccessEvent(Action<ImangiGameCenterPlayer> value) { }

	[Address(RVA = "0x125BA88", Offset = "0x125BA88", Length = "0xDC")]
	[CompilerGenerated]
	[Token(Token = "0x60011B9")]
	public static void add_LocalPlayerChangedEvent(Action value) { }

	[Address(RVA = "0x125F728", Offset = "0x125F728", Length = "0xDC")]
	[CompilerGenerated]
	[Token(Token = "0x60011F9")]
	public static void add_LocalPlayerDidSelectChallengeEvent(Action value) { }

	[Address(RVA = "0x125B8D0", Offset = "0x125B8D0", Length = "0xDC")]
	[CompilerGenerated]
	[Token(Token = "0x60011B7")]
	public static void add_LocalPlayerLoggedOutEvent(Action value) { }

	[Address(RVA = "0x125D6F0", Offset = "0x125D6F0", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011D7")]
	public static void add_ReportAchievementFailedEvent(Action<String> value) { }

	[Address(RVA = "0x125D508", Offset = "0x125D508", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011D5")]
	public static void add_ReportAchievementSucceededEvent(Action<String> value) { }

	[Address(RVA = "0x125C998", Offset = "0x125C998", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011C9")]
	public static void add_ReportScoreFailedEvent(Action<String, String> value) { }

	[Address(RVA = "0x125C7B0", Offset = "0x125C7B0", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011C7")]
	public static void add_ReportScoreSucceededEvent(Action<String> value) { }

	[Address(RVA = "0x125E230", Offset = "0x125E230", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011E3")]
	public static void add_ResetAchievementsFailedEvent(Action<String> value) { }

	[Address(RVA = "0x125E078", Offset = "0x125E078", Length = "0xDC")]
	[CompilerGenerated]
	[Token(Token = "0x60011E1")]
	public static void add_ResetAchievementsSucceededEvent(Action value) { }

	[Address(RVA = "0x125D320", Offset = "0x125D320", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011D3")]
	public static void add_RetrieveScoresFailedEvent(Action<String> value) { }

	[Address(RVA = "0x125D138", Offset = "0x125D138", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011D1")]
	public static void add_RetrieveScoresSucceededEvent(Action<List`1<ImangiGameCenterScore>> value) { }

	[Address(RVA = "0x125F540", Offset = "0x125F540", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011F7")]
	public static void add_SendFriendsChallengeFailedEvent(Action<String> value) { }

	[Address(RVA = "0x125F358", Offset = "0x125F358", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011F5")]
	public static void add_SendFriendsChallengeSucceededEvent(Action<Boolean> value) { }

	[Address(RVA = "0x125E600", Offset = "0x125E600", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011E7")]
	public static void add_ShowAchievementsFailedEvent(Action<String> value) { }

	[Address(RVA = "0x125E418", Offset = "0x125E418", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011E5")]
	public static void add_ShowAchievementsSucceededEvent(Action<String> value) { }

	[Address(RVA = "0x125EF88", Offset = "0x125EF88", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011F1")]
	public static void add_ShowChallengesFailedEvent(Action<String> value) { }

	[Address(RVA = "0x125EDA0", Offset = "0x125EDA0", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011EF")]
	public static void add_ShowChallengesSucceededEvent(Action<String> value) { }

	[Address(RVA = "0x125CD68", Offset = "0x125CD68", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011CD")]
	public static void add_ShowLeaderboardFailedEvent(Action<String> value) { }

	[Address(RVA = "0x125CB80", Offset = "0x125CB80", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011CB")]
	public static void add_ShowLeaderboardSucceededEvent(Action<String> value) { }

	[Address(RVA = "0x1260144", Offset = "0x1260144", Length = "0x11C")]
	[Token(Token = "0x6001204")]
	public static void AuthenticateLocalPlayer() { }

	[Address(RVA = "0x1262310", Offset = "0x1262310", Length = "0x48")]
	[Token(Token = "0x6001223")]
	protected override void AuthenticateLocalPlayer_Internal() { }

	[Address(RVA = "0x1265420", Offset = "0x1265420", Length = "0x78")]
	[Token(Token = "0x600125A")]
	public void ChallengesDismissed(string inString) { }

	[Address(RVA = "0x12625CC", Offset = "0x12625CC", Length = "0x78")]
	[Token(Token = "0x600123F")]
	public void FriendsListFailed(string inError) { }

	[Address(RVA = "0x1263464", Offset = "0x1263464", Length = "0x394")]
	[Token(Token = "0x600123E")]
	public void FriendsListReceived(string inString) { }

	[Address(RVA = "0x125AF54", Offset = "0x125AF54", Length = "0x4")]
	[Token(Token = "0x60011FB")]
	public static void GameCenterLogMessage(string inMessage, Object[] inParamList) { }

	[Address(RVA = "0x125F8E0", Offset = "0x125F8E0", Length = "0xA0")]
	[Token(Token = "0x60011FC")]
	public static void GameCenterLogMessageForced(string inMessage, Object[] inParamList) { }

	[Address(RVA = "0x1261DF0", Offset = "0x1261DF0", Length = "0x1A4")]
	[Token(Token = "0x600121A")]
	public static void GetChallenges(bool inScoreChallenges, bool inAchievementChallenges) { }

	[Address(RVA = "0x1262E88", Offset = "0x1262E88", Length = "0x48")]
	[Token(Token = "0x6001238")]
	protected override void GetChallenges_Internal(bool inScoreChallenges, bool inAchievementChallenges) { }

	[Address(RVA = "0x1262ED0", Offset = "0x1262ED0", Length = "0x78")]
	[Token(Token = "0x6001257")]
	public void GetChallengesFailed(string inError) { }

	[Address(RVA = "0x1265014", Offset = "0x1265014", Length = "0x394")]
	[Token(Token = "0x6001256")]
	public void GetChallengesSucceeded(string inString) { }

	[Address(RVA = "0x12604CC", Offset = "0x12604CC", Length = "0x138")]
	[Token(Token = "0x6001207")]
	public static void GetFriendsList(bool inLoadProfileImages, bool inLoadLargeProfileImages) { }

	[Address(RVA = "0x1262584", Offset = "0x1262584", Length = "0x48")]
	[Token(Token = "0x6001225")]
	protected override void GetFriendsList_Internal(bool inLoadProfileImages, bool inLoadLargeProfileImages) { }

	[Address(RVA = "0x125F980", Offset = "0x125F980", Length = "0x20C")]
	[Token(Token = "0x60011FD")]
	public static ImangiGameCenterManager GetInstance() { }

	[Address(RVA = "0x12603C0", Offset = "0x12603C0", Length = "0x10C")]
	[Token(Token = "0x6001206")]
	public static ImangiGameCenterPlayer GetLocalPlayerInfo() { }

	[Address(RVA = "0x1260E1C", Offset = "0x1260E1C", Length = "0x120")]
	[Token(Token = "0x600120D")]
	public static bool GetShowAchievementCompletionBanners() { }

	[Address(RVA = "0x12629F8", Offset = "0x12629F8", Length = "0x8")]
	[Token(Token = "0x600122B")]
	protected override bool GetShowAchievementCompletionBanners_Internal() { }

	[Address(RVA = "0x126131C", Offset = "0x126131C", Length = "0x120")]
	[Token(Token = "0x6001211")]
	protected override bool GetShowBannerForLocallyCompletedChallenge() { }

	[Address(RVA = "0x1262A10", Offset = "0x1262A10", Length = "0x8")]
	[Token(Token = "0x600122F")]
	protected override bool GetShowBannerForLocallyCompletedChallenge_Internal() { }

	[Address(RVA = "0x126109C", Offset = "0x126109C", Length = "0x120")]
	[Token(Token = "0x600120F")]
	protected override bool GetShowBannerForLocallyReceivedChallenge() { }

	[Address(RVA = "0x1262A04", Offset = "0x1262A04", Length = "0x8")]
	[Token(Token = "0x600122D")]
	protected override bool GetShowBannerForLocallyReceivedChallenge_Internal() { }

	[Address(RVA = "0x126159C", Offset = "0x126159C", Length = "0x120")]
	[Token(Token = "0x6001213")]
	protected override bool GetShowBannerForRemotelyCompletedChallenge() { }

	[Address(RVA = "0x1262A1C", Offset = "0x1262A1C", Length = "0x8")]
	[Token(Token = "0x6001231")]
	protected override bool GetShowBannerForRemotelyCompletedChallenge_Internal() { }

	[Address(RVA = "0x125FC60", Offset = "0x125FC60", Length = "0xCC")]
	[Token(Token = "0x60011FF")]
	public static bool GetVerboseLogging() { }

	[Address(RVA = "0x126229C", Offset = "0x126229C", Length = "0x58")]
	[Token(Token = "0x600121E")]
	protected override bool GetVerboseLogging_Internal() { }

	[Address(RVA = "0x126300C", Offset = "0x126300C", Length = "0x11C")]
	[Token(Token = "0x600123B")]
	protected void HandleSingleStringCallback(string inTitle, Action<String> inEventFunction, string inString) { }

	[Address(RVA = "0x125FDE4", Offset = "0x125FDE4", Length = "0x120")]
	[Token(Token = "0x6001201")]
	public static bool IsGameCenterAvailable() { }

	[Address(RVA = "0x12622F8", Offset = "0x12622F8", Length = "0x8")]
	[Token(Token = "0x6001220")]
	protected override bool IsGameCenterAvailable_Internal() { }

	[Address(RVA = "0x125FF04", Offset = "0x125FF04", Length = "0x120")]
	[Token(Token = "0x6001202")]
	public static bool IsGameCenterChallengeSystemAvailable() { }

	[Address(RVA = "0x1262300", Offset = "0x1262300", Length = "0x8")]
	[Token(Token = "0x6001221")]
	protected override bool IsGameCenterChallengeSystemAvailable_Internal() { }

	[Address(RVA = "0x1260024", Offset = "0x1260024", Length = "0x120")]
	[Token(Token = "0x6001203")]
	public static bool IsPlayerAuthenticated() { }

	[Address(RVA = "0x1262308", Offset = "0x1262308", Length = "0x8")]
	[Token(Token = "0x6001222")]
	protected override bool IsPlayerAuthenticated_Internal() { }

	[Address(RVA = "0x1264104", Offset = "0x1264104", Length = "0x78")]
	[Token(Token = "0x6001248")]
	public void LeaderboardDismissed(string inString) { }

	[Address(RVA = "0x1261A9C", Offset = "0x1261A9C", Length = "0x11C")]
	[Token(Token = "0x6001217")]
	public static void LoadAchievementDescriptions() { }

	[Address(RVA = "0x1262C48", Offset = "0x1262C48", Length = "0x48")]
	[Token(Token = "0x6001235")]
	protected override void LoadAchievementDescriptions_Internal() { }

	[Address(RVA = "0x1262C90", Offset = "0x1262C90", Length = "0x78")]
	[Token(Token = "0x6001250")]
	public void LoadAchievementDescriptionsFailed(string inError) { }

	[Address(RVA = "0x1264A94", Offset = "0x1264A94", Length = "0x394")]
	[Token(Token = "0x600124F")]
	public void LoadAchievementDescriptionsSucceeded(string inString) { }

	[Address(RVA = "0x1261980", Offset = "0x1261980", Length = "0x11C")]
	[Token(Token = "0x6001216")]
	public static void LoadAchievements() { }

	[Address(RVA = "0x1262B88", Offset = "0x1262B88", Length = "0x48")]
	[Token(Token = "0x6001234")]
	protected override void LoadAchievements_Internal() { }

	[Address(RVA = "0x1262BD0", Offset = "0x1262BD0", Length = "0x78")]
	[Token(Token = "0x600124E")]
	public void LoadAchievementsFailed(string inError) { }

	[Address(RVA = "0x1264700", Offset = "0x1264700", Length = "0x394")]
	[Token(Token = "0x600124D")]
	public void LoadAchievementsSucceeded(string inString) { }

	[Address(RVA = "0x1260604", Offset = "0x1260604", Length = "0x11C")]
	[Token(Token = "0x6001208")]
	public static void LoadLeaderboardInfo() { }

	[Address(RVA = "0x1262644", Offset = "0x1262644", Length = "0x48")]
	[Token(Token = "0x6001226")]
	protected override void LoadLeaderboardInfo_Internal() { }

	[Address(RVA = "0x126268C", Offset = "0x126268C", Length = "0x78")]
	[Token(Token = "0x6001243")]
	public void LoadLeaderboardInfoFailed(string inError) { }

	[Address(RVA = "0x1263B28", Offset = "0x1263B28", Length = "0x4EC")]
	[Token(Token = "0x6001242")]
	public void LoadLeaderboardInfoSucceeded(string inString) { }

	[Address(RVA = "0x1260260", Offset = "0x1260260", Length = "0x160")]
	[Token(Token = "0x6001205")]
	public static void LoadLocalPlayerProfilePhoto(bool inUseLargeImage) { }

	[Address(RVA = "0x12624C4", Offset = "0x12624C4", Length = "0x48")]
	[Token(Token = "0x6001224")]
	protected override void LoadLocalPlayerProfilePhoto_Internal(bool inUseLargeImage) { }

	[Address(RVA = "0x126250C", Offset = "0x126250C", Length = "0x78")]
	[Token(Token = "0x6001241")]
	public void LoadPlayerPhotoFailed(string inError) { }

	[Address(RVA = "0x12637F8", Offset = "0x12637F8", Length = "0x330")]
	[Token(Token = "0x6001240")]
	public void LoadPlayerPhotoSucceeded(string inString) { }

	[Address(RVA = "0x1262358", Offset = "0x1262358", Length = "0x16C")]
	[Token(Token = "0x600123D")]
	public void LocalPlayerAuthenticateFailed(string inError) { }

	[Address(RVA = "0x1263128", Offset = "0x1263128", Length = "0x33C")]
	[Token(Token = "0x600123C")]
	public void LocalPlayerAuthenticateSuccess(string inMessage) { }

	[Address(RVA = "0x1265788", Offset = "0x1265788", Length = "0x100")]
	[Token(Token = "0x600125D")]
	public void LocalPlayerDidSelectChallenge(string inString) { }

	[Address(RVA = "0x125FD2C", Offset = "0x125FD2C", Length = "0xB8")]
	[Token(Token = "0x6001200")]
	public static void OnPause(bool inPause) { }

	[Address(RVA = "0x12622F4", Offset = "0x12622F4", Length = "0x4")]
	[Token(Token = "0x600121F")]
	protected override void OnPause_Internal(bool inPause) { }

	[Address(RVA = "0x125E8DC", Offset = "0x125E8DC", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011EA")]
	public static void remove_AchievementsDismissedEvent(Action<String> value) { }

	[Address(RVA = "0x125F264", Offset = "0x125F264", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011F4")]
	public static void remove_ChallengesDismissedEvent(Action<String> value) { }

	[Address(RVA = "0x125BF1C", Offset = "0x125BF1C", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011BE")]
	public static void remove_FriendsListFailedEvent(Action<String> value) { }

	[Address(RVA = "0x125BD34", Offset = "0x125BD34", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011BC")]
	public static void remove_FriendsListReceivedEvent(Action<List`1<ImangiGameCenterPlayer>> value) { }

	[Address(RVA = "0x125ECAC", Offset = "0x125ECAC", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011EE")]
	public static void remove_GetChallengesFailedEvent(Action<String> value) { }

	[Address(RVA = "0x125EAC4", Offset = "0x125EAC4", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011EC")]
	public static void remove_GetChallengesSucceededEvent(Action<List`1<ImangiGameCenterChallenge>> value) { }

	[Address(RVA = "0x125D044", Offset = "0x125D044", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011D0")]
	public static void remove_LeaderboardDismissedEvent(Action<String> value) { }

	[Address(RVA = "0x125DF84", Offset = "0x125DF84", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011E0")]
	public static void remove_LoadAchievementDescriptionsFailedEvent(Action<String> value) { }

	[Address(RVA = "0x125DD9C", Offset = "0x125DD9C", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011DE")]
	public static void remove_LoadAchievementDescriptionsSucceededEvent(Action<List`1<ImangiGameCenterAchievementDescription>> value) { }

	[Address(RVA = "0x125DBB4", Offset = "0x125DBB4", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011DC")]
	public static void remove_LoadAchievementsFailedEvent(Action<String> value) { }

	[Address(RVA = "0x125D9CC", Offset = "0x125D9CC", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011DA")]
	public static void remove_LoadAchievementsSucceededEvent(Action<List`1<ImangiGameCenterAchievement>> value) { }

	[Address(RVA = "0x125C6BC", Offset = "0x125C6BC", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011C6")]
	public static void remove_LoadLeaderboardInfoFailedEvent(Action<String> value) { }

	[Address(RVA = "0x125C4D4", Offset = "0x125C4D4", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011C4")]
	public static void remove_LoadLeaderboardInfoSucceededEvent(Action<List`1<ImangiGameCenterLeaderboard>> value) { }

	[Address(RVA = "0x125C2EC", Offset = "0x125C2EC", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011C2")]
	public static void remove_LoadPlayerPhotoFailedEvent(Action<String> value) { }

	[Address(RVA = "0x125C104", Offset = "0x125C104", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011C0")]
	public static void remove_LoadPlayerPhotoSucceededEvent(Action<ImangiGameCenterPlayer, String> value) { }

	[Address(RVA = "0x125B7DC", Offset = "0x125B7DC", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011B6")]
	public static void remove_LocalPlayerAuthenticateFailedEvent(Action<String> value) { }

	[Address(RVA = "0x125B5F4", Offset = "0x125B5F4", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011B4")]
	public static void remove_LocalPlayerAuthenticateSuccessEvent(Action<ImangiGameCenterPlayer> value) { }

	[Address(RVA = "0x125BB64", Offset = "0x125BB64", Length = "0xDC")]
	[CompilerGenerated]
	[Token(Token = "0x60011BA")]
	public static void remove_LocalPlayerChangedEvent(Action value) { }

	[Address(RVA = "0x125F804", Offset = "0x125F804", Length = "0xDC")]
	[CompilerGenerated]
	[Token(Token = "0x60011FA")]
	public static void remove_LocalPlayerDidSelectChallengeEvent(Action value) { }

	[Address(RVA = "0x125B9AC", Offset = "0x125B9AC", Length = "0xDC")]
	[CompilerGenerated]
	[Token(Token = "0x60011B8")]
	public static void remove_LocalPlayerLoggedOutEvent(Action value) { }

	[Address(RVA = "0x125D7E4", Offset = "0x125D7E4", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011D8")]
	public static void remove_ReportAchievementFailedEvent(Action<String> value) { }

	[Address(RVA = "0x125D5FC", Offset = "0x125D5FC", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011D6")]
	public static void remove_ReportAchievementSucceededEvent(Action<String> value) { }

	[Address(RVA = "0x125CA8C", Offset = "0x125CA8C", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011CA")]
	public static void remove_ReportScoreFailedEvent(Action<String, String> value) { }

	[Address(RVA = "0x125C8A4", Offset = "0x125C8A4", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011C8")]
	public static void remove_ReportScoreSucceededEvent(Action<String> value) { }

	[Address(RVA = "0x125E324", Offset = "0x125E324", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011E4")]
	public static void remove_ResetAchievementsFailedEvent(Action<String> value) { }

	[Address(RVA = "0x125E154", Offset = "0x125E154", Length = "0xDC")]
	[CompilerGenerated]
	[Token(Token = "0x60011E2")]
	public static void remove_ResetAchievementsSucceededEvent(Action value) { }

	[Address(RVA = "0x125D414", Offset = "0x125D414", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011D4")]
	public static void remove_RetrieveScoresFailedEvent(Action<String> value) { }

	[Address(RVA = "0x125D22C", Offset = "0x125D22C", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011D2")]
	public static void remove_RetrieveScoresSucceededEvent(Action<List`1<ImangiGameCenterScore>> value) { }

	[Address(RVA = "0x125F634", Offset = "0x125F634", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011F8")]
	public static void remove_SendFriendsChallengeFailedEvent(Action<String> value) { }

	[Address(RVA = "0x125F44C", Offset = "0x125F44C", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011F6")]
	public static void remove_SendFriendsChallengeSucceededEvent(Action<Boolean> value) { }

	[Address(RVA = "0x125E6F4", Offset = "0x125E6F4", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011E8")]
	public static void remove_ShowAchievementsFailedEvent(Action<String> value) { }

	[Address(RVA = "0x125E50C", Offset = "0x125E50C", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011E6")]
	public static void remove_ShowAchievementsSucceededEvent(Action<String> value) { }

	[Address(RVA = "0x125F07C", Offset = "0x125F07C", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011F2")]
	public static void remove_ShowChallengesFailedEvent(Action<String> value) { }

	[Address(RVA = "0x125EE94", Offset = "0x125EE94", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011F0")]
	public static void remove_ShowChallengesSucceededEvent(Action<String> value) { }

	[Address(RVA = "0x125CE5C", Offset = "0x125CE5C", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011CE")]
	public static void remove_ShowLeaderboardFailedEvent(Action<String> value) { }

	[Address(RVA = "0x125CC74", Offset = "0x125CC74", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60011CC")]
	public static void remove_ShowLeaderboardSucceededEvent(Action<String> value) { }

	[Address(RVA = "0x126181C", Offset = "0x126181C", Length = "0x164")]
	[Token(Token = "0x6001215")]
	public static void ReportAchievement(string inAchievementID, float inPercentage) { }

	[Address(RVA = "0x1262A28", Offset = "0x1262A28", Length = "0xE8")]
	[Token(Token = "0x6001233")]
	protected override void ReportAchievement_Internal(string inAchievementID, float inPercentage) { }

	[Address(RVA = "0x1262B10", Offset = "0x1262B10", Length = "0x78")]
	[Token(Token = "0x600124C")]
	public void ReportAchievementFailed(string inError) { }

	[Address(RVA = "0x1264688", Offset = "0x1264688", Length = "0x78")]
	[Token(Token = "0x600124B")]
	public void ReportAchievementSucceeded(string inString) { }

	[Address(RVA = "0x1260720", Offset = "0x1260720", Length = "0x164")]
	[Token(Token = "0x6001209")]
	public static void ReportScore(long inScore, string inLeaderboardID) { }

	[Address(RVA = "0x1260884", Offset = "0x1260884", Length = "0x19C")]
	[Token(Token = "0x600120A")]
	public static void ReportScore(long inScore, ulong inContext, string inLeaderboardID) { }

	[Address(RVA = "0x1262704", Offset = "0x1262704", Length = "0x40")]
	[Token(Token = "0x6001227")]
	protected override void ReportScore_Internal(long inScore, string inLeaderboardID) { }

	[Address(RVA = "0x1262838", Offset = "0x1262838", Length = "0x40")]
	[Token(Token = "0x6001228")]
	protected override void ReportScore_Internal(long inScore, ulong inContext, string inLeaderboardID) { }

	[Address(RVA = "0x1262744", Offset = "0x1262744", Length = "0xF4")]
	[Token(Token = "0x6001245")]
	public void ReportScoreFailed(string inError) { }

	[Address(RVA = "0x1264014", Offset = "0x1264014", Length = "0x78")]
	[Token(Token = "0x6001244")]
	public void ReportScoreSucceeded(string inString) { }

	[Address(RVA = "0x1261BB8", Offset = "0x1261BB8", Length = "0x11C")]
	[Token(Token = "0x6001218")]
	public static void ResetAchievements() { }

	[Address(RVA = "0x1262D08", Offset = "0x1262D08", Length = "0x48")]
	[Token(Token = "0x6001236")]
	protected override void ResetAchievements_Internal() { }

	[Address(RVA = "0x1262D50", Offset = "0x1262D50", Length = "0x78")]
	[Token(Token = "0x6001252")]
	public void ResetAchievementsFailed(string inError) { }

	[Address(RVA = "0x1264E28", Offset = "0x1264E28", Length = "0xFC")]
	[Token(Token = "0x6001251")]
	public void ResetAchievementsSucceeded() { }

	[Address(RVA = "0x1260BB0", Offset = "0x1260BB0", Length = "0x26C")]
	[Token(Token = "0x600120C")]
	public static void RetrieveScores(string inLeaderboardID, bool inFriendsOnly, LeaderboardTimeScope inTimeScope, uint inRangeLow, uint inRangeHigh) { }

	[Address(RVA = "0x1262938", Offset = "0x1262938", Length = "0x48")]
	[Token(Token = "0x600122A")]
	protected override void RetrieveScores_Internal(string inLeaderboardID, bool inFriendsOnly, LeaderboardTimeScope inTimeScope, uint inRangeLow, uint inRangeHigh) { }

	[Address(RVA = "0x1262980", Offset = "0x1262980", Length = "0x78")]
	[Token(Token = "0x600124A")]
	public void RetrieveScoresFailed(string inError) { }

	[Address(RVA = "0x126417C", Offset = "0x126417C", Length = "0x50C")]
	[Token(Token = "0x6001249")]
	public void RetrieveScoresSucceeded(string inString) { }

	[Address(RVA = "0x1265498", Offset = "0x1265498", Length = "0x78")]
	[Token(Token = "0x600125B")]
	public void SendFriendsChallengeFailed(string inError) { }

	[Address(RVA = "0x1265510", Offset = "0x1265510", Length = "0x278")]
	[Token(Token = "0x600125C")]
	public void SendFriendsChallengeSucceeded(string inString) { }

	[Address(RVA = "0x1260F3C", Offset = "0x1260F3C", Length = "0x160")]
	[Token(Token = "0x600120E")]
	public static void SetShowAchievementCompletionBanners(bool inShowCompletionBanners) { }

	[Address(RVA = "0x1262A00", Offset = "0x1262A00", Length = "0x4")]
	[Token(Token = "0x600122C")]
	protected override void SetShowAchievementCompletionBanners_Internal(bool inShowCompletionBanners) { }

	[Address(RVA = "0x126143C", Offset = "0x126143C", Length = "0x160")]
	[Token(Token = "0x6001212")]
	protected override void SetShowBannerForLocallyCompletedChallenge(bool inShowBannerForLocallyCompletedChallenge) { }

	[Address(RVA = "0x1262A18", Offset = "0x1262A18", Length = "0x4")]
	[Token(Token = "0x6001230")]
	protected override void SetShowBannerForLocallyCompletedChallenge_Internal(bool inShowBannerForLocallyCompletedChallenge) { }

	[Address(RVA = "0x12611BC", Offset = "0x12611BC", Length = "0x160")]
	[Token(Token = "0x6001210")]
	protected override void SetShowBannerForLocallyReceivedChallenge(bool inShowBannerForLocallyReceivedChallenge) { }

	[Address(RVA = "0x1262A0C", Offset = "0x1262A0C", Length = "0x4")]
	[Token(Token = "0x600122E")]
	protected override void SetShowBannerForLocallyReceivedChallenge_Internal(bool inShowBannerForLocallyReceivedChallenge) { }

	[Address(RVA = "0x12616BC", Offset = "0x12616BC", Length = "0x160")]
	[Token(Token = "0x6001214")]
	protected override void SetShowBannerForRemotelyCompletedChallenge(bool inShowBannerForRemotelyCompletedChallenge) { }

	[Address(RVA = "0x1262A24", Offset = "0x1262A24", Length = "0x4")]
	[Token(Token = "0x6001232")]
	protected override void SetShowBannerForRemotelyCompletedChallenge_Internal(bool inShowBannerForRemotelyCompletedChallenge) { }

	[Address(RVA = "0x125FB8C", Offset = "0x125FB8C", Length = "0xD4")]
	[Token(Token = "0x60011FE")]
	public static void SetVerboseLogging(bool inVerboseLogging) { }

	[Address(RVA = "0x126223C", Offset = "0x126223C", Length = "0x60")]
	[Token(Token = "0x600121D")]
	protected override void SetVerboseLogging_Internal(bool inVerboseLogging) { }

	[Address(RVA = "0x1261CD4", Offset = "0x1261CD4", Length = "0x11C")]
	[Token(Token = "0x6001219")]
	public static void ShowAchievements() { }

	[Address(RVA = "0x1262DC8", Offset = "0x1262DC8", Length = "0x48")]
	[Token(Token = "0x6001237")]
	protected override void ShowAchievements_Internal() { }

	[Address(RVA = "0x1262E10", Offset = "0x1262E10", Length = "0x78")]
	[Token(Token = "0x6001254")]
	public void ShowAchievementsFailed(string inError) { }

	[Address(RVA = "0x1264F24", Offset = "0x1264F24", Length = "0x78")]
	[Token(Token = "0x6001253")]
	public void ShowAchievementsSucceeded(string inString) { }

	[Address(RVA = "0x1261F94", Offset = "0x1261F94", Length = "0x11C")]
	[Token(Token = "0x600121B")]
	public static void ShowChallenges() { }

	[Address(RVA = "0x1262F48", Offset = "0x1262F48", Length = "0x48")]
	[Token(Token = "0x6001239")]
	protected override void ShowChallenges_Internal() { }

	[Address(RVA = "0x1262F90", Offset = "0x1262F90", Length = "0x78")]
	[Token(Token = "0x6001259")]
	public void ShowChallengesFailed(string inError) { }

	[Address(RVA = "0x12653A8", Offset = "0x12653A8", Length = "0x78")]
	[Token(Token = "0x6001258")]
	public void ShowChallengesSucceeded(string inString) { }

	[Address(RVA = "0x12620B0", Offset = "0x12620B0", Length = "0x18C")]
	[Token(Token = "0x600121C")]
	public static void ShowFriendsChallengeSendDialogForLeaderboardScore(long inScore, string inLeaderboardId, string inOptionalMsg = null) { }

	[Address(RVA = "0x1263008", Offset = "0x1263008", Length = "0x4")]
	[Token(Token = "0x600123A")]
	protected override void ShowFriendsChallengeSendDialogForLeaderboardScore_Internal(long inScore, string inLeaderboardId, string inOptionalMsg) { }

	[Address(RVA = "0x1260A20", Offset = "0x1260A20", Length = "0x190")]
	[Token(Token = "0x600120B")]
	public static void ShowLeaderboard(string inLeaderboardID, LeaderboardTimeScope inTimeScope) { }

	[Address(RVA = "0x1262878", Offset = "0x1262878", Length = "0x48")]
	[Token(Token = "0x6001229")]
	protected override void ShowLeaderboard_Internal(string inLeaderboardID, LeaderboardTimeScope inTimeScope) { }

	[Address(RVA = "0x12628C0", Offset = "0x12628C0", Length = "0x78")]
	[Token(Token = "0x6001247")]
	public void ShowLeaderboardFailed(string inError) { }

	[Address(RVA = "0x126408C", Offset = "0x126408C", Length = "0x78")]
	[Token(Token = "0x6001246")]
	public void ShowLeaderboardSucceeded(string inString) { }

}

