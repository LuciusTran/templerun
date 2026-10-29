using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

public class MainMenu : BasePanel
{
	[Serializable]
	public struct BannerMapping
	{
		public string EventNameString;

		public GameObject BannerObject;
	}

	[CompilerGenerated]
	private sealed class _003CDelayedPromoShow_003Ed__22 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

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
		public _003CDelayedPromoShow_003Ed__22(int _003C_003E1__state)
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

	private const float _FadeInTime = 0.5f;

	private const string _LogChannel = "MainMenu";

	public static MainMenu Instance;

	public GameObject SaveMeDebugPanel;

	public GameObject DebugBuildObject;

	public GameObject DebugScreenPrefab;

	[SerializeField]
	public BannerMapping[] EventBanners;

	public GameObject GlobalChallengesButton;

	public GameObject GlobalChallengesCTA;

	public GameObject GlobalChallengesCTA_InputBlocker;

	public GameObject MainMenuRowNew;

	public GameObject MainMenuRowOld;

	[Header("Title Screen Buttons")]
	public UIAnchor NoAdsButtonAnchor;

	public GameObject NewOptionsButton;

	public float NoAdsButtonAnchorOffsetY;

	private bool _FirstLaunch;

	private const string _PanelName = "MainMenu";

	public override void Start()
	{
	}

	public void Update()
	{
	}

	public override void SlideIn(BasePanel returnTo)
	{
	}

	private void ChangeGCTimeIndicator()
	{
	}

	[IteratorStateMachine(typeof(_003CDelayedPromoShow_003Ed__22))]
	private IEnumerator DelayedPromoShow()
	{
		return null;
	}

	protected override bool IsBannerAdPlacementEnabled()
	{
		return false;
	}

	public override void ShowAll(bool inShowBannerAds = true)
	{
	}

	public override void HideAll()
	{
	}

	public void ShowAskForReviewDialog(bool inAskNow = false)
	{
	}

	public void OnPlayClicked()
	{
	}

	private void HideMainMenuButtons()
	{
	}

	public void OnDebug0()
	{
	}

	public void OnDebug1()
	{
	}

	public void OnDebug2()
	{
	}
}
