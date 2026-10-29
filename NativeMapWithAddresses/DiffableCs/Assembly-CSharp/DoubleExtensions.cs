//Type is in global namespace

[Extension]
[Token(Token = "0x2000009")]
public static class DoubleExtensions
{
	[Token(Token = "0x4000038")]
	public const double DefaultDoubleEpsilon = 6E-07; //Field offset: 0x0

	[Address(RVA = "0x11EBC74", Offset = "0x11EBC74", Length = "0x14")]
	[Extension]
	[Token(Token = "0x600001F")]
	public static double AbsoluteDifference(double inDouble, double inOtherDouble) { }

	[Address(RVA = "0x11EBC64", Offset = "0x11EBC64", Length = "0x10")]
	[Extension]
	[Token(Token = "0x600001E")]
	public static double AbsoluteValue(double inDouble) { }

	[Address(RVA = "0x11EBC88", Offset = "0x11EBC88", Length = "0x68")]
	[Extension]
	[Token(Token = "0x6000020")]
	public static bool AreEqual(double inDouble, double inOtherDouble, double inEqualityTolerance = 6E-07) { }

	[Address(RVA = "0x11EBCF0", Offset = "0x11EBCF0", Length = "0x30")]
	[Extension]
	[Token(Token = "0x6000021")]
	public static bool GreaterThan(double inDouble, double inOtherDouble, double inEqualityTolerance = 6E-07) { }

	[Address(RVA = "0x11EBD50", Offset = "0x11EBD50", Length = "0x58")]
	[Extension]
	[Token(Token = "0x6000023")]
	public static bool GreaterThanOrEqual(double inDouble, double inOtherDouble, double inEqualityTolerance = 6E-07) { }

	[Address(RVA = "0x11EBD20", Offset = "0x11EBD20", Length = "0x30")]
	[Extension]
	[Token(Token = "0x6000022")]
	public static bool LessThan(double inDouble, double inOtherDouble, double inEqualityTolerance = 6E-07) { }

	[Address(RVA = "0x11EBDA8", Offset = "0x11EBDA8", Length = "0x58")]
	[Extension]
	[Token(Token = "0x6000024")]
	public static bool LessThanOrEqual(double inDouble, double inOtherDouble, double inEqualityTolerance = 6E-07) { }

}

