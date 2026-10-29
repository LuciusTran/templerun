using UnityEngine;

public class CommonPlayer : MovingObject
{
	public PathElement.PathDirection Facing;

	public Vector3 PreviousLocation;

	private void Start()
	{
	}

	public override void Update()
	{
	}

	public PathElement.PathDirection TravelingDirection()
	{
		return PathElement.PathDirection.kPathDirectionNone;
	}

	public void Teleport(Vector3 pos)
	{
	}

	public virtual void Reset()
	{
	}
}
