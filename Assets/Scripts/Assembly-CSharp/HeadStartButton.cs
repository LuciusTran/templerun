using UnityEngine;

public class HeadStartButton : MonoBehaviour
{
	public HeadStartButton OtherButton;

	public bool MegaHeadStart;

	public CharacterPlayer GamePlayer;

	public GameController Controller;

	public RecordManager RecordManager;

	public PlayerManager PlayerManager;

	private RecordManager.StoreItemType Type;

	private UISprite Sprite;

	private bool TweenStarted;

	private float TimeTillDisable;

	private int CurrentLevel;

	private void Update()
	{
	}

	private void OnClick()
	{
		// Native utility selection intent; local inventory binding; see Evidence/ui-csharp-restoration.json.
		TempleRunFlow.Instance.UseHeadStart(MegaHeadStart);
	}

	private void OnEnable()
	{
	}
}
