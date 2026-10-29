using UnityEngine;

public class GameCamera : MovingObject
{
	public MovingObject MainCameraFocusPoint;

	public CommonPlayer Player;

	private CharacterPlayer GamePlayer;

	public Transform Water;

	public float GroundHeight;

	public float FollowHeight;

	public float FollowDistance;

	public float FocusHeight;

	public float FollowHeightRun;

	public float FollowHeightJump;

	public float FollowHeightSlide;

	public float FollowDistanceRun;

	public float FollowDistanceJump;

	public float FollowDistanceSlide;

	public float FocusHeightRun;

	public float FocusHeightJump;

	public float FocusHeightSlide;

	public bool NeedsToDuckCamera;

	public float IntroDuration;

	public Vector3 StartLocation;

	public Vector3 EndLocation;

	public Vector3 TargetCameraLocation;

	public bool IsCameraShaking;

	public bool ShakeAfterDelay;

	public float ShakeDelay;

	public float ShakeMagnitudeAfterDelay;

	public float ShakeDurationAfterDelay;

	public float ShakeFrequencyMultiplierAfterDelay;

	public float TimeSinceCameraShakeStart;

	public float CameraShakeDamperRate;

	public float CameraShakeMagnitude;

	public float CameraShakeDuration;

	public float CameraShakeFrequencyMultiplier;

	public static GameCamera SharedInstance;

	public MainMenu MainMenuGUI;

	private bool ShowMainMenuAfterFollow;

	public bool SnapCamera;

	private void Awake()
	{
	}

	private void Start()
	{
	}

	public override void Update()
	{
	}

	private void UpdateWater()
	{
	}

	private void OnDrawGizmosSelected()
	{
	}

	public void Reset()
	{
	}

	public void SnapStartGame()
	{
	}

	public void SetMainMenuAniatmion(bool SnapToEnd = false)
	{
	}

	public void Shake(float magnitude, float duration, float freqMult, float delay = 0f)
	{
	}
}
