using UnityEngine;

public class PsuedoRunner : CommonPlayer
{
	public PathElement OnPath;

	public PathElement.PathDirection Direction;

	public float NodeToNodeTime;

	private float TimeSinceLastNode;

	private float DesiredCameraY;

	private PathElement NextPath;

	public float CalculatedVelocity;

	public Vector3 CalculatedVelocityVector;

	public MovingObject CameraFocus;

	private void Start()
	{
	}

	public override void Update()
	{
	}

	private void SnapToFirstPathElemeent()
	{
	}

	private PathElement PicknNextPathElement()
	{
		return null;
	}

	private void TurnCameraToFaceDirection(PathElement.PathDirection direction)
	{
	}
}
