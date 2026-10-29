using UnityEngine;

[AddComponentMenu("NGUI/Tween/Position")]
public class TweenPosition : UITweener
{
	public Vector3 from;

	public Vector3 to;

	private Transform mTrans;

	public Transform cachedTransform => null;

	public Vector3 position
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

	public static TweenPosition Begin(GameObject go, float duration, Vector3 pos)
	{
		return null;
	}
}
