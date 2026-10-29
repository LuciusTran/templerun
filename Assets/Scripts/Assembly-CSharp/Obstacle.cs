using UnityEngine;

public class Obstacle : MonoBehaviour
{
	public bool MustJumpOver;

	public bool MustSlideUnder;

	public bool DoesKill;

	public bool DoesLineSegementIntersect(Vector2 p1, Vector2 p2)
	{
        // Native evidence: DecompiledNative/Obstacle/Obstacle_DoesLineSegementIntersect_1309c0c.cpp
        Region2D region = GetComponent<Region2D>(); return region && region.DoesLineSegementIntersect(p1, p2);
	}

	public bool IsPointInRegion(Vector2 p)
	{
        // Native evidence: DecompiledNative/Obstacle/Obstacle_IsPointInRegion_1309cf4.cpp
        Region2D region = GetComponent<Region2D>(); return region && region.IsPointInside(p);
	}
}
