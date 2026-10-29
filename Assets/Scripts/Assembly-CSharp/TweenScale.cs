using UnityEngine;

[AddComponentMenu("NGUI/Tween/Scale")]
public class TweenScale : UITweener
{
	public Vector3 from;

	public Vector3 to;

	public bool updateTable;

	private Transform mTrans;

	private UITable mTable;

	public Transform cachedTransform => null;

	public Vector3 scale
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	protected override void OnUpdate(float factor)
	{
	}

	public static TweenScale Begin(GameObject go, float duration, Vector3 scale)
	{
		return null;
	}
}
