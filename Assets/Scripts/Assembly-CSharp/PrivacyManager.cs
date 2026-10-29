using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Ump.Api;
using Imangi.Privacy;
using Imangi.Utilities;
using UnityEngine;
using UnityEngine.Networking;

public class PrivacyManager : MonoBehaviour
{
	public class ConsentLanguageData : IParsableJSONListElement
	{
		public const string LanguageNameKey = "consent.language.name";

		public const string LanguageVersionKey = "consent.version";

		public const string LanguageTextKey = "consent.text";

		public int LanguageVersion;

		public Dictionary<string, Dictionary<string, string>> LanguageText;

		public string[] LanguageNames;

		public bool FromDict(Dictionary<string, object> inDict)
		{
			return false;
		}

		public Dictionary<string, object> ToDict()
		{
			return null;
		}
	}

	public class QuestionData
	{
		public ImangiConsentGroup ConsentGroup;

		public string TitleKey;

		public string TitleString;

		public string InfoKey;

		public string InfoString;

		public string PromptKey;

		public string PromptString;

		public bool Inform;

		public ImangiConsentState ConsentState;

		public QuestionData(ImangiConsentGroup inConsentGroup)
		{
		}

		private void Internal_SetupForConsentGroup(ImangiConsentGroup inConsentGroup)
		{
		}

		public override string ToString()
		{
			return null;
		}
	}

	private enum SystemFlowState
	{
		Invalid = 0,
		AgeGate = 1,
		PendingPrivacyQuestion = 2,
		PrivacyQuestion = 3,
		Confirmation = 4,
		Confirmation_Cancelled = 5,
		InformUnderAge = 6,
		InformReConsent = 7,
		Completed_Underage = 8,
		Completed_Overage = 9,
		Completed = 10,
		Reset = 11
	}

	[CompilerGenerated]
	private sealed class _003CBootCMPWatchdogCoroutine_003Ed__70 : IEnumerator<object>, IEnumerator, IDisposable
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
		public _003CBootCMPWatchdogCoroutine_003Ed__70(int _003C_003E1__state)
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
	private sealed class _003CCMPInputWatchdogCoroutine_003Ed__63 : IEnumerator<object>, IEnumerator, IDisposable
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
		public _003CCMPInputWatchdogCoroutine_003Ed__63(int _003C_003E1__state)
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
	private sealed class _003CDownloadLanguageText_003Ed__139 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public PrivacyManager _003C_003E4__this;

		private UnityWebRequest _003Crequest_003E5__2;

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
		public _003CDownloadLanguageText_003Ed__139(int _003C_003E1__state)
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

