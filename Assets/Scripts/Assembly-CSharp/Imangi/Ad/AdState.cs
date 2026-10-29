namespace Imangi.Ad
{
	public enum AdState
	{
		WaitingForFetch = 0,
		Fetching = 1,
		Available = 2,
		Unavailable = 3,
		Showing = 4,
		Showed_Complete = 5,
		Showed_Incomplete = 6,
		Show_Failed = 7
	}
}
