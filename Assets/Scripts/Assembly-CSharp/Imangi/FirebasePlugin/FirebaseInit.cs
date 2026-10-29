using System;

namespace Imangi.FirebasePlugin
{
	public static class FirebaseInit
	{
		private const string _LogChannel = "FirebaseInit";

		public static string AnalyticsID;

		public static bool IsInitialized;

		public static void Initialize(Action inCompletedCallback)
		{
		}
	}
}
