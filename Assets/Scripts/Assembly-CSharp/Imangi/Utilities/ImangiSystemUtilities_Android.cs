using UnityEngine;

namespace Imangi.Utilities
{
	public class ImangiSystemUtilities_Android
	{
		public static class AndroidVersion
		{
			private static AndroidJavaClass _VersionInfo;

			private static string _RELEASE;

			public static string RELEASE => null;

			public static string DEBUG_OUTPUT => null;

			static AndroidVersion()
			{
			}
		}

		private const uint kMegabyte = 1048576u;

		public static bool GetAndroidVersionNumber(out int outMajor, out int outMinor, out int outPatch)
		{
			outMajor = default;
			outMinor = default;
			outPatch = default;
			return false;
		}

		public static ApplicationVersionInfo GetAndroidVersionNumber()
		{
			return null;
		}

		private static AndroidJavaObject GetMemoryInfo()
		{
			return null;
		}

		public static int GetAvailMemory()
		{
			return 0;
		}

		public static int GetTotalMemory()
		{
			return 0;
		}
	}
}
