using System;
using System.Runtime.CompilerServices;
using UnityEngine;

public class Promotion : MonoBehaviour
{
	public static readonly string LogChannel;

	public const string NextPromoCheckPrefKey = "TR NextPromoCheck";

	protected bool _TestMode;

	private bool _HasFetchedRemoteConfigData;

	public string url;

	public static Promotion Instance;

	protected PromoFile PromoFileInstance;

	[CompilerGenerated]
	private static Action m_OnPromoLoadStartEvent;

	[CompilerGenerated]
	private static Action<float> m_OnPromoLoadProgressEvent;

	[CompilerGenerated]
	private static Action m_OnPromoLoadCompletedEvent;

	[CompilerGenerated]
	private static Action m_OnPromoProcessedCompletedEvent;

	public bool TestMode => false;

	private static event Action OnPromoLoadStartEvent
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

	private static event Action<float> OnPromoLoadProgressEvent
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

	private static event Action OnPromoLoadCompletedEvent
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

	private static event Action OnPromoProcessedCompletedEvent
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

	public static void RegisterCallbacks(Action inStartEvent, Action<float> inProgressEvent, Action inCompletedEvent, Action inProcessedEvent)
	{
	}

	public static void UnregisterCallbacks(Action inStartEvent, Action<float> inProgressEvent, Action inCompletedEvent, Action inProcessedEvent)
	{
	}

	private void Start()
	{
	}

	private void OnPromoLoadStart()
	{
	}

	private void OnPromoLoadProgress(float inProgress)
	{
	}

	private void OnPromoLoadComplete()
	{
	}

	private void OnPromoProcessingComplete()
	{
	}

	public void LoadPromo(bool inForce, bool inloadingAfterRun)
	{
	}

	private bool FetchNewRemoteConfigData()
	{
		return false;
	}

	private void OnRemoteConfigActivateComplete(bool inSuccess)
	{
	}
}
