using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public struct Polygon : IEnumerable<Vector2>, IEnumerable
{
	private Vector2[] points;

	public Vector2[] Points
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public int Length => 0;

	public Vector2 this[int index]
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	public Polygon(Vector2[] points)
	{
		this.points = null;
	}

	public static implicit operator Vector2[](Polygon polygon)
	{
		return null;
	}

	public static implicit operator Polygon(Vector2[] points)
	{
		return default;
	}

	IEnumerator<Vector2> IEnumerable<Vector2>.GetEnumerator()
	{
		return null;
	}

	public IEnumerator GetEnumerator()
	{
		return null;
	}
}
