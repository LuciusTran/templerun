using System.Collections.Generic;
using Imangi.Utilities;

public class DeviceConfigData : ConfigData
{
	public class SafeAreaData : IParsableJSONListElement
	{
		private const string _LeftMarginKey = "L";

		public int LeftMargin;

		private const string _RightMarginKey = "R";

		public int RightMargin;

		private const string _TopMarginKey = "T";

		public int TopMargin;

		private const string _BottomMarginKey = "B";

		public int BottomMargin;

		public bool FromDict(Dictionary<string, object> inDict)
		{
			return false;
		}

		public Dictionary<string, object> ToDict()
		{
			return null;
		}

		public override bool Equals(object inObject)
		{
			return false;
		}

		public override int GetHashCode()
		{
			return 0;
		}

		public static bool operator ==(SafeAreaData inLeftSafeAreaData, SafeAreaData inRightSafeAreaData)
		{
			return false;
		}

		public static bool operator !=(SafeAreaData inLeftSafeAreaData, SafeAreaData inRightSafeAreaData)
		{
			return false;
		}
	}

	public const string PromoKeyword = "DeviceConfig";

	private const string _ConfigurationNameKey = "CN";

	public string ConfigurationName;

	private const string _SafeAreaKey = "SA";

	public SafeAreaData SafeArea;

	private const string _UpsideDownSafeAreaKey = "UDSA";

	public SafeAreaData UpsideDownSafeArea;

	public override int Index => 0;

	public override string Keyword => null;

	public override string RemoteConfigKey => null;

	public override int ErrorCode => 0;

	public DeviceConfigData()
	{
	}

	public DeviceConfigData(string inJSONString)
	{
	}

	public override bool FromDict(Dictionary<string, object> inDict)
	{
		return false;
	}

	public override Dictionary<string, object> ToDict()
	{
		return null;
	}
}
