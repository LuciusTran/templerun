using System.Collections.Generic;

namespace Imangi.GooglePlayServices
{
	public class ImangiGooglePlayServicesSnapshotMetadata
	{
		public const long PLAYED_TIME_UNKNOWN = -1L;

		public const long PROGRESS_VALUE_UNKNOWN = -1L;

		public float CoverImageAspectRatio;

		public string CoverImageUri;

		public string Description;

		public long LastModifiedTimestamp;

		public ImangiGooglePlayServicesPlayer Owner;

		public long PlayedTime;

		public long ProgressValue;

		public string UniqueName;

		public static ImangiGooglePlayServicesSnapshotMetadata BuildFromJsonStringNoNullReturn(string jsonStr)
		{
			return null;
		}

		public static ImangiGooglePlayServicesSnapshotMetadata BuildFromDictionaryNoNullReturn(Dictionary<string, object> dict)
		{
			return null;
		}

		public static bool BuildFromDictionary(Dictionary<string, object> dict, out ImangiGooglePlayServicesSnapshotMetadata gpsSnapshotMetadata)
		{
			gpsSnapshotMetadata = null;
			return false;
		}
	}
}
