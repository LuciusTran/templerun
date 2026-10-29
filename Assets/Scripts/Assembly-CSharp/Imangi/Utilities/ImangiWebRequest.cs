using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Networking;

namespace Imangi.Utilities
{
	public class ImangiWebRequest : MonoBehaviour
	{
		[CompilerGenerated]
		private sealed class _003CSendWebRequest_003Ed__41 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public ImangiWebRequest _003C_003E4__this;

			private bool _003CisFinished_003E5__2;

			private bool _003Cretry_003E5__3;

			private bool _003Csuccess_003E5__4;

			private int _003CretryCount_003E5__5;

			private long _003CresponseCode_003E5__6;

			private string _003CdownloadedText_003E5__7;

			private UnityWebRequest _003CwebRequest_003E5__8;

			private UnityWebRequestAsyncOperation _003CwebRequestOperation_003E5__9;

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
			public _003CSendWebRequest_003Ed__41(int _003C_003E1__state)
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

		private string _RequestURL;

		private WebRequestMethod _RequestMethod;

		private Dictionary<string, string> _RequestHeaders;

		private Dictionary<string, object> _Form;

		private int _MaxRetryCount;

		private int _RetryDelay;

		private int _Timeout;

		private bool _RequesterVerboseLogging;

		private string _RequesterLogChannel;

		private Action<double> _OnStart;

		private Action<int, long, double> _OnRetry;

		private Action<bool, long, string, double> _OnFinished;

		private Action<float> _OnProgress;

		private Action<string, ImangiWebRequest> _OnPayloadError;

		private Action<ImangiWebRequest> _OnPayloadFormError;

		private bool _IsJSONRequest;

		private bool _IsSimpleRequest;

		private Func<string, UnityWebRequest> _UnitySimpleWebRequestFunction;

		private Func<string, string, UnityWebRequest> _UnityDataWebRequestFunction;

		private string _WebRequestPayload;

		private const string _LogChannel = "ImangiWebRequest";

		private const string _ContentTypeHeaderKey = "Content-Type";

		private const string _JSONContentTypeValue = "application/json";

		public const int MaxRetryCountDefault = 3;

		public const int RetryDelayDefault = 1;

		public string RequestURL => null;

		public WebRequestMethod RequestMethod => WebRequestMethod.POST;

		public Dictionary<string, string> RequestHeaders => null;

		public Dictionary<string, object> Form
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public static ImangiWebRequest Create()
		{
			return null;
		}

		public void RegisterEvents(Action<double> inOnStart, Action<int, long, double> inOnRetry, Action<bool, long, string, double> inOnFinished, Action<float> inOnProgress = null, Action<string, ImangiWebRequest> inOnPayloadError = null, Action<ImangiWebRequest> inOnPayloadFormError = null)
		{
		}

		public void UnregisterEvents()
		{
		}

		public void Setup(string inRequestURL, WebRequestMethod inRequestMethod, Dictionary<string, string> inRequestHeaders, Dictionary<string, object> inForm, int inMaxRetryCount = 3, int inRetryDelay = 1, int inTimeout = -1, bool inVerboseLogging = false, string inLogChannel = "ImangiWebRequest")
		{
		}

		private void SetRequestMethods()
		{
		}

		private void SetRequestPayload()
		{
		}

		public void Send()
		{
		}

		[IteratorStateMachine(typeof(_003CSendWebRequest_003Ed__41))]
		private IEnumerator SendWebRequest()
		{
			return null;
		}

		private UnityWebRequest GetNewWebRequest()
		{
			return null;
		}

		private string RequestHeadersToString()
		{
			return null;
		}

		private static bool WasRequestSuccessful(UnityWebRequest inWebRequest)
		{
			return false;
		}

		public static long ConvertNSURLConnectionErrorCodesToHTTPStatusCodes(long inErrorCode)
		{
			return 0L;
		}

		public static string GetURLBase(string inURL)
		{
			return null;
		}
	}
}
