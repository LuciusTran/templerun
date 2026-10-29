using UnityEngine;

public class AdjustCameraFOV : MonoBehaviour
{
	public Camera mainCamera;

	public float defaultFOV;

	public float fovMultiplier;

	private void Start()
	{
		// Native-derived resolution branches; constant verified against ELF; see Evidence/ui-csharp-restoration.json.
		if (!mainCamera) return;
		float ratio = Screen.height / (float)Screen.width;
		if (ratio > 2f) mainCamera.fieldOfView = 120f;
		else if (ratio > 1.9f) mainCamera.fieldOfView = 115f;
		else if (ratio > 1.5f && ratio < 1.9f) mainCamera.fieldOfView = 110f;
	}

	private void AdjustFOVBasedOnResolution()
	{
	}
}
