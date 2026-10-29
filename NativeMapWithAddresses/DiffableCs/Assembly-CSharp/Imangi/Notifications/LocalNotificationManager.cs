namespace Imangi.Notifications;

[Token(Token = "0x200025A")]
public class LocalNotificationManager
{
	[Token(Token = "0x4001264")]
	public const string LogChannel = "LocalNotificationManager"; //Field offset: 0x0

	[Address(RVA = "0x124B7F0", Offset = "0x124B7F0", Length = "0x8")]
	[Token(Token = "0x60010A4")]
	public LocalNotificationManager() { }

	[Address(RVA = "0x124B794", Offset = "0x124B794", Length = "0x58")]
	[Token(Token = "0x60010A2")]
	public static void CancelLocalNotification_Android(int androidNotificaitonId) { }

	[Address(RVA = "0x124B7EC", Offset = "0x124B7EC", Length = "0x4")]
	[Token(Token = "0x60010A3")]
	public static void CancelLocalNotification_iOS(string iosNotificatonIdentifier) { }

	[Address(RVA = "0x124B588", Offset = "0x124B588", Length = "0x20C")]
	[Token(Token = "0x60010A1")]
	public static int ScheduleLocalNotification(string messageTitle, DateTime messageTime, string identifier, bool isRepeating, DateTime repeatInterval, int importance = 0, bool showInForeground = true, string messageBody = null, string intentData = null) { }

}

