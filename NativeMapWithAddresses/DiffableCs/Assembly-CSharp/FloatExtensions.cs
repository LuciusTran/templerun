//Type is in global namespace

[Extension]
[Token(Token = "0x200000A")]
public static class FloatExtensions
{
	[Token(Token = "0x4000039")]
	public const float DefaultFloatEpsilon = 6E-07; //Field offset: 0x0

	[Address(RVA = "0x11EBE10", Offset = "0x11EBE10", Length = "0x14")]
	[Extension]
	[Token(Token = "0x6000026")]
	public static float AbsoluteDifference(float inFloat, float inOtherFloat) { }

	[Address(RVA = "0x11EBE00", Offset = "0x11EBE00", Length = "0x10")]
	[Extension]
	[Token(Token = "0x6000025")]
	public static float AbsoluteValue(float inFloat) { }

	[Address(RVA = "0x11EBE24", Offset = "0x11EBE24", Length = "0x68")]
	[Extension]
	[Token(Token = "0x6000027")]
	public static bool AreEqual(float inFloat, float inOtherFloat, float inEqualityTolerance = 6E-07) { }

	[Address(RVA = "0x11EBE8C", Offset = "0x11EBE8C", Length = "0x30")]
	[Extension]
	[Token(Token = "0x6000028")]
	public static bool GreaterThan(float inFloat, float inOtherFloat, float inEqualityTolerance = 6E-07) { }

	[Address(RVA = "0x11EBEEC", Offset = "0x11EBEEC", Length = "0x58")]
	[Extension]
	[Token(Token = "0x600002A")]
	public static bool GreaterThanOrEqual(float inFloat, float inOtherFloat, float inEqualityTolerance = 6E-07) { }

	[Address(RVA = "0x11EBEBC", Offset = "0x11EBEBC", Length = "0x30")]
	[Extension]
	[Token(Token = "0x6000029")]
	public static bool LessThan(float inFloat, float inOtherFloat, float inEqualityTolerance = 6E-07) { }

	[Address(RVA = "0x11EBF44", Offset = "0x11EBF44", Length = "0x58")]
	[Extension]
	[Token(Token = "0x600002B")]
	public static bool LessThanOrEqual(float inFloat, float inOtherFloat, float inEqualityTolerance = 6E-07) { }

}

