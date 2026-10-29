using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Imangi.Ad;
using UnityEngine;

public class EndGameUI : BasePanel
{
	public class Illustration
	{
		public string Image;

		public List<string> Captions;
	}

	[CompilerGenerated]
	private sealed class _003CLoopDoubleCoinsButtonVibrate_003Ed__63 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public EndGameUI _003C_003E4__this;

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
		public _003CLoopDoubleCoinsButtonVibrate_003Ed__63(int _003C_003E1__state)
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
	private sealed class _003CSlideInAnimation_003Ed__61 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public EndGameUI _003C_003E4__this;

		private bool _003CdecideInterstitialAfterSlideIn_003E5__2;

		private Vector3 _003Cmm_003E5__3;

		private Vector3 _003Cra_003E5__4;

		private Vector3 _003Cna_003E5__5;

		private Vector3 _003Csb_003E5__6;

		private Vector3 _003Cfb_003E5__7;

		private Vector3 _003Cgb_003E5__8;

		private Vector3 _003Ctb_003E5__9;

		private Vector3 _003Cgcb_003E5__10;

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
		public _003CSlideInAnimation_003Ed__61(int _003C_003E1__state)
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

	protected const string _LogChannel = "EndGameUI";

	private const string _AdLocation = "EndGameUI";

	public Dictionary<CharacterPlayer.DeathTypes, Dictionary<int, List<Illustration>>> DeathDetails;

	public TextAsset DeathImageFile;

	public GameObject SlideInOffset;

	public GameObject MainMenuButton;

	public GameObject RunAgainButton;

	public GameObject Header;

	public GameObject Content;

	public UILabel ScoreLabel;

	public UILabel DistanceLabel;

	public UILabel CoinsLabel;

	public UILabel MultiplierLabel;

	public GameObject[] gcCompleteIndicators;

	public GameObject StoreButton;

	public GameObject FreeCoinsButton;

	public GameObject TweetButton;

	public GameObject StatsButton;

	public GameObject GCButton;

	public StoreGUI StoreInterface;

	public VCGUI CoinsInterface;

	public UITexture DeathIllustration;

	public UILabel DeathCaption;

	public UISprite DoubleCoinsButton;

	public Transform CoinsHeaderTransform;

	public Vector3 CoinsHeaderDefaultPos;

	public bool ShowTweetButton;

	public bool ShowStatsButton;

	public string StatsSpriteName;

	public static EndGameUI Instance;

	public GCGUI GCInterface;

	public bool InterstitialTestMode;

	[NonSerialized]
	protected bool _HookedAdEvents;

	[NonSerialized]
	protected bool _ShowingInterstitial;

	[NonSerialized]
	public bool WatchedRewardedAd;

	[NonSerialized]
	public float LastInterstitialShownTime;

	[NonSerialized]
	public bool WatchedInterstitialAd;

	private bool _FirstSlide;

	private int _RewardAmount;

	private bool _FirstSlideAdDelayAnimDone;

	private const int scoreAnimationTime = 500;

	private int scoreAnimationIndex;

	private int scoreAnimationAdditionAmount;

	public string TwitterLink;

	public string TwitterMessage;

	private const string _PanelName = "PostGame";

	private int gcTierNo;

	private float gcOverflowPercent;

	public GameObject gcProgressObject;

	protected const string VideoName = "SaveMe";

	protected string InterstitalName => null;

	private void HookAdEvents(AdManager inAdMngr)
	{
	}

	private void UnhookAdEvents()
	{
	}

	private void Awake()
	{
	}

	private void Setup()
	{
	}

	protected void SetButtonState(GameObject inGameObject, bool inEnabled)
	{
	}

	protected void SetButtonState(bool inEnabled)
	{
	}

	protected void SetDoubleButtonState(bool inEnabled)
	{
	}

	public override void SlideIn(BasePanel returnTo)
	{
	}

	[IteratorStateMachine(typeof(_003CSlideInAnimation_003Ed__61))]
	private IEnumerator SlideInAnimation()
	{
		return null;
	}

	public void ShowAdAfterHandling()
	{
	}

	[IteratorStateMachine(typeof(_003CLoopDoubleCoinsButtonVibrate_003Ed__63))]
	private IEnumerator LoopDoubleCoinsButtonVibrate()
	{
		return null;
	}

	public void HandleAds()
	{
	}

	public void CacheInterstitial(string inReason)
	{
	}

	private void UpdateStats()
	{
	}

	private void GCTierCompletedCallback(int tierNo, float overflowPercent)
	{
	}

	private void RunAgainClicked()
	{
	}

	private void MainMenuClicked()
	{
	}

	private void StoreClick()
	{
	}

	private void FreeCoinsClicked()
	{
	}

	private void GCClick()
	{
	}

	public override void HideAll()
	{
	}

	private void AssignDeathDetails()
	{
	}

	private void ParseDeathDetails()
	{
	}

	private CharacterPlayer.DeathTypes TypeFromName(string name)
	{
		return CharacterPlayer.DeathTypes.kDeathTypeUnknown;
	}

	private void TweetButtonClicked()
	{
	}

	private void OnStatsButton()
	{
	}

	private void StartTweet()
	{
	}

	public void ShowRewardedAdAlert()
	{
	}

	private void ShowRewardedAd()
	{
	}

	protected void EndGame_OnAdClicked(AdService inService, AdType inAdType, string inAdSpaceName)
	{
	}

	protected void EndGame_OnAdOpened(AdService inService, AdType inAdType, string inAdSpaceName)
	{
	}

	protected void EndGame_OnAdFailed(AdService inService, AdType inAdType, string inAdSpaceName, string inError)
	{
	}

	protected void EndGame_OnDidReceiveAd(AdService inService, AdType inAdType, string inAdSpaceName)
	{
	}

	protected void EndGame_OnFailedToReceiveAd(AdService inService, AdType inAdType, string inAdSpaceName)
	{
	}

	protected void EndGame_OnAdWillLeaveApplication(AdService inService, AdType inAdType, string inAdSpaceName)
	{
	}

	protected void EndGame_OnAdDismissed(AdService inService, AdType inAdType, string inAdSpaceName, bool inCompleted)
	{
	}

	private void GiveRewardForAd()
	{
	}

	private void FinishGivingRewardForAd()
	{
	}

	private bool InterstitialAdCooldownCompleted()
	{
		return false;
	}
}
