using System;
using System.Collections.Generic;
using System.Diagnostics;
using Firebase.RemoteConfig;

namespace Imangi.RemoteConfig
{
	public static class RemoteConfig
	{
		public enum ValueSource
		{
			StaticValue = 0,
			DefaultValue = 2,
			RemoteValue = 1
		}

		public const string LogChannel = "RemoteConfig";

		public static bool IsDeveloperMode;

		public static FirebaseRemoteConfig remoteConfig;

		public static TimeSpan CacheExpiration;

		private static Action _OnFetchComplete;

		private static readonly Stopwatch _FetchTimer;

		public static void InitAndFetchRemoteConfig(Dictionary<string, object> inDefaults, Action inFetchComplete)
		{
		}

		private static void SetDefault(Dictionary<string, object> inDefaults)
		{
		}

		private static void FetchqAndActivate(Dictionary<string, object> inDefaults)
		{
		}

		public static bool GetBoolValue(string inKey)
		{
			return false;
		}

		public static double GetDoubleValue(string inKey)
		{
			return 0.0;
		}

		public static long GetLongValue(string inKey)
		{
			return 0L;
		}

		public static string GetStringValue(string inKey)
		{
			return null;
		}

		public static ValueSource GetValueSource(string inKey)
		{
			return ValueSource.StaticValue;
		}
	}
}
