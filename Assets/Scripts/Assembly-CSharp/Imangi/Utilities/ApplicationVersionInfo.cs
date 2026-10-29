using System;

namespace Imangi.Utilities
{
	[Serializable]
	public class ApplicationVersionInfo : IComparable
	{
		private const int _VALID_VERSION_NUM_LENGTH = 4;

		public readonly int Major;

		public readonly int Minor;

		public readonly int Patch;

		public readonly int Build;

		private ApplicationVersionInfo(params int[] inVersionValues)
		{
		}

		public override bool Equals(object inOther)
		{
			return false;
		}

		public override string ToString()
		{
			return null;
		}

		public string ToMajorMinorPatchString()
		{
			return null;
		}

		public override int GetHashCode()
		{
			return 0;
		}

		public static ApplicationVersionInfo FromVersionValues(params int[] inVersionValues)
		{
			return null;
		}

		public static ApplicationVersionInfo FromString(string inVersionString)
		{
			return null;
		}

		public static ApplicationVersionInfo FromSemVerString(string inVersionString)
		{
			return null;
		}

		private static int[] GetVersionIntegerValues(string inVersionString)
		{
			return null;
		}

		public static ApplicationVersionInfo FromUnityVersionString(string inUnityVersionString)
		{
			return null;
		}

		private static bool AreValidVersionValues(params int[] inVersionValues)
		{
			return false;
		}

		public int CompareTo(object inObject)
		{
			return 0;
		}

		public bool GreaterThan(ApplicationVersionInfo inOther)
		{
			return false;
		}

		public bool LessThan(ApplicationVersionInfo inOther)
		{
			return false;
		}

		public bool GreaterThanOrEqualTo(ApplicationVersionInfo inOther)
		{
			return false;
		}

		public bool LessThanOrEqualTo(ApplicationVersionInfo inOther)
		{
			return false;
		}

		public bool IsInRange(ApplicationVersionInfo inMinVer, ApplicationVersionInfo inMaxVer)
		{
			return false;
		}

		public static ApplicationVersionInfo[] RangeFromOldRangeString(string inString)
		{
			return null;
		}
	}
}
