using UnityEngine;

namespace Imangi.Utilities
{
	public class ImangiPermissionsHandler : MonoBehaviour
	{
		public static readonly string LogChannel;

		protected static ImangiPermissionsHandler Instance;

		protected static GameObject GameObj;

		public static ImangiPermissionsHandler GetInstance()
		{
			return null;
		}

		public static void RequestPermissions()
		{
		}

		protected virtual void RequestPermissions_Internal()
		{
		}
	}
}
