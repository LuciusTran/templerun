using System.Collections.Generic;

namespace Imangi.GooglePlayServices
{
	public class ImangiGooglePlayServicesPlayer
	{
		public string DisplayName;

		public string PlayerId;

		public long RetrievedTimestamp;

		public string Title;

		public static ImangiGooglePlayServicesPlayer BuildGPSPlayerFromJsonString(string jsonStr)
		{
			return null;
		}

		public static ImangiGooglePlayServicesPlayer BuildGPSPlayerFromDictionary(Dictionary<string, object> dict)
		{
			return null;
		}

		public bool IsValidPlayer()
		{
			return false;
		}
	}
}
