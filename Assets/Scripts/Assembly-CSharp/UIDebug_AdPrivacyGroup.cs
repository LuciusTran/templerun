using UnityEngine;

public class UIDebug_AdPrivacyGroup : MonoBehaviour
{
	public UICheckbox RequireCompliantCheckbox;

	public UICheckbox HasConsentCheckbox;

	public UICheckbox AgeRestrictedCheckbox;

	public UILabel CountryLabel;

	public UILabel IsCCPALabel;

	public UILabel IsGDPRLabel;

	public UILabel TimeZoneLabel;

	protected const bool _RequireCompliantDefault = false;

	protected const bool _HasConsentDefault = true;

	protected const bool _AgeRestrictedDefault = false;

	protected bool _RequireCompliant;

	protected bool _HasConsent;

	protected bool _AgeRestricted;

	protected void SetInitialValues()
	{
	}

	protected void UpdateToggles()
	{
	}

	public void Initialize()
	{
	}

	public void OnApplyButtonClicked()
	{
	}

	public void OnResetButtonClicked()
	{
	}

	protected void OnClearOverrides()
	{
	}

	public void OnClearButtonClicked()
	{
	}

	public void OnRequireCompliantClicked()
	{
	}

	public void OnHasConsentClicked()
	{
	}

	public void OnAgeRestrictedClicked()
	{
	}
}
