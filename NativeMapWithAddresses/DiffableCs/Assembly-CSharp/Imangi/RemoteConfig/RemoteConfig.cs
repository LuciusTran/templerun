namespace Imangi.RemoteConfig;

[Token(Token = "0x20001C5")]
public static class RemoteConfig
{
	[CompilerGenerated]
	[Token(Token = "0x20001C7")]
	private sealed class <>c
	{
		[Token(Token = "0x4001002")]
		public static readonly <>c <>9; //Field offset: 0x0
		[Token(Token = "0x4001003")]
		public static Action<Task`1<Boolean>> <>9__9_0; //Field offset: 0x8

		[Address(RVA = "0x121C888", Offset = "0x121C888", Length = "0x5C")]
		[Token(Token = "0x6000CF1")]
		private static <>c() { }

		[Address(RVA = "0x121C8E4", Offset = "0x121C8E4", Length = "0x8")]
		[Token(Token = "0x6000CF2")]
		public <>c() { }

		[Address(RVA = "0x121C8EC", Offset = "0x121C8EC", Length = "0xC4")]
		[Token(Token = "0x6000CF3")]
		internal void <FetchqAndActivate>b__9_0(Task<Boolean> task) { }

	}

	[CompilerGenerated]
	[Token(Token = "0x20001C8")]
	private sealed class <>c__DisplayClass7_0
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4001004")]
		public Dictionary<String, Object> inDefaults; //Field offset: 0x10

		[Address(RVA = "0x121BCF4", Offset = "0x121BCF4", Length = "0x8")]
		[Token(Token = "0x6000CF4")]
		public <>c__DisplayClass7_0() { }

		[Address(RVA = "0x121C9B0", Offset = "0x121C9B0", Length = "0x58")]
		[Token(Token = "0x6000CF5")]
		internal void <InitAndFetchRemoteConfig>b__0(Task task) { }

	}

	[CompilerGenerated]
	[Token(Token = "0x20001C9")]
	private sealed class <>c__DisplayClass8_0
	{
		[FieldOffset(Offset = "0x10")]
		[Token(Token = "0x4001005")]
		public Dictionary<String, Object> inDefaults; //Field offset: 0x10

		[Address(RVA = "0x121BDF4", Offset = "0x121BDF4", Length = "0x8")]
		[Token(Token = "0x6000CF6")]
		public <>c__DisplayClass8_0() { }

		[Address(RVA = "0x121CA08", Offset = "0x121CA08", Length = "0x4C")]
		[Token(Token = "0x6000CF7")]
		internal void <SetDefault>b__0(Task task) { }

	}

	[Token(Token = "0x20001C6")]
	internal enum ValueSource
	{
		StaticValue = 0,
		DefaultValue = 2,
		RemoteValue = 1,
	}

	[Token(Token = "0x4000FF8")]
	public const string LogChannel = "RemoteConfig"; //Field offset: 0x0
	[Token(Token = "0x4000FF9")]
	public static bool IsDeveloperMode; //Field offset: 0x0
	[Token(Token = "0x4000FFA")]
	public static FirebaseRemoteConfig remoteConfig; //Field offset: 0x8
	[Token(Token = "0x4000FFB")]
	public static TimeSpan CacheExpiration; //Field offset: 0x10
	[Token(Token = "0x4000FFC")]
	private static Action _OnFetchComplete; //Field offset: 0x18
	[Token(Token = "0x4000FFD")]
	private static readonly Stopwatch _FetchTimer; //Field offset: 0x20

	[Address(RVA = "0x121C7CC", Offset = "0x121C7CC", Length = "0xBC")]
	[Token(Token = "0x6000CF0")]
	private static RemoteConfig() { }

	[Address(RVA = "0x121BDFC", Offset = "0x121BDFC", Length = "0x150")]
	[Token(Token = "0x6000CEA")]
	private static void FetchqAndActivate(Dictionary<String, Object> inDefaults) { }

	[Address(RVA = "0x121BF4C", Offset = "0x121BF4C", Length = "0x268")]
	[Token(Token = "0x6000CEB")]
	public static bool GetBoolValue(string inKey) { }

	[Address(RVA = "0x121C1B4", Offset = "0x121C1B4", Length = "0x264")]
	[Token(Token = "0x6000CEC")]
	public static double GetDoubleValue(string inKey) { }

	[Address(RVA = "0x121C418", Offset = "0x121C418", Length = "0x264")]
	[Token(Token = "0x6000CED")]
	public static long GetLongValue(string inKey) { }

	[Address(RVA = "0x121C67C", Offset = "0x121C67C", Length = "0xB4")]
	[Token(Token = "0x6000CEE")]
	public static string GetStringValue(string inKey) { }

	[Address(RVA = "0x121C730", Offset = "0x121C730", Length = "0x9C")]
	[Token(Token = "0x6000CEF")]
	public static ValueSource GetValueSource(string inKey) { }

	[Address(RVA = "0x121BBB8", Offset = "0x121BBB8", Length = "0x13C")]
	[Token(Token = "0x6000CE8")]
	public static void InitAndFetchRemoteConfig(Dictionary<String, Object> inDefaults, Action inFetchComplete) { }

	[Address(RVA = "0x121BCFC", Offset = "0x121BCFC", Length = "0xF8")]
	[Token(Token = "0x6000CE9")]
	private static void SetDefault(Dictionary<String, Object> inDefaults) { }

}

