using System;
using System.Collections.Generic;

namespace Imangi.Utilities
{
	[Serializable]
	public class ImangiSystemRequirements : IImangiRequirements, IParsableJSONListElement
	{
		private const string _LogChannel = "ImangiSystemRequirements";

		private string _PlatformKey;

		public string Platform;

		private const string _AppVersionRangeKey = "AV";

		private const string _MinAppVersionKey = "MinAppVersion";

		public ApplicationVersionInfo MinAppVersion;

		private const string _MaxAppVersionKey = "MaxAppVersion";

		public ApplicationVersionInfo MaxAppVersion;

		private const string _OSVersionRangeKey = "OV";

		private const string _MinOSVersionKey = "MinOSVersion";

		public ApplicationVersionInfo MinOSVersion;

		private const string _MaxOSVersionKey = "MaxOSVersion";

		public ApplicationVersionInfo MaxOSVersion;

		private const string _UnityVersionRangeKey = "UV";

		private const string _MinUnityVersionKey = "MinUnityVersion";

		public ApplicationVersionInfo MinUnityVersion;

		private const string _MaxUnityVersionKey = "MaxUnityVersion";

		public ApplicationVersionInfo MaxUnityVersion;

		private const string _DevicesKey = "D";

		public List<string> Devices;

		private const string _OmitDevicesKey = "OD";

		public List<string> OmitDevices;

		private const string _Memory_MinKey = "MMi";

		public int Memory_Min;

		private const string _Memory_MaxKey = "MMx";

		public int Memory_Max;

		public ImangiSystemRequirements()
		{
		}

		public ImangiSystemRequirements(string inJSONString)
		{
		}

		public void Clear()
		{
		}

		public Dictionary<string, object> ToDict()
		{
			return null;
		}

		public bool FromDict(Dictionary<string, object> inDict)
		{
			return false;
		}

		public string GetDescription()
		{
			return null;
		}

		protected bool IsValidForPlatform()
		{
			return false;
		}

		protected bool IsValidForAppVersion(ApplicationVersionInfo inAppVersion)
		{
			return false;
		}

		protected bool IsValidForOSVersion()
		{
			return false;
		}

		protected bool IsValidForUnityVersion()
		{
			return false;
		}

		protected bool IsValidForDevice()
		{
			return false;
		}

		protected bool IsValidForMemory()
		{
			return false;
		}

		public bool IsValid(ApplicationVersionInfo inAppVersion)
		{
			return false;
		}

		public bool IsDefault()
		{
			return false;
		}
	}
}
