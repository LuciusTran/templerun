namespace Imangi.Ad
{
	public class TimeSinceLastAdAdPlacementCondition : TimeSinceAdPlacementCondition
	{
		public class TimeSinceLastAdConfigValues : TimeSinceConfigValues
		{
			public override AdPlacementConditionType ConditionType => AdPlacementConditionType.TimeSince;
		}

		private readonly TimeSinceLastAdConfigValues _Config;

		public override ConfigValues Config => null;

		public override TimeSinceConfigValues TimeSinceConfig => null;

		public TimeSinceLastAdAdPlacementCondition()
		{
		}

		public TimeSinceLastAdAdPlacementCondition(string inName, int inSeconds)
		{
		}

		~TimeSinceLastAdAdPlacementCondition()
		{
		}

		private void OnAdDismissed(string inName, AdService inService, AdType inType, string inAdSpaceName, bool inComplete)
		{
		}
	}
}
