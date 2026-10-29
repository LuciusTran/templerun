using System.Collections.Generic;

namespace Imangi.Ad
{
	public class CounterAdPlacementCondition : AdPlacementCondition
	{
		public class CounterConfigValues : ConfigValues
		{
			private const string _ResetValueKey = "RV";

			public int ResetValue;

			public override AdPlacementConditionType ConditionType => AdPlacementConditionType.TimeSince;

			public override Dictionary<string, object> ToDict()
			{
				return null;
			}

			public override bool FromDict(Dictionary<string, object> inDict)
			{
				return false;
			}
		}

		public class CounterSaveDataValues : SaveDataValues
		{
			private const string _CounterKey = "LT";

			public int Counter;

			public override Dictionary<string, object> ToDict()
			{
				return null;
			}

			public override bool FromDict(Dictionary<string, object> inDict)
			{
				return false;
			}
		}

		public readonly CounterConfigValues CounterConfig;

		private readonly CounterSaveDataValues _SaveData;

		public override ConfigValues Config => null;

		protected override SaveDataValues BaseSaveData => null;

		public CounterAdPlacementCondition()
		{
		}

		public CounterAdPlacementCondition(string inName, int inReset)
		{
		}

		protected override bool IsValid_Internal()
		{
			return false;
		}
	}
}
