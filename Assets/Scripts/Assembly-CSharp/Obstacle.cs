using UnityEngine;

public class Obstacle : MonoBehaviour
{
	public bool MustJumpOver;

	public bool MustSlideUnder;

	public bool DoesKill;

	public bool DoesLineSegementIntersect(Vector2 p1, Vector2 p2)
	{
		return false;
	}

	public bool IsPointInRegion(Vector2 p)
	{
		return false;
	}
}
