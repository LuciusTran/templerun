using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

public class PauseMenu : BasePanel
{
	[CompilerGenerated]
	private sealed class _003CSlideInAnimation_003Ed__32 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public PauseMenu _003C_003E4__this;

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
		public _003CSlideInAnimation_003Ed__32(int _003C_003E1__state)
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

	public GameObject ResumeButton;

	public GameObject NewGameButton;

	public GameObject Header;

	public GameObject Content;

	public UILabel ScoreLabel;

	public UILabel DistanceLabel;

	public UILabel CoinsLabel;

	public UILabel MultiplierLabel;

	public AlertView AlertView;

	public Transform NextObjectivePlate;

	public Transform NextObjectiveSlotSprite;

	public Transform NextObjectiveText;

	public GameObject ObjectiveItemPrefab;

	public RecordManager RecordManager;

	public PlayerManager PlayerManager;

	public static PauseMenu Instance;

	[Header("Debug Items")]
	public GameObject DebugButton;

	public GameObject DebugPanel;

	public UILabel debugStatus;

	public UILabel lifeTimeConis;

	public UILabel lifeTimeRuns;

	public UILabel lifeTimeDistance;

	public UILabel debugHUDStatus;

	private Vector3 menuButtonPos;

	private Vector3 resumeButtonPos;

	private Vector3 newButtonPos;

	private const string _PanelName = "Pause";

	public override void Start()
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

	[IteratorStateMachine(typeof(_003CSlideInAnimation_003Ed__32))]
	private IEnumerator SlideInAnimation()
	{
		return null;
	}

	private void UpdateStats()
	{
	}

	private void MainMenuClicked()
	{
		// Native-derived control flow with local host binding; see Evidence/ui-csharp-restoration.json.
		TempleRunUIPresenter.Instance.ConfirmHome();
	}

	public void ResumeClicked()
	{
		// Native resume intent; authored host binding, resume countdown not recovered; see Evidence/ui-csharp-restoration.json.
		TempleRunFlow.Instance.Resume();
	}

	private void NewGameClicked()
	{
		// Native-derived control flow with local host binding; see Evidence/ui-csharp-restoration.json.
		TempleRunUIPresenter.Instance.ConfirmRestart();
	}

	public void OnCloseDebugPanelButtonClicked()
	{
	}

	public void OnDebugButtonClicked()
	{
	}

	public void OnGodModeClicked()
	{
	}

	public void OnCoinDebugClicked()
	{
	}

	public void OnScoreDebugClicked()
	{
	}

	public void OnMultiplierDebugClicked()
	{
	}

	public void OnLifeTimeDebugClicked()
	{
	}

	public void OnRunDistanceDebugClicked()
	{
	}

	public void OnShowHUDClicked()
	{
	}
}
