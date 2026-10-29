using System;
using UnityEngine;

public class ImageAlertView : BasePanel
{
	public GameObject CenterButton;

	public UILabel CenterButtonText;

	public UILabel TitleText;

	public UISprite ImageSprite;

	private Action CenterButtonAction;

	public static ImageAlertView Instance;

	private const string _Analytics_DialogTitleKey = "Title";

	private const string _Analytics_DialogSourceKey = "Source";

	private const string _PanelName = "ImageAlert";

	public UILabel ImagePopupImageTextH1;

	public UILabel ImagePopupImageTextH2;

	public UILabel ImagePopupImageTextH3;

	public override void Start()
	{
	}

	public void ShowImageAlert(string title, string imageName, string descName, string centerButton, string descriptionH1, string descriptionH2, string descriptionH3, bool IsImagePopupLocalized, Action centerButtonAction = null, bool showBannerAds = true)
	{
	}

	private void OnClickCenter()
	{
	}
}
