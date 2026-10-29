using System;
using System.Collections.Generic;
using Imangi.Utilities;
using UnityEngine;

namespace Imangi.RV
{
	public class ImangiRVS : MonoBehaviour
	{
		public delegate void ImangiRVS_SVSuccessfulDelegate(RVCheck inRVCheck, Dictionary<string, int> inProductIds, long inSRCode, double inSRTSeconds, int inSPTMicroseconds);

		public delegate void ImangiRVS_SVFailureDelegate(RVCheck inRVCheck, int inRVSLECode, int inSRCode, string inSEResponse);

		public struct PData
		{
			public string IType;

			public string PToken;

			public string OID;

			public string PID;

			public TRStoreTransaction Transaction;

			public PData(string inIType, TRStoreTransaction inTransaction)
			{
				IType = null;
				PToken = null;
				OID = null;
				PID = null;
				Transaction = null;
			}
		}

		public struct RVCheck
		{
			public ImangiRVS_SVSuccessfulDelegate SVSuccessEvent;

			public ImangiRVS_SVFailureDelegate SVErrorEvent;

			public ImangiWebRequest WebRequest;

			public List<PData> PDatas;

			public string PName;

			public string AR;

			public string Context;

			public Dictionary<string, object> Form;

			public TRStoreTransaction Transaction;

			public string VType;

			public double StartingTimeStamp;

			public double PauseTimeStamp;

			public double TotalPauseTimeInSeconds;

			private const string _FOID = "GPA.3340-7461-0672-68911";

			public RVCheck(TRStoreTransaction inTransaction, string inContext = null, ImangiRVS_SVSuccessfulDelegate inSVSuccessEvent = null, ImangiRVS_SVFailureDelegate inSVErrorEvent = null)
			{
				SVSuccessEvent = null;
				SVErrorEvent = null;
				WebRequest = null;
				PDatas = null;
				PName = null;
				AR = null;
				Context = null;
				Form = null;
				Transaction = null;
				VType = null;
				StartingTimeStamp = 0.0;
				PauseTimeStamp = 0.0;
				TotalPauseTimeInSeconds = 0.0;
			}

			public RVCheck(List<TRStoreTransaction> inTransactions, string inContext = null, ImangiRVS_SVSuccessfulDelegate inSVSuccessEvent = null, ImangiRVS_SVFailureDelegate inSVErrorEvent = null)
			{
				SVSuccessEvent = null;
				SVErrorEvent = null;
				WebRequest = null;
				PDatas = null;
				PName = null;
				AR = null;
				Context = null;
				Form = null;
				Transaction = null;
				VType = null;
				StartingTimeStamp = 0.0;
				PauseTimeStamp = 0.0;
				TotalPauseTimeInSeconds = 0.0;
			}

			private void OnPause(bool inPause)
			{
			}

			public void OnStart(double inTimeStamp)
			{
			}

			public void OnRetry(int inCurrentRetryIndex, long inPreviousResponseCode, double inTimeStamp)
			{
			}

			public void OnFinished(bool inSuccess, long inResponseCode, string inDownloadedText, double inTimeStamp)
			{
			}
		}

		public delegate void LogPayloadErrorDelegate(string inReason, string inMethod, string inURLBase, string inForm);

		public static Action<bool> OnPauseEvent;

		public static LogPayloadErrorDelegate OnLogPayloadError;

		public static LogPayloadErrorDelegate OnLogPayloadFormError;

		public static ImangiRVS_SVSuccessfulDelegate OnLogSVSuccess;

		public static ImangiRVS_SVFailureDelegate OnLogFailedServerCommunication;

		public const string ConfigKey = "ImangiRVSConfigKey";

		public const string LogChannel = "TRImangiStoreManager ImangiRVS";

		private static bool _VerboseLogging;

		public const string PVType = "purchase";

		public const string CVType = "contentCheck";

		protected string _RVWebRequestUrl;

		protected WebRequestMethod _RVWebRequestMethod;

		protected Dictionary<string, string> _RVRequestHeaders;

		protected int _RetryCount;

		protected int _RetryDelay;

		protected int _Timeout;

		protected static int PVersion;

		protected static ImangiRVS _Instance;

		protected static GameObject _ImangiRVSGameObject;

		protected const string _ITypeDefault = "inapp";

		private int _DM;

		private string _AV;

		private const string _URLKey = "u";

		private const string _HeaderKey = "h";

		private const string _PVerDictKey = "pv";

		private const string _PSIDDictKey = "psi";

		private const string _VTypeDictKey = "vt";

		private const string _AVDictKey = "av";

		private const string _DMDictKey = "dm";

		private Dictionary<SRType, List<int>> _MappedWRCodes;

		private const string _PNameDictKey = "pn";

		private const string _PDatasDictKey = "dl";

		private const string _ITypeDictKey = "t";

		private const string _PTokenDictKey = "pt";

		private const string _OIDDictKey = "o";

		private const string _PIDDictKey = "p";

		public static bool VerboseLogging => false;

		public static ImangiRVS GetInstance()
		{
			return null;
		}

		public void Initialize(string inConfigText)
		{
		}

		public void SetAV(string inAV)
		{
		}

		public void SetRVConfigData(Dictionary<SRType, List<int>> inMappedWRCodes, int inNumReconnectAttempts, int inTimeoutTime, int inRetryDelay)
		{
		}

		private void OnApplicationPause(bool inPaused)
		{
		}

		public void StartRVPCheck(TRStoreTransaction inPurchase, ImangiRVS_SVSuccessfulDelegate inSVSuccessEvent = null, ImangiRVS_SVFailureDelegate inSVErrorEvent = null)
		{
		}

		public bool StartRVNPCheck(string inContext, List<TRStoreTransaction> inPurchases, ImangiRVS_SVSuccessfulDelegate inSVSuccessfulEvent = null, ImangiRVS_SVFailureDelegate inSVErrorEvent = null)
		{
			return false;
		}

		protected void SetupContextAndStartRVCheck(RVCheck inRVCheck, PSIType inPSIType, string inContext)
		{
		}

		protected void PSWRR(RVCheck inRVCheck, bool inSuccess, long inRCode, string inDownloadedText, double inTimeStamp)
		{
		}

		private static void FSC(RVCheck inRVCheck, int inRVSLECode, int inSRCode, string inSEResponse)
		{
		}

		private void SVC(RVCheck inRVCheck, Dictionary<string, object> inPIDResponses, long inSRCode, double inSRTSeconds, int inSPTMicroseconds)
		{
		}

		private void OnPayloadError(string inPayload, ImangiWebRequest inWebRequest)
		{
		}

		private void OnPayloadFormError(ImangiWebRequest inWebRequest)
		{
		}

		private void SetupAttributesAndLogPayloadError(ImangiWebRequest inWebRequest, bool inIsReasonEmpty, LogPayloadErrorDelegate inLogPayloadErrorDelegate)
		{
		}

		private string SerializeForm(Dictionary<string, object> inForm)
		{
			return null;
		}

		private Dictionary<string, string> MakePDataDictionary(string inIType, string inPToken, string inOID, string inPID)
		{
			return null;
		}

		private void SetupRVCheck(RVCheck inRVCheck)
		{
		}
	}
}
