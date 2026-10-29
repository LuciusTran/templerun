using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

public class OptionsGUI : BasePanel
{
	[CompilerGenerated]
	private sealed class _003CSlideInAnimation_003Ed__16 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public OptionsGUI _003C_003E4__this;

		private Vector3 _003CbackButtonPos_003E5__2;

		private Vector3 _003CprivacyButtonPos_003E5__3;

		private UILabel _003CprivacyLabel_003E5__4;

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

	public GameObject PrivacyButton;

	public GameObject BackButton;

	public GameObject Header;

	public GameObject Content;

	public GameObject ConsentSection;

	public GameObject SensitivitySlider;

	public GameObject FriendMarkersToggle;

	private bool _FriendMarkersToggleHidden;

	public GameObject OptInButtonText;

	public GameObject OptOutButtonText;

	public static OptionsGUI Instance;

	private const string _PanelName = "Options";

	public override void Start()
	{
	}

	public override void SlideIn(BasePanel returnTo)
	{
	}

	private void UpdateConsentButtonData()
	{
	}

	[IteratorStateMachine(typeof(_003CSlideInAnimation_003Ed__16))]
	private IEnumerator SlideInAnimation()
	{
		return null;
	}

	public void SetFriendMarkersToggleState(bool inSetHidden)
	{
	}

	private void BackButtonClicked()
	{
	}

	protected void ReturnToOptions()
	{
	}

	private void ConsentButtonClicked()
	{
	}

	private void PrivacyButtonClicked()
	{
	}

	private void ResetProgressButtonClicked()
	{
	}

	private void OnShowPrivacyPolicy(string inMoreInfoURL)
	{
	}

	private void OnFailedToShowPrivacyPolicy()
	{
	}
}
