using System;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace Imangi.Utilities
{
	public class ImangiOSPickerManager : MonoBehaviour
	{
		[CompilerGenerated]
		private static Action<string> m_PickerDismissedEvent;

		protected static ImangiOSPickerManager Instance;

		protected static GameObject OSPickerGameObj;

		public static bool ImangiOSPicker_VerboseLogging;

		public static event Action<string> PickerDismissedEvent
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

		public static void ImangiOSPicker_LogMessage(string inMessage, params object[] paramList)
		{
		}

		public static ImangiOSPickerManager GetInstance()
		{
			return null;
		}

		public static void ShowPicker(string[] inOptions, int inSelected, bool inCancelable = true)
		{
		}

		protected virtual void ShowPicker_Internal(string[] inOptions, int inSelected, bool inCancelable)
		{
		}

		public void DismissPicker(string inMessage)
		{
		}

		public void DismissPicker(object userData, string[] options, int selected)
		{
		}
	}
}
