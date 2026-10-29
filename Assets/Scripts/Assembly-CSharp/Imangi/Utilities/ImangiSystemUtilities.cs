using System.Collections.Generic;
using UnityEngine;

namespace Imangi.Utilities
{
	public class ImangiSystemUtilities
	{
		public static SerializationMode ImangiSerializationMode;

		public static readonly string LogChannel;

		protected static string _VendorID;

		protected static string _AdvertisingID;

		protected static bool _AdTrackingEnabled;

		public static void DumpAssemblyInformation(bool inDumpClassLists)
		{
		}

		public static ApplicationVersionInfo GetOSVersionNumber()
		{
			return null;
		}

		public static bool IsValidForOSVersion(ApplicationVersionInfo inMinVer, ApplicationVersionInfo inMaxVer = null)
		{
			return false;
		}

		public static long GetOSTotalStorage()
		{
			return 0L;
		}

		public static long GetOSFreeStorage()
		{
			return 0L;
		}

		public static int GetHardwareMemorySize()
		{
			return 0;
		}

		private static int RoundUp(int numToRound, int multiple)
		{
			return 0;
		}

		public static List<string> GetDeviceTypes(RuntimePlatform inPlatform)
		{
			return null;
		}

		public static string GetDeviceTypeString(RuntimePlatform inPlatform)
		{
			return null;
		}

		public static void PrepAdvertisingID()
		{
		}

		public static string GetAdvertisingID()
		{
			return null;
		}

		public static bool IsAdTrackingEnabled()
		{
			return false;
		}

		public static string GetVendorID()
		{
			return null;
		}
	}
}
