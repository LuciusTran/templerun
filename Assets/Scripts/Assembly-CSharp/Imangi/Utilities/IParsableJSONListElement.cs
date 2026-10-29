using System.Collections.Generic;

namespace Imangi.Utilities
{
	public interface IParsableJSONListElement
	{
		bool FromDict(Dictionary<string, object> inDict);

		Dictionary<string, object> ToDict();
	}
}
