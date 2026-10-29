using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

public class CharacterSelectGUI : BasePanel
{
	[CompilerGenerated]
	private sealed class _003CSlideInAnimation_003Ed__27 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public CharacterSelectGUI _003C_003E4__this;

		private Vector3 _003Cmm_003E5__2;

		private Vector3 _003Cra_003E5__3;

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
		public _003CSlideInAnimation_003Ed__27(int _003C_003E1__state)
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

	private const string _LogChannel = "CharacterSelectGUI";

	private const string _AdLocation = "Store";

	public GameObject SlideInOffset;

	public GameObject GetMoreCoinsButton;

	public GameObject BackButton;

	public GameObject Header;

	public UILabel CoinLabel;

	public UILabel HeaderLabel;

	public EndGameUI EndGameInterface;

	public VCGUI CoinsGUI;

	public GameObject[] CharactersObjects;

	public string[] Names;

	private List<int> DisplayOrder;

	public RecordManager RecordManager;

	public PlayerManager PlayerManager;

	public UIPanel ScrollViewPanel;

	public Transform ScrollContent;

	public static CharacterSelectGUI Instance;

	private bool _FirstSlide;

	private const string _PanelName = "Store";

	private void Awake()
	{
	}

	private void Update()
	{
	}

	private void Setup()
	{
	}

	public override void ShowAll(bool inShowBannerAds = true)
	{
		// Authored bridge preserving original panel entry points; see Evidence/ui-csharp-restoration.json.
		base.ShowAll(false);
	}

	public override void HideAll()
	{
		// Authored bridge preserving original panel entry points; see Evidence/ui-csharp-restoration.json.
		base.HideAll();
	}

	private void ReconfigureStoreItems()
	{
	}

	public override void SlideIn(BasePanel returnTo)
	{
		// Authored bridge; original slide-animation coroutine remains unrecovered; see Evidence/ui-csharp-restoration.json.
		base.SlideIn(returnTo);
	}

	[IteratorStateMachine(typeof(_003CSlideInAnimation_003Ed__27))]
	private IEnumerator SlideInAnimation()
	{
		return null;
	}

	private void AdjustCoins()
	{
	}

	private void BackClicked()
	{
		// Native-derived control flow with local host binding; see Evidence/ui-csharp-restoration.json.
		ReturnMenu();
	}

	private void GetMoreCoinsClicked()
	{
		// Authored offline service binding; purchasing remains unavailable; see Evidence/ui-csharp-restoration.json.
		TempleRunUIPresenter.Instance.OpenCoins(this);
	}

	public void UnhookStoreBannerAdEvents()
	{
	}

	public void HookStoreBannerAdEvents()
	{
	}

	public void UpdateHeaderLabel()
	{
	}

	public bool IsNewCharacterSelectEnabled()
	{
		return false;
	}
}
