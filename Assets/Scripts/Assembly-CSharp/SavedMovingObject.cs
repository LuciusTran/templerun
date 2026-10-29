using System;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class SavedMovingObject
{
	public Vector3 Position;

	public Quaternion Rotation;

	public Vector3 Scale;

	public float Mass;

	public bool HasForce;

	public Vector3 Force;

	public Vector3 Velocity;

	public Vector3 RotationAxis;

	public float AngularVelocity;

	public bool LimitVelocity;

	public float MaxVelocityMagnitudeTotal;

	public float MaxVelocityMagnitudeX;

	public float MaxVelocityMagnitudeY;

	public float MaxVelocityMagnitudeZ;

	public bool IsFollowingPath;

	public float TimeSinceFollowingPathStart;

	public List<MovingObject.MovingObjectPathNode> FollowingPathNodes;

	public SavedMovingObject()
	{
	}

	public SavedMovingObject(MovingObject o)
	{
	}

	public void Apply(MovingObject o)
	{
	}
}
