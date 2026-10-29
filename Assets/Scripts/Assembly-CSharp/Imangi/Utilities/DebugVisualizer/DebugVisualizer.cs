using System.Collections.Generic;
using Imangi.Utilities.DebugVisualizer.Drawables;
using UnityEngine;

namespace Imangi.Utilities.DebugVisualizer
{
	public class DebugVisualizer : MonoBehaviour
	{
		public class Context
		{
			internal readonly List<Drawable> Drawables;

			public void Add(Drawable drawable)
			{
			}

			public void Remove(Drawable drawable)
			{
			}

			public void Clear()
			{
			}

			internal void Destroy()
			{
			}

			public WireCube WireCube(Vector3 inCenter, Vector3 inHalfExtents, Quaternion inRotation, Color inColor)
			{
				return null;
			}

			public Point Point(Vector3 inPosition, float inRadius, Color inColor)
			{
				return null;
			}

			public MultiPointLine MultiPointLine(Vector3[] inPoints, float inRadius, Color inColor)
			{
				return null;
			}

			public MultiPointLine MultiPointLine(float inRadius, Color inColor, params Vector3[] inPoints)
			{
				return null;
			}

			public Imangi.Utilities.DebugVisualizer.Drawables.Ray Ray(Vector3 inStartingPos, Vector3 inDirectionVector, Color inColor, float inSphereSize = 0.1f, float inArrowheadAngleInDegrees = 30f, float inArrowheadLength = 0.2f)
			{
				return null;
			}
		}

		private const string _LogChannel = "DebugVisualizer";

		private static DebugVisualizer _Instance;

		private readonly List<Context> _Contexts;

		public Context GlobalContext;

		public static DebugVisualizer Instance => null;

		public Context GetNewContext()
		{
			return null;
		}

		public void DestroyContext(Context inContext)
		{
		}

		private void Awake()
		{
		}

		private void OnDrawGizmos()
		{
		}
	}
}
