using System;
using System.Collections.Generic;

namespace Imangi.Utilities
{
	[Serializable]
	public class ImangiDateRequirements : IImangiRequirements, IParsableJSONListElement
	{
		public enum DateEventType
		{
			Daily = 0,
			Weekly = 1,
			Monthly = 2,
			Annually = 3,
			OneShot = 4
		}

		public DateEventType DateType;

		public bool AreDatesLocal;

		public DateTime StartDate;

		public DateTime EndDate;

		public ImangiDateRequirements()
		{
		}

		public ImangiDateRequirements(DateEventType inType, bool inLocal, DateTime inStartDate, DateTime inEndDate)
		{
		}

		public ImangiDateRequirements(string inJSONString)
		{
		}

		public void Clear()
		{
		}

		public virtual Dictionary<string, object> ToDict()
		{
			return null;
		}

		public bool FromDict(Dictionary<string, object> inDict)
		{
			return false;
		}

		public string GetDescription()
		{
			return null;
		}

		public bool IsValid(DateTime inCheckTime)
		{
			return false;
		}

		public bool IsDefault()
		{
			return false;
		}

		protected bool IsTimeOfDayLessThanOrEqual(DateTime inSourceTime, DateTime inCheckTime)
		{
			return false;
		}

		protected bool IsTimeOfDayGreatherThanOrEqual(DateTime inSourceTime, DateTime inCheckTime)
		{
			return false;
		}

		protected bool IsValid_Daily(DateTime inCheckTime)
		{
			return false;
		}

		protected bool IsValid_Weekly(DateTime inCheckTime)
		{
			return false;
		}

		protected bool IsValid_Monthly(DateTime inCheckTime)
		{
			return false;
		}

		protected bool IsValid_Annually(DateTime inCheckTime)
		{
			return false;
		}

		protected bool IsValid_OneShot(DateTime inCheckTime)
		{
			return false;
		}
	}
}
