using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

public class LanguagesGUI : BasePanel
{
	[CompilerGenerated]
	private sealed class _003CSlideInAnimation_003Ed__17 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public LanguagesGUI _003C_003E4__this;

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
		public _003CSlideInAnimation_003Ed__17(int _003C_003E1__state)
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

	private const string _LogChannel = "LanguagesGUI";

	private const string _AdLocation = "LanguagesGUI";

	public GameObject SlideInOffset;

	public GameObject BackButton;

	public GameObject Header;

	public UILabel HeaderLabel;

	public UIPanel ScrollViewPanel;

	public Transform ScrollContent;

	public static LanguagesGUI Instance;

	public UICheckbox[] LanguageCheckBoxes;

	private bool _FirstSlide;

	private const string _PanelName = "LanguagesGUI";

	private void Awake()
	{
	}

	private void Setup()
	{
	}

	public override void ShowAll(bool inShowBannerAds = true)
	{
	}

	public override void HideAll()
	{
	}

	public override void SlideIn(BasePanel returnTo)
	{
	}

	[IteratorStateMachine(typeof(_003CSlideInAnimation_003Ed__17))]
	private IEnumerator SlideInAnimation()
	{
		return null;
	}

	private void BackClicked()
	{
	}

	public void UnhookStoreBannerAdEvents()
	{
	}

	public void HookStoreBannerAdEvents()
	{
	}

	private void BackButtonClicked()
	{
	}

	public void ReturnToTheOptionsScreen()
	{
	}
}
