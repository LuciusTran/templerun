using UnityEngine;
using UnityEngine.Localization.Components;

public class TR1LocalizeStringMainMenuButtons : LocalizeStringEvent
{
	public UILabel m_originalFont;

	public string EntryText;

	public string OrignalString;

	public bool AutoSizeLabel;

	public int OrignalSize;

	public bool AutoSizeOnlyXLabel;

	public float TextMultiplier;

	public bool SpecialTreatRussian;

	public int SpecialTreatRussianFactor;

	public bool ConvertToUpperCase;

	public BoxCollider collider;

	private int OriganlStringLength;

	private void Start()
	{
	}

	protected override void UpdateString(string value)
	{
	}

	private void ConvertTextToUpperCase()
	{
	}

	private void AdjustVariablesForRussian()
	{
	}

	private void AdjustLabelSize()
	{
	}

	private void AdjustBoxCollider()
	{
	}
}
