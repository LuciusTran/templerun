using System.Collections.Generic;
using UnityEngine;

public class Region2D : MonoBehaviour
{
	public List<Vector2> Points;

	public Transform TestPoint;

	public float Height;

	public Vector3 testProjectedPoint;

	public bool testIsIn;

	public void AddPoint(float x, float y)
	{
	}

	public void AddPoint(Vector2 p)
	{
	}

	public void Clear()
	{
	}

	private void DrawLine(Vector2 lastPoint, Vector2 nextPoint)
	{
	}

	private void OnDrawGizmos()
	{
	}

	public bool IsPointInside(Vector3 point)
	{
		return false;
	}

	public bool IsPointInside(Vector2 worldPoint)
	{
		return false;
	}

	public bool DoesLineSegementIntersect(Vector2 p1, Vector2 p2)
	{
		return false;
	}
}
