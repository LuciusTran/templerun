using System;
using UnityEngine;

[Serializable]
public class SavedGameCamera : SavedMovingObject
{
	public float GroundHeight;

	public float FollowHeight;

	public float FollowDistance;

	public float FocusHeight;

	public bool NeedsToDuckCamera;

	public Vector3 TargetCameraLocation;

	public SavedMovingObject CameraFocus;

	public SavedGameCamera()
	{
	}

	public SavedGameCamera(GameCamera c)
	{
	}

	public void Apply(GameCamera c)
	{
	}
}
