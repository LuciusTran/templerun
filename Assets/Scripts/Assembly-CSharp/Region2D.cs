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
        // Native evidence: DecompiledNative/Region2D/Region2D_IsPointInside_131eb60.cpp
        return IsPointInside(new Vector2(point.x, point.z));
	}

	public bool IsPointInside(Vector2 worldPoint)
	{
        // Native evidence: DecompiledNative/Region2D/Region2D_IsPointInside_131eb68.cpp
        if (Points == null || Points.Count < 3) return false;
        Vector3 local = transform.InverseTransformPoint(new Vector3(worldPoint.x, 0f, worldPoint.y));
        Vector2 p = new Vector2(local.x, local.z);
        bool inside = false;
        for (int i = 0, j = Points.Count - 1; i < Points.Count; j = i++)
        {
            Vector2 a = Points[i], b = Points[j];
            if (((a.y < p.y && p.y <= b.y) || (b.y < p.y && p.y <= a.y)) &&
                (a.x <= p.x || b.x < p.x) && a.x + (b.x - a.x) * (p.y - a.y) / (b.y - a.y) < p.x) inside = !inside;
        }
        return inside;
	}

	public bool DoesLineSegementIntersect(Vector2 p1, Vector2 p2)
	{
        // Native evidence: DecompiledNative/Region2D/Region2D_DoesLineSegementIntersect_131ed58.cpp
        if (Points == null || Points.Count < 3) return false;
        if (IsPointInside(p1) || IsPointInside(p2)) return true;
        Vector3 a3 = transform.InverseTransformPoint(new Vector3(p1.x, 0f, p1.y));
        Vector3 b3 = transform.InverseTransformPoint(new Vector3(p2.x, 0f, p2.y));
        Vector2 a = new Vector2(a3.x, a3.z), b = new Vector2(b3.x, b3.z);
        for (int i = 0, j = Points.Count - 1; i < Points.Count; j = i++)
        {
            Vector2 c = Points[j], d = Points[i], r = b - a, s = d - c;
            float denominator = r.x * s.y - r.y * s.x;
            if (Mathf.Abs(denominator) < .000001f) continue;
            Vector2 q = c - a;
            float t = (q.x * s.y - q.y * s.x) / denominator;
            float u = (q.x * r.y - q.y * r.x) / denominator;
            if (t >= 0f && t <= 1f && u >= 0f && u <= 1f) return true;
        }
        return false;
	}
}
