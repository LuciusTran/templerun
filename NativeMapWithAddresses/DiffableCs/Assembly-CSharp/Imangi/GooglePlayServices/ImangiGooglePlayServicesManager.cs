namespace Imangi.GooglePlayServices;

[Token(Token = "0x2000263")]
public class ImangiGooglePlayServicesManager : MonoBehaviour
{
	[Token(Token = "0x2000264")]
	internal enum SnapshotConflictResolutionPolicy
	{
		Manual = -1,
		LongestPlayTime = 1,
		LastKnownGood = 2,
		MostRecentlyModified = 3,
		HighestProgress = 4,
	}

	[Token(Token = "0x400128A")]
	public static readonly string LogChannel; //Field offset: 0x0
	[CompilerGenerated]
	[Token(Token = "0x400128B")]
	private static Action<String> AuthenticationSuccessEvent; //Field offset: 0x8
	[CompilerGenerated]
	[Token(Token = "0x400128C")]
	private static Action<String> AuthenticationFailureEvent; //Field offset: 0x10
	[CompilerGenerated]
	[Token(Token = "0x400128D")]
	private static Action UserSignedOutEvent; //Field offset: 0x18
	[CompilerGenerated]
	[Token(Token = "0x400128E")]
	private static Action<String, Boolean> AchievementUnlockSuccessEvent; //Field offset: 0x20
	[CompilerGenerated]
	[Token(Token = "0x400128F")]
	private static Action<String, String> AchievementUnlockFailureEvent; //Field offset: 0x28
	[CompilerGenerated]
	[Token(Token = "0x4001290")]
	private static Action<List`1<ImangiGooglePlayServicesAchievement>> AchievementLoadAllSuccessEvent; //Field offset: 0x30
	[CompilerGenerated]
	[Token(Token = "0x4001291")]
	private static Action<String> AchievementLoadAllFailureEvent; //Field offset: 0x38
	[CompilerGenerated]
	[Token(Token = "0x4001292")]
	private static Action<List`1<ImangiGooglePlayServicesAchievement>> AchievementLoadAllCompletedSuccessEvent; //Field offset: 0x40
	[CompilerGenerated]
	[Token(Token = "0x4001293")]
	private static Action<String> AchievementLoadAllCompletedFailureEvent; //Field offset: 0x48
	[CompilerGenerated]
	[Token(Token = "0x4001294")]
	private static Action<String, ImangiGooglePlayServicesScoreSubmissionData> LeaderboardSubmitScoreSuccessEvent; //Field offset: 0x50
	[CompilerGenerated]
	[Token(Token = "0x4001295")]
	private static Action<String, String> LeaderboardSubmitScoreFailureEvent; //Field offset: 0x58
	[CompilerGenerated]
	[Token(Token = "0x4001296")]
	private static Action<ImangiGooglePlayServicesSnapshotMetadata> SnapshotListSelectedSnapshotEvent; //Field offset: 0x60
	[CompilerGenerated]
	[Token(Token = "0x4001297")]
	private static Action SnapshotListCreateNewSnapshotEvent; //Field offset: 0x68
	[CompilerGenerated]
	[Token(Token = "0x4001298")]
	private static Action SnapshotListCanceledEvent; //Field offset: 0x70
	[CompilerGenerated]
	[Token(Token = "0x4001299")]
	private static Action<String> SnapshotWriteSuccessEvent; //Field offset: 0x78
	[CompilerGenerated]
	[Token(Token = "0x400129A")]
	private static Action<String, String> SnapshotWriteFailureEvent; //Field offset: 0x80
	[CompilerGenerated]
	[Token(Token = "0x400129B")]
	private static Action<String, Boolean, ImangiGooglePlayServicesSnapshot> SnapshotReadSuccessEvent; //Field offset: 0x88
	[CompilerGenerated]
	[Token(Token = "0x400129C")]
	private static Action<String, String> SnapshotReadFailureEvent; //Field offset: 0x90
	[CompilerGenerated]
	[Token(Token = "0x400129D")]
	private static Action<String, Boolean> SnapshotDeleteSuccessEvent; //Field offset: 0x98
	[CompilerGenerated]
	[Token(Token = "0x400129E")]
	private static Action<String, String> SnapshotDeleteFailureEvent; //Field offset: 0xA0
	[Token(Token = "0x400129F")]
	protected static ImangiGooglePlayServicesManager Instance; //Field offset: 0xA8
	[Token(Token = "0x40012A0")]
	protected static GameObject GooglePlayServicesGameObj; //Field offset: 0xB0
	[Token(Token = "0x40012A1")]
	public static bool GooglePlayServicesVerboseLogging; //Field offset: 0xB8

