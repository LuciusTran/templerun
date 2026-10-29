using UnityEngine;
using UnityEngine.Localization.Components;

[AddComponentMenu("Localization/TR1Localize String Event")]
public class TR1LocalizeString : LocalizeStringEvent
{
	public UILabel m_originalFont;

	public string EntryText;

	public string OrignalString;

	public bool AutoSizeLabel;

	public int OrignalSize;

	public bool AutoSizeOnlyXLabel;

	public float TextMultiplier;

	public bool SpecialTreatJapaneseAndRussian;

	public int SpecialTreatJapaneseAndRussianFactor;

	public bool ConvertToUpperCase;

	protected override void UpdateString(string value)
	{
	}
}
