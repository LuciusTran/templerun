using System.Collections.Generic;
using UnityEngine;

public class UIPrivacyScreen : BasePanel
{
	public GameObject SlideInOffset;

	public GameObject ConfirmButton;

	public GameObject Header;

	public GameObject QuestionPrefab;

	public GameObject SeperatorPrefab;

	public UIPanel ScrollViewPanel;

	public Transform ScrollContent;

	public UIStack ScrollStack;

	public UILabel PrivacyLabel;

	public UILabel MoreInfoLabel;

	private bool _FirstSlide;

	private UIButtonColor ConfirmButtonColor;

	private UIWidget ConfirmButtonWidget;

	private Collider ConfirmButtonCollider;

	private List<PrivacyManager.QuestionData> _QuestionsToShow;

	private List<string> _QuestionGroupNames;

	private const string _LogChannel = "UIPrivacyScreen";

	private void Awake()
	{
	}

	public void Setup(List<PrivacyManager.QuestionData> inConsentQuestionData)
	{
	}

	public override void SlideIn(BasePanel returnTo)
	{
	}

	private void AddQuestion(PrivacyManager.QuestionData inQuestionData, int inCurrentQuestionIdx, int inTotalQuestionCount)
	{
	}

	private void SetConfirmButton()
	{
	}

	private void MoreInfoClicked()
	{
	}

	private void OnShowPrivacyPolicy(string inMoreInfoURL)
	{
	}

	private void OnFailedToShowPrivacyPolicy()
	{
	}

	private void ConfirmClicked()
	{
	}
}
