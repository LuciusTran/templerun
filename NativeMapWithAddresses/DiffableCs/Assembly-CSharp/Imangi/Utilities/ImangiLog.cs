namespace Imangi.Utilities;

[Token(Token = "0x20001CE")]
public class ImangiLog
{
	[Token(Token = "0x20001CF")]
	internal enum EnabledState
	{
		Disabled = 0,
		Enabled = 1,
		EnabledStack = 2,
	}

	[Token(Token = "0x4001017")]
	protected const string _LogClassPath = "com.imangi.imangiutilities.ImangiAndroidLog"; //Field offset: 0x0
	[Token(Token = "0x4001018")]
	protected static AndroidJavaClass _LogClass; //Field offset: 0x0
	[Token(Token = "0x400101F")]
	private const int _TargetStringBuilderBufferSize = 65536; //Field offset: 0x0
	[Token(Token = "0x4001020")]
	private const int _TargetCharacterCapacity = 32768; //Field offset: 0x0
	[Token(Token = "0x4001022")]
	protected const int MaxLogLineLength = 1023; //Field offset: 0x0
	[Token(Token = "0x4001019")]
	protected static Object[] _SingleArgArray; //Field offset: 0x8
	[Token(Token = "0x400101A")]
	protected static bool _IsEnabled; //Field offset: 0x10
	[Token(Token = "0x400101B")]
	public static string LogChannel; //Field offset: 0x18
	[Token(Token = "0x400101C")]
	public static string LogChannelConfigResourcesFilePath; //Field offset: 0x20
	[Token(Token = "0x400101D")]
	public static string LogChannelConfigFilePath; //Field offset: 0x28
	[Token(Token = "0x400101E")]
	private static Dictionary<String, EnabledState> EnabledChannels; //Field offset: 0x30
	[Token(Token = "0x4001021")]
	private static StringBuilder _StringBuilder; //Field offset: 0x38

	[Token(Token = "0x170001A5")]
	public static bool IsEnabled
	{
		[Address(RVA = "0x121E8A4", Offset = "0x121E8A4", Length = "0x58")]
		[Token(Token = "0x6000D1B")]
		 get { } //Length: 88
		[Address(RVA = "0x121E8FC", Offset = "0x121E8FC", Length = "0x16C")]
		[Token(Token = "0x6000D1C")]
		 set { } //Length: 364
	}

	[Token(Token = "0x170001A4")]
	protected static AndroidJavaClass LogClass
	{
		[Address(RVA = "0x121DF84", Offset = "0x121DF84", Length = "0x248")]
		[Token(Token = "0x6000D13")]
		 get { } //Length: 584
	}

	[Address(RVA = "0x121FEA0", Offset = "0x121FEA0", Length = "0x144")]
	[Token(Token = "0x6000D31")]
	private static ImangiLog() { }

	[Address(RVA = "0x121FE98", Offset = "0x121FE98", Length = "0x8")]
	[Token(Token = "0x6000D30")]
	public ImangiLog() { }

	[Address(RVA = "0x121E50C", Offset = "0x121E50C", Length = "0x118")]
	[Token(Token = "0x6000D17")]
	protected static void Android_Error(string inMessage) { }

	[Address(RVA = "0x121E3F4", Offset = "0x121E3F4", Length = "0x118")]
	[Token(Token = "0x6000D15")]
	protected static void Android_Log(string inMessage) { }

	[Address(RVA = "0x121E1CC", Offset = "0x121E1CC", Length = "0x110")]
	[Token(Token = "0x6000D14")]
	protected static void Android_SetTag(string inTag) { }

	[Address(RVA = "0x121E2DC", Offset = "0x121E2DC", Length = "0x118")]
	[Token(Token = "0x6000D16")]
	protected static void Android_Warn(string inMessage) { }

	[Address(RVA = "0x121F770", Offset = "0x121F770", Length = "0x160")]
	[Token(Token = "0x6000D25")]
	public static string BuildStringWithFormat(string format, Object[] paramList) { }

	[Address(RVA = "0x121F314", Offset = "0x121F314", Length = "0xD8")]
	[Token(Token = "0x6000D22")]
	public static EnabledState ChannelEnabledState(string channel) { }

	[Address(RVA = "0x121EEA8", Offset = "0x121EEA8", Length = "0x220")]
	[Token(Token = "0x6000D1F")]
	public static void EnabledAllChannels(EnabledState inState) { }

	[Address(RVA = "0x121F0C8", Offset = "0x121F0C8", Length = "0x120")]
	[Token(Token = "0x6000D20")]
	public static void EnabledChannel(string channel, EnabledState state) { }

