using System;

namespace Imangi.Notifications
{
	public class LocalNotificationManager
	{
		public const string LogChannel = "LocalNotificationManager";

		public static int ScheduleLocalNotification(string messageTitle, DateTime messageTime, string identifier, bool isRepeating, DateTime repeatInterval, int importance = 0, bool showInForeground = true, string messageBody = null, string intentData = null)
		{
			return 0;
		}

		public static void CancelLocalNotification_Android(int androidNotificaitonId)
		{
		}

		public static void CancelLocalNotification_iOS(string iosNotificatonIdentifier)
		{
		}
	}
}
