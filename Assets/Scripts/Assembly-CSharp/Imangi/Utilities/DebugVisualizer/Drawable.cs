using UnityEngine;

namespace Imangi.Utilities.DebugVisualizer
{
	public abstract class Drawable
	{
		public Color Color;

		public Drawable(Color inColor)
		{
		}

		public virtual void OnDrawGizmos()
		{
		}

		internal virtual void Destroy()
		{
		}
	}
}
