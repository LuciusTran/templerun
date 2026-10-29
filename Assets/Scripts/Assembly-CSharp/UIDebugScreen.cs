using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using UnityEngine;

public class UIDebugScreen : BasePanel
{
	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	private struct _003CGetTokenAsync_003Ed__11 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		private Task<string> _003Ctask_003E5__2;

		private TaskAwaiter<string> _003C_003Eu__1;

		private void MoveNext()
		{
		}

		void IAsyncStateMachine.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			this.MoveNext();
		}

		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}

		void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
		{
			//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
			this.SetStateMachine(stateMachine);
		}
	}

	[CompilerGenerated]
	private sealed class _003CSlideInAnimation_003Ed__13 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UIDebugScreen _003C_003E4__this;

		private Vector3 _003Cra_003E5__2;

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
		public _003CSlideInAnimation_003Ed__13(int _003C_003E1__state)
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

	public GameObject CloseButton;

	public GameObject Header;

	public UIPanel ScrollViewPanel;

	public Transform ScrollContent;

	public GameObject DebugButtonPrefab;

	public GameObject DebugAdNetworkGroupPrefab;

	public GameObject DeathCaptionsPrefab;

	private bool _FirstSlide;

	private void Awake()
	{
	}

	private void Setup()
	{
	}

	[AsyncStateMachine(typeof(_003CGetTokenAsync_003Ed__11))]
	private void GetTokenAsync()
	{
	}

	public override void SlideIn(BasePanel returnTo)
	{
	}

	[IteratorStateMachine(typeof(_003CSlideInAnimation_003Ed__13))]
	private IEnumerator SlideInAnimation()
	{
		return null;
	}

	public void OnCloseTapped()
	{
	}

	private void LeaveDebugScreen()
	{
	}
}
