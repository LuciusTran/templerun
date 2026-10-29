using UnityEngine;

namespace Imangi.Utilities
{
	public class ImangiOSAlertManager_Android : ImangiOSAlertManager
	{
		private AndroidJavaClass ImangiAlertDialogClass;

		private const string ImangiAlertDialogClassPath = "com.imangi.imangiutilities.ImangiAndroidAlert";

		protected override void ShowAlert_Internal(string inTitle, string inMessage, string[] inButtons, bool inCancelable)
		{
		}
	}
}
