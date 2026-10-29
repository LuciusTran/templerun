namespace Imangi.GameServices;

[Token(Token = "0x200026A")]
public class ImangiGameServicesManager : MonoBehaviour
{
	[Token(Token = "0x200026C")]
	internal sealed class CustomGameServiceManagerDelegate : MulticastDelegate
	{

		[Address(RVA = "0x125A268", Offset = "0x125A268", Length = "0x88")]
		[Token(Token = "0x600119E")]
		public CustomGameServiceManagerDelegate(object object, IntPtr method) { }

		[Address(RVA = "0x125A304", Offset = "0x125A304", Length = "0x20")]
		[Token(Token = "0x60011A0")]
		public override IAsyncResult BeginInvoke(AsyncCallback callback, object object) { }

		[Address(RVA = "0x125A324", Offset = "0x125A324", Length = "0xC")]
		[Token(Token = "0x60011A1")]
		public override GameObject EndInvoke(IAsyncResult result) { }

		[Address(RVA = "0x125A2F0", Offset = "0x125A2F0", Length = "0x14")]
		[Token(Token = "0x600119F")]
		public override GameObject Invoke() { }

	}

	[Token(Token = "0x200026B")]
	internal enum LeaderboardTimeScope
	{
		Today = 0,
		Week = 1,
		AllTime = 2,
	}

	[Token(Token = "0x40012BA")]
	public static readonly string LogChannel; //Field offset: 0x0
	[CompilerGenerated]
	[Token(Token = "0x40012BB")]
	private static Action<String> ReportScoreSucceededEvent; //Field offset: 0x8
	[CompilerGenerated]
	[Token(Token = "0x40012BC")]
	private static Action<String, String> ReportScoreFailedEvent; //Field offset: 0x10
	[CompilerGenerated]
	[Token(Token = "0x40012BD")]
	private static Action<String> ShowLeaderboardSucceededEvent; //Field offset: 0x18
	[CompilerGenerated]
	[Token(Token = "0x40012BE")]
	private static Action<String> ShowLeaderboardFailedEvent; //Field offset: 0x20
	[CompilerGenerated]
	[Token(Token = "0x40012BF")]
	private static Action<String> RetrieveFriendScoresFailedEvent; //Field offset: 0x28
	[CompilerGenerated]
	[Token(Token = "0x40012C0")]
	private static Action<String, Boolean> ReportAchievementSuccessEvent; //Field offset: 0x30
	[CompilerGenerated]
	[Token(Token = "0x40012C1")]
	private static Action<String, String> ReportAchievementFailureEvent; //Field offset: 0x38
	[CompilerGenerated]
	[Token(Token = "0x40012C2")]
	private static Action<String> ShowAchievementsSucceededEvent; //Field offset: 0x40
	[CompilerGenerated]
	[Token(Token = "0x40012C3")]
	private static Action<String> ShowAchievementsFailedEvent; //Field offset: 0x48
	[CompilerGenerated]
	[Token(Token = "0x40012C4")]
	private static Action<List`1<String>> GetCompletedAchievementsSucceededEvent; //Field offset: 0x50
	[CompilerGenerated]
	[Token(Token = "0x40012C5")]
	private static Action<String> GetCompletedAchievementsFailedEvent; //Field offset: 0x58
	[CompilerGenerated]
	[Token(Token = "0x40012C6")]
	private static Action<List`1<String>> GetAllAchievementsSucceededEvent; //Field offset: 0x60
	[CompilerGenerated]
	[Token(Token = "0x40012C7")]
	private static Action<String> GetAllAchievementsFailedEvent; //Field offset: 0x68
	[CompilerGenerated]
	[Token(Token = "0x40012C8")]
	private static Action<String> AuthenticationSuccessEvent; //Field offset: 0x70
	[CompilerGenerated]
	[Token(Token = "0x40012C9")]
	private static Action<String> AuthenticationFailureEvent; //Field offset: 0x78
	[CompilerGenerated]
	[Token(Token = "0x40012CA")]
	private static Action SignedOutEvent; //Field offset: 0x80
	[Token(Token = "0x40012CB")]
	protected static ImangiGameServicesManager Instance; //Field offset: 0x88
	[Token(Token = "0x40012CC")]
	protected static GameObject GameServicesGameObj; //Field offset: 0x90
	[Token(Token = "0x40012CD")]
	public static CustomGameServiceManagerDelegate CustomGameServiceManagerCallback; //Field offset: 0x98
	[Token(Token = "0x40012CE")]
	public static bool ImangiGameServices_VerboseLogging; //Field offset: 0xA0

