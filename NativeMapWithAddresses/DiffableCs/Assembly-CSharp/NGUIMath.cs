//Type is in global namespace

[Token(Token = "0x2000049")]
public static class NGUIMath
{

	[Address(RVA = "0x1200CB4", Offset = "0x1200CB4", Length = "0x3A0")]
	[Token(Token = "0x600019C")]
	public static Vector3 ApplyHalfPixelOffset(Vector3 pos, Vector3 scale) { }

	[Address(RVA = "0x1200C18", Offset = "0x1200C18", Length = "0x9C")]
	[Token(Token = "0x600019B")]
	public static Vector3 ApplyHalfPixelOffset(Vector3 pos) { }

	[Address(RVA = "0x1201154", Offset = "0x1201154", Length = "0x458")]
	[Token(Token = "0x600019E")]
	public static Bounds CalculateAbsoluteWidgetBounds(Transform trans) { }

	[Address(RVA = "0x1201E68", Offset = "0x1201E68", Length = "0xC4")]
	[Token(Token = "0x60001A1")]
	public static Bounds CalculateRelativeInnerBounds(Transform root, UISprite sprite) { }

	[Address(RVA = "0x1201AD0", Offset = "0x1201AD0", Length = "0x398")]
	[Token(Token = "0x60001A0")]
	public static Bounds CalculateRelativeInnerBounds(Transform root, UISlicedSprite sprite) { }

	[Address(RVA = "0x120162C", Offset = "0x120162C", Length = "0x4A4")]
	[Token(Token = "0x600019F")]
	public static Bounds CalculateRelativeWidgetBounds(Transform root, Transform child) { }

	[Address(RVA = "0x1201F2C", Offset = "0x1201F2C", Length = "0x34")]
	[Token(Token = "0x60001A2")]
	public static Bounds CalculateRelativeWidgetBounds(Transform trans) { }

	[Address(RVA = "0x11FFCC4", Offset = "0x11FFCC4", Length = "0x334")]
	[Token(Token = "0x6000193")]
	public static int ColorToInt(Color c) { }

	[Address(RVA = "0x1201054", Offset = "0x1201054", Length = "0x100")]
	[Token(Token = "0x600019D")]
	public static Vector2 ConstrainRect(Vector2 minRect, Vector2 maxRect, Vector2 minArea, Vector2 maxArea) { }

	[Address(RVA = "0x12001D4", Offset = "0x12001D4", Length = "0x3A4")]
	[Token(Token = "0x6000198")]
	public static Rect ConvertToPixels(Rect rect, int width, int height, bool round) { }

	[Address(RVA = "0x1200190", Offset = "0x1200190", Length = "0x44")]
	[Token(Token = "0x6000197")]
	public static Rect ConvertToTexCoords(Rect rect, int width, int height) { }

	[Address(RVA = "0x1200154", Offset = "0x1200154", Length = "0x3C")]
	[Token(Token = "0x6000196")]
	public static Color HexToColor(uint val) { }

	[Address(RVA = "0x11FFC98", Offset = "0x11FFC98", Length = "0x2C")]
	[Token(Token = "0x6000192")]
	public static int HexToDecimal(char ch) { }

	[Address(RVA = "0x1200034", Offset = "0x1200034", Length = "0x120")]
	[Token(Token = "0x6000195")]
	public static string IntToBinary(int val, int bits) { }

	[Address(RVA = "0x11FFFF8", Offset = "0x11FFFF8", Length = "0x3C")]
	[Token(Token = "0x6000194")]
	public static Color IntToColor(int val) { }

	[Address(RVA = "0x12008B8", Offset = "0x12008B8", Length = "0x360")]
	[Token(Token = "0x600019A")]
	public static Rect MakePixelPerfect(Rect rect, int width, int height) { }

	[Address(RVA = "0x1200578", Offset = "0x1200578", Length = "0x340")]
	[Token(Token = "0x6000199")]
	public static Rect MakePixelPerfect(Rect rect) { }

	[Address(RVA = "0x1202644", Offset = "0x1202644", Length = "0x7C")]
	[Token(Token = "0x60001AA")]
	public static float RotateTowards(float from, float to, float maxAngle) { }

	[Address(RVA = "0x1201F60", Offset = "0x1201F60", Length = "0x198")]
	[Token(Token = "0x60001A3")]
	public static Vector3 SpringDampen(ref Vector3 velocity, float strength, float deltaTime) { }

	[Address(RVA = "0x12020F8", Offset = "0x12020F8", Length = "0x178")]
	[Token(Token = "0x60001A4")]
	public static Vector2 SpringDampen(ref Vector2 velocity, float strength, float deltaTime) { }

	[Address(RVA = "0x1202270", Offset = "0x1202270", Length = "0x130")]
	[Token(Token = "0x60001A5")]
	public static float SpringLerp(float strength, float deltaTime) { }

	[Address(RVA = "0x12023A0", Offset = "0x12023A0", Length = "0x13C")]
	[Token(Token = "0x60001A6")]
	public static float SpringLerp(float from, float to, float strength, float deltaTime) { }

	[Address(RVA = "0x12024DC", Offset = "0x12024DC", Length = "0x64")]
	[Token(Token = "0x60001A7")]
	public static Vector2 SpringLerp(Vector2 from, Vector2 to, float strength, float deltaTime) { }

	[Address(RVA = "0x1202540", Offset = "0x1202540", Length = "0x80")]
	[Token(Token = "0x60001A8")]
	public static Vector3 SpringLerp(Vector3 from, Vector3 to, float strength, float deltaTime) { }

	[Address(RVA = "0x12025C0", Offset = "0x12025C0", Length = "0x84")]
	[Token(Token = "0x60001A9")]
	public static Quaternion SpringLerp(Quaternion from, Quaternion to, float strength, float deltaTime) { }

	[Address(RVA = "0x11FFC3C", Offset = "0x11FFC3C", Length = "0x5C")]
	[Token(Token = "0x6000191")]
	public static float WrapAngle(float angle) { }

}

