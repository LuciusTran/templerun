using System;

namespace Imangi.CrashReporter
{
	public static class CrashReporter
	{
		public static bool IsCollectionEnabled
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public static void Log(string inMessage)
		{
		}

		public static void LogException(Exception inException)
		{
		}

		public static void SetCustomKey(string inKey, string inValue)
		{
		}

		public static void SetUserId(string inIdentifier)
		{
		}
	}
}
