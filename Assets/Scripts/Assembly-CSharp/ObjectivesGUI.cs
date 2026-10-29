using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

public class ObjectivesGUI : BasePanel
{
	[CompilerGenerated]
	private sealed class _003CSlideInAnimation_003Ed__16 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public ObjectivesGUI _003C_003E4__this;

		private Vector3 _003Cgb_003E5__2;

		private Vector3 _003Cmm_003E5__3;

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
		public _003CSlideInAnimation_003Ed__16(int _003C_003E1__state)
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

	public GameObject MainMenuButton;

	public GameObject Header;

	public RecordManager RecordManager;

	public PlayerManager PlayerManager;

	public UIStack Stack;

	public UIPanel ScrollViewPanel;

	public Transform ScrollContent;

	public UIDraggablePanel ScrollingPanel;

	public GameObject ItemPrefab;

	public GameObject StatsButton;

	private bool _FirstSlide;

	private const string _PanelName = "Objectives";

	private void Awake()
	{
	}

	private void Setup()
	{
	}

	public override void SlideIn(BasePanel returnTo)
	{
	}

	[IteratorStateMachine(typeof(_003CSlideInAnimation_003Ed__16))]
	private IEnumerator SlideInAnimation()
	{
		return null;
	}

	private void FillObjectives()
	{
	}

	private void MainMenuClicked()
	{
	}

	private void OnStatsButton()
	{
	}
}
