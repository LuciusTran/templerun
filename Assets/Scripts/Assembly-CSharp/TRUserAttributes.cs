using System.Runtime.InteropServices;

public class TRUserAttributes
{
	[StructLayout((LayoutKind)0, Size = 1)]
	public struct Attrib
	{
		public const int ABID = 0;

		public const int ActiveABInfo = 1;

		public const int CountryIso3 = 2;

		public const int NUM_ATTRIB = 3;
	}

	[StructLayout((LayoutKind)0, Size = 1)]
	public struct Metric
	{
		public const int LifetimeRuns = 0;

		public const int LifetimeCoins = 1;

		public const int LifetimeDist = 2;

		public const int LifetimeObjectives = 3;

		public const int NUM_METRICS = 4;
	}

	private const string _AttributeABID = "ab_id";

	private const string _AttributeActiveABInfo = "active_ab_info";

	private const string _AttribCountryIso3 = "country_iso3";

	private const string _MetricLifeRunsName = "lt_runs";

	private const string _MetricLifeCoinsName = "lt_coins";

	private const string _MetricLifeDistName = "lt_distance";

	private const string _MetricObjectivesName = "lt_objectives";

	public const string AttributeEvent = "Attributes";

	public const string MetricEvent = "Metrics";

	protected string[] _AttributeKeys;

	protected string[] _AttributeValues;

	protected string[] _MetricKeys;

	protected int[] _MetricValues;

	public bool ShouldLogUserAttributes;

	public int AttribToArray(ref string[] refKeys, ref string[] refValues)
	{
		return 0;
	}

	public int MetricToArray(ref string[] refKeys, ref int[] refValues)
	{
		return 0;
	}

	public void SetABID(int inABID)
	{
	}

	public void Update()
	{
	}

	public void UpdateMetric(int inMetricID, int inValue)
	{
	}

	public void UpdateAttribute(int inAttribID, string inValue)
	{
	}

	public void LogUserAttributes()
	{
	}
}
