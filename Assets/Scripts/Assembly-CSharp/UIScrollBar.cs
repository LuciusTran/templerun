using UnityEngine;

[ExecuteInEditMode]
[AddComponentMenu("NGUI/Interaction/Scroll Bar")]
public class UIScrollBar : MonoBehaviour
{
	public enum Direction
	{
		Horizontal = 0,
		Vertical = 1
	}

	public delegate void OnScrollBarChange(UIScrollBar sb);

	[SerializeField]
	[HideInInspector]
	private UISprite mBG;

	[SerializeField]
	[HideInInspector]
	private UISprite mFG;

	[SerializeField]
	[HideInInspector]
	private Direction mDir;

	[SerializeField]
	[HideInInspector]
	private bool mInverted;

	[SerializeField]
	[HideInInspector]
	private float mScroll;

	[SerializeField]
	[HideInInspector]
	private float mSize;

	private Transform mTrans;

	private bool mIsDirty;

	private Camera mCam;

	private Vector2 mScreenPos;

	public OnScrollBarChange onChange;

	public Transform cachedTransform => null;

	public Camera cachedCamera => null;

	public UISprite background
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public UISprite foreground
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public Direction direction
	{
		get
		{
			return Direction.Horizontal;
		}
		set
		{
		}
	}

	public bool inverted
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public float scrollValue
	{
		get
		{
			return 0f;
		}
		set
		{
		}
	}

	public float barSize
	{
		get
		{
			return 0f;
		}
		set
		{
		}
	}

	public float alpha
	{
		get
		{
			return 0f;
		}
		set
		{
		}
	}

	private void CenterOnPos(Vector2 localPos)
	{
	}

	private void Reposition(Vector2 screenPos)
	{
	}

	private void OnPressBackground(GameObject go, bool isPressed)
	{
	}

	private void OnDragBackground(GameObject go, Vector2 delta)
	{
	}

	private void OnPressForeground(GameObject go, bool isPressed)
	{
	}

	private void OnDragForeground(GameObject go, Vector2 delta)
	{
	}

	private void Start()
	{
	}

	private void Update()
	{
	}

	public void ForceUpdate()
	{
	}
}
