using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Imangi.Utilities;
using UnityEngine;
using UnityEngine.Networking;

namespace Imangi.Privacy
{
	public class ImangiPrivacyManager : MonoBehaviour
	{
		[CompilerGenerated]
		private sealed class _003CPostConsentStateChange_003Ed__93 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public ImangiPrivacyManager _003C_003E4__this;

			private bool _003CisFinished_003E5__2;

			private bool _003Cretry_003E5__3;

			private bool _003Csuccess_003E5__4;

			private int _003CretryCount_003E5__5;

			private long _003CtimeStamp_003E5__6;

			private WWWForm _003CwwwForm_003E5__7;

			private UnityWebRequest _003CwebRequest_003E5__8;

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
			public _003CPostConsentStateChange_003Ed__93(int _003C_003E1__state)
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

		public const string FeatureName = "CF";

		public static readonly string LogChannel;

		public static readonly bool VerboseLogging;

		protected static ImangiPrivacyManager Instance;

		protected static GameObject ImangiPrivacyGameObject;

		protected static readonly string ImangiPrivacyInfoKey;

		protected static readonly string AppIDKey;

		protected static readonly string PlatformIDKey;

		protected static readonly string AppVersionKey;

		protected static readonly string IDFVKey;

		protected static readonly string IDFAKey;

		protected static readonly string ABIDKey;

		protected static readonly string ConsentLanguageKey;

		protected static readonly string ConsentTextVersionKey;

		protected static readonly string ConsentCountryCodeKey;

		protected static readonly string LastChangePostedTimestampKey;

		protected static readonly string HasFinishedConsentFlowKey;

		protected static readonly string ReConsentRequiredDateTimeKey;

		protected static readonly string ConsentFlowVersionKey;

		protected static readonly string SaveFileName;

		protected static readonly string ConsentLanguageDefault;

		protected static readonly string ConsentTextVersionDefault;

		protected static readonly string ConsentCountryCodeDefault;

		protected static readonly int ConsentFlowVersionDefault;

		public const string _BasePrivacyPolicyAppURL = "privacy-policy-app.html";

		protected ImangiPrivacyInfo PrivacyInfo;

		protected long LastChangePostedTimestamp;

		protected bool PendingStateChangedPostRequest;

		protected bool PendingSerialize;

		protected bool IsInitialized;

		protected bool IsDeserialized;

		protected bool HasFinishedConsentFlow;

		protected DateTime ReConsentRequiredDateTime;

		protected string ConsentWebRequestUrl;

		protected string AuthHeader;

		protected string IDFA;

		protected string ConsentLanguage;

		protected string ConsentTextVersion;

		protected string ConsentCountryCode;

		protected int ConsentFlowVersion;

		protected ImangiPrivacyConfigInfo ConfigInfo;

		[CompilerGenerated]
		private Action<int> m_OnTrackingAuthorizationComplete;

		protected event Action<int> OnTrackingAuthorizationComplete
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public static ImangiPrivacyManager GetInstance()
		{
			return null;
		}

		public static void CreateInstance()
		{
		}

		public void Initialize(ImangiPrivacyConfigInfo inConfig)
		{
		}

		private void Initialize_Internal(ImangiPrivacyConfigInfo inConfig)
		{
		}

		private void Update()
		{
		}

		private void OnDestroy()
		{
		}

		public virtual void RequestTrackingAuthorization(Action<int> trackingAuthorizationComplete)
		{
		}

		public virtual int GetAuthorizationStatus()
		{
			return 0;
		}

		public void TrackingAuthorizationCompletion(string trackingAuthorizationStatus)
		{
		}

		private DateTime GetDateTimeUTCNow()
		{
			return default;
		}

		private void GetIDFA()
		{
		}

		private string GenerateAuthHeader()
		{
			return null;
		}

		public void ConfigureRegulationType()
		{
		}

		public void ConfigureRegulationTypeFromRC(ImangiRegulationType type = ImangiRegulationType.Unknown)
		{
		}

