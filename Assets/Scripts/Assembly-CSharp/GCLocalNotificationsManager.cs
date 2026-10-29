using System;
using System.Collections.Generic;
using UnityEngine;

public class GCLocalNotificationsManager : MonoBehaviour
{
	private const int FallbackMinutesToSendNotification = 10;

	private readonly List<string> startNotifications;

	private readonly List<string> midNotifications;

	private readonly List<string> endNotifications;

	public void Initialize()
	{
	}

	private void LoadNotificationTexts()
	{
	}

	private void ScheduleStartNotification()
	{
	}

	private void ScheduleMidNotification()
	{
	}

	private void ScheduleEndNotification()
	{
	}

	public void CheckAndCancelMidGC_Notification()
	{
	}

	private string GetRandomNotification(List<string> notifications)
	{
		return null;
	}

	private int ScheduleNotification(string id, DateTime time, string message)
	{
		return 0;
	}
}
