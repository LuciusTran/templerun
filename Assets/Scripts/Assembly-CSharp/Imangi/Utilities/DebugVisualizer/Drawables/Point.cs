using UnityEngine;

namespace Imangi.Utilities.DebugVisualizer.Drawables
{
	public class Point : Drawable
	{
		public Vector3 Position;

		public float Radius;

		public Point(Vector3 inPosition, float inRadius, Color inColor)
			: base(default)
		{
		}

		public override void OnDrawGizmos()
		{
		}
	}
}
