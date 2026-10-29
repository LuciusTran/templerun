public class Enemy : MovingObject
{
	public bool IsFalling;

	public bool IsJumping;

	public bool JumpAfterDelay;

	public float JumpDelay;

	public float JumpVelocity;

	public bool IsOverGround;

	public float GroundHeight;

	public bool _bIsSelected;

	private void Start()
	{
	}

	public void Run()
	{
	}

	public void Jump(float delay = 0f)
	{
	}

	public override void Update()
	{
	}

	public void Reset()
	{
	}

	private void OnDrawGizmos()
	{
	}

	private void OnDrawGizmosSelected()
	{
	}
}
