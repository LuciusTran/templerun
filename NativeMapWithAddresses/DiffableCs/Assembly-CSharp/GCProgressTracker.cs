//Type is in global namespace

[Token(Token = "0x2000104")]
public static class GCProgressTracker
{
	[CompilerGenerated]
	[Token(Token = "0x40008E8")]
	private static GCTierComepled tierCompleted; //Field offset: 0x0
	[Token(Token = "0x40008E9")]
	private static GCTiers gcTiers; //Field offset: 0x8
	[Token(Token = "0x40008EA")]
	private static float currentDistance; //Field offset: 0x10
	[Token(Token = "0x40008EB")]
	private static int currentScore; //Field offset: 0x14
	[Token(Token = "0x40008EC")]
	private static int currentCoins; //Field offset: 0x18

	[Token(Token = "0x14000003")]
	public static event GCTierComepled tierCompleted
	{
		[Address(RVA = "0x12DB850", Offset = "0x12DB850", Length = "0xD8")]
		[CompilerGenerated]
		[Token(Token = "0x6000785")]
		 add { } //Length: 216
		[Address(RVA = "0x12DB928", Offset = "0x12DB928", Length = "0xD8")]
		[CompilerGenerated]
		[Token(Token = "0x6000786")]
		 remove { } //Length: 216
	}

	[Address(RVA = "0x12DC78C", Offset = "0x12DC78C", Length = "0x88")]
	[Token(Token = "0x600078E")]
	private static GCProgressTracker() { }

	[Address(RVA = "0x12DB850", Offset = "0x12DB850", Length = "0xD8")]
	[CompilerGenerated]
	[Token(Token = "0x6000785")]
	public static void add_tierCompleted(GCTierComepled value) { }

	[Address(RVA = "0x12DBEB8", Offset = "0x12DBEB8", Length = "0x50C")]
	[Token(Token = "0x600078C")]
	private static void CalculateTierCompletion(float currentValue) { }

	[Address(RVA = "0x12DBB8C", Offset = "0x12DBB8C", Length = "0xD8")]
	[Token(Token = "0x600078B")]
	private static void CoinsOverTime(int coins) { }

	[Address(RVA = "0x12DBD3C", Offset = "0x12DBD3C", Length = "0xBC")]
	[Token(Token = "0x6000789")]
	private static void DistanceOverTime(float distance) { }

	[Address(RVA = "0x12DBDF8", Offset = "0x12DBDF8", Length = "0xC0")]
	[Token(Token = "0x6000788")]
	private static void DistancePerRun(float distance) { }

	[Address(RVA = "0x12DC3C4", Offset = "0x12DC3C4", Length = "0x3C8")]
	[Token(Token = "0x600078D")]
	private static void GiveReward(int rewardNo) { }

	[Address(RVA = "0x12DB928", Offset = "0x12DB928", Length = "0xD8")]
	[CompilerGenerated]
	[Token(Token = "0x6000786")]
	public static void remove_tierCompleted(GCTierComepled value) { }

	[Address(RVA = "0x12DBC64", Offset = "0x12DBC64", Length = "0xD8")]
	[Token(Token = "0x600078A")]
	private static void ScoreOverTime(int score) { }

	[Address(RVA = "0x12DBA00", Offset = "0x12DBA00", Length = "0x18C")]
	[Token(Token = "0x6000787")]
	public static void UpdateAfterGameStats(float distance, int coins, int score) { }

}

