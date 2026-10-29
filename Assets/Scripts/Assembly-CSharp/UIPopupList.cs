using System.Collections.Generic;
using UnityEngine;

[AddComponentMenu("NGUI/Interaction/Popup List")]
[ExecuteInEditMode]
public class UIPopupList : MonoBehaviour
{
	public enum Position
	{
		Auto = 0,
		Above = 1,
		Below = 2
	}

	private const float animSpeed = 0.15f;

	public UIAtlas atlas;

	public UIFont font;

	public UILabel textLabel;

	public string backgroundSprite;

	public string highlightSprite;

	public Position position;

	public List<string> items;

	public Vector2 padding;

	public float textScale;

	public Color textColor;

	public Color backgroundColor;

	public Color highlightColor;

	public bool isAnimated;

	public bool isLocalized;

	public GameObject eventReceiver;

	public string functionName;

	[SerializeField]
	[HideInInspector]
	private string mSelectedItem;

	private UIPanel mPanel;

	private GameObject mChild;

	private UISprite mBackground;

	private UISprite mHighlight;

	private UILabel mHighlightedLabel;

	private List<UILabel> mLabelList;

	private float mBgBorder;

	public bool isOpen => false;

	public string selection
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	private bool handleEvents
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	private void Start()
	{
	}

	private void OnLocalize(Localization loc)
	{
	}

	private void Highlight(UILabel lbl, bool instant)
	{
	}

	private void OnItemHover(GameObject go, bool isOver)
	{
	}

	private void Select(UILabel lbl, bool instant)
	{
	}

	private void OnItemPress(GameObject go, bool isPressed)
	{
	}

	private void OnKey(KeyCode key)
	{
	}

	private void OnSelect(bool isSelected)
	{
	}

	private void AnimateColor(UIWidget widget)
	{
	}

	private void AnimatePosition(UIWidget widget, bool placeAbove, float bottom)
	{
	}

	private void AnimateScale(UIWidget widget, bool placeAbove, float bottom)
	{
	}

	private void Animate(UIWidget widget, bool placeAbove, float bottom)
	{
	}

	private void OnClick()
	{
	}
}
