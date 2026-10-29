using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Imangi.Ad;
using UnityEngine;

public class StoreGUI : BasePanel
{
	[CompilerGenerated]
	private sealed class _003CSlideInAnimation_003Ed__38 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public StoreGUI _003C_003E4__this;

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
		public _003CSlideInAnimation_003Ed__38(int _003C_003E1__state)
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

	private const string _LogChannel = "StoreGUI";

	private const string _AdLocation = "Store";

	public GameObject SlideInOffset;

	public GameObject GetMoreCoinsButton;

	public GameObject BackButton;

	public GameObject Header;

	public UILabel CoinLabel;

	public EndGameUI EndGameInterface;

	public VCGUI CoinsGUI;

	public GameObject[] Disabled;

	public GameObject[] CharacterObjects;

	public RecordManager RecordManager;

	public PlayerManager PlayerManager;

	public UIPanel ScrollViewPanel;

	public Transform ScrollContent;

	[Header("Rewarded Ad Options")]
	public GameObject RewardedAdCoinsObject;

	public GameObject RewardedAdWingsObject;

	public static StoreGUI Instance;

	private bool _FirstSlide;

	private const string _PanelName = "Store";

	private bool _HookedAdEvents;

	private const string _AdSpaceName = "SaveMe";

	private int _CoinCountBeforeReward;

	private int _CoinRewardAmount;

	private RewardedAdConfigData.StoreItem _CachedRewardType;

	private GameObject _ActiveRewardedAdObject;

	private bool _RewardedAdIsCooling;

	private float _RewardedAdCoolingTimer;

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
	}

	public override void HideAll()
	{
	}

	private void SetupRewardedAdItems()
	{
	}

	private void SetRewardedAdItemActive(GameObject inItemObject, bool inActive)
	{
	}

	private void UpdateRewardedAdItems(bool isUpdate = false)
	{
	}

	private void ReconfigureStoreItems()
	{
	}

	public override void SlideIn(BasePanel returnTo)
	{
	}

	[IteratorStateMachine(typeof(_003CSlideInAnimation_003Ed__38))]
	private IEnumerator SlideInAnimation()
	{
		return null;
	}

	private void AdjustCoins()
	{
	}

	private void BackClicked()
	{
	}

	private void GetMoreCoinsClicked()
	{
	}

	public void StartRewardedAdCoinFlow()
	{
	}

	public void StartRewardedAdWingsFlow()
	{
	}

	private void ShowRewardedAd()
	{
	}

	private void HookVideoAdEvents(AdManager inAdMngr)
	{
	}

	private void UnhookVideoAdEvents()
	{
	}

	protected void StoreGUI_OnAdClicked(AdService inService, AdType inAdType, string inAdSpaceName)
	{
	}

	protected void StoreGUI_OnAdOpened(AdService inService, AdType inAdType, string inAdSpaceName)
	{
	}

	protected void StoreGUI_OnAdFailed(AdService inService, AdType inAdType, string inAdSpaceName, string inError)
	{
	}

	protected void StoreGUI_OnDidReceiveAd(AdService inService, AdType inAdType, string inAdSpaceName)
	{
	}

	protected void StoreGUI_OnFailedToReceiveAd(AdService inService, AdType inAdType, string inAdSpaceName)
	{
	}

	protected void StoreGUI_OnAdWillLeaveApplication(AdService inService, AdType inAdType, string inAdSpaceName)
	{
	}

	protected void StoreGUI_OnAdDismissed(AdService inService, AdType inAdType, string inAdSpaceName, bool inCompleted)
	{
	}

	protected void GiveAdReward()
	{
	}

	protected void FinishGivingAdCoinReward()
	{
	}

	public void UnhookStoreBannerAdEvents()
	{
	}

	public void HookStoreBannerAdEvents()
	{
	}
}
