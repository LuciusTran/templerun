using System.Collections.Specialized;
using System.Text;

namespace Imangi.Utilities
{
	public class UrlBuilder
	{
		private string _Url;

		private NameValueCollection _GETParameters;

		private StringBuilder _UrlStringBuilder;

		private const string _GETParameterStart = "?";

		private const string _GETParamterDelimiter = "&";

		private const string _GETParameterValueAssignment = "=";

		public string Url
		{
			set
			{
			}
		}

		public void AddGETParameter(string name, string value)
		{
		}

		public void ClearParameters()
		{
		}

		public override string ToString()
		{
			return null;
		}
	}
}
