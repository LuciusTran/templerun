using System;
using AdjustSdk;
using UnityEngine;

namespace Imangi.AdjustSDK
{
	public class AdjustManager
	{
		public const string LogChannel = "AdjustManager";

		public const string LogDelegateChannel = "ImangiAdjust";

		public const string AdjustPrefabPath = "ImangiAdjustPrefab";

		private static Action<AdjustSessionSuccess> OnSessionSuccess;

		private static Action<AdjustSessionFailure> OnSessionFailure;

		private static Action<AdjustEventSuccess> OnEventSuccess;

		private static Action<AdjustEventFailure> OnEventFailure;

		private static AdjustConfig config;

		public static GameObject AdjustObject { get; private set; }

		public static Adjust AdjustComponent { get; private set; }

		public static bool Initialize(string AnalyticsID = null, Action<AdjustAttribution> OnAttributionChanged = null)
		{
			return false;
		}

		public static void AttributionChangedCallback(AdjustAttribution attributionData)
		{
		}

		private static bool InstantiateAdjustPrefab()
		{
			return false;
		}

		public static void FireAdjustEvent(string ID)
		{
		}

		public static void FireAdjustRevenueEvent(string ID, string currency, double amount, string transactionID)
		{
		}

		private static void AdjustLogDelegate(string inMessage)
		{
		}

		private static void AdjustSessionSuccessDelegate(AdjustSessionSuccess inSuccess)
		{
		}

		private static void AdjustSessionFailureDelegate(AdjustSessionFailure inFailure)
		{
		}

		private static void AdjustEventSuccessDelegate(AdjustEventSuccess inSuccess)
		{
		}

		private static void AdjustEventFailureDelegate(AdjustEventFailure inFailure)
		{
		}

		private static void AdjustDeferredDeeplinkCallback(string inDeeplink)
		{
		}

		public static void RegisterSessionInitCallbacks(Action<AdjustSessionSuccess> inOnSuccess, Action<AdjustSessionFailure> inOnFailure)
		{
		}

		public static void UnregisterSessionInitCallbacks(Action<AdjustSessionSuccess> inOnSuccess, Action<AdjustSessionFailure> inOnFailure)
		{
		}

		public static void RegisterEventCallbacks(Action<AdjustEventSuccess> inOnSuccess, Action<AdjustEventFailure> inOnFailure)
		{
		}

		public static void UnregisterEventCallbacks(Action<AdjustEventSuccess> inOnSuccess, Action<AdjustEventFailure> inOnFailure)
		{
		}
	}
}
