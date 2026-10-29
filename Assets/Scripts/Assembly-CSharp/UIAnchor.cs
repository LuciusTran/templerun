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
	}

	private void OnEnable()
	{
	}

	public void AnchorItem()
	{
	}
}
