using System;
using UnityEngine;

public class AlertView : BasePanel
{
	public GameObject TextAlertObject;

	public GameObject ImagePopupAlertObject;

	public GameObject TextAlertLargeObject;

	public GameObject DLImagePopupAlertObject;

	public GameObject LeftButton;

	public GameObject CenterButton;

	public GameObject RightButton;

	public UILabel LeftButtonText;

	public UILabel CenterButtonText;

	public UILabel RightButtonText;

	public UILabel TitleText;

	public UILabel DialogText;

	public GameObject InputBox;

	public UISprite TwitterSprite;

	public UIInput Inputter;

	private Action LeftButtonAction;

	private Action RightButtonAction;

	private Action CenterButtonAction;

	[Header("Image Alert UI Elements")]
	public GameObject ImagePopupLeftButton;

	public GameObject ImagePopupCenterButton;

	public GameObject ImagePopupRightButton;

	public UILabel ImagePopupLeftButtonText;

	public UILabel ImagePopupCenterButtonText;

	public UILabel ImagePopupRightButtonText;

	public UISprite ImageSprite;

	public UILabel ImagePopupTitleText;

	public UILabel ImagePopupDialogText;

	public UILabel ImagePopupImageTextH1;

	public UILabel ImagePopupImageTextH2;

	public UILabel ImagePopupImageTextH3;

	public UILabel DLImagePopupTitleText;

	public UILabel DLImagePopupCenterButtonText;

	public UILabel DLImagePopupImageTextH1;

	public UILabel DLImagePopupImageTextH2;

	public UILabel DLImagePopupImageTextH3;

	[Header("Alert Large UI Elements")]
	public UILabel LargeAlertLeftButtonText;

	public UILabel LargeAlertRightButtonText;

	public UILabel LargeAlertTitleText;

	public UILabel LargeAlertDialogText;

	public static AlertView Instance;

	private const string _Analytics_DialogTitleKey = "Title";

	private const string _Analytics_DialogSourceKey = "Source";

	private const string _PanelName = "Alert";

	public override void Start()
	{
	}

	public void ShowAlert(string title, string description, string leftButton, string rightButton, Action leftButtonAction = null, Action rightButtonAction = null, bool showBannerAds = true)
	{
	}

	public void ShowAlertLarge(string title, string description, string leftButton, string rightButton, Action leftButtonAction = null, Action rightButtonAction = null, bool showBannerAds = true)
	{
	}

	public void ShowAlert(string title, string description, string button, Action centerButtonAction = null, bool showBannerAds = true)
	{
	}

	public void ShowAlert(string title, string description, bool showBannerAds = true)
	{
	}

	public void ShowTwitter(string message, Action inCancelAction, bool showBannerAds = true)
	{
	}

	public void ShowForceUpdate(string inTitle, string inDescription, string inButtonText, Action centerButtonAction = null, bool showBannerAds = true)
	{
	}

	public void ShowImageAlert(string imageName, string title, string description, string inButtonText, Action leftButtonAction = null, Action rightButtonAction = null, bool showBannerAds = true)
	{
	}

	public void ShowImageAlert(string imageName, string title, string description, string inButtonText, string descriptionH1, string descriptionH2, string descriptionH3, Action centerButtonAction = null, bool showBannerAds = true, bool IsImagePopupLocalized = false)
	{
	}

	public void ShowDeeplinkingAlert(string title, string inButtonText, string descriptionH1, string descriptionH2, string descriptionH3, Action centerButtonAction = null, bool showBannerAds = true)
	{
	}

	private void OnClickLeft()
	{
	}

	private void OnClickRight()
	{
	}

	private void OnClickCenter()
	{
	}

	private void OnSubmit()
	{
	}
}
