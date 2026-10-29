using UnityEngine;

namespace Imangi.Utilities
{
	public class ImangiToastManager : MonoBehaviour
	{
		public const string LogChannel = "Toast";

		protected static ImangiToastManager _Instance;

		protected static GameObject _ToastGameObj;

		public static ImangiToastManager Instance => null;

		public static void ShowToast(string inMessage, bool inLong)
		{
		}

		protected virtual void ShowToast_Internal(string inMessage, bool inLong)
		{
		}
	}
}
