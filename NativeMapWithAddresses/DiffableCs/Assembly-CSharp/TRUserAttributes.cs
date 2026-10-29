//Type is in global namespace

[Token(Token = "0x20000A1")]
public class TRUserAttributes
{
	[Token(Token = "0x20000A2")]
	internal struct Attrib
	{
		[Token(Token = "0x400054C")]
		public const int ABID = 0; //Field offset: 0x0
		[Token(Token = "0x400054D")]
		public const int ActiveABInfo = 1; //Field offset: 0x0
		[Token(Token = "0x400054E")]
		public const int CountryIso3 = 2; //Field offset: 0x0
		[Token(Token = "0x400054F")]
		public const int NUM_ATTRIB = 3; //Field offset: 0x0

	}

	[Token(Token = "0x20000A3")]
	internal struct Metric
	{
		[Token(Token = "0x4000550")]
		public const int LifetimeRuns = 0; //Field offset: 0x0
		[Token(Token = "0x4000551")]
		public const int LifetimeCoins = 1; //Field offset: 0x0
		[Token(Token = "0x4000552")]
		public const int LifetimeDist = 2; //Field offset: 0x0
		[Token(Token = "0x4000553")]
		public const int LifetimeObjectives = 3; //Field offset: 0x0
		[Token(Token = "0x4000554")]
		public const int NUM_METRICS = 4; //Field offset: 0x0

	}

	[Token(Token = "0x400053E")]
	private const string _AttributeABID = "ab_id"; //Field offset: 0x0
	[Token(Token = "0x400053F")]
	private const string _AttributeActiveABInfo = "active_ab_info"; //Field offset: 0x0
	[Token(Token = "0x4000540")]
	private const string _AttribCountryIso3 = "country_iso3"; //Field offset: 0x0
	[Token(Token = "0x4000541")]
	private const string _MetricLifeRunsName = "lt_runs"; //Field offset: 0x0
	[Token(Token = "0x4000542")]
	private const string _MetricLifeCoinsName = "lt_coins"; //Field offset: 0x0
	[Token(Token = "0x4000543")]
	private const string _MetricLifeDistName = "lt_distance"; //Field offset: 0x0
	[Token(Token = "0x4000544")]
	private const string _MetricObjectivesName = "lt_objectives"; //Field offset: 0x0
	[Token(Token = "0x4000545")]
	public const string AttributeEvent = "Attributes"; //Field offset: 0x0
	[Token(Token = "0x4000546")]
	public const string MetricEvent = "Metrics"; //Field offset: 0x0
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x4000547")]
	protected String[] _AttributeKeys; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x4000548")]
	protected String[] _AttributeValues; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4000549")]
	protected String[] _MetricKeys; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x400054A")]
	protected Int32[] _MetricValues; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x400054B")]
	public bool ShouldLogUserAttributes; //Field offset: 0x30

	[Address(RVA = "0x12B6874", Offset = "0x12B6874", Length = "0x1F4")]
	[Token(Token = "0x6000514")]
	public TRUserAttributes() { }

	[Address(RVA = "0x12B9CF8", Offset = "0x12B9CF8", Length = "0xA0")]
	[Token(Token = "0x6000512")]
	public int AttribToArray(ref String[] refKeys, ref String[] refValues) { }

	[Address(RVA = "0x12B71FC", Offset = "0x12B71FC", Length = "0x24C")]
	[Token(Token = "0x6000519")]
	public void LogUserAttributes() { }

	[Address(RVA = "0x12B9D98", Offset = "0x12B9D98", Length = "0xA0")]
	[Token(Token = "0x6000513")]
	public int MetricToArray(ref String[] refKeys, ref Int32[] refValues) { }

	[Address(RVA = "0x12B9E38", Offset = "0x12B9E38", Length = "0x40")]
	[Token(Token = "0x6000515")]
	public void SetABID(int inABID) { }

	[Address(RVA = "0x12B9E78", Offset = "0x12B9E78", Length = "0x160")]
	[Token(Token = "0x6000516")]
	public void Update() { }

	[Address(RVA = "0x12B6B50", Offset = "0x12B6B50", Length = "0x8C")]
	[Token(Token = "0x6000518")]
	public void UpdateAttribute(int inAttribID, string inValue) { }

	[Address(RVA = "0x12B9FD8", Offset = "0x12B9FD8", Length = "0x8C")]
	[Token(Token = "0x6000517")]
	public void UpdateMetric(int inMetricID, int inValue) { }

}

