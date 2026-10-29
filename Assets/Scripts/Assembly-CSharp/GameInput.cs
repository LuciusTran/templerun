using UnityEngine;

public class GameInput : MonoBehaviour
{
	public bool JustTurned;

	public bool ShouldTurnLeft;

	public bool ShouldTurnRight;

	public float TimeSinceShouldTurn;

	public float TimeSinceLastTurn;

	public bool ShouldJump;

	public float TimeSinceShouldJump;

	public bool ShouldSlide;

	public float TimeSinceShouldSlide;

	public GameController GameController;

	public CharacterPlayer GamePlayer;

	public GameCamera MainCamera;

	private void Start()
	{
	}

	public virtual void Update()
	{
	}

	private void HandleAccelerometerForce()
	{
	}

	public virtual float GetAccelerometerForceX()
	{
		return 0f;
	}

	public void Reset()
	{
	}
}
