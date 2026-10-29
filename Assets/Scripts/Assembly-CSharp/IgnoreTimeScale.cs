using UnityEngine;

[AddComponentMenu("NGUI/Internal/Ignore TimeScale Behaviour")]
public class IgnoreTimeScale : MonoBehaviour
{
	private float mTime;

	private float mActual;

	private float mDelta;

	public float realTimeDelta => 0f;

	private void OnEnable()
	{
	}

	private void Start()
	{
	}

	protected float UpdateRealTimeDelta()
	{
		return 0f;
	}
}