	[Token(Token = "0x1400003C")]
	public static event Action<String> AuthenticationFailureEvent
	{
		[Address(RVA = "0x12579F0", Offset = "0x12579F0", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x6001167")]
		 add { } //Length: 244
		[Address(RVA = "0x1257AE4", Offset = "0x1257AE4", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x6001168")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x1400003B")]
	public static event Action<String> AuthenticationSuccessEvent
	{
		[Address(RVA = "0x1257808", Offset = "0x1257808", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x6001165")]
		 add { } //Length: 244
		[Address(RVA = "0x12578FC", Offset = "0x12578FC", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x6001166")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x1400003A")]
	public static event Action<String> GetAllAchievementsFailedEvent
	{
		[Address(RVA = "0x1257620", Offset = "0x1257620", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x6001163")]
		 add { } //Length: 244
		[Address(RVA = "0x1257714", Offset = "0x1257714", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x6001164")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000039")]
	public static event Action<List`1<String>> GetAllAchievementsSucceededEvent
	{
		[Address(RVA = "0x1257438", Offset = "0x1257438", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x6001161")]
		 add { } //Length: 244
		[Address(RVA = "0x125752C", Offset = "0x125752C", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x6001162")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000038")]
	public static event Action<String> GetCompletedAchievementsFailedEvent
	{
		[Address(RVA = "0x1257250", Offset = "0x1257250", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x600115F")]
		 add { } //Length: 244
		[Address(RVA = "0x1257344", Offset = "0x1257344", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x6001160")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000037")]
	public static event Action<List`1<String>> GetCompletedAchievementsSucceededEvent
	{
		[Address(RVA = "0x1257068", Offset = "0x1257068", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x600115D")]
		 add { } //Length: 244
		[Address(RVA = "0x125715C", Offset = "0x125715C", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x600115E")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000034")]
	public static event Action<String, String> ReportAchievementFailureEvent
	{
		[Address(RVA = "0x1256AB0", Offset = "0x1256AB0", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x6001157")]
		 add { } //Length: 244
		[Address(RVA = "0x1256BA4", Offset = "0x1256BA4", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x6001158")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000033")]
	public static event Action<String, Boolean> ReportAchievementSuccessEvent
	{
		[Address(RVA = "0x12568C8", Offset = "0x12568C8", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x6001155")]
		 add { } //Length: 244
		[Address(RVA = "0x12569BC", Offset = "0x12569BC", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x6001156")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x1400002F")]
	public static event Action<String, String> ReportScoreFailedEvent
	{
		[Address(RVA = "0x1256128", Offset = "0x1256128", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x600114D")]
		 add { } //Length: 244
		[Address(RVA = "0x125621C", Offset = "0x125621C", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x600114E")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x1400002E")]
	public static event Action<String> ReportScoreSucceededEvent
	{
		[Address(RVA = "0x1255F40", Offset = "0x1255F40", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x600114B")]
		 add { } //Length: 244
		[Address(RVA = "0x1256034", Offset = "0x1256034", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x600114C")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000032")]
	public static event Action<String> RetrieveFriendScoresFailedEvent
	{
		[Address(RVA = "0x12566E0", Offset = "0x12566E0", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x6001153")]
		 add { } //Length: 244
		[Address(RVA = "0x12567D4", Offset = "0x12567D4", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x6001154")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000036")]
	public static event Action<String> ShowAchievementsFailedEvent
	{
		[Address(RVA = "0x1256E80", Offset = "0x1256E80", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x600115B")]
		 add { } //Length: 244
		[Address(RVA = "0x1256F74", Offset = "0x1256F74", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x600115C")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000035")]
	public static event Action<String> ShowAchievementsSucceededEvent
	{
		[Address(RVA = "0x1256C98", Offset = "0x1256C98", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x6001159")]
		 add { } //Length: 244
		[Address(RVA = "0x1256D8C", Offset = "0x1256D8C", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x600115A")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000031")]
	public static event Action<String> ShowLeaderboardFailedEvent
	{
		[Address(RVA = "0x12564F8", Offset = "0x12564F8", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x6001151")]
		 add { } //Length: 244
		[Address(RVA = "0x12565EC", Offset = "0x12565EC", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x6001152")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x14000030")]
	public static event Action<String> ShowLeaderboardSucceededEvent
	{
		[Address(RVA = "0x1256310", Offset = "0x1256310", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x600114F")]
		 add { } //Length: 244
		[Address(RVA = "0x1256404", Offset = "0x1256404", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x6001150")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x1400003D")]
	public static event Action SignedOutEvent
	{
		[Address(RVA = "0x1257BD8", Offset = "0x1257BD8", Length = "0xDC")]
		[CompilerGenerated]
		[Token(Token = "0x6001169")]
		 add { } //Length: 220
		[Address(RVA = "0x1257CB4", Offset = "0x1257CB4", Length = "0xDC")]
		[CompilerGenerated]
		[Token(Token = "0x600116A")]
		 remove { } //Length: 220
	}

	[Address(RVA = "0x125A1F4", Offset = "0x125A1F4", Length = "0x74")]
	[Token(Token = "0x600119D")]
	private static ImangiGameServicesManager() { }

	[Address(RVA = "0x1255F38", Offset = "0x1255F38", Length = "0x8")]
	[Token(Token = "0x600119C")]
	public ImangiGameServicesManager() { }

	[Address(RVA = "0x12579F0", Offset = "0x12579F0", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x6001167")]
	public static void add_AuthenticationFailureEvent(Action<String> value) { }

	[Address(RVA = "0x1257808", Offset = "0x1257808", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x6001165")]
	public static void add_AuthenticationSuccessEvent(Action<String> value) { }

	[Address(RVA = "0x1257620", Offset = "0x1257620", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x6001163")]
	public static void add_GetAllAchievementsFailedEvent(Action<String> value) { }

	[Address(RVA = "0x1257438", Offset = "0x1257438", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x6001161")]
	public static void add_GetAllAchievementsSucceededEvent(Action<List`1<String>> value) { }

	[Address(RVA = "0x1257250", Offset = "0x1257250", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x600115F")]
	public static void add_GetCompletedAchievementsFailedEvent(Action<String> value) { }

	[Address(RVA = "0x1257068", Offset = "0x1257068", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x600115D")]
	public static void add_GetCompletedAchievementsSucceededEvent(Action<List`1<String>> value) { }

	[Address(RVA = "0x1256AB0", Offset = "0x1256AB0", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x6001157")]
	public static void add_ReportAchievementFailureEvent(Action<String, String> value) { }

	[Address(RVA = "0x12568C8", Offset = "0x12568C8", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x6001155")]
	public static void add_ReportAchievementSuccessEvent(Action<String, Boolean> value) { }

	[Address(RVA = "0x1256128", Offset = "0x1256128", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x600114D")]
	public static void add_ReportScoreFailedEvent(Action<String, String> value) { }

	[Address(RVA = "0x1255F40", Offset = "0x1255F40", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x600114B")]
	public static void add_ReportScoreSucceededEvent(Action<String> value) { }

	[Address(RVA = "0x12566E0", Offset = "0x12566E0", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x6001153")]
	public static void add_RetrieveFriendScoresFailedEvent(Action<String> value) { }

	[Address(RVA = "0x1256E80", Offset = "0x1256E80", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x600115B")]
	public static void add_ShowAchievementsFailedEvent(Action<String> value) { }

	[Address(RVA = "0x1256C98", Offset = "0x1256C98", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x6001159")]
	public static void add_ShowAchievementsSucceededEvent(Action<String> value) { }

	[Address(RVA = "0x12564F8", Offset = "0x12564F8", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x6001151")]
	public static void add_ShowLeaderboardFailedEvent(Action<String> value) { }

	[Address(RVA = "0x1256310", Offset = "0x1256310", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x600114F")]
	public static void add_ShowLeaderboardSucceededEvent(Action<String> value) { }

	[Address(RVA = "0x1257BD8", Offset = "0x1257BD8", Length = "0xDC")]
	[CompilerGenerated]
	[Token(Token = "0x6001169")]
	public static void add_SignedOutEvent(Action value) { }

	[Address(RVA = "0x125814C", Offset = "0x125814C", Length = "0xB8")]
	[Token(Token = "0x600116F")]
	public static bool AreGameChallengesAvailable() { }

	[Address(RVA = "0x125A1E4", Offset = "0x125A1E4", Length = "0x8")]
	[Token(Token = "0x600119A")]
	protected override bool AreGameChallengesAvailable_Internal() { }

	[Address(RVA = "0x1258204", Offset = "0x1258204", Length = "0xB8")]
	[Token(Token = "0x6001170")]
	public static bool AreGameChallengesSupported() { }

	[Address(RVA = "0x125A1EC", Offset = "0x125A1EC", Length = "0x8")]
	[Token(Token = "0x600119B")]
	protected override bool AreGameChallengesSupported_Internal() { }

	[Address(RVA = "0x12587FC", Offset = "0x12587FC", Length = "0xB4")]
	[Token(Token = "0x6001177")]
	public static bool AreLeaderboardsSupported() { }

	[Address(RVA = "0x12588B0", Offset = "0x12588B0", Length = "0x8")]
	[Token(Token = "0x6001178")]
	protected override bool AreLeaderboardsSupported_Internal() { }

	[Address(RVA = "0x12584D8", Offset = "0x12584D8", Length = "0xD4")]
	[Token(Token = "0x6001174")]
	public static string AssignSignInLogo() { }

	[Address(RVA = "0x1259900", Offset = "0x1259900", Length = "0x48")]
	[Token(Token = "0x6001189")]
	protected override string AssignSignInLogo_Internal() { }

	[Address(RVA = "0x12582BC", Offset = "0x12582BC", Length = "0xB8")]
	[Token(Token = "0x6001171")]
	public static void Authenticate(bool isSilent = false) { }

	[Address(RVA = "0x1258ED8", Offset = "0x1258ED8", Length = "0x40")]
	[Token(Token = "0x6001180")]
	protected override void Authenticate_Internal(bool isSilent = false) { }

	[Address(RVA = "0x1258BB4", Offset = "0x1258BB4", Length = "0xB4")]
	[Token(Token = "0x600117C")]
	public static void GetAllAchievements() { }

	[Address(RVA = "0x1259678", Offset = "0x1259678", Length = "0x124")]
	[Token(Token = "0x6001197")]
	public void GetAllAchievementsFailed(string inError) { }

	[Address(RVA = "0x1259FD4", Offset = "0x1259FD4", Length = "0x108")]
	[Token(Token = "0x6001196")]
	public void GetAllAchievementsSucceeded(List<String> inStringList) { }

	[Address(RVA = "0x12597DC", Offset = "0x12597DC", Length = "0x124")]
	[Token(Token = "0x6001199")]
	public void GetAllCompletedAchievementsFailed(string inError) { }

	[Address(RVA = "0x125A0DC", Offset = "0x125A0DC", Length = "0x108")]
	[Token(Token = "0x6001198")]
	public void GetAllCompletedAchievementsSucceeded(List<String> inStringList) { }

	[Address(RVA = "0x1258C68", Offset = "0x1258C68", Length = "0xB4")]
	[Token(Token = "0x600117D")]
	public static void GetCompletedAchievements() { }

	[Address(RVA = "0x1257E84", Offset = "0x1257E84", Length = "0x214")]
	[Token(Token = "0x600116D")]
	public static ImangiGameServicesManager GetInstance() { }

	[Address(RVA = "0x1257D90", Offset = "0x1257D90", Length = "0x54")]
	[Token(Token = "0x600116B")]
	public static void ImangiGameServices_LogMessage(string inMessage, Object[] paramList) { }

	[Address(RVA = "0x1257DE4", Offset = "0x1257DE4", Length = "0xA0")]
	[Token(Token = "0x600116C")]
	public static void ImangiGameServices_LogMessageForced(string inMessage, Object[] paramList) { }

	[Address(RVA = "0x1258098", Offset = "0x1258098", Length = "0xB4")]
	[Token(Token = "0x600116E")]
	public static bool IsGameServiceAvailable() { }

	[Address(RVA = "0x1258D1C", Offset = "0x1258D1C", Length = "0x8")]
	[Token(Token = "0x600117E")]
	protected override bool IsGameServiceAvailable_Internal() { }

	[Address(RVA = "0x1258374", Offset = "0x1258374", Length = "0xB4")]
	[Token(Token = "0x6001172")]
	public static bool IsSignedIn() { }

	[Address(RVA = "0x125903C", Offset = "0x125903C", Length = "0x8")]
	[Token(Token = "0x6001181")]
	protected override bool IsSignedIn_Internal() { }

	[Address(RVA = "0x1259638", Offset = "0x1259638", Length = "0x40")]
	[Token(Token = "0x6001187")]
	protected override void LoadAllAchievements_Internal() { }

	[Address(RVA = "0x125979C", Offset = "0x125979C", Length = "0x40")]
	[Token(Token = "0x6001188")]
	protected override void LoadCompletedAchievements_Internal() { }

	[Address(RVA = "0x1257AE4", Offset = "0x1257AE4", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x6001168")]
	public static void remove_AuthenticationFailureEvent(Action<String> value) { }

	[Address(RVA = "0x12578FC", Offset = "0x12578FC", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x6001166")]
	public static void remove_AuthenticationSuccessEvent(Action<String> value) { }

	[Address(RVA = "0x1257714", Offset = "0x1257714", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x6001164")]
	public static void remove_GetAllAchievementsFailedEvent(Action<String> value) { }

	[Address(RVA = "0x125752C", Offset = "0x125752C", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x6001162")]
	public static void remove_GetAllAchievementsSucceededEvent(Action<List`1<String>> value) { }

	[Address(RVA = "0x1257344", Offset = "0x1257344", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x6001160")]
	public static void remove_GetCompletedAchievementsFailedEvent(Action<String> value) { }

	[Address(RVA = "0x125715C", Offset = "0x125715C", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x600115E")]
	public static void remove_GetCompletedAchievementsSucceededEvent(Action<List`1<String>> value) { }

	[Address(RVA = "0x1256BA4", Offset = "0x1256BA4", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x6001158")]
	public static void remove_ReportAchievementFailureEvent(Action<String, String> value) { }

	[Address(RVA = "0x12569BC", Offset = "0x12569BC", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x6001156")]
	public static void remove_ReportAchievementSuccessEvent(Action<String, Boolean> value) { }

	[Address(RVA = "0x125621C", Offset = "0x125621C", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x600114E")]
	public static void remove_ReportScoreFailedEvent(Action<String, String> value) { }

	[Address(RVA = "0x1256034", Offset = "0x1256034", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x600114C")]
	public static void remove_ReportScoreSucceededEvent(Action<String> value) { }

	[Address(RVA = "0x12567D4", Offset = "0x12567D4", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x6001154")]
	public static void remove_RetrieveFriendScoresFailedEvent(Action<String> value) { }

	[Address(RVA = "0x1256F74", Offset = "0x1256F74", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x600115C")]
	public static void remove_ShowAchievementsFailedEvent(Action<String> value) { }

	[Address(RVA = "0x1256D8C", Offset = "0x1256D8C", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x600115A")]
	public static void remove_ShowAchievementsSucceededEvent(Action<String> value) { }

	[Address(RVA = "0x12565EC", Offset = "0x12565EC", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x6001152")]
	public static void remove_ShowLeaderboardFailedEvent(Action<String> value) { }

	[Address(RVA = "0x1256404", Offset = "0x1256404", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x6001150")]
	public static void remove_ShowLeaderboardSucceededEvent(Action<String> value) { }

	[Address(RVA = "0x1257CB4", Offset = "0x1257CB4", Length = "0xDC")]
	[CompilerGenerated]
	[Token(Token = "0x600116A")]
	public static void remove_SignedOutEvent(Action value) { }

	[Address(RVA = "0x1258A34", Offset = "0x1258A34", Length = "0xCC")]
	[Token(Token = "0x600117A")]
	public static void ReportAchievement(string inAchievementID, float inPercentage = 0) { }

	[Address(RVA = "0x1259048", Offset = "0x1259048", Length = "0x48")]
	[Token(Token = "0x6001183")]
	protected override void ReportAchievement_Internal(string inAchievementID, float inPercentage = 0) { }

	[Address(RVA = "0x1259090", Offset = "0x1259090", Length = "0x154")]
	[Token(Token = "0x6001192")]
	public void ReportAchievementFailed(string inError, string inAchievementID = "") { }

	[Address(RVA = "0x1259C60", Offset = "0x1259C60", Length = "0x16C")]
	[Token(Token = "0x6001191")]
	public void ReportAchievementSucceeded(string inString, bool isNewAchievement = false) { }

	[Address(RVA = "0x1258F18", Offset = "0x1258F18", Length = "0x124")]
	[Token(Token = "0x600118A")]
	public void ReportAuthenticationFailed(string inError) { }

	[Address(RVA = "0x1259948", Offset = "0x1259948", Length = "0x108")]
	[Token(Token = "0x600118B")]
	public void ReportAuthenticationSucceeded(string inString) { }

	[Address(RVA = "0x12585AC", Offset = "0x12585AC", Length = "0xD4")]
	[Token(Token = "0x6001175")]
	public static void ReportScore(long inScore, string inLeaderboardID, ulong inContext = 0) { }

	[Address(RVA = "0x1258D24", Offset = "0x1258D24", Length = "0x60")]
	[Token(Token = "0x600117F")]
	protected override void ReportScore_Internal(long inScore, string inLeaderboardID, ulong inContext = 0) { }

	[Address(RVA = "0x1258D84", Offset = "0x1258D84", Length = "0x154")]
	[Token(Token = "0x600118D")]
	public void ReportScoreFailed(string inLeaderboardID, string inError) { }

	[Address(RVA = "0x1259A50", Offset = "0x1259A50", Length = "0x108")]
	[Token(Token = "0x600118C")]
	public void ReportScoreSucceeded(string inString) { }

	[Address(RVA = "0x12588B8", Offset = "0x12588B8", Length = "0x17C")]
	[Token(Token = "0x6001179")]
	public static void RetrieveFriendScores(string inLeaderboardID = "", LeaderboardTimeScope inTimeScope = 2) { }

	[Address(RVA = "0x125935C", Offset = "0x125935C", Length = "0x54")]
	[Token(Token = "0x6001185")]
	protected override void RetrieveFriendScores_Internal(string inLeaderboardID, LeaderboardTimeScope inTimeScope) { }

	[Address(RVA = "0x1258B00", Offset = "0x1258B00", Length = "0xB4")]
	[Token(Token = "0x600117B")]
	public static void ShowAchievements() { }

	[Address(RVA = "0x12594D4", Offset = "0x12594D4", Length = "0x40")]
	[Token(Token = "0x6001186")]
	protected override void ShowAchievements_Internal() { }

	[Address(RVA = "0x1259514", Offset = "0x1259514", Length = "0x124")]
	[Token(Token = "0x6001195")]
	public void ShowAchievementsFailed(string inError) { }

	[Address(RVA = "0x1259ECC", Offset = "0x1259ECC", Length = "0x108")]
	[Token(Token = "0x6001194")]
	public void ShowAchievementsSucceeded(string inString) { }

	[Address(RVA = "0x1258680", Offset = "0x1258680", Length = "0x17C")]
	[Token(Token = "0x6001176")]
	public static void ShowLeaderboard(string inLeaderboardID = "", LeaderboardTimeScope inTimeScope = 2) { }

	[Address(RVA = "0x12591E4", Offset = "0x12591E4", Length = "0x54")]
	[Token(Token = "0x6001184")]
	protected override void ShowLeaderboard_Internal(string inLeaderboardID, LeaderboardTimeScope inTimeScope) { }

	[Address(RVA = "0x1259238", Offset = "0x1259238", Length = "0x124")]
	[Token(Token = "0x600118F")]
	public void ShowLeaderboardFailed(string inError) { }

	[Address(RVA = "0x1259B58", Offset = "0x1259B58", Length = "0x108")]
	[Token(Token = "0x600118E")]
	public void ShowLeaderboardSucceeded(string inMessage) { }

	[Address(RVA = "0x12593B0", Offset = "0x12593B0", Length = "0x124")]
	[Token(Token = "0x6001190")]
	public void ShowRetrieveFriendScoresFailed(string inError) { }

	[Address(RVA = "0x1258428", Offset = "0x1258428", Length = "0xB0")]
	[Token(Token = "0x6001173")]
	public static void SignOut() { }

	[Address(RVA = "0x1259044", Offset = "0x1259044", Length = "0x4")]
	[Token(Token = "0x6001182")]
	protected override void SignOut_Internal() { }

	[Address(RVA = "0x1259DCC", Offset = "0x1259DCC", Length = "0x100")]
	[Token(Token = "0x6001193")]
	public void UserSignedOut() { }

}

