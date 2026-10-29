using System;
using System.Collections.Generic;
using UnityEngine;

[ExecuteInEditMode]
[AddComponentMenu("NGUI/UI/Camera")]
[RequireComponent(typeof(Camera))]
public class UICamera : MonoBehaviour
{
	public enum ClickNotification
	{
		None = 0,
		Always = 1,
		BasedOnDelta = 2
	}

	public class MouseOrTouch
	{
		public Vector2 pos;

		public Vector2 delta;

		public Vector2 totalDelta;

		public Camera pressedCam;

		public GameObject current;

		public GameObject pressed;

		public float clickTime;

		public ClickNotification clickNotification;
	}

	private class Highlighted
	{
		public GameObject go;

		public int counter;
	}

	public bool useMouse;

	public bool useTouch;

	public bool useKeyboard;

	public bool useController;

	public LayerMask eventReceiverMask;

	public float tooltipDelay;

	public bool stickyTooltip;

	public float mouseClickThreshold;

	public float touchClickThreshold;

	public float rangeDistance;

	public string scrollAxisName;

	public string verticalAxisName;

	public string horizontalAxisName;

	public KeyCode submitKey0;

	public KeyCode submitKey1;

	public KeyCode cancelKey0;

	public KeyCode cancelKey1;

	public static Vector2 lastTouchPosition;

	public static RaycastHit lastHit;

	public static Camera currentCamera;

	public static int currentTouchID;

	public static MouseOrTouch currentTouch;

	public static bool inputHasFocus;

	public static GameObject fallThrough;

	private static List<UICamera> mList;

	private static List<Highlighted> mHighlighted;

	private static GameObject mSel;

	private static MouseOrTouch[] mMouse;

	private static GameObject mHover;

	private static MouseOrTouch mController;

	private static float mNextEvent;

	private Dictionary<int, MouseOrTouch> mTouches;

	private GameObject mTooltip;

	private Camera mCam;

	private LayerMask mLayerMask;

	private float mTooltipTime;

	private bool mIsEditor;

	[Obsolete("Use UICamera.currentCamera instead")]
	public static Camera lastCamera => null;

	[Obsolete("Use UICamera.currentTouchID instead")]
	public static int lastTouchID => 0;

	private bool handlesEvents => false;

	public Camera cachedCamera => null;

	public static GameObject hoveredObject => null;

	public static GameObject selectedObject
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public static Camera mainCamera => null;

	public static UICamera eventHandler => null;

	private void OnApplicationQuit()
	{
	}

	private static int CompareFunc(UICamera a, UICamera b)
	{
		return 0;
	}

	private static bool Raycast(Vector3 inPos, ref RaycastHit hit)
	{
		return false;
	}

	public static UICamera FindCameraForLayer(int layer)
	{
		return null;
	}

	private static int GetDirection(KeyCode up, KeyCode down)
	{
		return 0;
	}

	private static int GetDirection(KeyCode up0, KeyCode up1, KeyCode down0, KeyCode down1)
	{
		return 0;
	}

	private static int GetDirection(string axis)
	{
		return 0;
	}

	public static bool IsHighlighted(GameObject go)
	{
		return false;
	}

	private static void Highlight(GameObject go, bool highlighted)
	{
	}

	private MouseOrTouch GetTouch(int id)
	{
		return null;
	}

	private void RemoveTouch(int id)
	{
	}

	private void Awake()
	{
	}

	private void OnDestroy()
	{
	}

	private void FixedUpdate()
	{
	}

	private void Update()
	{
	}

	private void ProcessMouse()
	{
	}

	private void ProcessTouches()
	{
	}

	private void ProcessOthers()
	{
	}

	private void ProcessTouch(bool pressed, bool unpressed)
	{
	}

	public void ShowTooltip(bool val)
	{
	}
}
