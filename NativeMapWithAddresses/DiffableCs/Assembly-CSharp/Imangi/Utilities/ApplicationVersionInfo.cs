namespace Imangi.Utilities;

[Token(Token = "0x20001DC")]
public class ApplicationVersionInfo : IComparable
{
	[Token(Token = "0x400103E")]
	private const int _VALID_VERSION_NUM_LENGTH = 4; //Field offset: 0x0
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x400103F")]
	public readonly int Major; //Field offset: 0x10
	[FieldOffset(Offset = "0x14")]
	[Token(Token = "0x4001040")]
	public readonly int Minor; //Field offset: 0x14
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x4001041")]
	public readonly int Patch; //Field offset: 0x18
	[FieldOffset(Offset = "0x1C")]
	[Token(Token = "0x4001042")]
	public readonly int Build; //Field offset: 0x1C

	[Address(RVA = "0x12224A0", Offset = "0x12224A0", Length = "0x68")]
	[Token(Token = "0x6000D57")]
	private ApplicationVersionInfo(Int32[] inVersionValues) { }

	[Address(RVA = "0x12228B4", Offset = "0x12228B4", Length = "0x70")]
	[Token(Token = "0x6000D61")]
	private static bool AreValidVersionValues(Int32[] inVersionValues) { }

	[Address(RVA = "0x1222CF4", Offset = "0x1222CF4", Length = "0x110")]
	[Token(Token = "0x6000D62")]
	public override int CompareTo(object inObject) { }

	[Address(RVA = "0x1222508", Offset = "0x1222508", Length = "0xC8")]
	[Token(Token = "0x6000D58")]
	public virtual bool Equals(object inOther) { }

	[Address(RVA = "0x1222ADC", Offset = "0x1222ADC", Length = "0xB0")]
	[Token(Token = "0x6000D5E")]
	public static ApplicationVersionInfo FromSemVerString(string inVersionString) { }

	[Address(RVA = "0x12215CC", Offset = "0x12215CC", Length = "0xAC")]
	[Token(Token = "0x6000D5D")]
	public static ApplicationVersionInfo FromString(string inVersionString) { }

	[Address(RVA = "0x1222B8C", Offset = "0x1222B8C", Length = "0x168")]
	[Token(Token = "0x6000D60")]
	public static ApplicationVersionInfo FromUnityVersionString(string inUnityVersionString) { }

	[Address(RVA = "0x1222848", Offset = "0x1222848", Length = "0x6C")]
	[Token(Token = "0x6000D5C")]
	public static ApplicationVersionInfo FromVersionValues(Int32[] inVersionValues) { }

	[Address(RVA = "0x1222840", Offset = "0x1222840", Length = "0x8")]
	[Token(Token = "0x6000D5B")]
	public virtual int GetHashCode() { }

	[Address(RVA = "0x1222924", Offset = "0x1222924", Length = "0x1B8")]
	[Token(Token = "0x6000D5F")]
	private static Int32[] GetVersionIntegerValues(string inVersionString) { }

	[Address(RVA = "0x1222E04", Offset = "0x1222E04", Length = "0x18")]
	[Token(Token = "0x6000D63")]
	public bool GreaterThan(ApplicationVersionInfo inOther) { }

	[Address(RVA = "0x1222E34", Offset = "0x1222E34", Length = "0x18")]
	[Token(Token = "0x6000D65")]
	public bool GreaterThanOrEqualTo(ApplicationVersionInfo inOther) { }

	[Address(RVA = "0x1222E64", Offset = "0x1222E64", Length = "0x88")]
	[Token(Token = "0x6000D67")]
	public bool IsInRange(ApplicationVersionInfo inMinVer, ApplicationVersionInfo inMaxVer) { }

	[Address(RVA = "0x1222E1C", Offset = "0x1222E1C", Length = "0x18")]
	[Token(Token = "0x6000D64")]
	public bool LessThan(ApplicationVersionInfo inOther) { }

	[Address(RVA = "0x1222E4C", Offset = "0x1222E4C", Length = "0x18")]
	[Token(Token = "0x6000D66")]
	public bool LessThanOrEqualTo(ApplicationVersionInfo inOther) { }

	[Address(RVA = "0x1222EEC", Offset = "0x1222EEC", Length = "0x14C")]
	[Token(Token = "0x6000D68")]
	public static ApplicationVersionInfo[] RangeFromOldRangeString(string inString) { }

	[Address(RVA = "0x122277C", Offset = "0x122277C", Length = "0xC4")]
	[Token(Token = "0x6000D5A")]
	public string ToMajorMinorPatchString() { }

	[Address(RVA = "0x12225D0", Offset = "0x12225D0", Length = "0x1AC")]
	[Token(Token = "0x6000D59")]
	public virtual string ToString() { }

}

