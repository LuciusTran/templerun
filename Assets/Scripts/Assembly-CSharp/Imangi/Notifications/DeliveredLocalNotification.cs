using System;
using System.Collections;
using System.Collections.Generic;
using Imangi.Utilities;

namespace Imangi.Notifications
{
	public class DeliveredLocalNotification : IParsableJSONListElement
	{
		public string Title;

		public string Body;

		public string AnalyticNotifyType;

		public int Category;

		public string ChannelId;

		public DateTime UtcTimeToDeliver;

		public Dictionary<string, string> ExtrasData;

		public bool CopyIDictionaryDataIntoExtrasData(IDictionary inDictInterface)
		{
			return false;
		}

		public static bool BuildFromDictionary(Dictionary<string, object> dict, out DeliveredLocalNotification outNotification)
		{
			outNotification = null;
			return false;
		}

		public bool FromDict(Dictionary<string, object> inDict)
		{
			return false;
		}

		public Dictionary<string, object> ToDict()
		{
			return null;
		}

		private bool VerifyRequiredProperties()
		{
			return false;
		}
	}
}
