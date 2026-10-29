using System;

[Serializable]
public class SavedBonusItem : SavedMovingObject
{
	public BonusItem.BonusItemType BonusType;

	public int Value;

	public bool isMagnetized;

	public SavedBonusItem()
	{
	}

	public SavedBonusItem(BonusItem bi)
	{
	}

	public BonusItem Apply(PathElement pe)
	{
		return null;
	}
}
