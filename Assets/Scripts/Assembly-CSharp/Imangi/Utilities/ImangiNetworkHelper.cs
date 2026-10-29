using System;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace Imangi.Utilities
{
	public class ImangiNetworkHelper : MonoBehaviour
	{
		protected static ImangiNetworkHelper Instance;

		public static readonly string LogChannel;

		public static bool ImangiNetworkHelper_VerboseLogging;

		protected static NetworkReachability CurrentReachability;

		[CompilerGenerated]
		private static Action<NetworkReachability, NetworkReachability> m_OnNetworkReachabilityChanged;

		protected const float ReachabilityCheckTime = 1f;

		protected float TimeSinceLastReachabilityCheck;

		public static int WebRequestTimeout => 0;

		protected static event Action<NetworkReachability, NetworkReachability> OnNetworkReachabilityChanged
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

		public static void ImangiNetworkHelper_LogMessage(string inMessage, params object[] paramList)
		{
		}

		public static void ImangiNetworkHelper_LogMessageForced(string inMessage, params object[] paramList)
		{
		}

		protected static NetworkReachability GetEffectiveReachability()
		{
			return NetworkReachability.NotReachable;
		}

		protected void CacheCurrentReachability()
		{
		}

		protected static ImangiNetworkHelper GetInstance()
		{
			return null;
		}

		public static bool CheckNetworkStatus()
		{
			return false;
		}

		public static void AddOnNetworkReachabilityChangedDelegate(Action<NetworkReachability, NetworkReachability> inOnReachabilityChanged)
		{
		}

		public static void RemoveOnNetworkReachabilityChangedDelegate(Action<NetworkReachability, NetworkReachability> inOnReachabilityChanged)
		{
		}

		public void Update()
		{
		}
	}
}
