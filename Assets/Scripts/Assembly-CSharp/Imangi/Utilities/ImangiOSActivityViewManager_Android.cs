using UnityEngine;

namespace Imangi.Utilities
{
	public class ImangiOSActivityViewManager_Android : ImangiOSActivityViewManager
	{
		private AndroidJavaClass ImangiActivityViewClass;

		private const string ImangiActivityViewClassPath = "com.imangi.imangiutilities.ImangiAndroidActivityView";

		protected override void ShowActivityView_Internal(string inTitle, string inMessage, float inBackgroundAlpha, bool inAnimated, bool inUserCancelable)
		{
		}

		protected override void HideActivityView_Internal(bool inAnimated)
		{
		}
	}
}
