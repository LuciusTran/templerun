using UnityEngine;

[RequireComponent(typeof(UIPanel))]
[AddComponentMenu("NGUI/Interaction/Draggable Panel")]
[ExecuteInEditMode]
public class UIDraggablePanel : IgnoreTimeScale
{
	public enum DragEffect
	{
		None = 0,
		Momentum = 1,
		MomentumAndSpring = 2
	}

	public enum ShowCondition
	{
		Always = 0,
		OnlyIfNeeded = 1,
		WhenDragging = 2
	}

	public bool restrictWithinPanel;

	public bool disableDragIfFits;

	public DragEffect dragEffect;

	public Vector3 scale;

	public float scrollWheelFactor;

	public float momentumAmount;

	public Vector2 relativePositionOnReset;

	public bool repositionClipping;

	public UIScrollBar horizontalScrollBar;

	public UIScrollBar verticalScrollBar;

	public ShowCondition showScrollBars;

	private Transform mTrans;

	private UIPanel mPanel;

	private Plane mPlane;

	private Vector3 mLastPos;

	private bool mPressed;

	private Vector3 mMomentum;

	private float mScroll;

	private Bounds mBounds;

	private bool mCalculatedBounds;

	private bool mShouldMove;

	private bool mIgnoreCallbacks;

	private int mTouches;

	public Bounds bounds => default;

	public bool shouldMoveHorizontally => false;

	public bool shouldMoveVertically => false;

	private bool shouldMove => false;

	public Vector3 currentMomentum
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	private void Awake()
	{
	}

	private void Start()
	{
	}

	public void RestrictWithinBounds(bool instant)
	{
	}

	public void DisableSpring()
	{
	}

	public void UpdateScrollbars(bool recalculateBounds)
	{
	}

	public void SetDragAmount(float x, float y, bool updateScrollbars)
	{
	}

	public void ResetPosition()
	{
	}

	private void OnHorizontalBar(UIScrollBar sb)
	{
	}

	private void OnVerticalBar(UIScrollBar sb)
	{
	}

	private void MoveRelative(Vector3 relative)
	{
	}

	private void MoveAbsolute(Vector3 absolute)
	{
	}

	public void Press(bool pressed)
	{
	}

	public void Drag(Vector2 delta)
	{
	}

	public void Scroll(float delta)
	{
	}

	private void LateUpdate()
	{
	}
}
