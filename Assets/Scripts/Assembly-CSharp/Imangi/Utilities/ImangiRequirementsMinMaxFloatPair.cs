using System.Collections.Generic;

namespace Imangi.Utilities
{
	public class ImangiRequirementsMinMaxFloatPair : IParsableJSONListElement
	{
		protected const float DefaultTolerance = 1E-05f;

		public float DisableValue;

		public float Tolerance;

		public float Min;

		public float Max;

		public ImangiRequirementsMinMaxFloatPair(float inDisableValue, float inTolerance = 1E-05f)
		{
		}

		public ImangiRequirementsMinMaxFloatPair(float inMin, float inMax, float inDisableValue = float.MinValue, float inTolerance = 1E-05f)
		{
		}

		public bool IsNearlyEqual(float inValueA, float inValueB)
		{
			return false;
		}

		public bool IsEnabled()
		{
			return false;
		}

		public bool IsValid(float inValue)
		{
			return false;
		}

		public void Clear()
		{
		}

		public Dictionary<string, object> ToDict()
		{
			return null;
		}

		public bool FromDict(Dictionary<string, object> inDict)
		{
			return false;
		}
	}
}
