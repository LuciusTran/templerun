//Type is in global namespace

[Token(Token = "0x2000165")]
public class LocalNotificationSchedulingManager : MonoBehaviour
{
	[Token(Token = "0x4000C5E")]
	private const string _LogChannel = "LocalNotificationSchedulingManager"; //Field offset: 0x0
	[Token(Token = "0x4000C5F")]
	private static LocalNotificationSchedulingManager _Instance; //Field offset: 0x0
	[Token(Token = "0x4000C60")]
	private static bool isReactivationRewardGiven; //Field offset: 0x8
	[Token(Token = "0x4000C61")]
	private static bool isReactivationRewardScheduled; //Field offset: 0x9
	[Token(Token = "0x4000C62")]
	private static int dailyLoginReminderDays; //Field offset: 0xC
	[Token(Token = "0x4000C63")]
	private static String[] dailyLoginMessages; //Field offset: 0x10
	[Token(Token = "0x4000C64")]
	private static int noOfRewards; //Field offset: 0x18
	[Token(Token = "0x4000C65")]
	private static List<ReactivationRewardData> reactivationRewardDatas; //Field offset: 0x20
	[Token(Token = "0x4000C66")]
	private static String[] reactivationRewardMessage; //Field offset: 0x28

	[Address(RVA = "0x1308488", Offset = "0x1308488", Length = "0xFC")]
	[Token(Token = "0x6000A47")]
	private static LocalNotificationSchedulingManager() { }

	[Address(RVA = "0x1308480", Offset = "0x1308480", Length = "0x8")]
	[Token(Token = "0x6000A46")]
	public LocalNotificationSchedulingManager() { }

	[Address(RVA = "0x130771C", Offset = "0x130771C", Length = "0x110")]
	[Token(Token = "0x6000A45")]
	public static void AskNotificationPermissionPopupExplicitlyAndroid() { }

	[Address(RVA = "0x1307FE0", Offset = "0x1307FE0", Length = "0x4A0")]
	[Token(Token = "0x6000A44")]
	private static void RewardForReactivation(int rewardNo) { }

	[Address(RVA = "0x130782C", Offset = "0x130782C", Length = "0x7B4")]
	[Token(Token = "0x6000A43")]
	public static void ScheduleNotifications() { }

	[Address(RVA = "0x1307144", Offset = "0x1307144", Length = "0x5D8")]
	[Token(Token = "0x6000A42")]
	public static void SetUpNotifications() { }

	[Address(RVA = "0x130704C", Offset = "0x130704C", Length = "0xF8")]
	[Token(Token = "0x6000A41")]
	private void Start() { }

}

