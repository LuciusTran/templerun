using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Imangi.Utilities.DebugVisualizer.Drawables
{
	public class MultiPointLine : Drawable, IEnumerable<Point>, IEnumerable
	{
		protected Point[] Points;

		public Point this[int i] => null;

		public int Length => 0;

		public MultiPointLine(Vector3[] inPoints, float inPointRadius, Color inColor)
			: base(default)
		{
		}

		public MultiPointLine(float inPointRadius, Color inColor, params Vector3[] inPoints)
			: base(default)
		{
		}

		public IEnumerator<Point> GetEnumerator()
		{
			return null;
		}

		IEnumerator IEnumerable.GetEnumerator()
		{
			return null;
		}

		public override void OnDrawGizmos()
		{
		}

		internal override void Destroy()
		{
		}
	}
}
