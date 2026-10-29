using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Imangi.Ad;
using UnityEngine;

public class BasePanel : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class _003CFadeInAfterDelay_003Ed__16 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public BasePanel _003C_003E4__this;

		public float delay;

		public Color startColor;

		public float duration;

		public Color endColor;

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
		public _003CFadeInAfterDelay_003Ed__16(int _003C_003E1__state)
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

	private const string _LogChannel = "BasePanel";

	public GameController Controller;

	public UIPanel Panel;

	public UINoAdsButton NoAds;

	protected BasePanel ReturnToPanel;

	protected bool _LogSceneAnalytics;

	private bool _EventsHooked;

	private const string _BannerAdSpaceName = "Banner";

	protected string _AdPlacement;

	public virtual void Start()
	{
	}

	public virtual void ShowAll(bool inShowBannerAds = true)
	{
		// Native panel visibility intent; local presenter retains source inactive variants; see Evidence/ui-csharp-restoration.json.
		TempleRunUIPresenter.Instance?.ShowPanel(this);
	}

	public virtual void HideAll()
	{
		// Native-derived control flow with local host binding; see Evidence/ui-csharp-restoration.json.
		TempleRunUIPresenter.Instance?.HidePanel(this);
	}

	private void ShowPanel()
	{
	}

	private void HidePanel()
	{
	}

	public void FadeIn(float delay = 0f, float duration = 1f)
	{
	}

	public void FadeOut(float delay = 0f, float duration = 1f)
	{
	}

	[IteratorStateMachine(typeof(_003CFadeInAfterDelay_003Ed__16))]
	private IEnumerator FadeInAfterDelay(Color startColor, Color endColor, float delay, float duration)
	{
		return null;
	}

	public void Show()
	{
		// Native-derived panel activation intent; analytics/ad branches omitted; see Evidence/ui-csharp-restoration.json.
		SlideIn(null);
	}

	public void SlideInDontClearReturn()
	{
		// Native-derived control flow with local host binding; see Evidence/ui-csharp-restoration.json.
		SlideIn(ReturnToPanel);
	}

	public void SlideIn()
	{
		// Native-derived control flow with local host binding; see Evidence/ui-csharp-restoration.json.
		SlideIn(null);
	}

	public virtual void SlideIn(BasePanel returnTo)
	{
		// Native return-panel storage plus authored presentation binding; see Evidence/ui-csharp-restoration.json.
		ReturnToPanel = returnTo;
		TempleRunUIPresenter.Instance?.ShowPanel(this);
	}

	public void ReturnMenu()
	{
		// Native-derived control flow with local host binding; see Evidence/ui-csharp-restoration.json.
		HideAll();
		if (ReturnToPanel) ReturnToPanel.SlideIn(ReturnToPanel.ReturnToPanel);
		else TempleRunUIPresenter.Instance?.Home();
	}

	protected void ShowBannerAd()
	{
	}

	protected void HideBannerAd()
	{
	}

	protected virtual void AdReceivedEvent(AdService inService, AdType inAdType, string inAdSpaceName)
	{
	}

	protected virtual void AdFailedEvent(AdService inService, AdType inAdType, string inAdSpaceName, string inError)
	{
	}

	protected virtual void AdClickedEvent(AdService inService, AdType inAdType, string inAdSpaceName)
	{
	}

	public void HookBannerAdEvents()
	{
	}

	public void UnhookBannerAdEvents()
	{
	}

	protected virtual bool IsBannerAdPlacementEnabled()
	{
		return false;
	}
}
