using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

public class RemoteConfigManager : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class _003CFetchWatchdogCoroutine_003Ed__23 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public RemoteConfigManager _003C_003E4__this;

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
		public _003CFetchWatchdogCoroutine_003Ed__23(int _003C_003E1__state)
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

	private const string _LogChannel = "RemoteConfigManager";

	private const float _FetchTimeoutTime = 8f;

	private bool _FetchTimedOut;

	private bool _IsFetching;

	private TimeSpan _CacheExpiration;

	private bool _Initialized;

	private Action<bool> _CallbackHandler;

	private static DateTime _LastFetchStartedUtc;

	private Coroutine _FetchWatchdog;

	public static bool? LastFetchReachable { get; private set; }

	public static float LastFetchRealtime { get; private set; }

	private static void RecordFetchStarted()
	{
	}

	private static void RecordFetchOutcome(bool inReportedSuccess)
	{
	}

	private void OnFetchComplete()
	{
	}

	private void OnRemoteConfigFetchComplete(bool inSuccess)
	{
	}

	private void StartFetchWatchdog()
	{
	}

	private void StopFetchWatchdog()
	{
	}

	[IteratorStateMachine(typeof(_003CFetchWatchdogCoroutine_003Ed__23))]
	private IEnumerator FetchWatchdogCoroutine()
	{
		return null;
	}

	public bool Initialize(Action<bool> inFetchComplete)
	{
		return false;
	}

	public bool RefetchAndActivate(Action<bool> inFetchComplete, bool forceOverrideCallback = false)
	{
		return false;
	}
}
