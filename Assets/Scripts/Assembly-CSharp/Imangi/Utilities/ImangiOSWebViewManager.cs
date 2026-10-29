using System;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace Imangi.Utilities
{
	public class ImangiOSWebViewManager : MonoBehaviour
	{
		[CompilerGenerated]
		private static Action m_WebViewClosedEvent;

		protected static ImangiOSWebViewManager Instance;

		protected static GameObject OSWebViewGameObj;

		public static bool ImangiOSWebView_VerboseLogging;

		public static event Action WebViewClosedEvent
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public static void ImangiOSWebView_LogMessage(string inMessage, params object[] paramList)
		{
		}

		public static ImangiOSWebViewManager GetInstance()
		{
			return null;
		}

		public static void ShowWebPage(string inURL, bool inShowControls)
		{
		}

		protected virtual void ShowWebPage_Internal(string inURL, bool inShowControls)
		{
		}

		public void OnWebViewClosed(string inMessage)
		{
		}
	}
}
