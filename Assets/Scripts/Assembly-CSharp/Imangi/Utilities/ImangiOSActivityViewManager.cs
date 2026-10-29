using UnityEngine;

namespace Imangi.Utilities
{
	public class ImangiOSActivityViewManager : MonoBehaviour
	{
		protected static ImangiOSActivityViewManager Instance;

		protected static GameObject OSActivityViewGameObj;

		public static bool ImangiOSActivityView_VerboseLogging;

		public static float OSActivityViewDefaultBackgroundAlpha;

		public static void ImangiOSActivityView_LogMessage(string inMessage, params object[] paramList)
		{
		}

		public static ImangiOSActivityViewManager GetInstance()
		{
			return null;
		}

		public static void ShowActivityView(string inTitle, string inMessage, bool inAnimated, bool inUserCancelable)
		{
		}

		public static void ShowActivityViewWithAlpha(string inTitle, string inMessage, float inBackgroundAlpha, bool inAnimated, bool inUserCancelable)
		{
		}

		public static void HideActivityView(bool inAnimated)
		{
		}

		protected virtual void ShowActivityView_Internal(string inTitle, string inMessage, float inBackgroundAlpha, bool inAnimated, bool inUserCancelable)
		{
		}

		protected virtual void HideActivityView_Internal(bool inAnimated)
		{
		}
	}
}
