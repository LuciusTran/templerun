using System;
using UnityEngine;

public class UIPrivacyQuestion : MonoBehaviour
{
	public UIWidget SizePlate;

	public UILabel DescriptionLabel;

	public UILabel CallToActionLabel;

	public UILabel EntryLabel;

	public UISavedOption QuestionBox;

	public UICheckbox PositiveBox;

	public UICheckbox NegativeBox;

	public UILabel PositiveLabel;

	public UILabel NegativeLabel;

	[Header("Positioning")]
	public Transform CallToActionParent;

	public Transform AnswerParent;

	public float InfoToPromptPadding;

	public float PromptToAnswerPadding;

	public float AnswerSize;

	private Action _OnQuestionAnswered;

	private PrivacyManager.QuestionData _QuestionData;

	private void OnDestroy()
	{
	}

	public void SetupWithQuestionData(PrivacyManager.QuestionData inQuestionData, string inEntryText, Action inOnQuestionAnswered)
	{
	}
}
