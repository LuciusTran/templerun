using System.Collections.Generic;
using UnityEngine;

public class LocalNotificationSchedulingManager : MonoBehaviour
{
	private const string _LogChannel = "LocalNotificationSchedulingManager";

	private static LocalNotificationSchedulingManager _Instance;

	private static bool isReactivationRewardGiven;

	private static bool isReactivationRewardScheduled;

	private static int dailyLoginReminderDays;

	private static string[] dailyLoginMessages;

	private static int noOfRewards;

	private static List<ReactivationRewardData> reactivationRewardDatas;

	private static string[] reactivationRewardMessage;

	private void Start()
	{
	}

	public static void SetUpNotifications()
	{
	}

	public static void ScheduleNotifications()
	{
	}

	private static void RewardForReactivation(int rewardNo)
	{
	}

	public static void AskNotificationPermissionPopupExplicitlyAndroid()
	{
	}
}
