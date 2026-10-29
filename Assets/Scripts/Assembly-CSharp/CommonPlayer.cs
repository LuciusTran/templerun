using UnityEngine;

public partial class CommonPlayer : MovingObject
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
        // Native evidence: DecompiledNative/CommonPlayer/CommonPlayer_TravelingDirection_12bf6d0.cpp
        int angle = (int)transform.localEulerAngles.y; return (PathElement.PathDirection)(angle < 5 ? 1 : angle < 95 ? 2 : angle <= 184 ? 3 : 4);
	}

	public void Teleport(Vector3 pos)
	{
        // Native evidence: DecompiledNative/CommonPlayer/CommonPlayer_Teleport_12bf738.cpp
        transform.position = pos; PreviousLocation = pos;
	}

	public virtual void Reset()
	{
	}
}
