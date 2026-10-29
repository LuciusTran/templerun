using UnityEngine;

namespace Imangi.Utilities
{
	public class ImangiOSPickerManager_Android : ImangiOSPickerManager
	{
		private AndroidJavaClass ImangiPickerDialogClass;

		private const string ImangiPickerDialogClassPath = "com.imangi.imangiutilities.ImangiListView";

		protected override void ShowPicker_Internal(string[] inOptions, int inSelected, bool inCancelable)
		{
		}
	}
}
