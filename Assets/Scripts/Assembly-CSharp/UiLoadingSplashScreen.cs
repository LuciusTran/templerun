using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

public class UiLoadingSplashScreen : BasePanel
{
	[CompilerGenerated]
	private sealed class _003CCloseLoadingScreen_003Ed__16 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UiLoadingSplashScreen _003C_003E4__this;

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
		public _003CCloseLoadingScreen_003Ed__16(int _003C_003E1__state)
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

	public GameObject SlideInOffset;

	public GameObject Header;

	public GameObject LoadingBarRoot;

	public UIFilledSprite LoadingBarSprite;

	public const float SlideInTime = 0.5f;

	private bool _FirstSlide;

	private int _ElementCount;

	private int _ElementIdx;

	private float _ElementRatio;

	private bool _DestroyWhenComplete;

	public override void SlideIn(BasePanel returnTo)
	{
	}

	public void DontDestroyWhenComplete()
	{
	}

	public void SetLoadingCount(int inCount)
	{
	}

	public void OnLoadingStarted()
	{
	}

	public void OnLoadingProgress(float inProgress)
	{
	}

	public void OnLoadingEnded()
	{
	}

	[IteratorStateMachine(typeof(_003CCloseLoadingScreen_003Ed__16))]
	private IEnumerator CloseLoadingScreen()
	{
		return null;
	}
}
