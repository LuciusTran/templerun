using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

public class VCGUI : BasePanel
{
	[CompilerGenerated]
	private sealed class _003CSlideInAnimation_003Ed__28 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public VCGUI _003C_003E4__this;

		private GameController.FeatureToggleStatus _003CiapFeatureStatus_003E5__2;

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
		public _003CSlideInAnimation_003Ed__28(int _003C_003E1__state)
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

	public GameObject BackButton;

	public GameObject Header;

	public GameObject Status;

	public UILabel CoinsLabel;

	public UILabel MessageLabel;

	public UILabel ComingSoon;

	public RecordManager RecordManager;

	public PlayerManager PlayerManager;

	public UIStack Stack;

	public VCItem ItemPrefab;

	public VCItem FreeItemPrefab;

	public VCItem NoAdItemPrefab;

	public VCItem RestorePurchaseItem;

	public GameObject FreeOffersSection;

	public UIPanel ScrollViewPanel;

	public Transform ScrollContent;

	private int OnItem;

	private int lastCoins;

	private bool ListAcquired;

	private bool FreeOffersSetionAdded;

	public static VCGUI Instance;

	private bool _FirstSlide;

	private const string _PanelName = "MoreCoins";

	private void Awake()
	{
	}

	public override void Start()
	{
	}

	public override void SlideIn(BasePanel returnTo)
	{
		// Authored bridge; original slide-animation coroutine remains unrecovered; see Evidence/ui-csharp-restoration.json.
		base.SlideIn(returnTo);
	}

	private void OnStoreUnavailableButton(string inButtonName)
	{
	}

	[IteratorStateMachine(typeof(_003CSlideInAnimation_003Ed__28))]
	private IEnumerator SlideInAnimation()
	{
		return null;
	}

	private void Update()
	{
	}

	private void ClearList()
	{
	}

	private void FillMeuItems()
	{
	}

	public void RefreshList()
	{
	}

	public void AddVCItem(string icon, string offer, string price, string code)
	{
	}

	public void AddVCRestoreItem(string icon, string offer, string price, string code)
	{
	}

	public void AddNoAdItem(string icon, string offer, string price, string code)
	{
	}

	private void AddFreeOfferSection()
	{
	}

	public void AddFreeOffer(string icon, string offer, string price, string code, float leftShiftAmount = -50f)
	{
	}

	public void DisableLoading()
	{
	}

	public void EnableComingSoon()
	{
	}

	private void BackButtonClicked()
	{
		// Native-derived control flow with local host binding; see Evidence/ui-csharp-restoration.json.
		ReturnMenu();
	}
}
