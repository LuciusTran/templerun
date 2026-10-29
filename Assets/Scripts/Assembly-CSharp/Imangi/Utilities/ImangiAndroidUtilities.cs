using System;
using UnityEngine;

namespace Imangi.Utilities
{
	public class ImangiAndroidUtilities
	{
		public static readonly string UnityPlayerClassPath;

		protected static AndroidJavaClass ImangiUtilitiesActivityClass;

		protected static readonly string ImangiUtilitiesActivityClassPath;

		public static AndroidJavaClass GetAndroidJavaClass(string classPath)
		{
			return null;
		}

		public static AndroidJavaObject CreateAndroidJavaObject(string classPath)
		{
			return null;
		}

		public static AndroidJavaObject GetCurrentActivity()
		{
			return null;
		}

		public static DateTime ConvertJavaTimestampToDateTimeUtc(long javaTimestamp)
		{
			return default;
		}

		public static DateTime ConvertJavaTimestampToDateTimeLocal(long javaTimestamp)
		{
			return default;
		}

		private static AndroidJavaClass GetImangiUtilitiesActivityClass()
		{
			return null;
		}

		public static bool GetVerboseLogging()
		{
			return false;
		}

		public static void SetVerboseLogging(bool inEnabled)
		{
		}
	}
}
