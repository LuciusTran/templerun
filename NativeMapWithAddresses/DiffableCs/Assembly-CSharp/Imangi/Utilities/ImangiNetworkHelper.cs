namespace Imangi.Utilities;

[Token(Token = "0x2000205")]
public class ImangiNetworkHelper : MonoBehaviour
{
	[Token(Token = "0x400109B")]
	protected static ImangiNetworkHelper Instance; //Field offset: 0x0
	[Token(Token = "0x40010A0")]
	protected const float ReachabilityCheckTime = 1; //Field offset: 0x0
	[Token(Token = "0x400109C")]
	public static readonly string LogChannel; //Field offset: 0x8
	[Token(Token = "0x400109D")]
	public static bool ImangiNetworkHelper_VerboseLogging; //Field offset: 0x10
	[Token(Token = "0x400109E")]
	protected static NetworkReachability CurrentReachability; //Field offset: 0x14
	[CompilerGenerated]
	[Token(Token = "0x400109F")]
	private static Action<NetworkReachability, NetworkReachability> OnNetworkReachabilityChanged; //Field offset: 0x18
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x40010A1")]
	protected float TimeSinceLastReachabilityCheck; //Field offset: 0x20

	[Token(Token = "0x14000012")]
	protected static event Action<NetworkReachability, NetworkReachability> OnNetworkReachabilityChanged
	{
		[Address(RVA = "0x12347B0", Offset = "0x12347B0", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x6000EAD")]
		 add { } //Length: 244
		[Address(RVA = "0x12348A4", Offset = "0x12348A4", Length = "0xF4")]
		[CompilerGenerated]
		[Token(Token = "0x6000EAE")]
		 remove { } //Length: 244
	}

	[Token(Token = "0x170001AE")]
	public static int WebRequestTimeout
	{
		[Address(RVA = "0x1234998", Offset = "0x1234998", Length = "0x8")]
		[Token(Token = "0x6000EAF")]
		 get { } //Length: 8
	}

	[Address(RVA = "0x1235388", Offset = "0x1235388", Length = "0x74")]
	[Token(Token = "0x6000EBA")]
	private static ImangiNetworkHelper() { }

	[Address(RVA = "0x1235380", Offset = "0x1235380", Length = "0x8")]
	[Token(Token = "0x6000EB9")]
	public ImangiNetworkHelper() { }

	[Address(RVA = "0x12347B0", Offset = "0x12347B0", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x6000EAD")]
	protected static void add_OnNetworkReachabilityChanged(Action<NetworkReachability, NetworkReachability> value) { }

	[Address(RVA = "0x1234DE8", Offset = "0x1234DE8", Length = "0x1A0")]
	[Token(Token = "0x6000EB6")]
	public static void AddOnNetworkReachabilityChangedDelegate(Action<NetworkReachability, NetworkReachability> inOnReachabilityChanged) { }

	[Address(RVA = "0x1234AE4", Offset = "0x1234AE4", Length = "0x8C")]
	[Token(Token = "0x6000EB3")]
	protected void CacheCurrentReachability() { }

	[Address(RVA = "0x1234D00", Offset = "0x1234D00", Length = "0xE8")]
	[Token(Token = "0x6000EB5")]
	public static bool CheckNetworkStatus() { }

	[Address(RVA = "0x1234998", Offset = "0x1234998", Length = "0x8")]
	[Token(Token = "0x6000EAF")]
	public static int get_WebRequestTimeout() { }

	[Address(RVA = "0x1234A94", Offset = "0x1234A94", Length = "0x50")]
	[Token(Token = "0x6000EB2")]
	protected static NetworkReachability GetEffectiveReachability() { }

	[Address(RVA = "0x1234B70", Offset = "0x1234B70", Length = "0x190")]
	[Token(Token = "0x6000EB4")]
	protected static ImangiNetworkHelper GetInstance() { }

	[Address(RVA = "0x12349A0", Offset = "0x12349A0", Length = "0x54")]
	[Token(Token = "0x6000EB0")]
	public static void ImangiNetworkHelper_LogMessage(string inMessage, Object[] paramList) { }

	[Address(RVA = "0x12349F4", Offset = "0x12349F4", Length = "0xA0")]
	[Token(Token = "0x6000EB1")]
	public static void ImangiNetworkHelper_LogMessageForced(string inMessage, Object[] paramList) { }

	[Address(RVA = "0x12348A4", Offset = "0x12348A4", Length = "0xF4")]
	[CompilerGenerated]
	[Token(Token = "0x6000EAE")]
	protected static void remove_OnNetworkReachabilityChanged(Action<NetworkReachability, NetworkReachability> value) { }

	[Address(RVA = "0x1234F88", Offset = "0x1234F88", Length = "0x180")]
	[Token(Token = "0x6000EB7")]
	public static void RemoveOnNetworkReachabilityChangedDelegate(Action<NetworkReachability, NetworkReachability> inOnReachabilityChanged) { }

	[Address(RVA = "0x1235108", Offset = "0x1235108", Length = "0x278")]
	[Token(Token = "0x6000EB8")]
	public void Update() { }

}

