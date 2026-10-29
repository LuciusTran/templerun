namespace Imangi.GooglePlayServices;

[Token(Token = "0x200025F")]
public class ImangiGooglePlayServicesLeaderboard
{
	[Token(Token = "0x2000260")]
	internal enum LeaderboardTimeSpan
	{
		Uninitialized = -1,
		Daily = 0,
		Weekly = 1,
		AllTime = 2,
	}


	[Address(RVA = "0x124D604", Offset = "0x124D604", Length = "0x8")]
	[Token(Token = "0x60010BF")]
	public ImangiGooglePlayServicesLeaderboard() { }

}

