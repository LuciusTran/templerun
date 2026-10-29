using UnityEngine;

namespace Imangi.Utilities.DebugVisualizer.Drawables
{
	public class WireCube : Drawable
	{
		public Vector3 Center;

		public Vector3 HalfExtents;

		public Quaternion Rotation;

		public WireCube(Vector3 inCenter, Vector3 inHalfExtents, Quaternion inRotation, Color inColor)
			: base(default)
		{
		}

		public override void OnDrawGizmos()
		{
		}
	}
}
