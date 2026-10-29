using System.Collections.Generic;

namespace Imangi.Utilities
{
	public class ImangiTextAsset : IParsableJSONListElement
	{
		protected static string ITA_LogChannel;

		public virtual Dictionary<string, object> ToDict()
		{
			return null;
		}

		public virtual bool FromDict(Dictionary<string, object> inDict)
		{
			return false;
		}

		protected virtual string GetAssetName()
		{
			return null;
		}

		protected virtual string GetExtension()
		{
			return null;
		}

		protected virtual string GetFolder()
		{
			return null;
		}

		protected virtual string GetAssetFilename()
		{
			return null;
		}

		protected virtual string GetAssetPathName()
		{
			return null;
		}

		protected virtual string GetAssetFullPath()
		{
			return null;
		}

		public virtual bool SaveToFile(string inLogChannel)
		{
			return false;
		}

		public bool LoadFromFile()
		{
			return false;
		}
	}
}
