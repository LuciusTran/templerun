using UnityEngine;

[ExecuteInEditMode]
[AddComponentMenu("NGUI/Interaction/Slider")]
public class UISlider : IgnoreTimeScale
{
	public enum Direction
	{
		Horizontal = 0,
		Vertical = 1
	}

	public static UISlider current;

	public Transform foreground;

	public Transform thumb;

	public Direction direction;

	public Vector2 fullSize;

	public GameObject eventReceiver;

	public string functionName;

	public int numberOfSteps;

	[SerializeField]
	[HideInInspector]
	private float rawValue;

	private float mStepValue;

	private BoxCollider mCol;

	private Transform mTrans;

	private Transform mFGTrans;

	private UIWidget mFGWidget;

	private UIFilledSprite mFGFilled;

	private bool mInitDone;

	public float sliderValue
	{
		// Serialized-field compatibility accessor; geometry invalidation adapted; see Evidence/ui-csharp-restoration.json.
		get { return rawValue; }
		set { rawValue = Mathf.Clamp01(value); if (thumb) { var p = thumb.localPosition; if (direction == Direction.Horizontal) p.x = fullSize.x * rawValue; else p.y = fullSize.y * rawValue; thumb.localPosition = p; } }
	}

	private void Init()
	{
	}

	private void Awake()
	{
	}

	private void Start()
	{
	}

	private void OnPress(bool pressed)
	{
	}

	private void OnDrag(Vector2 delta)
	{
	}

	private void OnPressThumb(GameObject go, bool pressed)
	{
	}

	private void OnDragThumb(GameObject go, Vector2 delta)
	{
	}

	private void OnKey(KeyCode key)
	{
	}

	private void UpdateDrag()
	{
	}

	private void Set(float input, bool force)
	{
	}

	public void ForceUpdate()
	{
	}
}