	[Address(RVA = "0x12165D4", Offset = "0x12165D4", Length = "0xE4")]
	[Token(Token = "0x6000D2C")]
	public static void Error(string channel, string format, Object[] paramList) { }

	[Address(RVA = "0x121681C", Offset = "0x121681C", Length = "0xF8")]
	[Token(Token = "0x6000D2D")]
	public static void ErrorIf(bool condition, string channel, string format, Object[] paramList) { }

	[Address(RVA = "0x121FE10", Offset = "0x121FE10", Length = "0x88")]
	[Token(Token = "0x6000D2E")]
	public static void ForceError(string channel, string format, Object[] paramList) { }

	[Address(RVA = "0x121FAE8", Offset = "0x121FAE8", Length = "0x88")]
	[Token(Token = "0x6000D28")]
	public static void ForceLog(string channel, string format, Object[] paramList) { }

	[Address(RVA = "0x121FD88", Offset = "0x121FD88", Length = "0x88")]
	[Token(Token = "0x6000D2B")]
	public static void ForceWarn(string channel, string format, Object[] paramList) { }

	[Address(RVA = "0x121E8A4", Offset = "0x121E8A4", Length = "0x58")]
	[Token(Token = "0x6000D1B")]
	public static bool get_IsEnabled() { }

	[Address(RVA = "0x121DF84", Offset = "0x121DF84", Length = "0x248")]
	[Token(Token = "0x6000D13")]
	protected static AndroidJavaClass get_LogClass() { }

	[Address(RVA = "0x121EDE0", Offset = "0x121EDE0", Length = "0xC8")]
	[Token(Token = "0x6000D1E")]
	public static List<String> GetLogChannelKeys() { }

	[Address(RVA = "0x121F50C", Offset = "0x121F50C", Length = "0x264")]
	[Token(Token = "0x6000D24")]
	private static string GetOSString(string channel, string type, string format, Object[] paramList) { }

	[Address(RVA = "0x121E800", Offset = "0x121E800", Length = "0xA4")]
	[Token(Token = "0x6000D1A")]
	protected static void ImangiOSLog_Error(string inMessage) { }

	[Address(RVA = "0x121E624", Offset = "0x121E624", Length = "0xA4")]
	[Token(Token = "0x6000D18")]
	protected static void ImangiOSLog_Log(string inMessage) { }

	[Address(RVA = "0x121E6C8", Offset = "0x121E6C8", Length = "0x94")]
	[Token(Token = "0x6000D2F")]
	protected static void ImangiOSLog_LongLog(string inMessage, Action<String> inLogFunction) { }

	[Address(RVA = "0x121E75C", Offset = "0x121E75C", Length = "0xA4")]
	[Token(Token = "0x6000D19")]
	protected static void ImangiOSLog_Warn(string inMessage) { }

	[Address(RVA = "0x121F1E8", Offset = "0x121F1E8", Length = "0x12C")]
	[Token(Token = "0x6000D21")]
	public static bool IsChannelEnabled(string channel) { }

	[Address(RVA = "0x121F3EC", Offset = "0x121F3EC", Length = "0x120")]
	[Token(Token = "0x6000D23")]
	public static bool IsChannelEnabledStack(string channel) { }

	[Address(RVA = "0x121EA68", Offset = "0x121EA68", Length = "0x378")]
	[Token(Token = "0x6000D1D")]
	public static void LoadLogChannelConfig() { }

	[Address(RVA = "0x121F8D0", Offset = "0x121F8D0", Length = "0x100")]
	[Conditional("IMANGI_LOGGING")]
	[Token(Token = "0x6000D26")]
	public static void Log(string channel, string format, Object[] paramList) { }

	[Address(RVA = "0x121F9D0", Offset = "0x121F9D0", Length = "0x118")]
	[Conditional("IMANGI_LOGGING")]
	[Token(Token = "0x6000D27")]
	public static void LogIf(bool condition, string channel, string format, Object[] paramList) { }

	[Address(RVA = "0x121E8FC", Offset = "0x121E8FC", Length = "0x16C")]
	[Token(Token = "0x6000D1C")]
	public static void set_IsEnabled(bool value) { }

	[Address(RVA = "0x121FB70", Offset = "0x121FB70", Length = "0x100")]
	[Conditional("IMANGI_LOGGING")]
	[Token(Token = "0x6000D29")]
	public static void Warn(string channel, string format, Object[] paramList) { }

	[Address(RVA = "0x121FC70", Offset = "0x121FC70", Length = "0x118")]
	[Conditional("IMANGI_LOGGING")]
	[Token(Token = "0x6000D2A")]
	public static void WarnIf(bool condition, string channel, string format, Object[] paramList) { }

}

