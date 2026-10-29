using UnityEngine;

public partial class MovingObject
{
    /// <summary>Native free-motion branch; following-path intro choreography is separate.</summary>
    public void RecoveredIntegrate(float deltaTime)
    {
        // DecompiledNative/MovingObject/MovingObject_Simulate_1308918.cpp
        if (HasForce)
        {
            Velocity += Force * deltaTime;
            Force = Vector3.zero;
            HasForce = false;
        }
        if (LimitVelocity)
        {
            if (MaxVelocityMagnitudeTotal >= 0f) Velocity = Vector3.ClampMagnitude(Velocity, MaxVelocityMagnitudeTotal);
            if (MaxVelocityMagnitudeX >= 0f) Velocity.x = Mathf.Clamp(Velocity.x, -MaxVelocityMagnitudeX, MaxVelocityMagnitudeX);
            if (MaxVelocityMagnitudeY >= 0f) Velocity.y = Mathf.Clamp(Velocity.y, -MaxVelocityMagnitudeY, MaxVelocityMagnitudeY);
            if (MaxVelocityMagnitudeZ >= 0f) Velocity.z = Mathf.Clamp(Velocity.z, -MaxVelocityMagnitudeZ, MaxVelocityMagnitudeZ);
        }
        // Original translation clamps frame displacement to 1/15 second.
        transform.Translate(Velocity * Mathf.Min(deltaTime, 1f / 15f), Space.World);
        if (AngularVelocity != 0f) transform.Rotate(RotationAxis, AngularVelocity * Mathf.Min(deltaTime, 1f / 15f), Space.World);
    }
}
