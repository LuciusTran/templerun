using System.Runtime.CompilerServices;

public static class GCProgressTracker
{
	[CompilerGenerated]
	private static GCTierComepled m_tierCompleted;

	private static GCTiers gcTiers;

	private static float currentDistance;

	private static int currentScore;

	private static int currentCoins;

	public static event GCTierComepled tierCompleted
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public static void UpdateAfterGameStats(float distance, int coins, int score)
	{
	}

	private static void DistancePerRun(float distance)
	{
	}

	private static void DistanceOverTime(float distance)
	{
	}

	private static void ScoreOverTime(int score)
	{
	}

	private static void CoinsOverTime(int coins)
	{
	}

	private static void CalculateTierCompletion(float currentValue)
	{
	}

	private static void GiveReward(int rewardNo)
	{
	}
}