		private void _003C_003Em__Finally1()
		{
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	[CompilerGenerated]
	private sealed class _003CLoadCachedLanguageFile_003Ed__137 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public PrivacyManager _003C_003E4__this;

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
		public _003CLoadCachedLanguageFile_003Ed__137(int _003C_003E1__state)
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
	private sealed class _003CLoadShippedLanguageFile_003Ed__138 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public PrivacyManager _003C_003E4__this;

		private UnityWebRequest _003Crequest_003E5__2;

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
		public _003CLoadShippedLanguageFile_003Ed__138(int _003C_003E1__state)
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

		private void _003C_003Em__Finally1()
		{
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	[CompilerGenerated]
	private sealed class _003CSystemFlowCoroutine_003Ed__164 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public PrivacyManager _003C_003E4__this;

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
		public _003CSystemFlowCoroutine_003Ed__164(int _003C_003E1__state)
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

	public static PrivacyConfigData PrivacyConfig;

	public static PrivacyRegulationInfoData RegulationTypeData;

	public static PrivacyConfigFlowData PrivacyConfigFlow;

	private const string _LogChannel = "PrivacyManager";

	private static PrivacyManager _Instance;

	private const string _DefaultLanguage = "eng";

	private bool _IsReconsenting;

	public static bool IsCMPDone;

	public static bool IsCMPDisplayPending;

	public static string LastRegulationBranch;

	public int ShippedPrivacyLanguageVersion;

	public string Remote_PrivacyLanguageUrl;

	public const string LocalErrorTitleKey = "PrivacyErrorTitle";

	public const string LocalErrorMessageKey = "PrivacyErrorMessage";

	public const string LocalErrorButtonKey = "PrivacyErrorButton";

	protected static bool _IsCMPReconcent;

	private List<QuestionData> _QuestionData;

	protected static int _InputBlockingCount;

	private static readonly ApplicationVersionInfo _ValidTrackingAuthorizationOSVersionInfo;

	private Action _OnConsentFlowComplete;

	private static Action _OnRequestTrackingAuthorizationComplete;

	public static Action OnCMPComplete;

	private static bool _ATTRequestedThisSession;

	public static bool IsATTResolved;

	private static bool _CMPFlowWasReconsent;

	private static Action _StartCMPFlowCompletion;

	protected static List<ImangiConsentGroup> RequiredConsentGroups;

	public static bool attAuthorizationStatus;

	private bool _IsAdMobInitizlized;

	private static bool _AttemptCMPWithoutNetworkCheck;

	private const float _CMPInputWatchdogTimeout = 15f;

	private static Coroutine _CMPInputWatchdog;

	private static bool _CMPAttemptAbandoned;

	private static Coroutine _BootCMPWatchdog;

	private static bool _BootCMPTimedOut;

	private static bool _BootCMPAttemptActive;

	private static bool _BootCMPHadError;

	public GameObject UiRoot;

	public GameObject UiAgeGatePrefab;

	public GameObject UiPrivacyPrefab;

	private UIPrivacyScreen UiPrivacyComponent;

	private UIAgeGateScreen UiAgeGateComponent;

	public const string LanguagePrefKey = "LangCode";

	public const string PositiveKey = "consent.yes";

	public const string NegativeKey = "consent.no";

	public const string InformKey = "consent.informed";

	public const string ConfirmKey = "consent.confirm";

	public const string MoreInfoKey = "consent.moreinfo";

	public const string ConfirmTitleKey = "consent.confirmation.title";

	public const string InformUnderAgeTitleKey = "consent.underage.title";

	public const string InformUnderAgeMessageKey = "consent.underage.inform";

	public const string InformReconsentTitleKey = "consent.reconsent.title";

	public const string InformReconsentMessageKey = "consent.reconsent.info";

	public const string NoInternetTitleKey = "consent.nointernet.title";

	public const string NoInternetKey = "consent.nointernet";

	public const string RestartTitleKey = "consent.restart.title";

	public const string RestartInfoKey = "consent.restart.info";

	public const string RestartCloseKey = "consent.restart.close";

	public const string RestartLaterKey = "consent.restart.later";

	public const string PlayerPrivacyKey = "consent.playerprivacy";

	protected static string _NativeLangCode;

	protected string _PromoRequestConfig;

	public const int DefaultFileVersion = -1;

	public const string FileVersionKey = "PrivacyFileVersion";

	protected static int FileVersionFromPromo;

	public static int LangIdx;

	private static string _RawLoadedText;

	protected Action _OnLoadStart;

	protected Action<float> _OnLoadProgress;

	protected Action _OnLoadComplete;

	protected static ConsentLanguageData _ConsentData;

	private const string _ConsentPathName = "consent";

	private const string _LangFileName = "ConsentText.json";

	private static bool _ShowMoreInfoButton;

	private SystemFlowState _CurrentSystemFlowState;

	private SystemFlowState _PendingSystemFlowState;

	private string _CurrentBodyText;

	private string _CurrentTitleText;

	private bool _CurrentIsInforming;

	private int _CurrentPrivacyQuestionIndex;

	private bool _IsUnderAge;

	private string _InformButtonText;

	private string _PositiveButtonText;

	private string _NegativeButtonText;

	private string _MoreInfoButtonText;

	private ImangiConsentGroup _CurrentConsentGroup;

	private Action<int> _System_OnClosedHandler;

	public static bool IsAdMobInitialized => false;

	public static string InformButtonText => null;

	public static string PositiveButtonText => null;

	public static string NegativeButtonText => null;

	public static string MoreInfoButtonText => null;

	public static void InitializeConfig(PromoFile inPromoFile)
	{
	}

	private static bool ProcessPrivacyConfigData(ConfigData inConfigData)
	{
		return false;
	}

	private static bool ProcessPrivacyConfigFlowData(ConfigData inConfigData)
	{
		return false;
	}

	private static bool ProcessPrivacyRegulationInfoData(ConfigData inConfigData)
	{
		return false;
	}

	public static string CreateConsentGroupTitleKey(ImangiConsentGroup inGroup)
	{
		return null;
	}

	public static string CreateConsentGroupInfoKey(ImangiConsentGroup inGroup)
	{
		return null;
	}

	public static string CreateConsentGroupConsentPromptKey(ImangiConsentGroup inGroup)
	{
		return null;
	}

	private void Awake()
	{
	}

	public static void Initialize()
	{
	}

	public static void StartPrivacyFlow(Action inOnComplete, bool inReconsent = false)
	{
	}

	public static void FauxLoadLanguageFile()
	{
	}

	public void LanguageLoadFailed()
	{
	}

	public void LanguageLoadFinished()
	{
	}

	public void StartPrivacyFlowAfterLanguageLoad()
	{
	}

	private void LanguagePicked(string inLanguage)
	{
	}

	private void SetupQuestionDataForRequiredConsentGroups()
	{
	}

	private void SendQuestionDataConsentResponses(bool isAgeConsent)
	{
	}

	private void Internal_ConsentFlowComplete()
	{
	}

	public static bool PrivacyRestrictedUser()
	{
		return false;
	}

	public static void RequestTrackingAuthorization(Action requestTrackingAuthorizationComplete)
	{
	}

	private static void OnTrackingAuthorizationComplete(int trackingAuthorizationStatus)
	{
	}

	private static void RequestATTAfterCMP(Action inOnComplete)
	{
	}

	private void PrivacyComplete()
	{
	}

	public static void LogEndPrivacyConsentFlowEvent()
	{
	}

	private static void CMPFlowFinished()
	{
	}

	public static void BeginNetworkOptimisticCMPAttempt()
	{
	}

	private static void StartCMPInputWatchdog()
	{
	}

	private static void StopCMPInputWatchdog()
	{
	}

	[IteratorStateMachine(typeof(_003CCMPInputWatchdogCoroutine_003Ed__63))]
	private static IEnumerator CMPInputWatchdogCoroutine()
	{
		return null;
	}

	private static void StartBootCMPWatchdog()
	{
	}

	private static void StopBootCMPWatchdog()
	{
	}

	[IteratorStateMachine(typeof(_003CBootCMPWatchdogCoroutine_003Ed__70))]
	private static IEnumerator BootCMPWatchdogCoroutine()
	{
		return null;
	}

	public static void StartCMPFlow()
	{
	}

	public static void StartCMPFlow(Action inOnComplete)
	{
	}

	private static void OnConsentInfoUpdated(FormError consentError)
	{
	}

	private static void Internal_ForceClose()
	{
	}

	public static void ShowPrivacyPolicy(Action<string> inOnShow, Action inOnFailed, ImangiConsentGroup inConsentGroup = ImangiConsentGroup.Unknown)
	{
	}

	public static void ShowToS(Action<string> inOnShow, Action inOnFailed)
	{
	}

	private static void DisableInput()
	{
	}

	public static void ResetPrivacyPolicy()
	{
	}

	private void ResetConcentInformation()
	{
	}

	private void ShowRestartPoupForReConsent()
	{
	}

	private static void EnableInput(bool inSetupNotifications = true)
	{
	}

	private void Internal_RunInGameFlow()
	{
	}

	public static void ContinuePrivacyFlow()
	{
	}

	private void Internal_ShowPrivacyConsent()
	{
	}

	public static void EndPrivacyFlow()
	{
	}

	private void Internal_EndPrivacyFlow()
	{
	}

	public static string GetLanguageCachedFilePath()
	{
		return null;
	}

	public static string GetLanguageShippedFilePath()
	{
		return null;
	}

	public static void RegisterLanguageFileCallbacks(Action inStartEvent, Action<float> inProgressEvent, Action inCompletedEvent)
	{
	}

	public static void UnregisterLanguageFileCallbacks(Action inStartEvent, Action<float> inProgressEvent, Action inCompletedEvent)
	{
	}

	public void LoadLanguageFile()
	{
	}

	[IteratorStateMachine(typeof(_003CLoadCachedLanguageFile_003Ed__137))]
	private IEnumerator LoadCachedLanguageFile()
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CLoadShippedLanguageFile_003Ed__138))]
	public IEnumerator LoadShippedLanguageFile()
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CDownloadLanguageText_003Ed__139))]
	public IEnumerator DownloadLanguageText()
	{
		return null;
	}

	protected void OnPromoRequestParseComplete(string inPromoRequestConfig)
	{
	}

	public static int GetLoadedLanguageVersion()
	{
		return 0;
	}

	public static string GetGameString(string inKey)
	{
		return null;
	}

	public static string[] GetNativeLanguageNames()
	{
		return null;
	}

	public void ClearLanguageData()
	{
	}

	public static void InitializeLanguageConfig(PromoFile inPromoFile)
	{
	}

	private static bool ProcessLanguageConfig(ConfigData inConfigData)
	{
		return false;
	}

	private void Internal_RunSystemFlow()
	{
	}

	[IteratorStateMachine(typeof(_003CSystemFlowCoroutine_003Ed__164))]
	private IEnumerator SystemFlowCoroutine()
	{
		return null;
	}

	private void System_ShowAgeGate()
	{
	}

	private void System_ShowCurrentPrivacyQuestion()
	{
	}

	private void System_ShowConfirmation()
	{
	}

	private void System_ShowUnderAgeInfo()
	{
	}

	private void System_ShowReConsentDirections()
	{
	}

	private void System_ShowResetInformation()
	{
	}

	private void System_ConsentFlowComplete(bool inUnderAge)
	{
	}

	private void System_OnConsentStepCompleted(int inResponse)
	{
	}

	private void SetPendingCompleteState()
	{
	}

	public void System_ShowDialog(string inTitle, string inBody, bool inIsInforming, Action<int> inOnClosed, ImangiConsentGroup inConsentGroup = ImangiConsentGroup.Unknown)
	{
	}

	private void OnAlertResponse(string inButtonText)
	{
	}

	private void OnMoreInfoPressed()
	{
	}

	private void System_ShowMoreInfo(string inMoreInfoURL)
	{
	}

	private void System_ReturnFromMoreInfo()
	{
	}

	private void System_ShouldNoShowMoreInfo()
	{
	}

	private void System_ReturnFromShouldNoShowMoreInfo(string inText = null)
	{
	}

	private void SetMoreInfoCallbacks()
	{
	}
}
