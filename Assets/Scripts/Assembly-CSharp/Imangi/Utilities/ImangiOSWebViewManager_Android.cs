using UnityEngine;

namespace Imangi.Utilities
{
	public class ImangiOSWebViewManager_Android : ImangiOSWebViewManager
	{
		private AndroidJavaClass ImangiWebViewClass;

		private const string ImangiWebViewClassPath = "com.imangi.imangiutilities.ImangiAndroidWebView";

		protected override void ShowWebPage_Internal(string inURL, bool inShowControls)
		{
		}
	}
}
