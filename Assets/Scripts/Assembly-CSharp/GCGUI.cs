using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

public class GCGUI : BasePanel
{
	[CompilerGenerated]
	private sealed class _003CAnimateText_003Ed__69 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public GCGUI _003C_003E4__this;

		public int index;

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
		public _003CAnimateText_003Ed__69(int _003C_003E1__state)
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

	[CompilerGenerated]
	private sealed class _003CSlideInAnimation_003Ed__52 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public GCGUI _003C_003E4__this;

		private Vector3 _003Cmm_003E5__2;

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
		public _003CSlideInAnimation_003Ed__52(int _003C_003E1__state)
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

	public List<UISprite> rewardSprites;

	public List<UISprite> rewardSpritesForAnim;

	public List<UILabel> rewardConditions;

	public List<GameObject> rewardButtons;

	public List<GameObject> rewardButtonsParents;

	public List<UILabel> rewardTitles;

	public List<UISprite> rewardedCheckMarkSprites;

	public UIAtlas spriteAtlas;

	public UILabel timeIndicatorLabel;

	public UILabel nextRewardReqLabel;

	public GameObject currentPositionVisualIndicator;

	public GameObject tierStart;

	public float tierPositionYDiff;

	public float tierSizeOffset;

	public UILabel tierBase;

	private Dictionary<Enum, string> spriteNameDict;

	private bool _FirstSlide;

	public GameObject Header;

	public GameObject Tiers;

	public GameObject nextReward;

	public GameObject tiersScroller;

	private Vector3 tierScrollerInitialPos;

	private float tiersInitialCenterY;

	private Vector3 tiersIniitialPos;

	private bool isSlidingEndGameNext;

	public EndGameUI EndGameInterface;

	public UILabel backButtonLabel;

	public int rewardClaimedCount;

	public float rewardClaimOverflowAmount;

	public UILabel gcType;

	private Vector3 oldPanelPos;

	private Vector3 newPanelPos;

	public GameObject scrollBarIndicator;

	public GameObject scrollBarParent;

	public int scrollBarIndicatorFirstInitialPos;

	public int scrollBarIndicatorInitialPosDiff;

	public GameObject backButtonRef;

	public int rewardsLeftToClaim;

	[SerializeField]
	private GameObject[] rewardClaimAnimsParent;

	[SerializeField]
	private Vector3 defaultLocalRewardAnimPos;

	public UILabel CoinLabel;

	private int _CoinsCount;

	private int _CoinCountBeforeReward;

	private int _CoinRewardAmount;

	private bool _OpenedFromEndGame;

	public GameObject TempCoin;

	public GameObject WalletCoin;

	public void Awake()
	{
	}

	public override void SlideIn(BasePanel returnTo)
	{
	}

	private void ChangeGCTimeIndicator()
	{
	}

	[IteratorStateMachine(typeof(_003CSlideInAnimation_003Ed__52))]
	private IEnumerator SlideInAnimation()
	{
		return null;
	}

	public void MainMenuClicked()
	{
	}

	public void SlideEndGameNext()
	{
	}

	public void ClaimButtonClicked_ms1()
	{
	}

	public void ClaimButtonClicked_ms2()
	{
	}

	public void ClaimButtonClicked_ms3()
	{
	}

	public void ClaimButtonClicked_ms4()
	{
	}

	public void ClaimButtonClicked_ms5()
	{
	}

	public void ClaimButtonClicked_ms6()
	{
	}

	private void ClaimButtonClicked(int index)
	{
	}

	public void RewardIconScaleFinished(int index)
	{
	}

	public void RewardIconScale_0()
	{
	}

	public void RewardIconScale_1()
	{
	}

	public void RewardIconScale_2()
	{
	}

	public void RewardIconScale_3()
	{
	}

	public void RewardIconScale_4()
	{
	}

	public void RewardIconScale_5()
	{
	}

	[IteratorStateMachine(typeof(_003CAnimateText_003Ed__69))]
	private IEnumerator AnimateText(int index)
	{
		return null;
	}

	public void RewardAnimComplete_0()
	{
	}

	public void RewardAnimComplete_1()
	{
	}

	public void RewardAnimComplete_2()
	{
	}

	public void RewardAnimComplete_3()
	{
	}

	public void RewardAnimComplete_4()
	{
	}

	public void RewardAnimComplete_5()
	{
	}

	private void RewardAnimComplete(int index)
	{
	}

	public void BounceClaimButtomDown_0()
	{
	}

	public void BounceClaimButtomDown_1()
	{
	}

	public void BounceClaimButtomDown_2()
	{
	}

	public void BounceClaimButtomDown_3()
	{
	}

	public void BounceClaimButtomDown_4()
	{
	}

	public void BounceClaimButtomDown_5()
	{
	}

	private void BounceClaimButtonDown(int index)
	{
	}

	private void Update()
	{
	}

	private void AdjustCoins()
	{
	}

	public override void HideAll()
	{
	}

	public void OpenedFromEndGame()
	{
	}
}
