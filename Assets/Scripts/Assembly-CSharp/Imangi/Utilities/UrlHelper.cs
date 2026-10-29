using System.Collections.Generic;

namespace Imangi.Utilities
{
	public class UrlHelper
	{
		public static UrlHelper SharedInstance;

		private UrlBuilder UrlContructor;

		protected static List<GETParameter> GETParameters;

		protected const string _ValueDelimiter = ",";

		protected const string _DefaultEmptyListValue = "NONE";

		public int GETParameterCount => 0;

		public GETParameter FindGETParameterAtIndex(int inIndex)
		{
			return default;
		}

		public string BuildUrlWithParameters(string inUrl, List<string> inGETParameters)
		{
			return null;
		}

		public int DeterminGETParameterIndex(string inGETParameterName)
		{
			return 0;
		}

		protected virtual bool IsGETParameterValid(string inGETParameterName)
		{
			return false;
		}

		protected virtual string DetermineGETParameterValue(string inParameterName)
		{
			return null;
		}
	}
}