	[Token(Token = "0x14000022")]
	public static event Action<String> AchievementLoadAllCompletedFailureEvent
	{
		[Address(RVA = "0x124EF28", Offset = "0x124EF28", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60010DA")]
		 add { } //Length: 244
		[Address(RVA = "0x124F01C", Offset = "0x124F01C", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60010DB")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000021")]
	public static event Action<List`1<ImangiGooglePlayServicesAchievement>> AchievementLoadAllCompletedSuccessEvent
	{
		[Address(RVA = "0x124ED40", Offset = "0x124ED40", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60010D8")]
		 add { } //Length: 244
		[Address(RVA = "0x124EE34", Offset = "0x124EE34", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60010D9")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000020")]
	public static event Action<String> AchievementLoadAllFailureEvent
	{
		[Address(RVA = "0x124EB58", Offset = "0x124EB58", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60010D6")]
		 add { } //Length: 244
		[Address(RVA = "0x124EC4C", Offset = "0x124EC4C", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60010D7")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x1400001F")]
	public static event Action<List`1<ImangiGooglePlayServicesAchievement>> AchievementLoadAllSuccessEvent
	{
		[Address(RVA = "0x124E970", Offset = "0x124E970", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60010D4")]
		 add { } //Length: 244
		[Address(RVA = "0x124EA64", Offset = "0x124EA64", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60010D5")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x1400001E")]
	public static event Action<String, String> AchievementUnlockFailureEvent
	{
		[Address(RVA = "0x124E788", Offset = "0x124E788", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60010D2")]
		 add { } //Length: 244
		[Address(RVA = "0x124E87C", Offset = "0x124E87C", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60010D3")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x1400001D")]
	public static event Action<String, Boolean> AchievementUnlockSuccessEvent
	{
		[Address(RVA = "0x124E5A0", Offset = "0x124E5A0", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60010D0")]
		 add { } //Length: 244
		[Address(RVA = "0x124E694", Offset = "0x124E694", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60010D1")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x1400001B")]
	public static event Action<String> AuthenticationFailureEvent
	{
		[Address(RVA = "0x124E200", Offset = "0x124E200", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60010CC")]
		 add { } //Length: 244
		[Address(RVA = "0x124E2F4", Offset = "0x124E2F4", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60010CD")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x1400001A")]
	public static event Action<String> AuthenticationSuccessEvent
	{
		[Address(RVA = "0x124E018", Offset = "0x124E018", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60010CA")]
		 add { } //Length: 244
		[Address(RVA = "0x124E10C", Offset = "0x124E10C", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60010CB")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000024")]
	public static event Action<String, String> LeaderboardSubmitScoreFailureEvent
	{
		[Address(RVA = "0x124F2F8", Offset = "0x124F2F8", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60010DE")]
		 add { } //Length: 244
		[Address(RVA = "0x124F3EC", Offset = "0x124F3EC", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60010DF")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000023")]
	public static event Action<String, ImangiGooglePlayServicesScoreSubmissionData> LeaderboardSubmitScoreSuccessEvent
	{
		[Address(RVA = "0x124F110", Offset = "0x124F110", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60010DC")]
		 add { } //Length: 244
		[Address(RVA = "0x124F204", Offset = "0x124F204", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60010DD")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x1400002D")]
	public static event Action<String, String> SnapshotDeleteFailureEvent
	{
		[Address(RVA = "0x12503C0", Offset = "0x12503C0", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60010F0")]
		 add { } //Length: 244
		[Address(RVA = "0x12504B4", Offset = "0x12504B4", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60010F1")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x1400002C")]
	public static event Action<String, Boolean> SnapshotDeleteSuccessEvent
	{
		[Address(RVA = "0x12501D8", Offset = "0x12501D8", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60010EE")]
		 add { } //Length: 244
		[Address(RVA = "0x12502CC", Offset = "0x12502CC", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60010EF")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000027")]
	public static event Action SnapshotListCanceledEvent
	{
		[Address(RVA = "0x124F880", Offset = "0x124F880", Length = "0xDC")]
		[CompilerGenerated]
		[Token(Token = "0x60010E4")]
		 add { } //Length: 220
		[Address(RVA = "0x124F95C", Offset = "0x124F95C", Length = "0xDC")]
		[CompilerGenerated]
		[Token(Token = "0x60010E5")]
		 remove { } //Length: 220
	}

	[Token(Token = "0x14000026")]
	public static event Action SnapshotListCreateNewSnapshotEvent
	{
		[Address(RVA = "0x124F6C8", Offset = "0x124F6C8", Length = "0xDC")]
		[CompilerGenerated]
		[Token(Token = "0x60010E2")]
		 add { } //Length: 220
		[Address(RVA = "0x124F7A4", Offset = "0x124F7A4", Length = "0xDC")]
		[CompilerGenerated]
		[Token(Token = "0x60010E3")]
		 remove { } //Length: 220
	}

	[Token(Token = "0x14000025")]
	public static event Action<ImangiGooglePlayServicesSnapshotMetadata> SnapshotListSelectedSnapshotEvent
	{
		[Address(RVA = "0x124F4E0", Offset = "0x124F4E0", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60010E0")]
		 add { } //Length: 244
		[Address(RVA = "0x124F5D4", Offset = "0x124F5D4", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60010E1")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x1400002B")]
	public static event Action<String, String> SnapshotReadFailureEvent
	{
		[Address(RVA = "0x124FFF0", Offset = "0x124FFF0", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60010EC")]
		 add { } //Length: 244
		[Address(RVA = "0x12500E4", Offset = "0x12500E4", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60010ED")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x1400002A")]
	public static event Action<String, Boolean, ImangiGooglePlayServicesSnapshot> SnapshotReadSuccessEvent
	{
		[Address(RVA = "0x124FE08", Offset = "0x124FE08", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60010EA")]
		 add { } //Length: 244
		[Address(RVA = "0x124FEFC", Offset = "0x124FEFC", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60010EB")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000029")]
	public static event Action<String, String> SnapshotWriteFailureEvent
	{
		[Address(RVA = "0x124FC20", Offset = "0x124FC20", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60010E8")]
		 add { } //Length: 244
		[Address(RVA = "0x124FD14", Offset = "0x124FD14", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60010E9")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000028")]
	public static event Action<String> SnapshotWriteSuccessEvent
	{
		[Address(RVA = "0x124FA38", Offset = "0x124FA38", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60010E6")]
		 add { } //Length: 244
		[Address(RVA = "0x124FB2C", Offset = "0x124FB2C", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x60010E7")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x1400001C")]
	public static event Action UserSignedOutEvent
	{
		[Address(RVA = "0x124E3E8", Offset = "0x124E3E8", Length = "0xDC")]
		[CompilerGenerated]
		[Token(Token = "0x60010CE")]
		 add { } //Length: 220
		[Address(RVA = "0x124E4C4", Offset = "0x124E4C4", Length = "0xDC")]
		[CompilerGenerated]
		[Token(Token = "0x60010CF")]
		 remove { } //Length: 220
	}

	[Address(RVA = "0x1255638", Offset = "0x1255638", Length = "0x70")]
	[Token(Token = "0x6001136")]
	private static ImangiGooglePlayServicesManager() { }

	[Address(RVA = "0x124B8A4", Offset = "0x124B8A4", Length = "0x8")]
	[Token(Token = "0x6001135")]
	public ImangiGooglePlayServicesManager() { }

	[Address(RVA = "0x124EF28", Offset = "0x124EF28", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60010DA")]
	public static void add_AchievementLoadAllCompletedFailureEvent(Action<String> value) { }

	[Address(RVA = "0x124ED40", Offset = "0x124ED40", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60010D8")]
	public static void add_AchievementLoadAllCompletedSuccessEvent(Action<List`1<ImangiGooglePlayServicesAchievement>> value) { }

	[Address(RVA = "0x124EB58", Offset = "0x124EB58", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60010D6")]
	public static void add_AchievementLoadAllFailureEvent(Action<String> value) { }

	[Address(RVA = "0x124E970", Offset = "0x124E970", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60010D4")]
	public static void add_AchievementLoadAllSuccessEvent(Action<List`1<ImangiGooglePlayServicesAchievement>> value) { }

	[Address(RVA = "0x124E788", Offset = "0x124E788", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60010D2")]
	public static void add_AchievementUnlockFailureEvent(Action<String, String> value) { }

	[Address(RVA = "0x124E5A0", Offset = "0x124E5A0", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60010D0")]
	public static void add_AchievementUnlockSuccessEvent(Action<String, Boolean> value) { }

	[Address(RVA = "0x124E200", Offset = "0x124E200", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60010CC")]
	public static void add_AuthenticationFailureEvent(Action<String> value) { }

	[Address(RVA = "0x124E018", Offset = "0x124E018", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60010CA")]
	public static void add_AuthenticationSuccessEvent(Action<String> value) { }

	[Address(RVA = "0x124F2F8", Offset = "0x124F2F8", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60010DE")]
	public static void add_LeaderboardSubmitScoreFailureEvent(Action<String, String> value) { }

	[Address(RVA = "0x124F110", Offset = "0x124F110", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60010DC")]
	public static void add_LeaderboardSubmitScoreSuccessEvent(Action<String, ImangiGooglePlayServicesScoreSubmissionData> value) { }

	[Address(RVA = "0x12503C0", Offset = "0x12503C0", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60010F0")]
	public static void add_SnapshotDeleteFailureEvent(Action<String, String> value) { }

	[Address(RVA = "0x12501D8", Offset = "0x12501D8", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60010EE")]
	public static void add_SnapshotDeleteSuccessEvent(Action<String, Boolean> value) { }

	[Address(RVA = "0x124F880", Offset = "0x124F880", Length = "0xDC")]
	[CompilerGenerated]
	[Token(Token = "0x60010E4")]
	public static void add_SnapshotListCanceledEvent(Action value) { }

	[Address(RVA = "0x124F6C8", Offset = "0x124F6C8", Length = "0xDC")]
	[CompilerGenerated]
	[Token(Token = "0x60010E2")]
	public static void add_SnapshotListCreateNewSnapshotEvent(Action value) { }

	[Address(RVA = "0x124F4E0", Offset = "0x124F4E0", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60010E0")]
	public static void add_SnapshotListSelectedSnapshotEvent(Action<ImangiGooglePlayServicesSnapshotMetadata> value) { }

	[Address(RVA = "0x124FFF0", Offset = "0x124FFF0", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60010EC")]
	public static void add_SnapshotReadFailureEvent(Action<String, String> value) { }

	[Address(RVA = "0x124FE08", Offset = "0x124FE08", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60010EA")]
	public static void add_SnapshotReadSuccessEvent(Action<String, Boolean, ImangiGooglePlayServicesSnapshot> value) { }

	[Address(RVA = "0x124FC20", Offset = "0x124FC20", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60010E8")]
	public static void add_SnapshotWriteFailureEvent(Action<String, String> value) { }

	[Address(RVA = "0x124FA38", Offset = "0x124FA38", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60010E6")]
	public static void add_SnapshotWriteSuccessEvent(Action<String> value) { }

	[Address(RVA = "0x124E3E8", Offset = "0x124E3E8", Length = "0xDC")]
	[CompilerGenerated]
	[Token(Token = "0x60010CE")]
	public static void add_UserSignedOutEvent(Action value) { }

	[Address(RVA = "0x1250BE0", Offset = "0x1250BE0", Length = "0x11C")]
	[Token(Token = "0x60010F8")]
	public static void AttemptAutomaticAuthentication() { }

	[Address(RVA = "0x1252254", Offset = "0x1252254", Length = "0x4")]
	[Token(Token = "0x600110D")]
	protected override void AttemptAutomaticAuthentication_Internal() { }

	[Address(RVA = "0x1250CFC", Offset = "0x1250CFC", Length = "0x11C")]
	[Token(Token = "0x60010F9")]
	public static void Authenticate() { }

	[Address(RVA = "0x1252258", Offset = "0x1252258", Length = "0x4")]
	[Token(Token = "0x600110E")]
	protected override void Authenticate_Internal() { }

	[Address(RVA = "0x1407B90", Offset = "0x1407B90", Length = "0x1E8")]
	[Token(Token = "0x600111E")]
	protected void FireOneParamCallback(string inTitle, Action<T1> inEventFunction, T1 p1) { }

	[Address(RVA = "0x14080CC", Offset = "0x14080CC", Length = "0x2BC")]
	[Token(Token = "0x6001120")]
	protected void FireThreeParamCallback(string inTitle, Action<T1, T2, T3> inEventFunction, T1 p1, T2 p2, T3 p3) { }

	[Address(RVA = "0x1408A4C", Offset = "0x1408A4C", Length = "0x25C")]
	[Token(Token = "0x600111F")]
	protected void FireTwoParamCallback(string inTitle, Action<T1, T2> inEventFunction, T1 p1, T2 p2) { }

	[Address(RVA = "0x12522EC", Offset = "0x12522EC", Length = "0x100")]
	[Token(Token = "0x600111D")]
	protected void FireZeroParamCallback(string inTitle, Action inEventFunction) { }

	[Address(RVA = "0x125069C", Offset = "0x125069C", Length = "0x244")]
	[Token(Token = "0x60010F4")]
	public static ImangiGooglePlayServicesManager GetInstance() { }

	[Address(RVA = "0x1251174", Offset = "0x1251174", Length = "0x14C")]
	[Token(Token = "0x60010FD")]
	public static ImangiGooglePlayServicesPlayer GetLocalPlayerInfo() { }

	[Address(RVA = "0x1252270", Offset = "0x1252270", Length = "0x54")]
	[Token(Token = "0x6001112")]
	protected override ImangiGooglePlayServicesPlayer GetLocalPlayerInfo_Internal() { }

	[Address(RVA = "0x12509B4", Offset = "0x12509B4", Length = "0xCC")]
	[Token(Token = "0x60010F6")]
	public static bool GetVerboseLogging() { }

	[Address(RVA = "0x12521F4", Offset = "0x12521F4", Length = "0x58")]
	[Token(Token = "0x600110A")]
	protected override bool GetVerboseLogging_Internal() { }

	[Address(RVA = "0x12505FC", Offset = "0x12505FC", Length = "0xA0")]
	[Token(Token = "0x60010F3")]
	public static void GooglePlayServices_LogMessageForced(string inMessage, Object[] paramList) { }

	[Address(RVA = "0x12505A8", Offset = "0x12505A8", Length = "0x54")]
	[Token(Token = "0x60010F2")]
	public static void GooglePlayServicesLogMessage(string inMessage, Object[] paramList) { }

	[Address(RVA = "0x1250A80", Offset = "0x1250A80", Length = "0x160")]
	[Token(Token = "0x60010F7")]
	public static void Init(bool inAutoAuthenticate) { }

	[Address(RVA = "0x1252250", Offset = "0x1252250", Length = "0x4")]
	[Token(Token = "0x600110C")]
	protected override void Init_Internal(bool inAutoAuthenticate) { }

	[Address(RVA = "0x1251054", Offset = "0x1251054", Length = "0x120")]
	[Token(Token = "0x60010FC")]
	public static bool IsGooglePlayServicesAvailable() { }

	[Address(RVA = "0x1252268", Offset = "0x1252268", Length = "0x8")]
	[Token(Token = "0x6001111")]
	protected override bool IsGooglePlayServicesAvailable_Internal() { }

	[Address(RVA = "0x1250F34", Offset = "0x1250F34", Length = "0x120")]
	[Token(Token = "0x60010FB")]
	public static bool IsSignedIn() { }

	[Address(RVA = "0x1252260", Offset = "0x1252260", Length = "0x8")]
	[Token(Token = "0x6001110")]
	protected override bool IsSignedIn_Internal() { }

	[Address(RVA = "0x12515C8", Offset = "0x12515C8", Length = "0x180")]
	[Token(Token = "0x6001101")]
	public static void LoadAllAchievements(bool forceReloadFromServer = false, bool onlyLoadCompletedAchievements = false) { }

	[Address(RVA = "0x12522CC", Offset = "0x12522CC", Length = "0x4")]
	[Token(Token = "0x6001115")]
	protected override void LoadAllAchievements_Internal(bool forceReloadFromServer, bool onlyLoadCompletedAchievements = false) { }

	[Address(RVA = "0x125375C", Offset = "0x125375C", Length = "0x2D8")]
	[Token(Token = "0x6001129")]
	private void OnAchievementLoadAllCompletedFailure(string resultJson) { }

	[Address(RVA = "0x12533E8", Offset = "0x12533E8", Length = "0x374")]
	[Token(Token = "0x6001128")]
	private void OnAchievementLoadAllCompletedSuccess(string resultJson) { }

	[Address(RVA = "0x1253110", Offset = "0x1253110", Length = "0x2D8")]
	[Token(Token = "0x6001127")]
	private void OnAchievementLoadAllFailure(string resultJson) { }

	[Address(RVA = "0x1252D9C", Offset = "0x1252D9C", Length = "0x374")]
	[Token(Token = "0x6001126")]
	private void OnAchievementLoadAllSuccess(string resultJson) { }

	[Address(RVA = "0x1252B48", Offset = "0x1252B48", Length = "0x254")]
	[Token(Token = "0x6001125")]
	private void OnAchievementUnlockFailure(string resultJson) { }

	[Address(RVA = "0x12528F4", Offset = "0x12528F4", Length = "0x254")]
	[Token(Token = "0x6001124")]
	private void OnAchievementUnlockSuccess(string resultJson) { }

	[Address(RVA = "0x1253DA8", Offset = "0x1253DA8", Length = "0x2C4")]
	[Token(Token = "0x600112B")]
	private void OnLeaderboardSubmitScoreFailure(string resultJson) { }

	[Address(RVA = "0x1253A34", Offset = "0x1253A34", Length = "0x374")]
	[Token(Token = "0x600112A")]
	private void OnLeaderboardSubmitScoreSuccess(string resultJson) { }

	[Address(RVA = "0x12512C8", Offset = "0x12512C8", Length = "0xB8")]
	[Token(Token = "0x60010FE")]
	public static void OnPause(bool inPause) { }

	[Address(RVA = "0x125224C", Offset = "0x125224C", Length = "0x4")]
	[Token(Token = "0x600110B")]
	protected override void OnPause_Internal(bool inPause) { }

	[Address(RVA = "0x12527F4", Offset = "0x12527F4", Length = "0x100")]
	[Token(Token = "0x6001123")]
	private void OnSignedOut(string empty) { }

	[Address(RVA = "0x12525F0", Offset = "0x12525F0", Length = "0x204")]
	[Token(Token = "0x6001122")]
	private void OnSignInFailed(string resultJson) { }

	[Address(RVA = "0x12523EC", Offset = "0x12523EC", Length = "0x204")]
	[Token(Token = "0x6001121")]
	private void OnSignInSucceeded(string resultJson) { }

	[Address(RVA = "0x1255364", Offset = "0x1255364", Length = "0x2D4")]
	[Token(Token = "0x6001134")]
	private void OnSnapshotDeleteFailure(string resultJson) { }

	[Address(RVA = "0x1255058", Offset = "0x1255058", Length = "0x30C")]
	[Token(Token = "0x6001133")]
	private void OnSnapshotDeleteSuccess(string resultJson) { }

	[Address(RVA = "0x1254398", Offset = "0x1254398", Length = "0x100")]
	[Token(Token = "0x600112E")]
	private void OnSnapshotListCanceled(string emptyStr) { }

	[Address(RVA = "0x1254298", Offset = "0x1254298", Length = "0x100")]
	[Token(Token = "0x600112D")]
	private void OnSnapshotListCreateNewSnapshot(string emptyStr) { }

	[Address(RVA = "0x125406C", Offset = "0x125406C", Length = "0x1A8")]
	[Token(Token = "0x600112C")]
	private void OnSnapshotListSelectedSnapshot(string resultJson) { }

	[Address(RVA = "0x1254D84", Offset = "0x1254D84", Length = "0x2D4")]
	[Token(Token = "0x6001132")]
	private void OnSnapshotReadFailure(string resultJson) { }

	[Address(RVA = "0x12549C8", Offset = "0x12549C8", Length = "0x338")]
	[Token(Token = "0x6001131")]
	private void OnSnapshotReadSuccess(string resultJson) { }

	[Address(RVA = "0x1254704", Offset = "0x1254704", Length = "0x2C4")]
	[Token(Token = "0x6001130")]
	private void OnSnapshotWriteFailure(string resultJson) { }

	[Address(RVA = "0x1254498", Offset = "0x1254498", Length = "0x26C")]
	[Token(Token = "0x600112F")]
	private void OnSnapshotWriteSuccess(string resultJson) { }

	[Address(RVA = "0x124F01C", Offset = "0x124F01C", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60010DB")]
	public static void remove_AchievementLoadAllCompletedFailureEvent(Action<String> value) { }

	[Address(RVA = "0x124EE34", Offset = "0x124EE34", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60010D9")]
	public static void remove_AchievementLoadAllCompletedSuccessEvent(Action<List`1<ImangiGooglePlayServicesAchievement>> value) { }

	[Address(RVA = "0x124EC4C", Offset = "0x124EC4C", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60010D7")]
	public static void remove_AchievementLoadAllFailureEvent(Action<String> value) { }

	[Address(RVA = "0x124EA64", Offset = "0x124EA64", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60010D5")]
	public static void remove_AchievementLoadAllSuccessEvent(Action<List`1<ImangiGooglePlayServicesAchievement>> value) { }

	[Address(RVA = "0x124E87C", Offset = "0x124E87C", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60010D3")]
	public static void remove_AchievementUnlockFailureEvent(Action<String, String> value) { }

	[Address(RVA = "0x124E694", Offset = "0x124E694", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60010D1")]
	public static void remove_AchievementUnlockSuccessEvent(Action<String, Boolean> value) { }

	[Address(RVA = "0x124E2F4", Offset = "0x124E2F4", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60010CD")]
	public static void remove_AuthenticationFailureEvent(Action<String> value) { }

	[Address(RVA = "0x124E10C", Offset = "0x124E10C", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60010CB")]
	public static void remove_AuthenticationSuccessEvent(Action<String> value) { }

	[Address(RVA = "0x124F3EC", Offset = "0x124F3EC", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60010DF")]
	public static void remove_LeaderboardSubmitScoreFailureEvent(Action<String, String> value) { }

	[Address(RVA = "0x124F204", Offset = "0x124F204", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60010DD")]
	public static void remove_LeaderboardSubmitScoreSuccessEvent(Action<String, ImangiGooglePlayServicesScoreSubmissionData> value) { }

	[Address(RVA = "0x12504B4", Offset = "0x12504B4", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60010F1")]
	public static void remove_SnapshotDeleteFailureEvent(Action<String, String> value) { }

	[Address(RVA = "0x12502CC", Offset = "0x12502CC", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60010EF")]
	public static void remove_SnapshotDeleteSuccessEvent(Action<String, Boolean> value) { }

	[Address(RVA = "0x124F95C", Offset = "0x124F95C", Length = "0xDC")]
	[CompilerGenerated]
	[Token(Token = "0x60010E5")]
	public static void remove_SnapshotListCanceledEvent(Action value) { }

	[Address(RVA = "0x124F7A4", Offset = "0x124F7A4", Length = "0xDC")]
	[CompilerGenerated]
	[Token(Token = "0x60010E3")]
	public static void remove_SnapshotListCreateNewSnapshotEvent(Action value) { }

	[Address(RVA = "0x124F5D4", Offset = "0x124F5D4", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60010E1")]
	public static void remove_SnapshotListSelectedSnapshotEvent(Action<ImangiGooglePlayServicesSnapshotMetadata> value) { }

	[Address(RVA = "0x12500E4", Offset = "0x12500E4", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60010ED")]
	public static void remove_SnapshotReadFailureEvent(Action<String, String> value) { }

	[Address(RVA = "0x124FEFC", Offset = "0x124FEFC", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60010EB")]
	public static void remove_SnapshotReadSuccessEvent(Action<String, Boolean, ImangiGooglePlayServicesSnapshot> value) { }

	[Address(RVA = "0x124FD14", Offset = "0x124FD14", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60010E9")]
	public static void remove_SnapshotWriteFailureEvent(Action<String, String> value) { }

	[Address(RVA = "0x124FB2C", Offset = "0x124FB2C", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x60010E7")]
	public static void remove_SnapshotWriteSuccessEvent(Action<String> value) { }

	[Address(RVA = "0x124E4C4", Offset = "0x124E4C4", Length = "0xDC")]
	[CompilerGenerated]
	[Token(Token = "0x60010CF")]
	public static void remove_UserSignedOutEvent(Action value) { }

	[Address(RVA = "0x12508E0", Offset = "0x12508E0", Length = "0xD4")]
	[Token(Token = "0x60010F5")]
	public static void SetVerboseLogging(bool inVerboseLogging) { }

	[Address(RVA = "0x1252194", Offset = "0x1252194", Length = "0x60")]
	[Token(Token = "0x6001109")]
	protected override void SetVerboseLogging_Internal(bool inVerboseLogging) { }

	[Address(RVA = "0x1251380", Offset = "0x1251380", Length = "0x120")]
	[Token(Token = "0x60010FF")]
	public static void ShowAchievements() { }

	[Address(RVA = "0x12522C4", Offset = "0x12522C4", Length = "0x4")]
	[Token(Token = "0x6001113")]
	protected override void ShowAchievements_Internal() { }

	[Address(RVA = "0x1251748", Offset = "0x1251748", Length = "0x120")]
	[Token(Token = "0x6001102")]
	public static void ShowLeaderboards() { }

	[Address(RVA = "0x12522D0", Offset = "0x12522D0", Length = "0x4")]
	[Token(Token = "0x6001116")]
	protected override void ShowLeaderboards_Internal() { }

	[Address(RVA = "0x1250E18", Offset = "0x1250E18", Length = "0x11C")]
	[Token(Token = "0x60010FA")]
	public static void SignOut() { }

	[Address(RVA = "0x125225C", Offset = "0x125225C", Length = "0x4")]
	[Token(Token = "0x600110F")]
	protected override void SignOut_Internal() { }

	[Address(RVA = "0x125206C", Offset = "0x125206C", Length = "0x128")]
	[Token(Token = "0x6001108")]
	public static void SnapshotDelete(string snapshotName) { }

	[Address(RVA = "0x12522E8", Offset = "0x12522E8", Length = "0x4")]
	[Token(Token = "0x600111C")]
	protected override void SnapshotDelete_Internal(string snapshotName) { }

	[Address(RVA = "0x1251B08", Offset = "0x1251B08", Length = "0x204")]
	[Token(Token = "0x6001105")]
	public static void SnapshotListShow(bool allowAddButton, bool allowDeleteButton, int maxSnapshotsToShow) { }

	[Address(RVA = "0x12522DC", Offset = "0x12522DC", Length = "0x4")]
	[Token(Token = "0x6001119")]
	protected override void SnapshotListShow_Internal(bool allowAddButton, bool allowDeleteButton, int maxSnapshotsToShow) { }

	[Address(RVA = "0x1251F30", Offset = "0x1251F30", Length = "0x13C")]
	[Token(Token = "0x6001107")]
	public static void SnapshotRead(string snapshotName, SnapshotConflictResolutionPolicy resolutionPolicy = 3) { }

	[Address(RVA = "0x12522E4", Offset = "0x12522E4", Length = "0x4")]
	[Token(Token = "0x600111B")]
	protected override void SnapshotRead_Internal(string snapshotName, SnapshotConflictResolutionPolicy resolutionPolicy) { }

	[Address(RVA = "0x1251D0C", Offset = "0x1251D0C", Length = "0x224")]
	[Token(Token = "0x6001106")]
	public static void SnapshotWrite(string snapshotName, bool createIfNotFound, string description, Byte[] data, SnapshotConflictResolutionPolicy resolutionPolicy = 3) { }

	[Address(RVA = "0x12522E0", Offset = "0x12522E0", Length = "0x4")]
	[Token(Token = "0x600111A")]
	protected override void SnapshotWrite_Internal(string snapshotName, bool createIfNotFound, string description, Byte[] data, SnapshotConflictResolutionPolicy resolutionPolicy) { }

	[Address(RVA = "0x1251988", Offset = "0x1251988", Length = "0x180")]
	[Token(Token = "0x6001104")]
	public static void SubmitScore(string leaderboardId, long newScore) { }

	[Address(RVA = "0x12522D4", Offset = "0x12522D4", Length = "0x4")]
	[Token(Token = "0x6001117")]
	protected override void SubmitScore_Internal(string leaderboardId, long newScore) { }

	[Address(RVA = "0x1251868", Offset = "0x1251868", Length = "0x120")]
	[Token(Token = "0x6001103")]
	public static void UnleaseSendMessages() { }

	[Address(RVA = "0x12522D8", Offset = "0x12522D8", Length = "0x4")]
	[Token(Token = "0x6001118")]
	protected override void UnleaseSendMessages_Internal() { }

	[Address(RVA = "0x12514A0", Offset = "0x12514A0", Length = "0x128")]
	[Token(Token = "0x6001100")]
	public static void UnlockAchievement(string achievementId) { }

	[Address(RVA = "0x12522C8", Offset = "0x12522C8", Length = "0x4")]
	[Token(Token = "0x6001114")]
	protected override void UnlockAchievement_Internal(string achievementId) { }

}

