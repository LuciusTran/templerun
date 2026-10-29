using UnityEngine;

public class TouchInput : GameInput
{
	public UISlider SensitivitySlider;

	private float _Sensitivity;

	public static TouchInput Instance;

	private bool IsSwiping;

	private Vector2 LastSwipePoint;

	private int tapCount;

	private float doubleTapTimeout;

	private float ignoreTapTimeout;

	public float AccelerometerUpdateInterval;

	public float LowPassKernelWidthInSeconds;

	private Vector3 LowPassValue;

	public float Sensitivity
	{
		get
		{
			return 0f;
		}
		set
		{
		}
	}

	private void Start()
	{
	}

	private void Awake()
	{
	}

	public void OnSensitivitySlider(float v)
	{
	}

	private void DoubleTap()
	{
	}

	public override void Update()
	{
	}

	public void TouchEnded(Vector2 touchPoint)
	{
	}

	public void TouchBegan(Vector2 touchPoint)
	{
	}

	public void TouchMoved(Vector2 touchPoint)
	{
	}

	public override float GetAccelerometerForceX()
	{
		return 0f;
	}
}
