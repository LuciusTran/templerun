using UnityEngine;

[ExecuteInEditMode]
[AddComponentMenu("NGUI/UI/Anchor")]
public class UIAnchor : MonoBehaviour
{
	public enum Side
	{
		BottomLeft = 0,
		Left = 1,
		TopLeft = 2,
		Top = 3,
		TopRight = 4,
		Right = 5,
		BottomRight = 6,
		Bottom = 7,
		Center = 8
	}

	public Camera uiCamera;

	public Side side;

	public bool halfPixelOffset;

	public float depthOffset;

	public Vector2 relativeOffset;

	[HideInInspector]
	[SerializeField]
	private bool stretchToFill;

	private Transform mTrans;

	private bool mIsWindows;

	private void Start()
	{
		// Native-derived control flow with local host binding; see Evidence/ui-csharp-restoration.json.
		if (!Application.isPlaying) return;
		mTrans = transform;
		mIsWindows = Application.platform == RuntimePlatform.WindowsPlayer || Application.platform == RuntimePlatform.WindowsEditor;
		AnchorItem();
	}

	private void OnEnable()
	{
		// Native-derived control flow with local host binding; see Evidence/ui-csharp-restoration.json.
		if (Application.isPlaying && mTrans) AnchorItem();
	}

	public void AnchorItem()
	{
		// Native-derived anchoring; safe-area input supplied by host; see Evidence/ui-csharp-restoration.json.
		if (!uiCamera) return;
		if (!mTrans) mTrans = transform;
		Rect rect = uiCamera.pixelRect;
		rect.x += UIGrowByAspectRatio.SafeRect.x; rect.y += UIGrowByAspectRatio.SafeRect.y;
		rect.width -= UIGrowByAspectRatio.SafeRect.width; rect.height -= UIGrowByAspectRatio.SafeRect.height;
		float x = rect.center.x, y = rect.center.y;
		if (side == Side.Left || side == Side.TopLeft || side == Side.BottomLeft) x = rect.xMin;
		if (side == Side.Right || side == Side.TopRight || side == Side.BottomRight) x = rect.xMax;
		if (side == Side.Top || side == Side.TopLeft || side == Side.TopRight) y = rect.yMax;
		if (side == Side.Bottom || side == Side.BottomLeft || side == Side.BottomRight) y = rect.yMin;
		x += rect.width * relativeOffset.x; y += rect.height * relativeOffset.y;
		if (uiCamera.orthographic) { x = Mathf.Round(x); y = Mathf.Round(y); if (halfPixelOffset && mIsWindows) { x -= .5f; y += .5f; } }
		mTrans.position = uiCamera.ScreenToWorldPoint(new Vector3(x, y, depthOffset));
	}
}
