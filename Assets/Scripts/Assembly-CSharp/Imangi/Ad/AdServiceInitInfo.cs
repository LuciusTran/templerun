using System;
using System.Collections.Generic;
using System.Text;

namespace Imangi.Ad
{
	[Serializable]
	public class AdServiceInitInfo
	{
		protected static string _DefaultServiceInitInfoName;

		protected static string _ServiceInitInfoName;

		protected static string _ServiceInitInfoFilename;

		protected static string _ServiceInitInfoAssetPath;

		protected static string _ServiceInitInfoFullPath;

		private Dictionary<AdServicePlatform, AdPlatformInitializationInfo> PlatformInfo;

		public List<string> AdSpaceNames;

		public static string ServiceInitInfoName
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		protected static string ServiceInitInfoFilename => null;

		protected static string ServiceInitInfoAssetPath => null;

		protected static string ServiceInitInfoFullPath => null;

		public AdServiceInitInfo()
		{
		}

		public AdServiceInitInfo(Dictionary<string, object> inDict)
		{
		}

		public AdPlatformInitializationInfo GetInitInfoForPlatform(AdServicePlatform inPlatform, bool inCreateIfNotFound = false)
		{
			return null;
		}

		public Dictionary<string, object> ToDict()
		{
			return null;
		}

		public void FromDict(Dictionary<string, object> inDict)
		{
		}

		public bool SaveToFile()
		{
			return false;
		}

		public bool LoadFromFile()
		{
			return false;
		}

		public void Dump(string inIndentString, StringBuilder inDumpSB)
		{
		}
	}
}
