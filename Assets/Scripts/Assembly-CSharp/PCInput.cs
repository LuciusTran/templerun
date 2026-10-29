public class PCInput : GameInput
{
	public float SimulatedTiltAmount;

	public float SimulatedTiltRecovery;

	public float SimulatedTileSpeed;

	public bool JoystickMode;

	public int joystickPosition;

	public bool BypassInput;

	public static PCInput Instance;

	public float LastSimulatedTiltAmount;

	public float Force;

	private void Start()
	{
	}

	public void SensitivityChanged()
	{
	}

	public override void Update()
	{
	}

	private void SimulateTilt()
	{
	}

	public override float GetAccelerometerForceX()
	{
		return 0f;
	}
}
