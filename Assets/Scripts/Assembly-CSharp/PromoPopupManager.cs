public class PromoPopupManager
{
	private static PromoPopupConfigData _PopupData;

	private static ForceUpdateConfigData _ForceUpdateConfig;

	private static bool _ForceUpdateOSAlertEventsHooked;

	private static string _ForceUpdateURL;

	public static void InitializeConfig(PromoFile inPromoFile)
	{
	}

	private static bool ProcessPromoPopup(ConfigData inConfigData)
	{
		return false;
	}

	private static bool ProcessForceUpdate(ConfigData inConfigData)
	{
		return false;
	}

	public static void PromoAlertOK()
	{
	}

	private static void PromoAlertCancelledEvent()
	{
	}

	public static void DoShowGC_Promo()
	{
	}

	public static void DoShowPromo()
	{
	}

	public static bool ShowForceUpdate()
	{
		return false;
	}

	private static void HookForceUpdateOSAlertEvents()
	{
	}

	private static void UnhookForceUpdateOSAlertEvents()
	{
	}

	private static void OnForceUpdateOSAlertClicked(int inAlertIndex, string inButtonString)
	{
	}

	private static void OnForceUpdateClicked()
	{
	}

	public static void DoShowReactivationCampaignPromo()
	{
	}

	private static void ClaimReactivationCampaignReward()
	{
	}
}
