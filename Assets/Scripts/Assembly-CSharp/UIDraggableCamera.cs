using UnityEngine;

[RequireComponent(typeof(Camera))]
[AddComponentMenu("NGUI/Interaction/Draggable Camera")]
public class UIDraggableCamera : IgnoreTimeScale
{
	public Transform rootForBounds;

	public Vector2 scale;

	public float scrollWheelFactor;

	public UIDragObject.DragEffect dragEffect;

	public float momentumAmount;

	private Camera mCam;

	private Transform mTrans;

	private bool mPressed;

	private Vector2 mMomentum;

	private Bounds mBounds;

	private float mScroll;

	private UIRoot mRoot;

	public Vector2 currentMomentum
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

	private Vector3 CalculateConstrainOffset()
	{
		return default;
	}

	public bool ConstrainToBounds(bool immediate)
	{
		return false;
	}

	public void Press(bool isPressed)
	{
	}

	public void Drag(Vector2 delta)
	{
	}

	public void Scroll(float delta)
	{
	}

	private void Update()
	{
	}
}
