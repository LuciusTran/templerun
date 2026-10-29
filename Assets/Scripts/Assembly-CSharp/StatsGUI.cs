using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

public class StatsGUI : BasePanel
{
	[CompilerGenerated]
	private sealed class _003CSlideInAnimation_003Ed__29 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public StatsGUI _003C_003E4__this;

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
		public _003CSlideInAnimation_003Ed__29(int _003C_003E1__state)
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

	public GameObject Content;

	public UIPanel ScrollViewPanel;

	public Transform ScrollContent;

	public RecordManager RecordManager;

	public PlayerManager PlayerManager;

	public UILabel Multiplier;

	public UILabel Coins;

	public GameObject StatsGroupSingle;

	public GameObject StatsGroupSaveMe;

	public GameObject StatsGroupLifetime;

	public UILabel HighestScore;

	public UILabel LongestRun;

	public UILabel MostCoins;

	public UILabel SaveMeHighestScore;

	public UILabel SaveMeLongestRun;

	public UILabel SaveMeMostCoins;

	public UILabel TotalCoins;

	public UILabel TotalDistance;

	public UILabel TotalGames;

	public UILabel VersionInfo;

	public GameObject StatsButton;

	private bool _FirstSlide;

	private const string _PanelName = "Stats";

	private void Awake()
	{
	}

	private void Setup()
	{
	}

	public override void SlideIn(BasePanel returnTo)
	{
		// Authored bridge; original slide-animation coroutine remains unrecovered; see Evidence/ui-csharp-restoration.json.
		base.SlideIn(returnTo);
	}

	[IteratorStateMachine(typeof(_003CSlideInAnimation_003Ed__29))]
	private IEnumerator SlideInAnimation()
	{
		return null;
	}

	private void BackClicked()
	{
		// Native-derived control flow with local host binding; see Evidence/ui-csharp-restoration.json.
		ReturnMenu();
	}

	private void OnStatsButton()
	{
	}
}
