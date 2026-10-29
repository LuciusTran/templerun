using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

public class UIUtilities
{
	[CompilerGenerated]
	private sealed class _003CDestroyAfterTime_003Ed__2 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public float inTime;

		public GameObject inToDestroy;

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
		public _003CDestroyAfterTime_003Ed__2(int _003C_003E1__state)
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

	[CompilerGenerated]
	private sealed class _003CInternal_AnimateNumericLabel_003Ed__4 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public int inEnd;

		public int inStart;

		public UILabel inLabel;

		public float inTime;

		private float _003Cdiff_003E5__2;

		private float _003Ctimer_003E5__3;

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
		public _003CInternal_AnimateNumericLabel_003Ed__4(int _003C_003E1__state)
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

	private const string _LogChannel = "UI Utilities";

	public static GameObject VibrateWidget(UIWidget inWidget, float inPixelGrow, float inTime = 1f)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CDestroyAfterTime_003Ed__2))]
	private static IEnumerator DestroyAfterTime(GameObject inToDestroy, float inTime)
	{
		return null;
	}

	public static void AnimateNumericLabel(UILabel inLabel, int inStart, int inEnd, float inTime = 0.4f)
	{
	}

	[IteratorStateMachine(typeof(_003CInternal_AnimateNumericLabel_003Ed__4))]
	private static IEnumerator Internal_AnimateNumericLabel(UILabel inLabel, int inStart, int inEnd, float inTime)
	{
		return null;
	}

	public static BasePanel ShowScreen(GameObject inRoot, GameObject inPrefab)
	{
		return null;
	}
}
