using UnityEngine;

namespace Imangi.Utilities.DebugVisualizer.Drawables
{
	public class Ray : Drawable
	{
		public UnityEngine.Ray RayData;

		public Point OriginPoint;

		public float ArrowheadAngleInDegrees;

		public float ArrowheadLength;

		public Ray(Vector3 inStartingPos, Vector3 inDirectionVector, Color inColor, float inSphereSize = 0.1f, float inArrowheadLength = 0.2f, float inArrowheadAngleInDegrees = 30f)
			: base(default)
		{
		}

		public override void OnDrawGizmos()
		{
		}

		internal override void Destroy()
		{
		}
	}
}
