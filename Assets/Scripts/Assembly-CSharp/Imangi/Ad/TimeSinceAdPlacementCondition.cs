using System;
using System.Collections.Generic;

namespace Imangi.Ad
{
	public abstract class TimeSinceAdPlacementCondition : AdPlacementCondition
	{
		public abstract class TimeSinceConfigValues : ConfigValues
		{
			private const string _SecondsTillReadyConfigKey = "STR";

			public int SecondsTillReady;

			public override Dictionary<string, object> ToDict()
			{
				return null;
			}

			public override bool FromDict(Dictionary<string, object> inDict)
			{
				return false;
			}
		}

		public class TimeSinceSaveDataValues : SaveDataValues
		{
			private const string _LastTriggerKey = "LT";

			public DateTime LastTriggerTime;

			public override Dictionary<string, object> ToDict()
			{
				return null;
			}

			public override bool FromDict(Dictionary<string, object> inDict)
			{
				return false;
			}
		}

		protected readonly TimeSinceSaveDataValues _SaveData;

		public abstract TimeSinceConfigValues TimeSinceConfig { get; }

		protected override SaveDataValues BaseSaveData => null;

		protected override bool IsValid_Internal()
		{
			return false;
		}

		protected void Trigger_Internal()
		{
		}
	}
}
