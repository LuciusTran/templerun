using UnityEngine;

namespace Imangi.Utilities.Attributes
{
	public class EnumFlagAttribute : PropertyAttribute
	{
		public string OverrideInspectorEnumVariableName;

		public EnumFlagAttribute()
		{
		}

		public EnumFlagAttribute(string inOverrideVariableName)
		{
		}
	}
}
