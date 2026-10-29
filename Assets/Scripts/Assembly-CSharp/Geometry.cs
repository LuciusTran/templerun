using UnityEngine;

public static class Geometry
{
	public static Intersection IntersectionOf(Line line, Polygon polygon)
	{
		return Intersection.None;
	}

	public static Intersection IntersectionOf(Vector2 point, Polygon polygon)
	{
		return Intersection.None;
	}

	public static Intersection IntersectionOf(Vector2 point, Line line)
	{
		return Intersection.None;
	}

	public static Intersection IntersectionOf(Line line1, Line line2)
	{
		return Intersection.None;
	}
}
