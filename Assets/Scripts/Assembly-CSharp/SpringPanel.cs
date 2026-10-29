using UnityEngine;

[AddComponentMenu("NGUI/Internal/Spring Panel")]
[RequireComponent(typeof(UIPanel))]
public class SpringPanel : IgnoreTimeScale
{
	public Vector3 target;

	public float strength;

	private UIPanel mPanel;

	private Transform mTrans;

	private float mThreshold;

	private UIDraggablePanel mDrag;

	private void Start()
	{
	}

	private void Update()
	{
	}

	public static SpringPanel Begin(GameObject go, Vector3 pos, float strength)
	{
		return null;
	}
}
