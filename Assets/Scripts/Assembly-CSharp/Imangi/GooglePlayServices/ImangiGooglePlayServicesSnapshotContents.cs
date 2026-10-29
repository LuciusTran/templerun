using System.Collections.Generic;

namespace Imangi.GooglePlayServices
{
	public class ImangiGooglePlayServicesSnapshotContents
	{
		protected string DataAsUtf8EncodedString;

		public bool HasDataContents()
		{
			return false;
		}

		public string GetDataContentsAsUtf8EncodedString()
		{
			return null;
		}

		public bool GetDataContentsAsByteArray(ref byte[] refDataBytes)
		{
			return false;
		}

		public byte[] GetDataContentsAsByteArray()
		{
			return null;
		}

		public static ImangiGooglePlayServicesSnapshotContents BuildFromJsonStringNoNullReturn(string jsonStr)
		{
			return null;
		}

		public static ImangiGooglePlayServicesSnapshotContents BuildFromDictionaryNoNullReturn(Dictionary<string, object> dict)
		{
			return null;
		}

		public static bool BuildFromDictionary(Dictionary<string, object> dict, out ImangiGooglePlayServicesSnapshotContents gpsSnapshotContents)
		{
			gpsSnapshotContents = null;
			return false;
		}
	}
}
