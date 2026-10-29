using System;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace Imangi.Utilities
{
	public class ImangiOSAlertManager : MonoBehaviour
	{
		[CompilerGenerated]
		private static Action<int, string> m_AlertButtonPressedEvent;

		[CompilerGenerated]
		private static Action<string> m_AlertButton0PressedEvent;

		[CompilerGenerated]
		private static Action<string> m_AlertButton1PressedEvent;

		[CompilerGenerated]
		private static Action<string> m_AlertButton2PressedEvent;

		protected static ImangiOSAlertManager Instance;

		protected static GameObject OSAlertGameObj;

		public static bool ImangiOSAlert_VerboseLogging;

		public static event Action<int, string> AlertButtonPressedEvent
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

		public static event Action<string> AlertButton0PressedEvent
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

		public static event Action<string> AlertButton1PressedEvent
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

		public static event Action<string> AlertButton2PressedEvent
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

		public static void ImangiOSAlert_LogMessage(string inMessage, params object[] paramList)
		{
		}

		public static ImangiOSAlertManager GetInstance()
		{
			return null;
		}

		public static void ShowAlert(string inTitle, string inMessage, string[] inButtons, bool inCancelable = true)
		{
		}

		protected virtual void ShowAlert_Internal(string inTitle, string inMessage, string[] inButtons, bool inCancelable)
		{
		}

		public void DismissAlert(string inMessage)
		{
		}
	}
}
