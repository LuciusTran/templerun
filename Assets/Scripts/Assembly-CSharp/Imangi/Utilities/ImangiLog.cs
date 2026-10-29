using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Text;
using UnityEngine;

namespace Imangi.Utilities
{
	public class ImangiLog
	{
		public enum EnabledState
		{
			Disabled = 0,
			Enabled = 1,
			EnabledStack = 2
		}

		protected const string _LogClassPath = "com.imangi.imangiutilities.ImangiAndroidLog";

		protected static AndroidJavaClass _LogClass;

		protected static object[] _SingleArgArray;

		protected static bool _IsEnabled;

		public static string LogChannel;

		public static string LogChannelConfigResourcesFilePath;

		public static string LogChannelConfigFilePath;

		private static Dictionary<string, EnabledState> EnabledChannels;

		private const int _TargetStringBuilderBufferSize = 65536;

		private const int _TargetCharacterCapacity = 32768;

		private static StringBuilder _StringBuilder;

		protected const int MaxLogLineLength = 1023;

		protected static AndroidJavaClass LogClass => null;

		public static bool IsEnabled
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		protected static void Android_SetTag(string inTag)
		{
		}

		protected static void Android_Log(string inMessage)
		{
		}

		protected static void Android_Warn(string inMessage)
		{
		}

		protected static void Android_Error(string inMessage)
		{
		}

		protected static void ImangiOSLog_Log(string inMessage)
		{
		}

		protected static void ImangiOSLog_Warn(string inMessage)
		{
		}

		protected static void ImangiOSLog_Error(string inMessage)
		{
		}

		public static void LoadLogChannelConfig()
		{
		}

		public static List<string> GetLogChannelKeys()
		{
			return null;
		}

		public static void EnabledAllChannels(EnabledState inState)
		{
		}

		public static void EnabledChannel(string channel, EnabledState state)
		{
		}

		public static bool IsChannelEnabled(string channel)
		{
			return false;
		}

		public static EnabledState ChannelEnabledState(string channel)
		{
			return EnabledState.Disabled;
		}

		public static bool IsChannelEnabledStack(string channel)
		{
			return false;
		}

		private static string GetOSString(string channel, string type, string format, params object[] paramList)
		{
			return null;
		}

		public static string BuildStringWithFormat(string format, params object[] paramList)
		{
			return null;
		}

		[Conditional("IMANGI_LOGGING")]
		public static void Log(string channel, string format, params object[] paramList)
		{
		}

		[Conditional("IMANGI_LOGGING")]
		public static void LogIf(bool condition, string channel, string format, params object[] paramList)
		{
		}

		public static void ForceLog(string channel, string format, params object[] paramList)
		{
		}

		[Conditional("IMANGI_LOGGING")]
		public static void Warn(string channel, string format, params object[] paramList)
		{
		}

		[Conditional("IMANGI_LOGGING")]
		public static void WarnIf(bool condition, string channel, string format, params object[] paramList)
		{
		}

		public static void ForceWarn(string channel, string format, params object[] paramList)
		{
		}

		public static void Error(string channel, string format, params object[] paramList)
		{
		}

		public static void ErrorIf(bool condition, string channel, string format, params object[] paramList)
		{
		}

		public static void ForceError(string channel, string format, params object[] paramList)
		{
		}

		protected static void ImangiOSLog_LongLog(string inMessage, Action<string> inLogFunction)
		{
		}
	}
}
