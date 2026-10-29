using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

public class MessageBoard : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class _003CAnimateMessageBoard_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public MessageBoard _003C_003E4__this;

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
		public _003CAnimateMessageBoard_003Ed__18(int _003C_003E1__state)
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

	public UILabel Label;

	public UILabel gcLabel;

	public UISprite LabelTail;

	public int MessageBoardLastDistance;

	private Vector3 UpPosition;

	private Vector3 DownPosition;

	public static MessageBoard Instance;

	private float _LabelTailDiff;

	private float _TailY;

	private bool isDistIndicationInProgress;

	private float gcLastValue;

	private float gcValue;

	private int gcRewardsGiven;

	private void Start()
	{
	}

	private void Update()
	{
	}

	private void CheckForGCMilestoneComplete()
	{
	}

	private void AnchorM()
	{
	}

	public void ShowMessageboard(string message)
	{
	}

	[IteratorStateMachine(typeof(_003CAnimateMessageBoard_003Ed__18))]
	public IEnumerator AnimateMessageBoard()
	{
		return null;
	}

	public void OnEnable()
	{
	}
}
