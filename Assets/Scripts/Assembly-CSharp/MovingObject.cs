using System;
using System.Collections.Generic;
using UnityEngine;

public partial class MovingObject : MonoBehaviour
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
        // Native evidence: DecompiledNative/MovingObject/MovingObject_IsMoving_1308f04.cpp
        return Velocity.sqrMagnitude > 0f || AngularVelocity != 0f;
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
        // Native evidence: DecompiledNative/MovingObject/MovingObject_ApplyForce_13091b0.cpp
        Force += force; HasForce = true;
	}

	public void ResetForce()
	{
        // Native evidence: DecompiledNative/MovingObject/MovingObject_ResetForce_13091d8.cpp
        Force = Vector3.zero; HasForce = false;
	}

	public void ResetSimulation()
	{
        // Native evidence: DecompiledNative/MovingObject/MovingObject_ResetSimulation_13091e8.cpp
        Velocity = Vector3.zero; AngularVelocity = 0f; ResetForce();
	}

	public void Simulate()
	{
        // Native evidence: DecompiledNative/MovingObject/MovingObject_Simulate_1308918.cpp
        RecoveredIntegrate(Time.smoothDeltaTime);
	}

	public virtual void SetVisibility(bool visible)
	{
	}

	public void SetX(float x)
	{
        // Native evidence: DecompiledNative/MovingObject/MovingObject_SetX_1309320.cpp
        Vector3 p = transform.position; p.x = x; transform.position = p;
	}

	public void SetY(float y)
	{
        // Native evidence: DecompiledNative/MovingObject/MovingObject_SetY_130939c.cpp
        Vector3 p = transform.position; p.y = y; transform.position = p;
	}

	public void SetZ(float z)
	{
        // Native evidence: DecompiledNative/MovingObject/MovingObject_SetZ_1309418.cpp
        Vector3 p = transform.position; p.z = z; transform.position = p;
	}

	public void SetLocalX(float x)
	{
        // Native evidence: DecompiledNative/MovingObject/MovingObject_SetLocalX_1309494.cpp
        Vector3 p = transform.localPosition; p.x = x; transform.localPosition = p;
	}

	public void SetLocalY(float y)
	{
        // Native evidence: DecompiledNative/MovingObject/MovingObject_SetLocalY_1309510.cpp
        Vector3 p = transform.localPosition; p.y = y; transform.localPosition = p;
	}

	public void SetLocalZ(float z)
	{
        // Native evidence: DecompiledNative/MovingObject/MovingObject_SetLocalZ_130958c.cpp
        Vector3 p = transform.localPosition; p.z = z; transform.localPosition = p;
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
        // Native evidence: DecompiledNative/MovingObject/MovingObject_DoesSphereIntersectBoundingBox_1309658.cpp
        return GetWorldSpaceBounds().SqrDistance(point) <= radius * radius;
	}

	public virtual Bounds GetWorldSpaceBounds()
	{
		return default;
	}

	public Vector2 GetPosition2D()
	{
        // Native evidence: DecompiledNative/MovingObject/MovingObject_GetPosition2D_1309760.cpp
        return new Vector2(transform.position.x, transform.position.z);
	}
}
