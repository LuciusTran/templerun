namespace Imangi.Utilities
{
	public class ImangiBadgeCountManager
	{
		protected static ImangiBadgeCountManager Instance;

		public static ImangiBadgeCountManager GetInstance()
		{
			return null;
		}

		public static int GetBadgeCount()
		{
			return 0;
		}

		public static void SetBadgeCount(int inCount)
		{
		}

		protected virtual int GetBadgeCount_Internal()
		{
			return 0;
		}

		protected virtual void SetBadgeCount_Internal(int inCount)
		{
		}
	}
}
