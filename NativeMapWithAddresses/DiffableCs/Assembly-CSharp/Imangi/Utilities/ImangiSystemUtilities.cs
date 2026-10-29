namespace Imangi.Utilities;

[Token(Token = "0x2000214")]
public class ImangiSystemUtilities
{
	[CompilerGenerated]
	[Token(Token = "0x2000215")]
	private sealed class <>c
	{
		[Token(Token = "0x40010CF")]
		public static readonly <>c <>9; //Field offset: 0x0
		[Token(Token = "0x40010D0")]
		public static AdvertisingIdentifierCallback <>9__14_0; //Field offset: 0x8

		[Address(RVA = "0x1238A48", Offset = "0x1238A48", Length = "0x5C")]
		[Token(Token = "0x6000F1F")]
		private static <>c() { }

		[Address(RVA = "0x1238AA4", Offset = "0x1238AA4", Length = "0x8")]
		[Token(Token = "0x6000F20")]
		public <>c() { }

		[Address(RVA = "0x1238AAC", Offset = "0x1238AAC", Length = "0x164")]
		[Token(Token = "0x6000F21")]
		internal void <PrepAdvertisingID>b__14_0(string inAdvertisingId, bool inTrackingEnabled, string inErrorMsg) { }

	}

	[Token(Token = "0x40010CA")]
	public static SerializationMode ImangiSerializationMode; //Field offset: 0x0
	[Token(Token = "0x40010CB")]
	public static readonly string LogChannel; //Field offset: 0x8
	[Token(Token = "0x40010CC")]
	protected static string _VendorID; //Field offset: 0x10
	[Token(Token = "0x40010CD")]
	protected static string _AdvertisingID; //Field offset: 0x18
	[Token(Token = "0x40010CE")]
	protected static bool _AdTrackingEnabled; //Field offset: 0x20

	[Address(RVA = "0x12389B8", Offset = "0x12389B8", Length = "0x90")]
	[Token(Token = "0x6000F1E")]
	private static ImangiSystemUtilities() { }

	[Address(RVA = "0x12389B0", Offset = "0x12389B0", Length = "0x8")]
	[Token(Token = "0x6000F1D")]
	public ImangiSystemUtilities() { }

	[Address(RVA = "0x12384E8", Offset = "0x12384E8", Length = "0x4")]
	[Token(Token = "0x6000F10")]
	public static void DumpAssemblyInformation(bool inDumpClassLists) { }

	[Address(RVA = "0x1238830", Offset = "0x1238830", Length = "0x94")]
	[Token(Token = "0x6000F1A")]
	public static string GetAdvertisingID() { }

	[Address(RVA = "0x1238624", Offset = "0x1238624", Length = "0x8")]
	[Token(Token = "0x6000F17")]
	public static List<String> GetDeviceTypes(RuntimePlatform inPlatform) { }

	[Address(RVA = "0x123862C", Offset = "0x123862C", Length = "0x40")]
	[Token(Token = "0x6000F18")]
	public static string GetDeviceTypeString(RuntimePlatform inPlatform) { }

	[Address(RVA = "0x1238588", Offset = "0x1238588", Length = "0x80")]
	[Token(Token = "0x6000F15")]
	public static int GetHardwareMemorySize() { }

	[Address(RVA = "0x1238580", Offset = "0x1238580", Length = "0x8")]
	[Token(Token = "0x6000F14")]
	public static long GetOSFreeStorage() { }

	[Address(RVA = "0x1238578", Offset = "0x1238578", Length = "0x8")]
	[Token(Token = "0x6000F13")]
	public static long GetOSTotalStorage() { }

	[Address(RVA = "0x12384EC", Offset = "0x12384EC", Length = "0x8")]
	[Token(Token = "0x6000F11")]
	public static ApplicationVersionInfo GetOSVersionNumber() { }

	[Address(RVA = "0x123891C", Offset = "0x123891C", Length = "0x94")]
	[Token(Token = "0x6000F1C")]
	public static string GetVendorID() { }

	[Address(RVA = "0x12388C4", Offset = "0x12388C4", Length = "0x58")]
	[Token(Token = "0x6000F1B")]
	public static bool IsAdTrackingEnabled() { }

	[Address(RVA = "0x12384F4", Offset = "0x12384F4", Length = "0x84")]
	[Token(Token = "0x6000F12")]
	public static bool IsValidForOSVersion(ApplicationVersionInfo inMinVer, ApplicationVersionInfo inMaxVer = null) { }

	[Address(RVA = "0x123866C", Offset = "0x123866C", Length = "0x1C4")]
	[Token(Token = "0x6000F19")]
	public static void PrepAdvertisingID() { }

	[Address(RVA = "0x1238608", Offset = "0x1238608", Length = "0x1C")]
	[Token(Token = "0x6000F16")]
	private static int RoundUp(int numToRound, int multiple) { }

}

