using UnityEngine;

namespace Imangi.Utilities
{
	public class ImangiOSSafeAreaManager : MonoBehaviour
	{
		protected static ImangiOSSafeAreaManager Instance;

		protected static GameObject OSSafeAreaGameObj;

		public static bool ImangiOSSafeArea_VerboseLogging;

		public static void ImangiOSSafeArea_LogMessage(string inMessage, params object[] paramList)
		{
		}

		public static ImangiOSSafeAreaManager GetInstance()
		{
			return null;
		}

		public static string RetrieveBounds()
		{
			return null;
		}

		protected virtual string RetrieveBounds_Internal()
		{
			return null;
		}
	}
}
