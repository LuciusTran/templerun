using UnityEngine;

public class ObjectiveItem : MonoBehaviour
{
	public UISprite AwardedSprite;

	public UISprite NotAwardedSprite;

	public UILabel NameLabel;

	public UILabel DescriptionLabel;

	public UIDragPanelContents DragPanel;

	public void Setup(RecordManager.cAchievement achievement, bool awarded, bool inList = true)
	{
	}
}
