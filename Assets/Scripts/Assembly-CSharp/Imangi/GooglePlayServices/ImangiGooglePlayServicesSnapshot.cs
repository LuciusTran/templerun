using System.Collections.Generic;

namespace Imangi.GooglePlayServices
{
	public class ImangiGooglePlayServicesSnapshot
	{
		public string SnapshotName;

		public ImangiGooglePlayServicesSnapshotMetadata Metadata;

		public ImangiGooglePlayServicesSnapshotContents Contents;

		public static ImangiGooglePlayServicesSnapshot BuildFromJsonString(string jsonStr)
		{
			return null;
		}

		public static ImangiGooglePlayServicesSnapshot BuildFromDictionary(Dictionary<string, object> dict)
		{
			return null;
		}
	}
}
