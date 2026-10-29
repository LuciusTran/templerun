using UnityEngine;

namespace Imangi.Utilities
{
	public class ImangiLocaleManager_Android : ImangiLocaleManager
	{
		private AndroidJavaClass ImangiLocaleClass;

		protected override ImangiLocaleInfo GetCurrentLocale_Internal(bool inRefresh)
		{
			return null;
		}
	}
}
