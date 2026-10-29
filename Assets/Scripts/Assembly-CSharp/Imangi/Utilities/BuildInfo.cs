using System;
using System.Collections.Generic;

namespace Imangi.Utilities
{
	public class BuildInfo : ImangiTextAsset
	{
		protected const string _VersionKeyName = "V";

		protected const string _AppVersionKeyName = "AV";

		protected const string _BuildVersionKeyName = "BV";

		protected const string _BuildTagKeyName = "BT";

		public ApplicationVersionInfo Version;

		[Obsolete("This field is deprecated. Please use the Version field.")]
		public ApplicationVersionInfo AppVersion;

		[Obsolete("This field is deprecated. Please use the Version field.")]
		public ApplicationVersionInfo BuildVersion;

		public string BuildTag;

		protected static BuildInfo _Instance;

		public static BuildInfo Instance => null;

		public override Dictionary<string, object> ToDict()
		{
			return null;
		}

		public override bool FromDict(Dictionary<string, object> inDict)
		{
			return false;
		}

		protected override string GetAssetName()
		{
			return null;
		}

		protected override string GetExtension()
		{
			return null;
		}

		protected override string GetFolder()
		{
			return null;
		}

		protected override string GetAssetFilename()
		{
			return null;
		}

		protected override string GetAssetPathName()
		{
			return null;
		}

		protected override string GetAssetFullPath()
		{
			return null;
		}

		public string GetVersionString()
		{
			return null;
		}

		[Obsolete("This method is deprecated. Please use GetVersionString.")]
		public string GetAppVersionString()
		{
			return null;
		}

		[Obsolete("This method is deprecated. Please use GetVersionString.")]
		public string GetBuildVerisonString()
		{
			return null;
		}
	}
}
