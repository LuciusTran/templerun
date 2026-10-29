using UnityEngine;

[AddComponentMenu("NGUI/Tween/Spring Position")]
public class SpringPosition : IgnoreTimeScale
{
	public Vector3 target;

	public float strength;

	public bool worldSpace;

	public bool ignoreTimeScale;

	private Transform mTrans;

	private float mThreshold;

	private void Start()
	{
	}

	private void Update()
	{
	}

	public static SpringPosition Begin(GameObject go, Vector3 pos, float strength)
	{
		return null;
	}
}
