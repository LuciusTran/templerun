//Type is in global namespace

[Token(Token = "0x20000B8")]
public class AdInitRetryConfigData : ConfigData
{
	[Token(Token = "0x400066E")]
	public const string PromoKeyword = "AdInitRetry"; //Field offset: 0x0
	[Token(Token = "0x400066F")]
	private const int DefaultMaxAppLovinRetries = -1; //Field offset: 0x0
	[Token(Token = "0x4000670")]
	private const int MinRetries = -1; //Field offset: 0x0
	[Token(Token = "0x4000671")]
	private const int MaxRetries = 50; //Field offset: 0x0
	[Token(Token = "0x4000672")]
	private const string _MaxAppLovinRetriesKey = "MaxAppLovinRetries"; //Field offset: 0x0
	[Token(Token = "0x4000682")]
	private static AdInitRetryConfigData _instance; //Field offset: 0x0
	[Token(Token = "0x4000674")]
	private const string _ConsentRescueEnabledKey = "ConsentRescueEnabled"; //Field offset: 0x0
	[Token(Token = "0x4000675")]
	private const bool DefaultConsentRescueEnabled = True; //Field offset: 0x0
	[Token(Token = "0x4000680")]
	private const bool DefaultHoldAdInitOnUnresolvedRegulation = True; //Field offset: 0x0
	[Token(Token = "0x4000677")]
	private const string _BootConsentRescueEnabledKey = "BootConsentRescueEnabled"; //Field offset: 0x0
	[Token(Token = "0x4000678")]
	private const bool DefaultBootConsentRescueEnabled = True; //Field offset: 0x0
	[Token(Token = "0x400067F")]
	private const string _HoldAdInitOnUnresolvedRegulationKey = "HoldAdInitOnUnresolvedRegulation"; //Field offset: 0x0
	[Token(Token = "0x400067A")]
	private const string _BootCMPWatchdogSecondsKey = "BootCMPWatchdogSeconds"; //Field offset: 0x0
	[Token(Token = "0x400067B")]
	private const int DefaultBootCMPWatchdogSeconds = 15; //Field offset: 0x0
	[Token(Token = "0x400067C")]
	private const int MinBootCMPWatchdogSeconds = 5; //Field offset: 0x0
	[Token(Token = "0x400067D")]
	private const int MaxBootCMPWatchdogSeconds = 60; //Field offset: 0x0
	[Token(Token = "0x4000684")]
	private static bool _loggedFallback; //Field offset: 0x8
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4000673")]
	public int MaxAppLovinRetries; //Field offset: 0x28
	[FieldOffset(Offset = "0x2C")]
	[Token(Token = "0x4000676")]
	public bool ConsentRescueEnabled; //Field offset: 0x2C
	[FieldOffset(Offset = "0x2D")]
	[Token(Token = "0x4000679")]
	public bool BootConsentRescueEnabled; //Field offset: 0x2D
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x400067E")]
	public int BootCMPWatchdogSeconds; //Field offset: 0x30
	[FieldOffset(Offset = "0x34")]
	[Token(Token = "0x4000681")]
	public bool HoldAdInitOnUnresolvedRegulation; //Field offset: 0x34
	[FieldOffset(Offset = "0x35")]
	[Token(Token = "0x4000683")]
	private bool _rcApplied; //Field offset: 0x35

	[Token(Token = "0x170000CD")]
	public virtual int ErrorCode
	{
		[Address(RVA = "0x12C125C", Offset = "0x12C125C", Length = "0x8")]
		[Token(Token = "0x60005AF")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000CB")]
	public virtual int Index
	{
		[Address(RVA = "0x12C1214", Offset = "0x12C1214", Length = "0x8")]
		[Token(Token = "0x60005AD")]
		 get { } //Length: 8
	}

	[Token(Token = "0x170000CA")]
	public static AdInitRetryConfigData Instance
	{
		[Address(RVA = "0x12C0EC4", Offset = "0x12C0EC4", Length = "0x244")]
		[Token(Token = "0x60005AC")]
		 get { } //Length: 580
	}

	[Token(Token = "0x170000CC")]
	public virtual string Keyword
	{
		[Address(RVA = "0x12C121C", Offset = "0x12C121C", Length = "0x40")]
		[Token(Token = "0x60005AE")]
		 get { } //Length: 64
	}

	[Address(RVA = "0x12C1108", Offset = "0x12C1108", Length = "0x2C")]
	[Token(Token = "0x60005B3")]
	public AdInitRetryConfigData() { }

	[Address(RVA = "0x12C1404", Offset = "0x12C1404", Length = "0x548")]
	[Token(Token = "0x60005B1")]
	public virtual bool FromDict(Dictionary<String, Object> inDict) { }

	[Address(RVA = "0x12C125C", Offset = "0x12C125C", Length = "0x8")]
	[Token(Token = "0x60005AF")]
	public virtual int get_ErrorCode() { }

	[Address(RVA = "0x12C1214", Offset = "0x12C1214", Length = "0x8")]
	[Token(Token = "0x60005AD")]
	public virtual int get_Index() { }

	[Address(RVA = "0x12C0EC4", Offset = "0x12C0EC4", Length = "0x244")]
	[Token(Token = "0x60005AC")]
	public static AdInitRetryConfigData get_Instance() { }

	[Address(RVA = "0x12C121C", Offset = "0x12C121C", Length = "0x40")]
	[Token(Token = "0x60005AE")]
	public virtual string get_Keyword() { }

	[Address(RVA = "0x12C194C", Offset = "0x12C194C", Length = "0x54")]
	[Token(Token = "0x60005B2")]
	private static void LogFallbackOnce(string inReason) { }

	[Address(RVA = "0x12C1264", Offset = "0x12C1264", Length = "0x1A0")]
	[Token(Token = "0x60005B0")]
	public virtual Dictionary<String, Object> ToDict() { }

}

