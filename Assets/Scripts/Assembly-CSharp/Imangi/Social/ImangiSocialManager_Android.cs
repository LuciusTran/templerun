using System.Collections.Generic;
using UnityEngine;

namespace Imangi.Social
{
	public class ImangiSocialManager_Android : ImangiSocialManager
	{
		private AndroidJavaClass ImangiSocialClass;

		private static AndroidJavaObject ImangiSocialInstance;

		private AndroidJavaObject GetUnityActivity()
		{
			return null;
		}

		protected override bool IsSocialSharingSupported_Internal()
		{
			return false;
		}

		protected override void ShareStatus_Internal(string inStatusText, string inStatusURL)
		{
		}

		protected override void ShareStatusWithImage_Internal(string inStatusText, string inStatusURL, string inImagePath)
		{
		}

		protected override void SendEmail_Internal(string inSendTo, string inSubject, string inBody, List<string> inAttachments = null)
		{
		}
	}
}
