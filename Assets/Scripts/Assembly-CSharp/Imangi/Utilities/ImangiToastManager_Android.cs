using UnityEngine;

namespace Imangi.Utilities
{
	public class ImangiToastManager_Android : ImangiToastManager
	{
		private AndroidJavaClass ImangiToastClass;

		protected override void ShowToast_Internal(string inMessage, bool inLong)
		{
		}
	}
}
