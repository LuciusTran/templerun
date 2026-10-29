using UnityEngine;

[AddComponentMenu("NGUI/Tween/Transform")]
public class TweenTransform : UITweener
{
	public Transform from;

	public Transform to;

	private Transform mTrans;

	protected override void OnUpdate(float factor)
	{
	}

	public static TweenTransform Begin(GameObject go, float duration, Transform from, Transform to)
	{
		return null;
	}
}
