using UnityEngine;

[AddComponentMenu("NGUI/UI/Stretch")]
[ExecuteInEditMode]
public class UIStretch : MonoBehaviour
{
	public enum Style
	{
		None = 0,
		Horizontal = 1,
		Vertical = 2,
		Both = 3,
		BasedOnHeight = 4
	}

	public Camera uiCamera;

	public Style style;

	public Vector2 relativeSize;

	private Transform mTrans;

	private UIRoot mRoot;

	private void OnEnable()
	{
	}

	private void Update()
	{
	}
}
