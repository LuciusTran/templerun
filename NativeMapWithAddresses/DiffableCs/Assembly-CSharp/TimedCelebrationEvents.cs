//Type is in global namespace

[Token(Token = "0x200018F")]
public static class TimedCelebrationEvents
{
	[Token(Token = "0x2000192")]
	internal class Entry
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000E49")]
		public string Name; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000E4A")]
		public DateEventType DateType; //Field offset: 0x18
		[FieldOffset(Offset = "0x1C")]
		[Token(Token = "0x4000E4B")]
		public bool AreDatesLocal; //Field offset: 0x1C
		[FieldOffset(Offset = "0x20")]
		[Token(Token = "0x4000E4C")]
		public int StartYear; //Field offset: 0x20
		[FieldOffset(Offset = "0x24")]
		[Token(Token = "0x4000E4D")]
		public int StartMonth; //Field offset: 0x24
		[FieldOffset(Offset = "0x28")]
		[Token(Token = "0x4000E4E")]
		public int StartDay; //Field offset: 0x28
		[FieldOffset(Offset = "0x2C")]
		[Token(Token = "0x4000E4F")]
		public int StartHour; //Field offset: 0x2C
		[FieldOffset(Offset = "0x30")]
		[Token(Token = "0x4000E50")]
		public int StartMinute; //Field offset: 0x30
		[FieldOffset(Offset = "0x34")]
		[Token(Token = "0x4000E51")]
		public int StartSecond; //Field offset: 0x34
		[FieldOffset(Offset = "0x38")]
		[Token(Token = "0x4000E52")]
		public int EndYear; //Field offset: 0x38
		[FieldOffset(Offset = "0x3C")]
		[Token(Token = "0x4000E53")]
		public int EndMonth; //Field offset: 0x3C
		[FieldOffset(Offset = "0x40")]
		[Token(Token = "0x4000E54")]
		public int EndDay; //Field offset: 0x40
		[FieldOffset(Offset = "0x44")]
		[Token(Token = "0x4000E55")]
		public int EndHour; //Field offset: 0x44
		[FieldOffset(Offset = "0x48")]
		[Token(Token = "0x4000E56")]
		public int EndMinute; //Field offset: 0x48
		[FieldOffset(Offset = "0x4C")]
		[Token(Token = "0x4000E57")]
		public int EndSecond; //Field offset: 0x4C
		[FieldOffset(Offset = "0x50")]
		[Token(Token = "0x4000E58")]
		public TempleDecorationPrefabMapping[] TemplePrefabConfig; //Field offset: 0x50

		[Token(Token = "0x17000190")]
		public string TemplePrefabPrefix
		{
			[Address(RVA = "0x1322E2C", Offset = "0x1322E2C", Length = "0x3B8")]
			[Token(Token = "0x6000BB9")]
			 get { } //Length: 952
		}

		[Address(RVA = "0x13233BC", Offset = "0x13233BC", Length = "0x88")]
		[Token(Token = "0x6000BBB")]
		public Entry() { }

		[Address(RVA = "0x1322E2C", Offset = "0x1322E2C", Length = "0x3B8")]
		[Token(Token = "0x6000BB9")]
		public string get_TemplePrefabPrefix() { }

		[Address(RVA = "0x1323250", Offset = "0x1323250", Length = "0x15C")]
		[Token(Token = "0x6000BBA")]
		public bool IsActive(DateTime now) { }

	}

	[Token(Token = "0x2000190")]
	internal class TempleDecorationPrefabMapping
	{
		[Token(Token = "0x2000191")]
		internal enum RamEntries
		{
			Low = 2048,
			Medium = 4096,
			High = 2147483647,
		}

		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4000E43")]
		public RamEntries Ram; //Field offset: 0x10
		[FieldOffset(Offset = "0x18")]
		[Token(Token = "0x4000E44")]
		public string TemplePrefabPrefix; //Field offset: 0x18

		[Address(RVA = "0x13233AC", Offset = "0x13233AC", Length = "0x10")]
		[Token(Token = "0x6000BB8")]
		public TempleDecorationPrefabMapping() { }

	}

	[Token(Token = "0x4000E42")]
	private static IList<Entry> _entries; //Field offset: 0x0

	[Token(Token = "0x1700018F")]
	public static string ActiveEventName
	{
		[Address(RVA = "0x13231E4", Offset = "0x13231E4", Length = "0x6C")]
		[Token(Token = "0x6000BB6")]
		 get { } //Length: 108
	}

	[Token(Token = "0x1700018E")]
	public static string ActiveTemplePrefabPrefix
	{
		[Address(RVA = "0x1322BD4", Offset = "0x1322BD4", Length = "0x6C")]
		[Token(Token = "0x6000BB5")]
		 get { } //Length: 108
	}

	[Address(RVA = "0x13231E4", Offset = "0x13231E4", Length = "0x6C")]
	[Token(Token = "0x6000BB6")]
	public static string get_ActiveEventName() { }

	[Address(RVA = "0x1322BD4", Offset = "0x1322BD4", Length = "0x6C")]
	[Token(Token = "0x6000BB5")]
	public static string get_ActiveTemplePrefabPrefix() { }

	[Address(RVA = "0x1322B88", Offset = "0x1322B88", Length = "0x4C")]
	[Token(Token = "0x6000BB4")]
	public static void SetEntries(IList<Entry> entries) { }

	[Address(RVA = "0x1322C40", Offset = "0x1322C40", Length = "0x1EC")]
	[Token(Token = "0x6000BB7")]
	private static bool TryGetActiveEvent(out Entry outEntry) { }

}

