using UnityEngine;

[AddComponentMenu("NGUI/Tween/Rotation")]
public class TweenRotation : UITweener
{
	public Vector3 from;

	public Vector3 to;

	private Transform mTrans;

	public Transform cachedTransform => null;

	public Quaternion rotation
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

	public static TweenRotation Begin(GameObject go, float duration, Quaternion rot)
	{
		return null;
	}
}
