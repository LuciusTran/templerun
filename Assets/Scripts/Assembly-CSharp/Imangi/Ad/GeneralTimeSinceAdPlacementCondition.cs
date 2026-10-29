namespace Imangi.Ad
{
	public class GeneralTimeSinceAdPlacementCondition : TimeSinceAdPlacementCondition
	{
		public class GeneralTimeSinceConfigValues : TimeSinceConfigValues
		{
			public override AdPlacementConditionType ConditionType => AdPlacementConditionType.TimeSince;
		}

		private readonly GeneralTimeSinceConfigValues _Config;

		public override ConfigValues Config => null;

		public override TimeSinceConfigValues TimeSinceConfig => null;

		public GeneralTimeSinceAdPlacementCondition()
		{
		}

		public GeneralTimeSinceAdPlacementCondition(string inName, int inSeconds)
		{
		}

		public void Trigger()
		{
		}
	}
}
