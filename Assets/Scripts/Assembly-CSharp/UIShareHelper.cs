using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

public class UIShareHelper : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class _003CTakeDelayedScreenShot_003Ed__12 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UIShareHelper _003C_003E4__this;

		public string inMessageFormatStr;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CTakeDelayedScreenShot_003Ed__12(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	public static readonly string LogChannel;

	private static UIShareHelper _Instance;

	private static GameObject ShareHelperGameObj;

	private string ScreenShotFile;

	private static string lastShareMessage;

	public static UIShareHelper GetInstance()
	{
		return null;
	}

	public static void EnableIfCanSocialShare(UIButton inShareButton)
	{
	}

	public static bool CanSocialShare()
	{
		return false;
	}

	public static void OnShareButtonClicked(string inMessageFormatStr)
	{
	}

	private static void OnTryAgain(string inButtonTitle)
	{
	}

	private static void OnCancelled(string inButtonTitle)
	{
	}

	private void ScreenshotCoroutine(string inMessageFormatStr, bool inIsPostGame)
	{
	}

	[IteratorStateMachine(typeof(_003CTakeDelayedScreenShot_003Ed__12))]
	private IEnumerator TakeDelayedScreenShot(string inMessageFormatStr, bool inIsPostGame)
	{
		return null;
	}

	private static string GetPathToImage(string inImageName)
	{
		return null;
	}

	protected static void DisplayProgressDialog(string inTitle, string inMessage)
	{
	}

	protected static void HideProgressDialog()
	{
	}

	protected static void RegisterShareHandlers()
	{
	}

	protected static void UnregisterShareHandlers()
	{
	}

	protected static void OnShareCancelled(string inMessage)
	{
	}

	protected static void OnShareFailed(string inMessage)
	{
	}

	protected static void OnShareSucceeded(string inMessage)
	{
	}
}
