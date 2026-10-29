using System;
using System.Collections.Generic;
using UnityEngine;

public class MovingObject : MonoBehaviour
{
	[Serializable]
	public class MovingObjectPathNode
	{
		public float TimeStamp;

		public Vector3 Location;

		public bool Ease;

		public override string ToString()
		{
			return null;
		}
	}

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

	public List<MovingObjectPathNode> FollowingPathNodes;

	private void Start()
	{
	}

	public virtual void Update()
	{
	}

	public bool IsMoving()
	{
		return false;
	}

	public void AddFollowingPathNode(MovingObjectPathNode node)
	{
	}

	public void AddFollowingPathNode(float timeStamp, Vector3 location, bool ease)
	{
	}

	public void StartFollowingPath()
	{
	}

	public void StopFollowingPath()
	{
	}

	public void ClearFollowingPath()
	{
	}

	public void ApplyForce(Vector3 force)
	{
	}

	public void ResetForce()
	{
	}

	public void ResetSimulation()
	{
	}

	public void Simulate()
	{
	}

	public virtual void SetVisibility(bool visible)
	{
	}

	public void SetX(float x)
	{
	}

	public void SetY(float y)
	{
	}

	public void SetZ(float z)
	{
	}

	public void SetLocalX(float x)
	{
	}

	public void SetLocalY(float y)
	{
	}

	public void SetLocalZ(float z)
	{
	}

	public void SetMaxVelocityTotal(float maxVelocity)
	{
	}

	public void SetMaxVelocityX(float maxVelocity)
	{
	}

	public void SetMaxVelocityY(float maxVelocity)
	{
	}

	public void SetMaxVelocityZ(float maxVelocity)
	{
	}

	public void SetMaxVelocityUnlimited()
	{
	}

	public bool DoesSphereIntersectBoundingBox(Vector3 point, float radius)
	{
		return false;
	}

	public virtual Bounds GetWorldSpaceBounds()
	{
		return default;
	}

	public Vector2 GetPosition2D()
	{
		return default;
	}
}
