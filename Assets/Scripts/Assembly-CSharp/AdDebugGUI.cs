using System.Collections.Generic;
using Imangi.Ad;
using UnityEngine;

public class AdDebugGUI : MonoBehaviour
{
	public enum AdStatus
	{
		Unknown = 0,
		WaitingForFetch = 1,
		Fetching = 2,
		Available = 3,
		NotAvailable = 4,
		Playing = 5,
		WatchedComplete = 6,
		WatchFailed = 7
	}

	public class AdSpaceTrackingInfo
	{
		public AdType Type;

		public string AdSpaceName;

		public AdStatus Status;

		public UILabel Label;

		public string LabelRootText;

		public float UpdateDelta;

		public AdSpaceTrackingInfo(AdType inAdType, string inAdSpaceName, UILabel inLabel, string inLabelRootText)
		{
		}
	}

	protected const string _LogChannel = "AdDebugGUI";

	private const string _AdPlacement = "DebugGUI";

	public GameObject Button_CardAd;

	public UILabel Label_CardAd;

	public GameObject Button_CardAdTest;

	public UILabel Label_CardAdTest;

	public GameObject Button_VideoAd;

	public UILabel Label_VideoAd;

	public GameObject Button_VideoAdTest;

	public UILabel Label_VideoAdTest;

	public GameObject Button_Close;

	protected static GameObject _AdDebugGO;

	protected static AdDebugGUI _Instance;

	protected bool _AdEventsHooked;

	protected const string _AdSpaceName_CardAd = "PostGameMenu";

	protected const string _AdSpaceName_CardAdTest = "NetworkTest";

	protected const string _AdSpaceName_VideoAd = "SaveMe";

	protected const string _AdSpaceName_VideoAdTest = "SaveMe";

	protected List<AdSpaceTrackingInfo> _TrackingInfos;

	protected AdSpaceTrackingInfo _Info_CardAd;

	protected AdSpaceTrackingInfo _Info_CardAdTest;

	protected AdSpaceTrackingInfo _Info_VideoAd;

	protected AdSpaceTrackingInfo _Info_VideoAdTest;

	public static void ShowAdDebugGUI()
	{
	}

	protected AdSpaceTrackingInfo GetTrackingInfo(string inAdSpaceName)
	{
		return null;
	}

	protected void ChangeStatus(AdStatus inNewStatus, ref AdSpaceTrackingInfo refInfo)
	{
	}

	protected void HandleButtonClick(ref AdSpaceTrackingInfo refInfo)
	{
	}

	protected void UpdateAdStatus(ref AdSpaceTrackingInfo refInfo)
	{
	}

	private void Update()
	{
	}

	protected void HookAdEvents()
	{
	}

	protected void UnhookAdEvents()
	{
	}

	public void OnClick_Close()
	{
	}

	public void OnClick_CardAd()
	{
	}

	public void OnClick_CardAdTest()
	{
	}

	public void OnClick_VideoAd()
	{
	}

	public void OnClick_VideoAdTest()
	{
	}

	protected void OnAdClickedEvent(AdService inService, AdType inAdType, string inAdSpaceName)
	{
	}

	protected void OnAdOpenedEvent(AdService inService, AdType inAdType, string inAdSpaceName)
	{
	}

	protected void OnAdFailedEvent(AdService inService, AdType inAdType, string inAdSpaceName, string inError)
	{
	}

	protected void OnAdReceivedEvent(AdService inService, AdType inAdType, string inAdSpaceName)
	{
	}

	protected void OnAdFailedToReceiveEvent(AdService inService, AdType inAdType, string inAdSpaceName)
	{
	}

	protected void OnAdWillLeaveApplicationEvent(AdService inService, AdType inAdType, string inAdSpaceName)
	{
	}

	protected void OnAdDismissedEvent(AdService inService, AdType inAdType, string inAdSpaceName, bool inComplete)
	{
	}
}
