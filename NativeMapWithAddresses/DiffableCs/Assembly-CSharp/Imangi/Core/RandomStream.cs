namespace Imangi.Core;

[Token(Token = "0x2000283")]
public class RandomStream
{
	[Token(Token = "0x400135B")]
	public static readonly string LogChannel; //Field offset: 0x0
	[FieldOffset(Offset = "0x10")]
	[Token(Token = "0x400135C")]
	private int SeedValue; //Field offset: 0x10
	[FieldOffset(Offset = "0x18")]
	[Token(Token = "0x400135D")]
	private Random SysRandStream; //Field offset: 0x18

	[Address(RVA = "0x126975C", Offset = "0x126975C", Length = "0x60")]
	[Token(Token = "0x60012C8")]
	private static RandomStream() { }

	[Address(RVA = "0x12692BC", Offset = "0x12692BC", Length = "0x138")]
	[Token(Token = "0x60012BA")]
	public RandomStream() { }

	[Address(RVA = "0x12693F4", Offset = "0x12693F4", Length = "0x80")]
	[Token(Token = "0x60012BB")]
	public RandomStream(int inSeedValue) { }

	[Address(RVA = "0x1269698", Offset = "0x1269698", Length = "0x4C")]
	[Token(Token = "0x60012C5")]
	private void GetRandomUnitCircle(out Vector2 output) { }

	[Address(RVA = "0x126949C", Offset = "0x126949C", Length = "0x8")]
	[Token(Token = "0x60012BD")]
	public int GetSeed() { }

	[Address(RVA = "0x12694F0", Offset = "0x12694F0", Length = "0x4C")]
	[Token(Token = "0x60012BF")]
	public Vector2 insideUnitCircle() { }

	[Address(RVA = "0x12694A4", Offset = "0x12694A4", Length = "0x4C")]
	[Token(Token = "0x60012BE")]
	public Vector3 insideUnitSphere() { }

	[Address(RVA = "0x126953C", Offset = "0x126953C", Length = "0x4C")]
	[Token(Token = "0x60012C0")]
	public Vector3 onUnitSphere() { }

	[Address(RVA = "0x12696E4", Offset = "0x12696E4", Length = "0x44")]
	[Token(Token = "0x60012C6")]
	public float RandomRange(float min, float max) { }

	[Address(RVA = "0x1269728", Offset = "0x1269728", Length = "0x34")]
	[Token(Token = "0x60012C7")]
	public int RandomRange(int min, int max) { }

	[Address(RVA = "0x1269620", Offset = "0x1269620", Length = "0x44")]
	[Token(Token = "0x60012C3")]
	public float Range(float min, float max) { }

	[Address(RVA = "0x1269664", Offset = "0x1269664", Length = "0x34")]
	[Token(Token = "0x60012C4")]
	public int Range(int min, int max) { }

	[Address(RVA = "0x1269588", Offset = "0x1269588", Length = "0x4C")]
	[Token(Token = "0x60012C1")]
	public Quaternion rotation() { }

	[Address(RVA = "0x12695D4", Offset = "0x12695D4", Length = "0x4C")]
	[Token(Token = "0x60012C2")]
	public Quaternion rotationUniform() { }

	[Address(RVA = "0x12690E8", Offset = "0x12690E8", Length = "0x1D4")]
	[Token(Token = "0x60012B9")]
	public static void TestRandomSeedTimes() { }

	[Address(RVA = "0x1269474", Offset = "0x1269474", Length = "0x28")]
	[Token(Token = "0x60012BC")]
	public float value() { }

}

