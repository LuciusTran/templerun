//Type is in global namespace

[Token(Token = "0x20000FE")]
public class GCLocalNotificationsManager : MonoBehaviour
{
	[CompilerGenerated]
	[Token(Token = "0x20000FF")]
	private sealed class <>c__DisplayClass9_0
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x40008A8")]
		public float currentValue; //Field offset: 0x10

		[Address(RVA = "0x12DA110", Offset = "0x12DA110", Length = "0x8")]
		[Token(Token = "0x600077C")]
		public <>c__DisplayClass9_0() { }

		[Address(RVA = "0x12DA1C4", Offset = "0x12DA1C4", Length = "0x14")]
		[Token(Token = "0x600077D")]
		internal bool <CheckAndCancelMidGC_Notification>b__0(int value) { }

	}

	[Token(Token = "0x40008A4")]
	private const int FallbackMinutesToSendNotification = 10; //Field offset: 0x0
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40008A5")]
	private readonly List<String> startNotifications; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x40008A6")]
	private readonly List<String> midNotifications; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x40008A7")]
	private readonly List<String> endNotifications; //Field offset: 0x30

	[Address(RVA = "0x12DA118", Offset = "0x12DA118", Length = "0xAC")]
	[Token(Token = "0x600077B")]
	public GCLocalNotificationsManager() { }

	[Address(RVA = "0x12D9F28", Offset = "0x12D9F28", Length = "0x1E8")]
	[Token(Token = "0x6000778")]
	public void CheckAndCancelMidGC_Notification() { }

	[Address(RVA = "0x12D9E2C", Offset = "0x12D9E2C", Length = "0x70")]
	[Token(Token = "0x6000779")]
	private string GetRandomNotification(List<String> notifications) { }

	[Address(RVA = "0x12D913C", Offset = "0x12D913C", Length = "0x28")]
	[Token(Token = "0x6000773")]
	public void Initialize() { }

	[Address(RVA = "0x12D9164", Offset = "0x12D9164", Length = "0x354")]
	[Token(Token = "0x6000774")]
	private void LoadNotificationTexts() { }

	[Address(RVA = "0x12D9A70", Offset = "0x12D9A70", Length = "0x3BC")]
	[Token(Token = "0x6000777")]
	private void ScheduleEndNotification() { }

	[Address(RVA = "0x12D96B0", Offset = "0x12D96B0", Length = "0x3C0")]
	[Token(Token = "0x6000776")]
	private void ScheduleMidNotification() { }

	[Address(RVA = "0x12D9E9C", Offset = "0x12D9E9C", Length = "0x8C")]
	[Token(Token = "0x600077A")]
	private int ScheduleNotification(string id, DateTime time, string message) { }

	[Address(RVA = "0x12D94B8", Offset = "0x12D94B8", Length = "0x1F8")]
	[Token(Token = "0x6000775")]
	private void ScheduleStartNotification() { }

}

