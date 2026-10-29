using System;
using System.Collections.Generic;
using Imangi.Utilities;

public static class TimedCelebrationEvents
{
	[Serializable]
	public class TempleDecorationPrefabMapping
	{
		public enum RamEntries
		{
			Low = 2048,
			Medium = 4096,
			High = int.MaxValue
		}

		public RamEntries Ram;

		public string TemplePrefabPrefix;
	}

	[Serializable]
	public class Entry
	{
		public string Name;

		public ImangiDateRequirements.DateEventType DateType;

		public bool AreDatesLocal;

		public int StartYear;

		public int StartMonth;

		public int StartDay;

		public int StartHour;

		public int StartMinute;

		public int StartSecond;

		public int EndYear;

		public int EndMonth;

		public int EndDay;

		public int EndHour;

		public int EndMinute;

		public int EndSecond;

		public TempleDecorationPrefabMapping[] TemplePrefabConfig;

		public string TemplePrefabPrefix => null;

		public bool IsActive(DateTime now)
		{
			return false;
		}
	}

	private static IList<Entry> _entries;

	public static string ActiveTemplePrefabPrefix => null;

	public static string ActiveEventName => null;

	public static void SetEntries(IList<Entry> entries)
	{
	}

	private static bool TryGetActiveEvent(out Entry outEntry)
	{
		outEntry = null;
		return false;
	}
}
