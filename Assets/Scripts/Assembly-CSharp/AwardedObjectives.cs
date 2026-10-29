using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

public class AwardedObjectives : BasePanel
{
	[CompilerGenerated]
	private sealed class _003CSlideInAnimation_003Ed__20 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public AwardedObjectives _003C_003E4__this;

		private int _003CstartSM_003E5__2;

		private UITweener[] _003Ctweens_003E5__3;

		private Vector3 _003Cmm_003E5__4;

		private int _003CnewMultiplier_003E5__5;

		private int _003Ci_003E5__6;

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
		public _003CSlideInAnimation_003Ed__20(int _003C_003E1__state)
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

	public GameObject NextButton;

	public GameObject Header;

	public GameObject Content;

	public RecordManager RecordManager;

	public PlayerManager PlayerManager;

	public CharacterPlayer GamePlayer;

	public UIStack Stack;

	public GameObject ItemPrefab;

	public UILabel MultiplierLabel;

	public Transform NextObjectivePlate;

	public EndGameUI EndGameInterface;

	public Transform MultUp;

	public UISprite MultUpSprite;

	public GCGUI GCInterface;

	private bool _FirstSlide;

	private const string _PanelName = "PostGame_Objectives";

	private void Awake()
	{
	}

	private void Setup()
	{
	}

	public override void SlideIn(BasePanel returnTo)
	{
	}

	[IteratorStateMachine(typeof(_003CSlideInAnimation_003Ed__20))]
	private IEnumerator SlideInAnimation()
	{
		return null;
	}

	private void FillObjectives()
	{
	}

	private void NextClicked()
	{
	}
}
