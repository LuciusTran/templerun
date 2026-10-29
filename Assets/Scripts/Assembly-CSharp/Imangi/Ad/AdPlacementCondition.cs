using System.Collections.Generic;
using Imangi.Utilities;

namespace Imangi.Ad
{
	public abstract class AdPlacementCondition
	{
		public abstract class ConfigValues : IParsableJSONListElement
		{
			private const string _NameKey = "N";

			public string Name;

			public const string TypeKey = "T";

			public abstract AdPlacementConditionType ConditionType { get; }

			public virtual Dictionary<string, object> ToDict()
			{
				return null;
			}

			public virtual bool FromDict(Dictionary<string, object> inDict)
			{
				return false;
			}
		}

		public class SaveDataValues : IParsableJSONListElement
		{
			private const string _IsActiveKey = "IA";

			public bool IsActive;

			public virtual Dictionary<string, object> ToDict()
			{
				return null;
			}

			public virtual bool FromDict(Dictionary<string, object> inDict)
			{
				return false;
			}
		}

		public abstract ConfigValues Config { get; }

		protected abstract SaveDataValues BaseSaveData { get; }

		public Dictionary<string, object> SerializeConfig()
		{
			return null;
		}

		public void DeserializeConfig(Dictionary<string, object> inDict)
		{
		}

		public Dictionary<string, object> SerializeSaveData()
		{
			return null;
		}

		public bool DeserializeSaveData(Dictionary<string, object> inDict)
		{
			return false;
		}

		public bool IsValid()
		{
			return false;
		}

		protected abstract bool IsValid_Internal();
	}
}
