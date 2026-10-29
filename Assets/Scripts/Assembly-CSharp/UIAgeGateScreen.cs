using System;
using System.Collections.Generic;
using UnityEngine;

public class UIAgeGateScreen : BasePanel
{
	private const string _LogChannel = "UIAgeGateScreen";

	public GameObject SlideInOffset;

	public GameObject ConfirmButton;

	public GameObject Header;

	public GameObject Content;

	public Transform Thumb;

	public UIPrivacyQuestion AgeQuestionUi;

	public PrivacyManager.QuestionData AgeQuestionData;

	public UILabel MoreInfoLabel;

	public UISlider Slider;

	public UILabel AgeLabel;

	private bool _FirstSlide;

	private UIButtonColor ConfirmButtonColor;

	private UIWidget ConfirmButtonWidget;

	private Collider ConfirmButtonCollider;

	private Action<int> SystemOnClosedHandler;

	private float SliderValue;

	private void Awake()
	{
	}

	public void Setup(List<PrivacyManager.QuestionData> inConsentQuestionData, Action<int> systemCloseCallback = null)
	{
	}

	public override void SlideIn(BasePanel returnTo)
	{
	}

	private void SetConfirmButton()
	{
	}

	private void MoreInfoClicked()
	{
	}

	private void PPClicked()
	{
	}

	private void OnShowMoreInfo(string inMoreInfoURL)
	{
	}

	private void OnFailedToShowMoreInfo()
	{
	}

	private void ConfirmClicked()
	{
	}

	private void EndPrivacyFlow()
	{
	}

	public void OnSlider(float v)
	{
	}
}
