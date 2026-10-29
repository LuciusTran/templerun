namespace Imangi.Utilities;

[Token(Token = "0x2000202")]
public class ImangiLocaleManager : MonoBehaviour
{
	[Token(Token = "0x400108F")]
	public static readonly string LogChannel; //Field offset: 0x0
	[Token(Token = "0x4001090")]
	private const string ISO_639_1 = "to_iso_639_1"; //Field offset: 0x0
	[Token(Token = "0x4001091")]
	private const string ISO_639_2_B = "to_iso_639_2_b"; //Field offset: 0x0
	[Token(Token = "0x4001092")]
	private const string ISO_639_2_T = "to_iso_639_2_t"; //Field offset: 0x0
	[Token(Token = "0x4001093")]
	protected static ImangiLocaleManager Instance; //Field offset: 0x8
	[Token(Token = "0x4001094")]
	protected static GameObject LocaleGameObj; //Field offset: 0x10
	[Token(Token = "0x4001096")]
	public static Action OnCurrentLocaleUpdated; //Field offset: 0x18
	[Token(Token = "0x4001097")]
	protected static bool _VerboseLogging; //Field offset: 0x20
	[FieldOffset(Offset = "0x20")]
	[Token(Token = "0x4001095")]
	protected ImangiLocaleInfo _CurrentLocale; //Field offset: 0x20
	[FieldOffset(Offset = "0x28")]
	[Token(Token = "0x4001098")]
	protected bool _ForceLogLocale; //Field offset: 0x28
	[FieldOffset(Offset = "0x30")]
	[Token(Token = "0x4001099")]
	protected Dictionary<String, Dictionary`2<String, String>> _LanguageMap; //Field offset: 0x30
	[FieldOffset(Offset = "0x38")]
	[Token(Token = "0x400109A")]
	private string _LanguageFilePath; //Field offset: 0x38

	[Token(Token = "0x170001AD")]
	public static bool VerboseLogging
	{
		[Address(RVA = "0x1233D60", Offset = "0x1233D60", Length = "0x58")]
		[Token(Token = "0x6000E9D")]
		 get { } //Length: 88
		[Address(RVA = "0x1233DB8", Offset = "0x1233DB8", Length = "0x60")]
		[Token(Token = "0x6000E9E")]
		 set { } //Length: 96
	}

	[Address(RVA = "0x12344B0", Offset = "0x12344B0", Length = "0x70")]
	[Token(Token = "0x6000EA7")]
	private static ImangiLocaleManager() { }

	[Address(RVA = "0x1234460", Offset = "0x1234460", Length = "0x50")]
	[Token(Token = "0x6000EA6")]
	public ImangiLocaleManager() { }

	[Address(RVA = "0x1233FFC", Offset = "0x1233FFC", Length = "0x1B8")]
	[Token(Token = "0x6000EA1")]
	protected override void CurrentLocaleUpdated() { }

	[Address(RVA = "0x1233D60", Offset = "0x1233D60", Length = "0x58")]
	[Token(Token = "0x6000E9D")]
	public static bool get_VerboseLogging() { }

	[Address(RVA = "0x1233E18", Offset = "0x1233E18", Length = "0xD4")]
	[Token(Token = "0x6000E9F")]
	public static ImangiLocaleInfo GetCurrentLocale(bool inRefresh = false) { }

	[Address(RVA = "0x1233EEC", Offset = "0x1233EEC", Length = "0x110")]
	[Token(Token = "0x6000EA0")]
	protected override ImangiLocaleInfo GetCurrentLocale_Internal(bool inRefresh) { }

	[Address(RVA = "0x1233834", Offset = "0x1233834", Length = "0x148")]
	[Token(Token = "0x6000E9B")]
	public static ImangiLocaleManager GetInstance() { }

	[Address(RVA = "0x12341B4", Offset = "0x12341B4", Length = "0x64")]
	[Token(Token = "0x6000EA2")]
	public static string GetLanguageCodeForStandard_ISO_639_1() { }

	[Address(RVA = "0x1234398", Offset = "0x1234398", Length = "0x64")]
	[Token(Token = "0x6000EA3")]
	public static string GetLanguageCodeForStandard_ISO_639_2_B() { }

	[Address(RVA = "0x12343FC", Offset = "0x12343FC", Length = "0x64")]
	[Token(Token = "0x6000EA4")]
	public static string GetLanguageCodeForStandard_ISO_639_2_T() { }

	[Address(RVA = "0x123397C", Offset = "0x123397C", Length = "0x3BC")]
	[Token(Token = "0x6000E9C")]
	private Dictionary<String, Dictionary`2<String, String>> GetLanguageMap() { }

	[Address(RVA = "0x1234218", Offset = "0x1234218", Length = "0x180")]
	[Token(Token = "0x6000EA5")]
	private static string GetLanuageCodeForStandard(string inStandard) { }

	[Address(RVA = "0x1233DB8", Offset = "0x1233DB8", Length = "0x60")]
	[Token(Token = "0x6000E9E")]
	public static void set_VerboseLogging(bool value) { }

}

