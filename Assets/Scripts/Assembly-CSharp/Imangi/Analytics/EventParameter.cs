using Firebase.Analytics;

namespace Imangi.Analytics
{
	public class EventParameter
	{
		public Parameter FirebaseParameter;

		private string KeyValueString;

		public EventParameter(string inParameterName, string inParameterValue)
		{
		}

		public EventParameter(string inParameterName, long inParameterValue)
		{
		}

		public EventParameter(string inParameterName, double inParameterValue)
		{
		}

		public void Dispose()
		{
		}

		public override string ToString()
		{
			return null;
		}

		public void SetKeyValueString(string key, string value)
		{
		}
	}
}