		public void SetConsentLanguage(string inConsentLanguage)
		{
		}

		public void SetConsentTextVersion(string inConsentTextVersion)
		{
		}

		public void SetConsentCountryCode(string inConsentCountryCode)
		{
		}

		public void SetConsentFlowVersion(int inConsentFlowVersion)
		{
		}

		public void SetHasFinishedConsentFlow()
		{
		}

		public bool IsGlobalReConsentRequired(DateTime inNow)
		{
			return false;
		}

		public bool IsReConsentRequiredByDate(DateTime inNow)
		{
			return false;
		}

		public bool IsConsentRequiredByVersion()
		{
			return false;
		}

		public bool IsConsentRequiredBecauseOfResonsent()
		{
			return false;
		}

		public void SetReconsetnState(bool value)
		{
		}

		public bool ShouldShowConsentFlow()
		{
			return false;
		}

		public bool IsConsentRequiredForCountry(ImangiLocaleInfo inImangiLocaleInfo = null)
		{
			return false;
		}

		public ImangiRegulationType GetRegulationType(ImangiLocaleInfo inImangiLocaleInfo = null)
		{
			return ImangiRegulationType.GDPR;
		}

		protected bool IsConsentRequiredForConsentGroup(ImangiConsentGroup inConsentGroup)
		{
			return false;
		}

		public bool IsOfKnownAge()
		{
			return false;
		}

		public bool IsOfAgeToConsent()
		{
			return false;
		}

		public bool IsOfAgeToConsentWasOffline()
		{
			return false;
		}

		public int GetAgeOfConsent()
		{
			return 0;
		}

		public bool IsConsentKnown(ImangiConsentGroup inConsentGroup)
		{
			return false;
		}

		public bool HasConsent(ImangiConsentGroup inConsentGroup, ImangiLocaleInfo inImangiLocaleInfo = null)
		{
			return false;
		}

		public void SetMainConsentFlowStates(bool inIsOverAgeCheck, Dictionary<ImangiConsentGroup, ImangiConsentState> inConsentStates)
		{
		}

		public void SetConsentStates(Dictionary<ImangiConsentGroup, ImangiConsentState> inConsentStates)
		{
		}

		public void SetConsentState(ImangiConsentGroup inConsentGroup, ImangiConsentState inGivesConsent)
		{
		}

		public ImangiConsentState GetConsentState(ImangiConsentGroup inConsentGroup)
		{
			return ImangiConsentState.NoConsent;
		}

		public ImangiConsentType GetConsentType(ImangiConsentGroup inConsentGroup)
		{
			return ImangiConsentType.None;
		}

		public void GetConsentGroupsThatRequireConsent(ref List<ImangiConsentGroup> refConsentGroups)
		{
		}

		public List<ImangiConsentGroup> GetMainConsentFlowGroups()
		{
			return null;
		}

		public string GetPrivacyPolicyURL(string inLanguageCode, string inCountryCode, ImangiConsentGroup inConsentGroup = ImangiConsentGroup.Unknown)
		{
			return null;
		}

		protected static string GetFullSaveFilePath()
		{
			return null;
		}

		public string GetPrivacyJSONString()
		{
			return null;
		}

		protected bool Serialize()
		{
			return false;
		}

		public void Deserialize(bool inForceDeserialize = false)
		{
		}

		protected void FinishInitialization()
		{
		}

		protected void SetPendingSerialize()
		{
		}

		protected void ConsentStateChanged()
		{
		}

		[IteratorStateMachine(typeof(_003CPostConsentStateChange_003Ed__93))]
		protected IEnumerator PostConsentStateChange()
		{
			return null;
		}

		protected WWWForm GetConsentStateChangedPostRequestWWWForm()
		{
			return null;
		}

		public bool IsGDPR()
		{
			return false;
		}

		public bool IsCCPA()
		{
			return false;
		}
	}
}
